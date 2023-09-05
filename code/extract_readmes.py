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


def move_readme(file: str, ms_num: str, target_folder):
    """
    Reach readme file and move it to the output.
    """
    if len(file) == 1:
        file = str(file[0])
        cmd = [f"cp {file} {target_folder}/{ms_num}.{file.split('.')[-1]}"]
        subprocess.run(cmd, shell=True)
    else:
        i = 0
        for f in file:
            i += 1
            cmd = [f"cp {f} {target_folder}/{ms_num}_{f.split('/')[-1]}"]
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


def find_readme(repo: str) -> list[str]:
    """
    Looks into the given repository and extracts the readme file name.
    """
    filelist = list_files(repo)
    lowerlist = [f.split("/")[-1].lower() for f in filelist]
    r = re.compile("read")
    readmelist = list(filter(r.match, lowerlist))
    readme_names = []
    for ind, v in enumerate(lowerlist):
        if v in readmelist:
            readme_names.append(filelist[ind])

    return readme_names


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
            if any([repo[0] in fname for fname in loaded_list]):
                rowcount -= 1
                continue
            # # git pull all the remote origin updates from all branches
            clone(repo[1])
            # # git log all (for initial log) & then update it with --after=<date> (from a specified date - you can automate/schedule it) + log report temp answers
            file = find_readme(repo[0])
            move_readme(file, repo[0], outfolder)
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
