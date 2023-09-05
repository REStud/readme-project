# README

Overview
--------

The code in this replication package uses Stata and MATLAB to replicate all the tables, figures, and original latex commands in Carrera, Royer, Stehr, Sydnor, and Taubinsky (2021): "Who Chooses Commitment: Evidence and Implications." Two master files run all of the code to generate the data for the 13 figures and 31 tables in the paper and its online appendix. The replicator should expect the code to run for about 11 hours. This package also includes a QSF file of the survey instrument and an appendix describing how the experiment was implemented.

Data Availability and Provenance Statements
----------------------------

All of the data used were collected by the authors in a field experiment, which ran from Fall 2015 to Spring 2016. See Section 3 of the paper and `Experimental Materials/Study Instructions Appendix.pdf`, which includes step-by-step details, for additional information on the experiment. The survey instrument used in the field experiment is also included at `Experimental Materials/Who_Chooses_Commitment.qsf` and can be imported into Qualtrics by the replicator.

### Statement about Rights

The authors of the manuscript certify that they have legitimate access to and permission to use the data used in this manuscript.

### License for Data

The data are in the public domain as per the Creative Commons CC0 1.0 Universal Public Domain Dedication. See `LICENSE.txt` for additional details.

### Summary of Availability

All cleaned data **are** publicly available. The raw data **cannot be made** publicly available, as the data cleaning procedure requires the use of certain variables with identifying information.

### Details on each Data Source

- `cleaned_commitment_study_data.dta`: the primary data set from the field experiment, with one observation for each participant.
- `cleaned_commitment_study_daily_data.dta`: an additional data set from the field experiment, with one observation per day for each participant.

Dataset list
------------

| Data file                                      | Source           | Notes                                   |Provided |
|------------------------------------------------|------------------|-----------------------------------------|---------|
| `Data/cleaned_commitment_study_data.dta`       | Field experiment | One observation per participant         | Yes     |
| `Data/cleaned_commitment_study_daily_data.dta` | Field experiment | One observation per participant per day | Yes     |

Computational requirements
---------------------------

### Software Requirements

- Stata (code was last run with version 14)
  - `estout` (as of 12/05/2019)
  - `binscatter` (as of 07/07/2021)
  - `coefplot` (as of 08/05/2019)
  - the program `Code/master_do_file_for_analysis.do` will install these packages if not already installed.
- Matlab (code was run with Matlab Release 2019a)

Portions of the code use bash scripting, which may require Linux.

### Memory and Runtime Requirements

#### Summary

The approximate time needed to reproduce the analyses on a standard desktop machine is 11 hours. The vast majority of the runtime is spent on the estimation in `Code/Stata/Parameter estimates.do`.

#### Details

The code was last run on a **2-core Intel-based laptop with Windows 10 Enterprise version 21H1** and a **2-core Intel-based laptop with macOS High Sierra Version 10.13.4**.


Description of programs/code
----------------------------

- `Code/master_do_file_for_analysis.do` sets up the Stata workspace, defines a program for storing numbers in latex commands, and runs the intermediate data analysis files in the Stata subfolder.
- `Code/Stata/Tables.do` creates the tables in the body of the paper and stores statistics and other numbers displayed in the paper in latex commands.
- `Code/Stata/Figures.do` creates the figures in the body and appendix of the paper and stores related statistics and other numbers displayed in the paper in latex commands.
- `Code/Stata/Appendix.do` creates the tables in the appendix of the paper.
- `Code/Stata/Parameter estimates.do` generates and stores parameter estimates and related statistics, which are used to create tables in the body and appendix of the paper; the estimates are also outputted as CSV files (in the `Output/parameter_estimates` subfolder) and used as inputs in `Code/run_simulations.m`.
- `Code/run_simulations.m` runs simulations of participant behavior in the gym attendance experiment under a variety of heterogeneity assumptions, generating and storing estimates used to create tables in the body and appendix of the paper; also outputs an appendix figure. Calls the files in the MATLAB subfolder.
- `Code/MATLAB/gymGame.m` defines a class used to simulate participant outcomes in the gym attendance experiment under a commitment contract or piece-rate incentive.
- `Code/MATLAB/compute_efficiency.m` defines a function used to estimate the welfare effects of a commitment contract and two piece-rate incentives: (i) the incentive with the equivalent impact on attendance as the contract, and (ii) the optimal incentive.

### License for Code

The code is license under a Modified BSD License. See `LICENSE.txt` for details. In summary, redistributions of the code should include a copyright notice.

