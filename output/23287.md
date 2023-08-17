# README: Dynamic Demand Estimation in Auction Markets
### Matthew Backus (UC Berkeley, CEPR, and NBER), Greg Lewis (Amazon)

## Overview
The code found in the following replication package uses two data files (`data/bids_all.dta`, `data/report_all.dta`) from TeraPeak to generate 8 figures and 8 tables using STATA and MATLAB. The data is proprietary hence not include in this package. All files can be run from a single bash file which takes approximatly one day for replication on a HPC cluster. 

## Data Availability and Provenance Statements


### Statement about Rights

- [X] I certify that the authors of the manuscript have legitimate access to and permission to use the data used in this manuscript. 

### Summary of Availability

- [X] **No data can be made** publicly available.

> The data for this project is confidential. The ebay data was bought from Terapeak in which a subset of 2007 data was used. Researchers interested in obtaining the data should reach out to the authors who can assist with any reasonable replication attempts for two years following publication.


### Details on each Data Source

| Data.Name  | Data.Files | Location | Provided | Source |
| -- | -- | -- | -- | -- | 
| “Biding Data” | `bids_all.dta` | `data/` | No | Terapeak (2007) |
| “Full Report Data” | `report_all.dta` | `data/` | No |  Terapeak (2007)|




## Dataset list

| Data file | Source | Notes    |Provided |
|-----------|--------|----------|---------|
| `data/bids_all.dta` | Terapeak  | Confidential | No |
| `data/report_all.dta` | Terapeak | Confidential | No |

## Computational Requirements

### Packages and Software Requirements
- Stata (code was last run with version 17.0)
    _eststo (as of 2023-06-22) 
  
- Matlab (code was last run with Matlab R2022a)

To run all the code one may require Linux for bash scripting. 

### Controlled Randomness
Always set as 90210

- [ ] Random seed is set at line 182 of program step_3_firststage.do
- [ ] Random seed is set at line 47 of program step_5_estimation.m
- [ ] Random seed is set at line 22 of program fn_sim_distribution.m


### Memory and Runtime Requirements


#### Summary

Approximate time needed to reproduce the analyses on a standard desktop machine:

- [ ] 1 week


#### Details

The code was last run on a HPC cluser which took approximatly one day. 


## Description of programs/code

## Instructions to Replicators

Recommended Procedure:
- Edit `code/run_code` and adjust the exe paths; STATA_exe={your path}, MATLAB_exe={your path} 
- Run `code/run_code` to run all steps in sequence

### Details

### TODO add all the programs and what they do 

The order matters if you are doing everything file by file rather than using the provided bash script. If everything is done in order then n/a* implies that the previous step will have created the nessesary input files. All files are found under `code`.

| Step Files                   | Description               |Input files  | time                  
|----------------------------|--------------------------|-------------|----
|`run_code.sh`| This script will run all the following files in order and output all tables and figures.| n/a* | ~1 day
| `step_1_cleaning.do`         | This script prepares compactdata.dta a cleaned dataset from report_all.dta and bids_all.dta (which are cleaned stata versions of raw report and bids text data with no observations being cut).   |     *data/bids_all.data* *data/reports_all.dta*     | ~5 mins              
| `step_2_summarystats.do`     | This script produces desired statistics on: The Market, Auction Charcteristics, Camera Characteristics: resolution, zoom, bundled, Seller Characteristics, Buyer Characteristics|    n/a*               | ~5 mins                  
| `step_3_firststage.do`           | This script is the main prep and first-stage estimation file. Bootstraping makes this the most resource intensive step. |       n/a*     | ~8 hrs 
| `step_3a_firststage.do`           | This script prepares the first-stage estimation without restrictions on first two bids to construct a figure for the appendix (output_stats_densities). |       n/a*     | ~5 mins            

