The Stata Do-Files, Matlab-Scripts and - Functions in this folder can be used to replicate the tables and graphs of the paper "Welfare and Redistribution in Residential Electricity Markets with Solar Power" by Fabian Feger, Nicola Pavanini, and Doina Radulescu.



DATA AND CODE AVAILABILITY STATEMENT

The data used in this analysis are confidential. These data offer information on household electricity consumption, ownership of a photovoltaic solar panel, numerous household socio-demographic attributes as well as building and apartment characteristics for 165,000 Households in the Canton of Bern, Switzerland for the years 2008-2014. Authors gained access to these data under a number of confidentiality agreements that restrict access. The authors entered into these confidentiality agreements with BKW Energie AG, Energie Thun, Energie Wasser Bern, the Tax Office of the Canton of Bern and the Swiss Federal Statistical Office as part of a larger project funded by the Swiss National Science Foundation (SNF) project number 100018_166386/1. These agreements established the terms under which the authors could access the data, prohibiting them from sharing the data with third parties or publishing the data.

These restricted-use data cannot be shared under the terms of the confidentiality agreement contracts. Researchers interested in accessing the different datasets would need to first contact each of the six data providers, write an application describing their research project, ask for the necessary variables and then merge the six datasets.
Here are the websites of the respective providers:
• Federal Register of Buildings and Dwellings (Swiss Federal Statistical Office, 2014): https://www.bfs.admin.ch/bfs/en/home/registers/federal-register-buildings-dwellings.html
• Tax Office of the Canton of Bern: https://www.sv.fin.be.ch/de/start.html
• BKW: https://www.bkw.ch/de/
• Energie Thun: https://energiethun.ch/
• Energie Wasser Bern: https://www.ewb.ch/
• Eturnity: https://eturnity.ch/

We provide instead here test data to be able to run all codes. As an exception we provide real input data on installation cost (InstCost.dta), feed-in tariffs (kev_rates.dta), and prices of BKW (prices.dta) because all of these data are publicly available.

Note however that the test data does not provide reasonable interdependencies between variables (e.g. the indicator variables are randomly generated) nor does it output reasonable results. As a consequence, the graphs produced by the code based on the test data will not look similar to the ones in the paper.



DATASET REFERENCES

- BKW. ``Household-level billing history of all residential customers’’. Unpublished data. Accessed 2019-01-31.

- Energie Thun. ``Household-level billing history of all residential customers’’. Unpublished data. Accessed 2015-03-12.

- Energie Wasser Bern. ``Household-level billing history of all residential customers’’. Unpublished data. Accessed 2015-07-30.

- Eturnity. ``Bulk PV Evaluation for the Canton of Bern’’. Unpublished data. Accessed 2016-04-18.

- Swiss Federal Statistical Office. 2014. ``Federal Register of Buildings and Dwellings (RBD) [database]’’. Federal Statistical Office Buildings and Dwellings Section, accessed 2015-01-19.

- Tax Office of the Canton of Bern. ``Data on Swiss household income and wealth’’. Unpublished data. Accessed 2019-06-06.



COMPUTATIONAL REQUIREMENTS

To run all codes STATA (Version 13 or newer, with packages rghdfe and ftools) and MATLAB (R2017a or newer) are required.



DESCRIPTION OF CODES

Below we illustrate the structure and content of the codes provided. The codes should be run in the order below. This is due to some codes producing input for the following codes (Note that we included in the replication folders already all outputs so the files can also be run independently).

-STATA Codes
1. SummaryTables.do: outputs the summary statistics of the paper (Figure 1, Figure A.1  Figure B.2-B.4, Table 1-5, Table A.1, Table.I.3, Table.I.4)

2. ElectricityDemandElasticity.do: outputs the tables related to the estimation of the energy price elasticities (Table 6, Table F.2). Furthermore, it creates the sample that is used to estimate the PV adoption model and to simulate the counterfactuals.

-MATLAB Codes
A. PVadoption_Estimation.m: estimates the AR1 processes and the PV adoption model (Table 7, Table 8, Table 9). Several functions are used within this Matlab-Script:
	A.1 FUN_Create_Quantile.m: creates indicators for the wealth an income quantiles	
	A.2 FUN_MarginalTaxRate.m: assigns marginal tax rate based on income and marriage status
	A.3 FUN_Estimate_AR1.m: estimates AR1 processes of state variables
	A.4 FUN_Tab_AR1coef.m: outputs Table 7 (AR1 estimates)
	A.5 FUN_Create_StSp_TM.m: creates the state space matrices and the transition matrices based on the variables and AR1 coefficients.
		A.5.1 FUN_Tauchen.m: discretizes the AR1 process according to the method of Tauchen (1986)
	A.6 FUN_Find_StSp_row.m: assigns to each observation the rows of the state space
	A.7 FUN_LogLikelihood.m: calculates the LogLikelihood of the PV adoption model
		A.7.1 FUN_PVprob_StSp.m: calculates the PV adoption probability for each value of the state space using the PV adoption coefficients as inputs
			A.7.1.1 FUN_Value_iteration.m: value function iteration using the transition matrix
		A.7.2 FUN_PVprob_HH.m: calculates the PV adoption probability for each household
	A.8 FUN_LL_ratio.m: calculates the Log-Likelihood Ratio
	A.9 FUN_ChiSquare.m: calculates the Chi-Square Statistic
	A.10 FUN_year_decile_Fit.m: prepares the data used to produce Table 9.
	A.11 FUN_Tab_Fit_N.m: outputs Table 9 (Prediction Based on PV adoption model)
B. CreateTable8.m
	B.1 FUN_Tab_PVcoef.m: outputs Table 8 (PV adoption results)
C. Counterfactuals.m: simulates the counterfactuals (Figures 2-3, Table 10, Figure G.7, Figure G.8, Table I.5)
	C.1 FUN_MarginalTaxRate.m: see above
	C.2 FUN_Create_Quantile.m: see above
	C.3 FUN_Create_StSp.m: creates matrix with all possible tariff combinations
	C.4 FUN_Create_StSp_TM.m: see above
	C.5 FUN_PVprob_StSp.m: see above
	C.6 FUN_Objective.m: calculates the objective function and other outputs of the model for a given tariff combination
	C.7 FUN_Tab_OptTariff.m: outputs Table 10 (% Changes in Marginal Grid Price, Fee, Subsidy, Grid Expenditure, Welfare)
	C.8 FUN_Tab_OptTariff_welf.m: outputs Table I.5 (Welfare Change by Income Quintile)
        C.9 FUN_Countour_Elements.m: outputs data to create countour graphs in Figure 2
	C.10 FUN_SatisfyET.m: outputs combinations of smallest marginal grid price and subsidy to satisfy defined solar energy target.

Note that estimating the dynamic PVadoption model will take some time.
Approximate estimation time with an Intel Core i9 3.7GHz GPU:
- Basic model (basic): ~2.5 minutes
- Model with cost/wealth interactions (int): ~2 hours
- Full model (final): ~30 hours
Estimation time is a function of:
(1) the size of the state space [N discrete values of Revenue x N discrete values of Cost x N cost interaction], which increase the time required to do the value function iteration, 
(2) the number of coefficients to be estimated, which (exponentially) increase the number of times the Loglikelihood-Function needs to be calculated, and 
(3) the number of bootstrap iterations, where each iteration re-estimates the model.