Instructions to Replicators
---------------------------

1. Run `Code/master_do_file_for_analysis.do` in Stata. Read the note at the beginning of the file and adjust the default path if necessary.
2. Run `Code/run_simulations.m` in MATLAB. Read the note at the beginning of the file and adjust the default path if necessary.


### Details

- Several of the tables and one figure are manually edited or assembled from the Stata output. The final versions of the tables and figure can be found in the `Output/Formatted output` subfolder and are flagged in the section below.
- Each of the files `Code/Stata/Tables.do`, `Code/Stata/Figures.do`, `Code/Stata/Appendix.do`, and `Code/run_simulations.m` takes <10 minutes to run, while `Parameter estimates.do` can take around half a day to run.
- You can only run `Code/run_simulations.m` after having run `Code/Stata/Parameter estimates.do` since the MATLAB code uses parameters estimated in Stata.
- While the intermediate Stata files can be run individually to generate specific tables and figures, in order to exactly replicate the `Output/numbers.tex` file where most latex commands used in the body of the paper are stored, they must be run in the order specified in `Code/master_do_file_for_analysis.do`.


List of tables and figures
---------------------------

The provided code reproduces the tables and figures in the paper and appendix, as well as the numbers piped into the paper and appendix via latex commands. Certain tables and a figure are post-processed to generate the final version included in the paper, which we indicate with \* following the name of the pre-processed file. Certain tables are manually constructed in the paper using numbers stored in latex commands, which we indicate with \*\* following the name of the latex file in which the relevant commands are stored. All files are outputted to the `Output` subfolder, except for the post-processed files, which are stored in the `Output/Formatted output` subfolder and two manually created files, which are stored in the `Other/Images` subfolder and which we indicate with \*\*\* following the name of the file.

Body:

| Figure/Table #    | Program                             | Line Number                 | Output file                         | Note  |
|-------------------|-------------------------------------|-----------------------------|-------------------------------------|-------|
| Table 1           | n.a. (no data)                      |                             | CC_literature_table.tex \*          | Manually created. Calls `Other/commitment.bib` and `Other/econ-aea.bst`. |
| Table 2           | `Code/Stata/Tables.do`              | 92-138                      | appendix_descriptive_stats.tex      ||
| Table 3           | `Code/Stata/Tables.do`              | 225-322                     | regs_avg_delta_ex1_all.tex          ||
| Table 4           | `Code/Stata/Tables.do`              | 225-248, 336-423            | regs_commit_pooled_all.tex          ||
| Table 5           | `Code/Stata/Tables.do`              | 141-173                     | CCtable.tex \*                      ||
| Table 6           | `Code/Stata/Tables.do`              | 176-222                     | CCBeliefs2.tex \*                   ||
| Table 7           | `Code/Stata/Parameter estimates.do` | 180-1077                    | numbers_struct.tex \*\*             ||
| Table 8           | `Code/run_simulations.m`            | 23-164, 1026-1058           | simulations.tex \*\*                | Row 1 is from lines 1115-1164 in `Code/Stata/Parameter estimates.do`, with output in numbers.tex. |
| Table 9           | `Code/run_simulations.m`            | 251-288, 1060-1119          | simulations.tex \*\*                ||
| Figure 1          | n.a. (no data)                      |                             | theory_graph.pdf \*\*\*             | Manually created. |
| Figure 2          | `Code/Stata/Figures.do`             | 195-242                     | overconfidence.pdf                  ||
| Figure 3a         | `Code/Stata/Figures.do`             | 245-343                     | overconfidence_treatment_wave1.pdf  ||
| Figure 3b         | `Code/Stata/Figures.do`             | 245-343                     | overconfidence_treatment_wave23.pdf ||
| Figure 4          | `Code/Stata/Figures.do`             | 81-149                      | wtp_ev_tcbench.pdf                  ||
| Figure 5          | `Code/Stata/Figures.do`             | 152-192                     | deltas.pdf                          ||

Appendix:

