
**********************************
* DATA AVAILABILITY STATEMENT
**********************************

There are four sources of data used for our analysis. Two are confidential and cannot be shared outside of a data-use agreement with the Michigan Department of Natural Resources (DNR). One is publicly available census data. One is publicly available data from the Federal Housing Finance Agency.

* Confidential DNR Lottery Data

We used the lottery information collected by the DNR as part of their bear hunting license allocation in years 2008 and 2009. These data are confidential and require a data use agreement with the DNR. Such an agreement and the lottery data can be obtained by contacting Lisa Jackson (jacksonl3@michigan.gov).

* Confidential Zillow house price estimates (zestimates) data

We obtained house value estimates (zestimates) from the website www.zillow.com for every possible address in the DNR lottery data on June 5th 2019. While an exhaustive sample of zestimates from Zillow would not be confidential, the dataset which we created is confidential because it only contains addresses from participants in the DNR's bear hunting lottery. This dataset can be obtained from us directly by researchers who have already obtained a data use agreement from the DNR by contacting Carson Reeling (creeling@purdue.edu).

* Census data

We obtained block group level and census tract level information (as described in the online appendix of our paper) from the 2010-2014 5-year estimates of the Census Bureau's American Community Survey.

Citation:
U.S. Census Bureau; American Community Survey, 2010-2014 American Community Survey 5-Year Estimates,  using Social Explorer; <https://www.socialexplorer.com>; (24 June 2019).

* Federal Housing Finance Agency 

We obtained yearly house price index data at the census tract-level from the Federal Housing Finance Agency.

Citation:
Federal Housing Finance Agency; Annual House Price Indexes; Census Tracts (Developmental Index; Not Seasonally Adjusted); from the Federal Housing Finance Agency; <https://www.fhfa.gov/DataTools/Downloads/Pages/House-Price-Index-Datasets.aspx>; (24 June 2019).


**********************************
* SIMULATED DATA
**********************************

As discussed above, the data used for this paper are confidential and requires a data use agreement with the Michigan Department of Natural Resources (DNR). For this replication archive, we provide simulated data which mimicks the structure of our data without containing actual information on the participants in our data. This will allow interested readers to run our code, but not to replicate our results since the dataset provided is different than the dataset used for the results in our paper and online appendix.


**********************************
* ORGANIZATION OF THIS ARCHIVE
**********************************

*	Simulate_data

Provides the code used to simulate the dataset "applications.dta" provided here, found in "Simulate_data/simulated_data".

*	Descriptive

Provides the code used to describe our data and calculate the results discussed in Sections 2 and 3 and presented in Figure 2, Table 2, Table 3, Table 4.

*	Estimation

Provides the code used to estimate the structural model discussed in sections 4 and 5, with results discussed in these sections and presented in Figure 3 and Table 5.

*	Welfare

Provides the code used to calculate welfare comparison results discussed in section 6 and presented in Figure 4 and Table 6.


**********************************
* SYSTEM REQUIREMENTS
**********************************

