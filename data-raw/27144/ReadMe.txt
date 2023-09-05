/**************************************************************************
	ReadMe document for "The Value of Unemployment Insurance", by:
 	Camille Landais, London School of Economics
	Johannes Spinnewijn, London School of Economics
	
	Last modified : 04/08/2020
**************************************************************************/

*****
* DATA 

This paper uses registry data from Sweden. This data is available upon request.
You need to contact Statistics Sweden for more information on how to access the data.


*****
* STRUCTURE

In this file we describe the programs that are necessary to create the analysis in the main text of the paper

* Figure1.do creates Figure 1 in the paper. This event study estimates household annual consumption around the start of an unemployment spell. 
It uses: 
- 101_matchedCons_yyyy_bis.dta, yyyy = 2000/2007, sample of treated individuals (unemployment spell) and their control group, nn matching on pre-event characteristics. 
- 100_firstLayoffs_bis, sample of individuals with first layoff event between 1996 and 2010.
Sample is individuals aged 25 to 55, who are eligible for any form of UI at the time of the event and who are unemployed in December of the year in which they lose their job for the first time. Years 2000-2007.

* Figure2.do creates Figure 2 in the paper. The maps provide evidence of variations in the way Swedish municipalities set local welfare transfers. 
	Panel A, B & C:residual variation by number of kids, age of kids, income level
	Panel D: residual variation over time, reweighing population using as a reference the population composition of Stockholm in 2000. 
It uses the main data set, 400_spell0007.dta merged with 416_AllMonthsBarnAll.dta (for additional information on family composition). 
Sample is individuals aged 25 to 55, who are eligible for any form of UI at the time of the event and who are unemployed in December of the year in which they lose their job for the first time. The sample is further restricted to current welfare benefits recipient - i.e. positive benefits in t. 

* Figure3.do creates Figure 3 of the paper. The graph is a bin-scatter plot of the relationship between the first-difference in residualized transfers and the first-difference in annual household consumption, splitting the sample between households prior to the unemployment shock and households who experience unemployment in year t.
It uses the main data set, 400_spell0007.dta merged with 416_AllMonthsBarnAll.dta (for additional information on family composition). 
The sample contains only individuals who are becoming unemployed at some point, and are observed either employed or unemployed. We winsorize the first-difference in household consumption, omitting the top and bottom 10%.

* Figure4.do creates Figure 4 of the paper. This figure presents the regression kink design and main results. 
	Panel A plots, in our main sample over the period 2002 to 2007, a binscatter of the relationship between the daily wage and the average replacement rate. 
It uses 140_RKDgraph_diag.dta. Sample is years 2002-2007, individuals with non-null (and non-missing) wage or benefits, under comprehensive coverage in t-1. The sample is further restricted to a 350 bandwidth around the kink. 
	Panel B plots the average drop in consumption at unemployment residualized. 
It uses 140_spell0007ins_Full.dta and 140_PES_RKD_Alex.dta, records the universe of unemployment spells from 1990 to 2015. 
Sample is individuals from the December sample, whose unemployment spell lasts at most 12 months. Sample is further restricted to the years 2002-2007 and to individuals aged 25-55, with non-null (and non-missing) wage or benefits, under comprehensive coverage in t-1. We consider a 350 bandwidth around the kink. We winsorize the first-difference in household consumption, omitting the top and bottom 1%.

* Figure5.do creates Figure 5 of the paper. It implements the revealed preference approach parametrically and non-parametrically. 
	Panel A shows a scatter plot of the average expected price and share buying comprehensive insurance coverage for workers grouped by cells based on a rich set of observables. 
It uses 305_structural_elig.dta, the baseline sample of workers experiencing their first recorded unemployment spell between 2002 and 2007, as also used for the CB and MPC implementation.  
	Panel B. Parametric Estimation of MRS Distribution 
It uses 305_structural_elig.dta for estimation as well as 102_SpellDec0007_bis.dta identifying the December sample.  

* Figure6.do creates Figure 6 of the paper.The graph compares the estimates of the MRS from the three different approaches, all implemented for the same baseline sample of workers. 

* Table1.do creates Table 1 of the paper. This table provide basic descriptive statistics of the main sample. 
It uses 102_spellDec0007_bis.dta, the December sample, and 305_structurel_elig.dta, predictions from the predicted risk model. 
Sample is the baseline sample of individuals experiencing their first recorded unemployment spells. Individuals must be between age 25-55 at the time of their first unemployment spell, and their first spell happens between 2002 and 2007. We exclude households where more than one member experiences an unemployment spell between 2002 and 2007. We compute layoffs from the PES data and exclude quits. We restrict the sample to individuals who are eligible for any UI coverage (basic or comprehensive) according to the 6 months work requirement prior to being laid-off. We further restrict the sample to individuals who are unemployed in December in the year of being laid off, as this is the month when all other demographics, income, tax and wealth information are observed and reported in the registry data. 

* Table2.do creates Table 2 of the paper. The table provides estimates of the MPC out of local welfare transfers by unemployment status, using various set of controls.
It uses 400_spellDec0007.dta, the main sample of analysis. 
Sample is individuals from the December sample, whose unemployment spell lasts at most 12 months. Sample is further restricted to the years 2002-2007 and to individuals aged 25-55, with non-null (and non-missing) wage or benefits, under comprehensive coverage in t-1. We consider a 350 bandwidth around the kink. We winsorize the first-difference in household consumption, omitting the top and bottom 10%.

* Table3Table4.do creates Table 3 and Table 4 of the paper. The tables provide estimates of the MRS from a logit regression, using predicted risk under comprehensive (resp. basic)
Insurance Choice Model Estimation & Implied MRS Distribution
It uses 306_structural_elig_cov.dta, which corresponds to 305_structural_elig.dta with additional variables.  Sample is the baseline sample of workers experiencing their first recorded unemployment spell between 2002 and 2007, as also used for the CB and MPC implementation.  
Column 8 restricts the sample to individuals that experienced a change in job at some point in the 2002-2007 period. In column 9 the sample is further restricted to years in which a change in job took place. 

Note: Codes for creating the original dataset are available upon request.