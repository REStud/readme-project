This repository replicates main tables and online appendix tables for Banerjee et al. 2023, 
When Less is More: Experimental Evidence on Information Delivery During India's Demonetization.

DATA AVAILABILITY STATEMENT
All data and code required to reproduce tables and figures from this manuscript can be found in this replication package.
Additionally, experimental protocol, survey instruments, and field scripts to replicate the experiment can be found in this package.

DATA CITATIONS
All data used in this analysis are collected specifically for this project. Survey instruments and experimental protocols used to collect data are included in this repository in the
"data/Data Collection" subfolder.
Banerjee, AV, Breza, E, Chandrasekhar, AG, and Golub, B. Data for When Less is More: Experimental Evidence on Information Delivery During India's Demonetization. 2023.

SOFTWARE REQUIREMENTS
STATA (At least Version 12 Required, Last run on STATA 17 with version 12)
note: Please add xi3.ado (attached with the replication package) to your personal STATA directory before running the do files below.
	Code for installation is already included in the do files.
R (Run on Version 4.2.2)
Need to install pacman package from CRAN with "install.packages("pacman")" before running any code from this repo.
Main code files will install all dependencies (latest version) automatically via pacman. Further instructions on these files
are detailed below.

HARDWARE REQUIREMENTS
Last run on Dell Inspiron 3501 PC Laptop with the following specifications:
OS: Windows 10 Pro Version 21H2
Processor: 11th Gen Intel(R) Core(TM) i5-1135G7 @ 2.40GHz   2.42 GHz
RAM: 8 GB

All codes to reproduce tables and figures run in roughly under 6 hours total. 

There are 4 subfolders 

1. data - This has all the datasets called in by the do files and R scripts. This folder also contains survey instruments for data.

2. figures - All the figures from the paper (named in the same sequence as the paper)

3. tables - All the tables in tex format from the paper (named in the same sequence as the paper)

4. code - This folder contains STATA do files and R scripts used to output both the tables and figures. The list of scripts
	  and their corresponding output can be found below.
	
	table_1.do - Table 1. Summary Statistics
	table_2.do - Table 2. Baseline Error Statistics
	table_3.do - Table 3. Baseline Covariate Balance
	table_4.do - Table 4. Bank Summary Statistics
	tables_pdslasso.do - Tables 5, 6, G.1, P.1, I.1, J.1, L.1, L.2, K.1, K.2
	tables_pdslasso_ability_regs.do - Tables F.1, F.2, Q.1
	table_H1.do - Table H.1. Heterogeneity in knowledge
	table_H2.do - H.2. Did the Broadcast, Common Knowledge Group Learn Anything?
	table_H3.do - H.3. Other choice outcomes
	table_M1.do - Table M.1. Imbalance: status quo vs. treated
	table_M2.do - Table M.2. Experiment Outcomes: status quo vs. treated
	table_N1.do - Table N.1. Attrition 
	figures.do - Figures 3, 5, G.4
	figure_M1.do - Figure M.1. Distance to urban center: status quo vs. treated
	table_and_figure_O1.do - Table O.1 and Figure O.1 Joint distribution of conversations and information quality (NOTE - Table O.1 is not outputted directly to .tex, but is available in the .do file's output)
	ability_prediction.R - This R script runs the random forest to predict ability. Outputs from this code are already saved in the data, so tables will reproduce without running this code.
	regression_ratio_diff_test_replication.R - Figure 6 Treatment Effect Ratios of Low Ability to High Ability
	figure_4.R - Figure 4 