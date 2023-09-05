******************************************************************************************************************************************
* Project:  Taking the Fed at its Word: A New Approach to Estimating Central Bank Objectives using Text Analysis (2021)
* Authors: Adam H. Shapiro and Daniel J. Wilson
******************************************************************************************************************************************

----------- Introduction --------------------------

This README documents the contents of the FOMC_replication_package folder and how to proceed with replicating the results, tables, and figures 
from "Taking the Fed at its Word: A New Approach to Estimating Central Bank Objectives using Text Analysis" by Adam Shapiro and Daniel Wilson.

The replication folder contains six folders:
ExcelDatasets - This folder contains either manually-compiled or datasets downloaded from the web in Excel form. 
raw_data - This folder contains sentiment data and raw data files.
r - Contains the r_code, r_input, and r_output folders. This folder is responsible for compiling one of the sentiment data files. 
Results - This folder contains the .tex output from the programs run by the master_file.
StataDatasets - This folder contains the main Stata datasets called by the programs. 
tex - This folder contains the code to compile the Paper PDF. The paper PDF is also in this folder.

----------- Running the replication package --------------------------

To run the replication package, perform the following steps:
1) Open master_file.do in Stata
2) Change local file_root to the location of the FOMC_replication_package folder (e.g. local file_root S:\User\Documents\FOMC_replication_package\)
3) Uncomment the ssc install codes if you need to install those packages (more info below).
4) Make a decision about which run you would like to perform, A or B:
	A) Simple run using oneway and no bootstrapping in objectivefunction29.do. This is the quickest run. This does not change coefficients 
	(it only changes standard error calculations) and takes around 20 hours with 8 GB of RAM. If you would prefer, you can run specific parts 
	of the master file by commenting out do file calls.
	B) Full run with 100 draw bootstrapping and twoway clustering. This will ensure that standard deviations are consistent with the paper
	but tends to take a long time to run.
Options are selected by changing the local variable option in master_file to "A" or "B" (case-sensitive). 
5) If you would like to run the R code at the beginning, uncomment the corresponding shell command. On Windows, you may need to change the
R.exe location. 
6) Run the master_file.do with your changes. If an error occurs, check that your directory is set correctly, and then it should work upon re-running.
7) Once the master_file.do has finished running, then run FOMCSentimentPaper.tex in the tex folder, which will compile the paper. 

----------- Requirements to run master_file.do --------------------------

Make sure you have the ability to download the below packages if you do not already have them installed.
ssc install corrtex
ssc install xtivreg2
ssc install estout
ssc install ivreg2
ssc install ranktest
ssc install binscatter
ssc install gtools
ssc install winsor2

The master_file.do file should handle everything. All you need to do is select the directory that houses FOMC_replication_package on your computer,
and set that as the file_root local variable. Then, run the file. 

----------- Summary of master_file.do --------------------------

The code is run by the master_file in the following order:
1) ./r/r_code/fomc_construction_adamupdate.R - Produces sentiment file for later compilation
2) create_master7.do - Produces Master_012021.dta file which contains most sentiment-related data.
3) create_final_dataset.do - Compiles the data into the FinalAnalysisData.dta file which is the primary data file used in the rest of the program.
4) objectivefunctionV29.do - This is our main file that generates most of the .tex plots.It calls upon FinalAnalysisData.dta
5) audit_analysis.do - Generates the human audit graphs using the Master file and the human_audit.dta file
6) NarrativeFigure.do - produces graphs of FOMC target quotes
7) interestsmoothing.do - Produces tables that show interest rate target decline. Performs optimization. 
8) pistar_polynomial_sym.do - Performs optimization in order to produce pistarTS_meeting_C.dta for taylorrules.do graphs.
9) taylorrules.do - Uses above data in order to produce set of tables and graphs that estimate parameters for a Taylor rule model.