| `step_4_environment.m`          |     This script generates the table of first-stage parameters and saves a matlab environment with everything we need from the first stage.       |    n/a* | ~1 min                                             
| `step_5_estimation.m`         | This script performs the main estimation (simulate then estimate).      |    n/a*     | ~6 hrs                           
| `step_6_counterfactuals.m`          | TThis script generates figures for the paper, see below for details on which ones.       |    n/a*  | ~4hrs 
|`step_6a_counterfactuals.m`    | This script generates figures for the paper, see below for details on which ones.     |    n/a*  | ~1 hour
| `step_7_pictures.m`          | This script generates figures for the paper, see below for details on which ones. |   n/a* | ~1 min
| `step_7a_pictures.m`          |  This script generates figures for the paper, see below for details on which ones.    |   n/a* | ~1 min
| `step_8_morepictures.do`          | This script generates figures for the paper, see below for details on which ones.    |   n/a* | ~1 min
| `step_8a_morepictures.do`          | This script generates figures for the paper, see below for details on which ones.     |   n/a* | ~1 min
| `step_9_morecounterfacturals.m`          |This script generates figures for the paper, see below for details on which ones.    | n/a* |~15 mins

| Function Files                  | Description  
|----------------------------|---------------------
|`fn_bids.m`| This function outputs the computed optimal bid. 
|`fn_likelihood.m`|This function outputs the objective function of the random coefficients implementation 
|`fn_sim_distribution.m`| This function simulates distributions to be used in the liklihood estimator.
|`fn_sim_dynamics.m`| This function will generate simulated auction data.
|`fn_sim_fixedpoint.m`| This function simulates bids finding associated fixed points. 
|`fn_sim_goodness.m`| This function outputs the simulated and population moments of bids. 
|`fn_weights.m`| This function amalgamates all of the different selection probabilities that are being computed.



## List of tables and programs

### TODO make a table including everything and where things come from
The provided code reproduces:

- [X] All numbers provided in text in the paper *
- [X] All tables and figures in the paper *

*(However data is not included given its proprietary nature)


| Figure/Table #    | Program                  | Output file                      | 
|-------------------|--------------------------|---------------------------------|
| Figure 1          | n/a    |             output_bidder_path.tex            
| Figure 2           | `step_7_pictures.m`  | output_bidfig1.png, output_bidfig2.png, output_selectfig1.png, output_selectfig2.png  |
| Table 1           | `step_5_estimates.m`   |output_estimates.tex                      |
| Figure 3          | `step_6_counterfactuals.m`      | output_demand_7mp_largeseller.png, output_profit_7mp_largeseller.png |
| Table 2          | `step_6_counterfactuals.m`           | output_7mp_optimal.tex                   |
| Table B-1          | `step_2_summarystats.do `      | output_sumstats.tex                 |
| Table B-2          | `setp_8_morepictures.do  `    | output_subsmatrix.tex                 |
| Figure B-1           |` step_8a_pictures.do `|                       output_replies_startprices_kde.pdf|
| Figure B-2           | `step_8_morepictures.do` |output_priceseries.eps, output_optbidfigure.eps                       |
| Figure B-3           | `step_7a_pictures.m `| output_stats_densities.png                    |
| Table B-3           | `step_3_firststage.do `|  output_fsregs.tex                  |
| Table B-4           | `step_4_environment.m `|  output_fsparameters.tex                  |
| Figure B-4           | `step_9_morecounterfactuals.m` | output_competitivefig.png |
| Table B-5           | `step_9_morecounterfactuals.m `| output_competitivetab.tex |
| Table B-6           | `step_6a_counterfactuals.m `|output_7mp_optimal_modrho.tex|
| Figure B-5          | `step_6a_counterfactuals.m `| output_demand_7mp_largeseller_modrho.png, output_profit_7mp_largeseller_modrho.png|

## Acknowledgements

Content on this page was adapted and copied from https://social-science-data-editors.github.io/template_README/ under the Creative Commons license CC-BY-NC. 

