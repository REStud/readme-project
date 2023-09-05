import subprocess
import os
import csv
import re
from tqdm import tqdm
import sys
from tempfile import TemporaryDirectory
from pathlib import Path
import contextlib

@contextlib.contextmanager
def working_directory(path):
    """Changes working directory and returns to previous on exit."""
    prev_cwd = Path.cwd()
    os.chdir(path)
    try:
        yield
    finally:
        os.chdir(prev_cwd)

def clone(repo_url: str):
    """
    Clones given repo from url.
    """
    subprocess.run(["git clone " + repo_url], shell=True)


def move_readmes(files: str, ms_num: str, target_folder):
    """
    Reach readme file and move it to the output.
    """
    (target_folder / ms_num).mkdir(exist_ok=True)
    for f in files:
        cmd = [f'cp "{f}" "{target_folder / ms_num}/"']
        subprocess.run(cmd, shell=True)


def list_files(repo: str) -> list[str]:
    """
    Walk the folder structure and 1st creates a list of all the files and then excludes the files that are created by git
    """
    filelist = [
        os.path.join(dirpath, f)
        for (dirpath, dirnames, filenames) in os.walk(repo)
        for f in filenames
    ]
    filelist = [file for file in filelist if ".git" not in file]

    return filelist

def is_readme(file: str) -> bool:
    """
    Checks if the file is a README file. 
    
    The string 'read' should be in the name of the file and the extension should be .md, .txt, .tex, .doc, .docx or .pdf
    """
    file = file.lower()
    if "read" in file:
        if file.endswith(".md") or file.endswith(".txt") or file.endswith(".tex") or file.endswith(".doc") or file.endswith(".docx") or file.endswith(".pdf"):
            return True
    return False

def find_readmes(repo: str) -> list[str]:
    """
    Looks into the given repository and extracts the readme file name.
    """
    return [fname for fname in list_files(repo) if is_readme(fname)]


def countrow(path: str) -> int:
    """
    Count rows in a file.
    ------------------------------
    Input: path as a string
    Output: number of rows
    """
    return len(open(path, 'rt').readlines())


def main(infile, outfolder):
    # find a file that is the list of repos.
    rowcount = countrow(infile)
    # iterating through the whole file
    loaded_list = os.listdir(outfolder)

    with open(infile, 'rt') as csvfile:
        reader = csv.reader(csvfile)
        for repo in tqdm(reader):
            MS_num = repo[0]
            git_url = repo[1]
            if any([MS_num in fname for fname in loaded_list]):
                rowcount -= 1
                continue
            # # git pull all the remote origin updates from all branches
            clone(git_url)
            # # git log all (for initial log) & then update it with --after=<date> (from a specified date - you can automate/schedule it) + log report temp answers
            file = find_readmes(MS_num)
            move_readmes(file, MS_num, outfolder)
            # # no need to clean up, as the temp folder will be deleted
            # To track the list of remaining repos from your list
            rowcount -= 1


if __name__ == "__main__":
    infile = sys.argv[1]
    outfolder = sys.argv[2]
    with TemporaryDirectory() as tmpdirname:
      cwd = Path.cwd()
      infile_absolute = cwd / infile
      outfolder_absolute = cwd / outfolder
      folder = Path(tmpdirname)
      with working_directory(folder):
        '''
        Using context managers ensures that the temporary directory is deleted 
        and the working directory changes back to original even if an exception occurs.
        '''
        main(infile_absolute, outfolder_absolute)
