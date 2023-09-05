import subprocess
import os
import csv
import re
from tqdm import tqdm


def clone(repo_url: str):
    """
    Clones given repo from url.
    """
    subprocess.run(["git clone " + repo_url], shell=True)


def move_readme(file: str, ms_num: str):
    """
    Reach readme file and move it to the output.
    """
    if len(file) == 1:
        file = str(file[0])
        cmd = [f"cp {file} ../output/{ms_num}.{file.split('.')[-1]}"]
        subprocess.run(cmd, shell=True)
    else:
        i = 0
        for f in file:
            i += 1
            cmd = [f"cp {f} ../output/{ms_num}_{f.split('/')[-1]}"]
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
    rowcount = 0
    for row in open(path, "r"):
        rowcount += 1
    return rowcount


def main():
    # find a file that is the list of repos.
    gh_list = "temp/gh_list.csv"
    rowcount = countrow(gh_list)
    # iterating through the whole file
    loaded_list = os.listdir("output")
    if loaded_list != []:
        loaded_list = [readme.split(".")[0] for readme in loaded_list]

    with open(gh_list, "r") as csvfile:
        reader = csv.reader(csvfile)
        os.chdir("temp")
        for repo in tqdm(reader):
            if repo[0] in loaded_list:
                rowcount -= 1
                continue
            # # git pull all the remote origin updates from all branches
            clone(repo[1])
            # # git log all (for initial log) & then update it with --after=<date> (from a specified date - you can automate/schedule it) + log report temp answers
            file = find_readme(repo[0])
            move_readme(file, repo[0])
            # # clen up after copying the readmefile.
            cmd_clr = ["rm -rf " + repo[0]]
            subprocess.run(cmd_clr, shell=True)

            # To track the list of remaining repos from your list
            rowcount -= 1


if __name__ == "__main__":
    main()