We used Stata 16.0, Matlab 2019, and Knitro/12.0.0. 
For Stata, the package blindschemes was used to produce Figures 2-4. (Install using: package blindschemes from http://fmwww.bc.edu/RePEc/bocode/b.)
For Matlab, the Knitro for Matlab toolbox was used.

Estimation of the structural model was performed on 440 cpus on the Dogwood server at UNC - Chapel Hill. We also performed part of the welfare calculations (solving for exact equilibrium success probabilities) on the Dogwood server with 440 cpus. 


**********************************
* QUESTIONS OR FEEDBACK
**********************************

Clearly our code was not written to be as efficient as possible. We have commented this code as much as possible so that it can be repurposed or used for replication. Please feel free to contact us if there are still areas that lack clarity or if you have any questions by contacting Valentin Verdier at vverdier@email.unc.edu.


**********************************
* DETAILED INSTRUCTIONS FOR
*  EACH FOLDER
**********************************


----------------------------------
* SEQUENCING
----------------------------------

The code in Descriptive can be run independently of the rest of the code. The code in Estimation must be run before the code in Welfare can be run. (In this replication archive, we provide the output of the Estimation code, so that the code in Welfare can be run directly if readers are only interested in that section).


----------------------------------
* SIMULATE DATA
----------------------------------

For this replication archive, we simulated data using our point estimates and a simulated version of the applicants's observed characteristics (distance to each hunting site, annual income, house value, etc.)

We include the code so that it is clear how exactly we obtained the simulated data, but we cannot provide the inputs to our simulation since we use confidential data that is subject to a data use agreement with the Michigan DNR.

Sequence of the creation of the simulated data provided here:
	1. simulate1.do randomly draws applicant characteristics from our data, independently for each characteristic, and adding noise so that applicants cannot be identified.
	2. simulate2.do formats the data so that we can use Matlab to calculate the integrated value function (IVF) for each applicant at the value of the estimates reported in the paper (stored in thetastar.mat).
	3. simulate3.m calculates the IVF for each applicant, and exports an intermediary dataset with all of the information needed to simulate lottery choices (the time-constant part of flow utilities and IVF). run.sl is used to run simulate3.m in parallel on the UNC Dogwood server.
	4. simulate4.do simulates lottery choices for both rounds. 

The final dataset, applications.dta, is stored in "simulated_data" and provided here.


----------------------------------
* DESCRIPTIVE
----------------------------------


** Figure 1 was generated using arcGIS as a simple plot of applicant address locations, and there is no corresponding code.


** The code for Figure 2 is included in the folder "choice_distance".

This folder provides the code used to generate the results in section 3.3 and presented in Figure 2, providing a justification for the functional form restriction imposed in our structural model that distance only has a linear effect on utilities beyond 200 miles.

run.do runs data.do and ff.do.

	* data.do prepares the data for estimation.

	* ff.do estimates the conditional choice model and generates the graphs.


** The code for Tables 2 and 3 is found in the folder "summary_statistics".


** The code for Table 4 is in the folder "ATE_prefpts"


----------------------------------
* ESTIMATION
----------------------------------


** Data (generate the final dataset used for estimation).

This code must be run before the code contained in Estimate.

data.do takes "../../Simulate_data/simulated_data/applications.dta" and creates the final datasets used for estimation of the structural model, data_08_r2_i2.csv and data_09_r2_i2.csv.


** Estimate (generate the estimation results in Table 5 and Figure 3 of the paper and used for the welfare section discussed below).

run.sl submits the estimation job, which we ran on the dogwood server at UNC, using 440 cpus for parallelization.

The arguments of the MATLAB function dreumScript, (440,3,1,0,0,1), correspond to (Ncpu,tau,RC,debug,init_IVF,normalization):
	* Ncpu: Number of cpus used for parallelization.
	* tau: Number of applicant types.
	* RC: Whether a random coefficient specification is used, i.e., whether the model allows for beta_t to vary across applicant types t (1 if yes, 0 otherwise). We use RC=1 here, and used RC=0 in previous versions of the paper.
	* debug: Using debug = 1 will use a local parallelization to debug the code. Debug = 0 will use MDCS for parallelization. Note that with debug = 0, the settings at the beginning of dreumScript.m need to be modified to fit whichever server is being used.
	* init_IVF: Whether the estimation algorithm should start its fixed point algorithm with integrated value function candidates set to zero (init_IVF = 0) or from the file Rsave.mat (init_IVF = 1).
	* normalization: Whether the ordering of applicant types is normalized by the magnitude of the intercept alpha_tau (normalization = 1), or unrestricted (normalization = 0).

After estimation, run standard_errors.m to obtain standard errors for the point estimates and estimated nearby-premium. standard_errors.m produces all of the information needed for Table 5 and Figure 3 in the paper.

TO COMPLETE ESTIMATION WITH THE SIMULATED DATASET:

With the simulated data used here, the job submitted by run.sl did not converge to a solution for the MLE problem. The Knitro minimization algorithm got stuck at parameter values where the applicant type with a low intercept (alpha_tau) had a low slope coefficient (beta_tau) rather than a high slope coefficient. 

We did not encounter this issue when running the estimation procedure above with our actual dataset. To achieve convergence here, we ran run2.sl, which loads the results from run.sl to obtain a new starting value, and completes the estimation without using a normalization of the ordering of applicant types.


----------------------------------
* WELFARE
----------------------------------

This folder contains the code used to estimate welfare differences across four allocation mechanisms:
	The dynamic lottery used by the DNR (DL).
	Random serial dictatorship (RSD)
	Static lottery (SL)
	Auction

The results from this comparison are presented in Table 6 and Figure 4 in the paper.

Sequencing:
	1. run.sh in each folder.
	2. results_prices.do in the auction folder, to obtain the average auction price of each license type.
	3. results.do in each folder.


** Additional details for the code in DL

1. Compute exact equilibrium success probabilities.

The code in "equilibrium_phi" computes the exact equilibrium success probabilities given the estimates obtained from the "Estimation" folder, the population of applicants in the data in 2009, and the license type quotas in quotas.csv.

2. Generate data for simulating the equilibrium.

For simplicity, we use simulations to obtain the features of the equilibrium allocation by DL.
The code in the "data_simulation" generates the data used for simulations using the equilibrium success probabilities calculated above and the population of applicants in the data in 2009.

3. Simulate equilibrium allocations

The code in "simulate" simulates the equilibrium allocation 500 times, from which we can obtain features such as average surplus, probability of allocation, etc. 