| Figure/Table #    | Program                             | Line Number                 | Output file                         | Note                                                                                            |
|-------------------|-------------------------------------|-----------------------------|-------------------------------------|-------------------------------------------------------------------------------------------------|
| Table A1          | n.a. (no data)                      |                             | appendix_survey_waves.png \*\*\*    | Manually created. |
| Table A2          | `Code/Stata/Appendix.do`            | 58-137                      | table_descriptive.tex               ||
| Table A3          | `Code/Stata/Appendix.do`            | 601-643                     | bcp_on_behavior_change.tex          ||
| Table A4          | `Code/Stata/Appendix.do`            | 225-334                     | regs_avg_delta_ex1_all_demo.tex     ||
| Table A5a         | `Code/Stata/Appendix.do`            | 140-248                     | commit_delta_control.tex            ||
| Table A5b         | `Code/Stata/Appendix.do`            | 140-248                     | commit_delta_info.tex               ||
| Table A5c         | `Code/Stata/Appendix.do`            | 140-248                     | commit_delta.tex                    ||
| Table A6          | `Code/Stata/Appendix.do`            | 225-248, 336-423            | regs_commit_pooled_all_demo.tex     ||
| Table A7a         | `Code/Stata/Appendix.do`            | 326-357                     | CCtable_control.tex \*              ||
| Table A7b         | `Code/Stata/Appendix.do`            | 326-357                     | CCtable_treatment.tex \*            ||
| Table A8          | `Code/Stata/Appendix.do`            | 251-323                     | regs_commitnotanti_pooled.tex       ||
| Table A9          | `Code/Stata/Appendix.do`            | 360-414                     | CCtakeupVbeliefs.tex \*             ||
| Table A10         | `Code/Stata/Appendix.do`            | 417-478                     | CCcorrelates.tex \*                 ||
| Table A11         | `Code/Stata/Appendix.do`            | 481-519                     | Exp_Rates.tex \*                    ||
| Table A12         | `Code/Stata/Appendix.do`            | 521-555                     | Exp_Corr.tex \*                     ||
| Table A13         | `Code/Stata/Parameter estimates.do` | 180-1077                    | numbers_struct.tex \*\*             ||
| Table A14         | `Code/Stata/Parameter estimates.do` | 180-1077                    | numbers_struct_appx.tex \*\*        ||
| Table A15         | `Code/run_simulations.m`            | 251-288, 1060-1119          | simulations.tex \*\*                ||
| Table A16         | `Code/run_simulations.m`            | 397-417, 1060-1119          | simulations.tex \*\*                ||
| Table A17         | `Code/run_simulations.m`            | 420-455, 1060-1119          | simulations.tex \*\*                ||
| Table A18         | `Code/run_simulations.m`            | 458-493, 1060-1119          | simulations.tex \*\*                ||
| Table A19         | `Code/Stata/Appendix.do`            | 283-712                     | DailyAttIncr.tex                    ||
| Table A20         | `Code/run_simulations.m`            | 686-714, 1026-1058          | simulations.tex \*\*                | Row 1 is from lines 1115-1164 in `Code/Stata/Parameter estimates.do`, with output in numbers.tex. |
| Table A21         | `Code/run_simulations.m`            | 717-752, 1060-1119          | simulations.tex \*\*                ||
| Table A22         | `Code/run_simulations.m`            | 938-966, 1026-1058          | simulations.tex \*\*                | Row 1 is from lines 1115-1164 in `Code/Stata/Parameter estimates.do`, with output in numbers.tex. |
| Table A23         | `Code/run_simulations.m`            | 969-1004, 1060-1119         | simulations.tex \*\*                ||
| Figure A1         | `Code/Stata/Figures.do`             |                             | uniformrange.pdf \*                 | Text superimposed manually. |
| Figure A2         | `Code/Stata/Figures.do`             | 14-39                       | exp_actual_under_incentive.pdf      ||
| Figure A3         | `Code/Stata/Figures.do`             | 346-371                     | wtp_exp_attendance.pdf              ||
| Figure A4a        | `Code/Stata/Figures.do`             | 203-294                     | overconfidence_estimates.pdf        ||
| Figure A4b        | `Code/Stata/Figures.do`             | 432-605                     | overconfidence_estimates_past4_info_het.pdf  ||
| Figure A5         | `Code/run_simulations.m`            | 496-500, 1121-1179          | daily_att_prob_commit12.pdf         ||
| Figure A6         | `Code/Stata/Figures.do`             | 442-471                     | daily_att_likelihood.pdf            ||
| Figure A7a        | `Code/Stata/Figures.do`             | 203-294                     | overconfidence_estimatesX.pdf       ||
| Figure A7b        | `Code/Stata/Figures.do`             | 432-605                     | overconfidence_estimates_past4_info_hetX.pdf ||
| Figure A8a        | `Code/Stata/Figures.do`             | 203-294                     | overconfidence_estimatesV.pdf       ||
| Figure A8b        | `Code/Stata/Figures.do`             | 432-605                     | overconfidence_estimates_past4_info_hetV.pdf ||
