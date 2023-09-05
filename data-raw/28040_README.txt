
***********************************************************************************************

Replication File Guide for: 

    "Income Growth and the Distributional Effects of Urban Spatial Sorting"

	Victor Couture, Cecile Gaubert, Jessie Handbury, Erik Hurst


Feb 02, 2023


***********************************************************************************************
Sections:
Computational Requirements
Data Availability and Provenance Statements
Reference List
Analysis Data Construction
Results



************************************* Computational Requirements *************************************

Ran on:
Stata-SE 17.0
Matlab 2018a
R i386 4.1.0

Stata Packages used:
asgen (installed from ssc)
github (installed from https://haghish.github.io/github/ at line 2 of 1i_GW_topcoding_run.do)
rcall (installed from https://github.com/haghish/rcall at line 3 of 1i_GW_topcoding_run.do)
spmap (installed from ssc)
estout (installed from ssc)
akdensity (installed from ssc)
mipolate (installed from ssc)


R Packages used:
readr (installed from https://cran.r-project.org/web/packages/readr/index.html)
devtools (installed from https://cran.r-project.org/web/packages/devtools/index.html)
gpinter (installed from https://github.com/thomasblanchet/gpinter)
ggplot2 (installed from https://cran.r-project.org/web/packages/ggplot2/index.html)


PC configuration:
Red Hat Enterprise Linux 7 x86_64 on bare metal
Dedicated 10GigE data network
32 total nodes, 512 compute cores
dual 8-core Intel Xeon E5-2667 v2 @ 3.30GHz (16 cores per server)
128GB-512GB of memory per node (8TB total)
NetApp NAS Appliances
40TB shared disk space


The replicator should expect the code to run for about 242 hours. 
Please note that 1i_GW_topcoding_run.do is the most computationally intensive code, which takes 240 hours to run in its entirety. 



************************************* Data Availability and Provenance Statements *************************************

Statement about Rights
- I certify that the author(s) of the manuscript have legitimate access to and permission to use the data used in this manuscript.
- I certify that the author(s) of the manuscript have documented permission to redistribute/publish the data contained within this replication package. 


Summary of Availability
- All data are publically available *except* the "Neighborhood Amenity Data" (only used in Appendix E) listed under "Miscellaneous data" below.

Details on each Data Source:
- All data that are publicly available are provided and can be accessed in the replication package:


Dataset list:
1. Zillow data (Location: RawData/Zillow):  
Source: We downloadeded the data from http://www.zillow.com/research/data/ in February 2019, see Zillow Housing Data (2019).
		 - Zip_Zhvi_2bedroom.csv
		 - Zip_Zhvi_AllHomes.csv



2. NHGIS data (Location: RawData/NHGIS):	 
Source: We downloaded the data from https://data2.nhgis.org/main, see Manson et al. (2022).
		 - house value, tenure : nhgis0007_ds120_1990_tract.csv 
					 nhgis0007_ds151_2000_tract.csv
					 nhgis0038_ds225_20165_2016_tract.csv
		 - expenditure share on housing: nhgis0007_ds123_1990_tract.csv
						 nhgis0039_ds226_20165_2016_tract.csv	
		 - number of rooms: nhgis0002_ds120_1990_tract.csv
				    nhgis0002_ds153_2000_tract.csv
			            nhgis0002_ds225_20165_2016_tract.csv  
		 - population: tractpopulation_2010codes.dta
		 - family/household income: nhgis0041_ds225_20165_2016_tract.csv 
					    reg10demo_tract`yr'_${unit}.dta (yr=1970,1990,2000,2014; unit=household/family)
		 - education: nhgis0012_ds98_1970_tract.csv, 
			      nhgis0012_ds123_1990_tract.csv,
			      nhgis0012_ds120_1990_tract.csv, 
			      nhgis0012_ds151_2000_tract.csv,
			      nhgis0012_ds146_2000_tract.csv, 
			      nhgis0043_ds225_20165_2016_tract.csv
		 - area: R11581980.dct, R11581980_SL140.txt
		 - for PUMA (1990,2010) - CBSAs crosswalks and PUMA - CBSA downtown crosswalks: 1990_block_population.csv
					  downtown definition exported from ArcGIS: GISoutput/puma`year'_complete_10.csv (year=1990,2010)
										    GISoutput/puma`year'_complete_15.csv (year=1990,2010)
		 - 1970 tract population: 1970_tract_population.csv
		 - 1950 population: nhgis0009_ds83_1950_county.csv
		 - median income: for 1990: nhgis_medinc_1990_tract.csv	
				  for 2014: nhgis0040_ds226_20165_2016_tract.csv
					    nhgis0040_ds225_20165_2016_tract.csv		 	
		 - family/household counts: populationcounts_1990.dta
		 - property tax: nhgis0045_ds226_20165_2016_tract.csv
				 nhgis0045_ds225_20165_2016_tract.csv
				 nhgis0045_ds151_2000_tract.csv
		 - 1950 income data: nhgis0009_ds82_1950_tract.csv
				     1950.csv (crosswalk file from Lee and Lin (2017) to make constant 2010 tracts)		 
			     	     nhgis_2010_tract_family_2.csv

3. IPUMS data (Location: RawData/IPUMS):  
Source: We downloaded the data from https://usa.ipums.org/usa-action/variables/group, see Ruggles et al. (2022)
		for year 1970/1990/2014: 
		 - 1970/1990 demographic data: usa_00014.dta
		 - 2014 demographic data: usa_00025.dta
		 - house value and ownership: usa_00026.dta
		 - nationality: usa_00028.dta
		 - income components: usa_00029.dta
		 - dual income: usa_00006.dta, usa_00008.dta
		for year 1950:
		 - usa_00001.dta
		for Bartik income shocks (IPUMS wage income data): 
		 - usa_00019.dta
		for country groups (1970) - CBSAs crosswalks: 
		 - crosswalks/CountyGrp_to_County_1970.csv
		for 1970 tract to 2010 CBSAs crosswalk: 
		 - crosswalks/crosswalk_1970_2010.dta 
		for cbsa codes to 2010 cbsa codes:
		 - crosswalks/cbsa2006to2013crosswalk.dta
		for state economic areas (1950) - CBSAs crosswalks: 
		 - crosswalks/sea_county_components.xls
		for CPUMAs (2000+) and urban areas crosswalks:
		 - crosswalks/urbancbsaby2010cpuma0010_v4.dta
		for industry crosswalk between 1990/2000 and 2014: 				     
		 - industry crosswalks/industry_crosswalks_2000.dta
		 - industry crosswalks/industry_crosswalks_2012.dta
		


4. HUD data (Location: RawData/HUD): 
Source: We downloaded the data from The U.S. Department of Housing and Urban Development's (HUD's) Office of Policy Development and Research (PD&R)
	 at https://www.huduser.gov/portal/datasets/assthsg.html#2009-2021_data. The data is under "2014 – Based on Census 2010 geographies".
		 - all_census_tract_2000.txt
		 - TRACT_AK_MN_2014.csv
		 - TRACT_MO_WY_2014.csv


5. Miscellaneous data (Location: RawData/Miscellaneous):
		 - crosswalk from USPS zip code areas (in 2014 Q4) to 2010 Census tracts: 2010TRACT_USPSZIP_2014q4.xlsx
			Source: We downloaded the data from The U.S. Department of Housing and Urban Development's (HUD's) Office of Policy 				Development and Research (PD&R)
                  at https://www.huduser.gov/portal/datasets/usps_crosswalk.html by selecting "ZIP-TRACT" and "4th Quarter 2021".		
		 - IPUMS state topcodes in 2014: IPUMStopcodes_ACS.dta
			Source: We downloaded the data from https://usa.ipums.org/usa/volii/top_bottom_codes.shtml (Excel file for 2014 ACS/PRCS),
				see Ruggles et al. (2022)
		 - lat/long centroids of 2010 Census tracts: census_tract2010_centroids.csv
			Source: We downloaded the data from Esri "U.S. Census Tract Boundaries" at https://www.arcgis.com/home/item.html?						id=22af85e744324d78bb2038e4a684e464 by selecting the layer USA_Census_Tracts_Points_analysis-tract_pt_trim
		 - Neighbourhood amenity data: Not publicly available
			Source: Authors' computation from proprietary data from NETS and PlaceIQ. Only used in Appendix E.
				Note that replicators need to obtain a NETS subscription through Walls & Associates by contacting Don Walls at 						dwalls2@earthlink.com and to sign data agreement with PlaceIQ https://www.placeiq.com
		 - Tract-CBSA concordance and downtown definitions: tractsincbsa2010_allurban_2010codes.dta 
			Source: Downtown definitions from "Urban Revival in America", Journal of Urban Economics, 2020, by Couture and Handbury 
		 - CPI adjustments to 1999 dollars: cpi1999.csv
			Source: We downloaded the data from https://cps.ipums.org/cps/cpi99.shtml in 2018, see Flood et al. (2022)
 		 - 100 income brackets for evenly spaced log income: incomegrid_100.csv		 
		 - maximums of NHGIS Census data income bins: incomebrackets_nhgis.csv
		 - Generated map data: tract2010_database 
		 - Generated map data: tract2010_coords
	


************************************* Reference List *************************************

- Zillow Housing Data. http://www.zillow.com/research/data/ (accessed February, 2019)
- Steven Manson, Jonathan Schroeder, David Van Riper, Tracy Kugler, and Steven Ruggles. IPUMS National Historical Geographic Information System: Version 17.0 demographic, housing and income data. Minneapolis, MN: IPUMS. 2022. http://doi.org/10.18128/D050.V17.0
- Steven Ruggles, Sarah Flood, Ronald Goeken, Megan Schouweiler and Matthew Sobek. IPUMS USA: Version 12.0 demographic, income and population data. Minneapolis, MN: IPUMS, 2022. https://doi.org/10.18128/D010.V12.0
- The U.S. Department of Housing and Urban Development's (HUD's) Office of Policy Development and Research (PD&R). https://www.huduser.gov/portal/datasets/assthsg.html#2009-2021_data
- The U.S. Department of Housing and Urban Development's (HUD's) Office of Policy Development and Research (PD&R), HUD-USPS ZIP Code Crosswalk data. https://www.huduser.gov/portal/datasets/usps_crosswalk.html 	
- Steven Ruggles, Sarah Flood, Ronald Goeken, Megan Schouweiler and Matthew Sobek. IPUMS USA: Version 12.0 2014 ACS/PRCS. Minneapolis, MN: IPUMS, 2022. https://doi.org/10.18128/D010.V12.0
- Esri, U.S. Census Tract Boundaries. https://www.arcgis.com/home/item.html?id=22af85e744324d78bb2038e4a684e464
- National Establishment Time-Series (NETS) Database
- PlaceIQ. https://www.placeiq.com
- Couture, Victor & Handbury, Jessie, 2020. "Urban revival in America," Journal of Urban Economics, Elsevier, vol. 119(C). DOI: 10.1016/j.jue.2020.103267
- Sarah Flood, Miriam King, Renae Rodgers, Steven Ruggles, J. Robert Warren and Michael Westberry. Integrated Public Use Microdata Series, Current Population Survey: Version 10.0 IPUMS variable CPI99. Minneapolis, MN: IPUMS, 2022. https://doi.org/10.18128/D030.V10.0





************************************* Analysis Data Construction *************************************
Code for data cleaning and analysis is provided as part of the replication package. 
All the codes should be Run from ReplicationCode subdirectory in replication package:


	0. main.do 
	  - This is the do file that runs most of the codes in the replication folder. 
	  - Replicator can simply run this code to construct the analysis data and replicate most of the results in the paper. Note that replicator needs to run separately in MATLAB for the calibration/counterfactual analysis results. If replicator prefers to replicate some particular results, please see section below and run relevant codes individually. 




Run the codes below in that order to construct the data for analysis (each dataset is described in the code that produces it):


	1. 0_GW_arguments.do (contains arguments for the pipeline)


	2. 0_GW_subprograms.do (subprograms frequently called in the other codes)


	3. 1a_GW_puma2cbsa.do
		- create crosswalks between IPUMS CONSPUMA/CPUMA/1970 County Group/1950 State Economic Area(SEA) and CBSAs
		- output data:  GeneratedData/IPUMS/puma1990_10_60_urbancbsa_xwalk.dt
				GeneratedData/IPUMS/puma1990_15_60_urbancbsa_xwalk.dt
				GeneratedData/IPUMS/puma2010_10_60_urbancbsa_xwalk.dta
				GeneratedData/IPUMS/puma2010_15_60_urbancbsa_xwalk.dta
				GeneratedData/IPUMS/urbancbsaby1990puma_v2.dta
				GeneratedData/IPUMS/urbancbsaby2013puma_v2.dta
				GeneratedData/IPUMS/urbancbsaby1990puma_v2_def15.dta
				GeneratedData/IPUMS/urbancbsaby2013puma_v2_def15.dta
				GeneratedData/IPUMS/cbsaby2010countygrp1970_v2.dta
				GeneratedData/IPUMS/sea_cbsas.dta
				GeneratedData/IPUMS/puma1990_cbsalist_cgeo_10_60.dta
				GeneratedData/IPUMS/puma2010_cbsalist_cgeo_10_60.dta
				GeneratedData/IPUMS/urbanpumasCBSA_list.dta
				GeneratedData/IPUMS/urbanpumasCBSA_list_def15.dta



	4. 1b_GW_processIPUMSraw.do
		- clean and process IPUMS data
		- output data:  GeneratedData/IPUMS/ipums_${unit}_${year}.dta (unit=household/family, year=1970/1990/2014)
				GeneratedData/IPUMS/ipums_${unit}_${year}_def15.dta (unit=household, year=1990/2014)
				GeneratedData/IPUMS/ipums_household_2000.dta
				GeneratedData/IPUMS/ipums_family_1950.dta 
	


	5. 1d_GW_processNHGISraw.do
		- clean and process NHGIS data
		- output data:  GeneratedData/NHGIS/housedata_tract`year'_2010codes.dta (year=1990/2000/2014)
				GeneratedData/NHGIS/housedata_variants_tract`year'_2010codes.dta (year=1990/2014)
				GeneratedData/NHGIS/reg10demo_tract`yr'_clean_${unit}.dta (unit=household/family, yr=1970/1990/2000/2014)
				GeneratedData/NHGIS/reg10demo_tract1950_clean_family.dta
				GeneratedData/NHGIS/educdata_tract${year}_2010codes.dta (year=1970/1990/2000/2014)
				GeneratedData/NHGIS/tractarea_2010codes.dta
				GeneratedData/NHGIS/medianincome_1990_2010tracts.dta
				GeneratedData/NHGIS/medianincome_2014_2010tracts.dta 
				GeneratedData/NHGIS/proptax_2000_2010tracts.dta
				GeneratedData/NHGIS/proptax_2014_2010tracts.dta


	6. 1f_GW_processHUDraw.do
		- clean and process HUD data
		- output data:  GeneratedData/HUD/HUDpublichousing_2000_2010tracts.dta
			        GeneratedData/HUD/HUDpublichousing_2014_2010tracts.dta



	7. 1g_GW_processZillowraw.do 
		- clean and process Zillow data
		- output data:  GeneratedData/Zillow/Zillow_hvi_2bd_tract_clean_v2.dta
				GeneratedData/Zillow/Zillow_hvi_all_tract_clean_v2.dta



	8. 1i_GW_topcoding_run.do (runs 1i_GW_topcoding for different specs which, in turns, calls 1i_R/gpinter code that is run in R)
                - adjusts state-level IPUMS income distributions for topcoding
                - note: line 6 of 1i_R/gpinter needs to be adjusted to point to location of ReplicationData/GeneratedData/IPUMS/PFB directory on user's local machine
				- output data: GeneratedData/IPUMS/incomeparameter_urban_m1p8.dta
                               GeneratedData/IPUMS/PFB/pfb_grp`grp'_unit`unit'_`year'pops.csv (grp=consPUMA_new/top100, unit=household/family, year=1990/2014)
                               GeneratedData/IPUMS/PFB/pfbraw_grp`grp'_unit`unit'_state`state'_`area'_`year'.csv (state: loop over all states, area=all/urb/sub)
                               GeneratedData/IPUMS/PFB/`area'dist_state`state'_grp`grp'_`unit'_`year'.csv (grp=consPUMA_new/top100, unit=household/family, year=1990/2014, area=all/urb/sub)
                               GeneratedData/IPUMS/IncomeDistribution/cdf_`unit'_`grp'_state`state'_area`area'_`year'_int100.dta



        9. 3_GW_CalibrationData_run.do (runs 3_GW_CalibrationData[_qualityshares/_19501970])
                - prepares data for calibration/counterfactual analysis
                - intermediate data: GeneratedData/CalibrationData/IPUMS_incEst_`unit'_`grp'${defsuf}_grid`grid'.dta
                               GeneratedData/CalibrationData/IPUMS_incEst_`name'_${unit}_${grp}${defsuf}_grid`grid'${cut}.dta
                               GeneratedData/CalibrationData/IPUMS_ownershare_${unit}_${grp}${defsuf}_grid`grid'${cut}.dta
                               GeneratedData/CalibrationData/IPUMS_incEst_`unit'_`grp'_${year}_grid`grid'.dta
                               GeneratedData/CalibrationData/QualityShares/qualityshares_`qualtype'_`qualname'_${unit}_${grp}${defsuf}_`housevar'.dta(.csv)
                               GeneratedData/CalibrationData/QualityShares/qualitystats_`qualtype'_`qualname'_${unit}_${grp}${defsuf}_`housevar'.csv
                               GeneratedData/IPUMS/incomeparameter_${year}_`grp'_m1p8.dta  (${year}=1950/1970)
                               GeneratedData/IPUMS/PFB/pfbraw_grp`grp'_unit`unit'_${year}.csv  (${year}=1950/1970)
                               GeneratedData/IPUMS/IncomeDistribution/cdf_`unit'_`grp'_${year}_int100.dta (${year}=1950/1970)
                               GeneratedData/IPUMS/${incname}_incstats_${year}_cbsa`grp'${cut}_check.dta  (${year}=1950/1970)
                               GeneratedData/NHGIS/family/brkt_incstats_`year'_cbsa`grp'_check.dta (year=1970/1990/2014)
			       GeneratedData/NHGIS/household/brkt_incstats_`year'_cbsa`grp'_check.dta (year=1970/1990/2014)
		- output data to be read into Matlab (stored in directory SharedData created and located alongside code):
			       SharedData/IPUMS_incEst_`name'_${unit}_${grp}${defsuf}.csv,
                               SharedData/IPUMS_urbanshare_incEst_${unit}_${grp}${defsuf}.csv
                               SharedData/sharebyAreaQuality_`qualtype'_${unit}_${grp}${defsuf}.csv
                               SharedData/qualitystats_alldefs_`cutoff'_${unit}_${grp}${defsuf}.csv
                               SharedData/IPUMS_urbanshare_incEst_${unit}_${grp}_${year}.csv  (${year}=1950/1970)
							   


	10. 4a_GW_Bartik_Construct.do
		- construct Bartik income shocks
		- input: 1. IPUMS raw data
			 2. CBSA-PUMA crosswalks 
				(Created in 1a_GW_puma2cbsa)
			 3. Industry crosswalk: RawData/IPUMS/industry crosswalks/industry_crosswalks_2000.dta
						RawData/IPUMS/industry crosswalks/industry_crosswalks_2012.dta
		- output data:  Bartik income shocks:
				 GeneratedData/Bartik/bartik_1990_1990_2014.dta
				 GeneratedData/Bartik/bartik_1990_1990_2014hightech.dta
				 GeneratedData/Bartik/bartik_1990_1990_2014fire.dta
				 GeneratedData/Bartik/bartik_1990_1990_2014urbtopd.dta
				 GeneratedData/Bartik/bartik_1990_2000_2014.dta



	11. 4b_GW_Analysis_DataPrep.do
		- combine and process all the data for reduced form analysis
		- input: 1. Household IPUMS income data: GeneratedData/IPUMS/ipums_household_${year}.dta (year=1990/2000/2014)
				(Created in 1b_GW_processIPUMSraw.do)
			 2. Counts of households per bracket in each year at tract: GeneratedData/NHGIS/reg10demo_tract`yr'_clean_household.dta (yr=1970/1990/2000/2014)
				(Created in 1d_GW_processNHGISraw.do)
			 3. Urban definitions: RawData/Miscellaneous/tractsincbsa2010_allurban_2010codes.dta"
			 4. Tract area data: GeneratedData/NHGIS/tractarea_2010codes.dta
				(Created in 1d_GW_processNHGISraw.do)
			 5. Education data to define quality: GeneratedData/NHGIS/educdata_tract${year}_2010codes.dta (year=1990/2000/2014)
				(Created in 1d_GW_processNHGISraw.do)
			 6. Neighbourhood Amenity index: RawData/Miscellaneous/piq_qualindex_`year'_100000N.dta (year=2000,2012)
			 7. Census House Price data: GeneratedData/NHGIS/housedata_tract`year'_2010codes.dta (year=1990/2014)
						     GeneratedData/NHGIS/housedata_variants_tract`year'_2010codes.dta (year=1990/2014)
				(Created in 1d_GW_processNHGISraw.do)
			 8. Zillow house price data: GeneratedData/Zillow/Zillow_hvi_2bd_tract_clean_v2.dta
						     GeneratedData/Zillow/Zillow_hvi_all_tract_clean_v2.dta
				(Created in 1g_GW_processZillowraw)
		- output data:  Income distribution variables (p95_p50 ratio, median income, avg_income):
				 GeneratedData/Bartik/cbsa_bartik_incomevars_hhincome.dta
			        Combined dataset that has all variables used in empirical analysis (quality definition, census/Zillow house prices, etc.):
				 GeneratedData/Bartik/cbsa_bartik_tract_all_hhincome.dta
			        Dependent and independent variables for main rho estimation in Equation (14):
				 (firstyear=1990/2000, qualthreshold=30/40/50/60, housetype=census_mort_c9014/census_mort_adj_c9014/zill_2br_avg_mort_c9014/zill_all_avg_mort_c9014/zill_2br_avg_mort_c0014/zill_all_avg_mort_c0014)
				 GeneratedData/Bartik/cbsa_bartik_cbsavars_incomebrack_`firstyear'_collegecutoff`qualthreshold'_hhincome_top100.dta 
				 GeneratedData/Bartik/cbsa_bartik_brackvars_incomebrack_`firstyear'_collegecutoff`qualthreshold'_`housetype'_hhincome_top100.dta 
				 GeneratedData/Bartik/cbsa_bartik_cbsavars_incomebrack_1990_collegecutoff40_hhincome_top100_`def'.dta (def=3mil, 5mil, 5pct, 15pct, 20pct)
				 GeneratedData/Bartik/cbsa_bartik_brackvars_incomebrack_1990_collegecutoff40_ zill_2br_avg_mort_c9014_hhincome_top100_`def'.dta (def=3mil, 5mil, 5pct, 15pct, 20pct)
				






************************************* Results *************************************


Run the codes below to generate the results (figures and tables). The order doesn't matter.




***** U-shape (urbanization by income) results ******


	2_GW_CensusUshape.do
		- create U-shape plots (reference program called ipums_meaninc_brkts is in 0_GW_subprograms)
		- input: 
			GeneratedData/NHGIS/reg10demo_tract${year}_clean_family (year=1970/1990/2014)
			RawData/Miscellaneous/tractsincbsa2010_allurban_2010codes.dta
			GeneratedData/NHGIS/family/brkt_incstats_`year'_cbsatop100_check.dta (year=1970/1990/2014)

		- output data: 
			processed data for U-shape plots: GeneratedData/NHGIS/brktcounts_allyrs_cbsatop100.dta
		- output: 
			Results/CensusUShare_plots/Figure 1, Figure A.3


	2_GW_IPUMSUshape.do
		- create U-shape plots using IPUMS data
		- input: 
			GeneratedData/IPUMS/ipums_household_${year}.dta (year=1990/2014)
			GeneratedData/IPUMS/urbanpumasCBSA_list.dta
			RawData/Miscellaneous/incomegrid_100.csv (csv file containing 100 income brackets for evenly spaced log income)
		- output: 
			Results/IPUMSUshare_plots/Table A.1, Figure A.4, Figure A.5




***** Reduced form analysis results ******


	4c_GW_StylizedFacts.do
		- produces stylized facts figures for the reduced form estimation
		- input: 
			RawData/Miscellaneous/incomebrackets_nhgis.csv
			RawData/Miscellaneous/tractsincbsa2010_allurban_2010codes.dta
			GeneratedData/IPUMS/ipums_household_2000.dta
			GeneratedData/Bartik/cbsa_bartik_incomevars_hhincome.dta
			GeneratedData/Bartik/bartik_1990_1990_2014.dta
			GeneratedData/Bartik/cbsa_bartik_cbsavars_incomebrack_`firstyear'_collegecutoff`qualthreshold'_hhincome_`grp'.dta
			GeneratedData/Bartik/cbsa_bartik_brackvars_incomebrack_`firstyear'_collegecutoff`qualthreshold'_`housetype'_hhincome_`grp'.dta
			GeneratedData/Bartik/cbsa_bartik_tract_all_hhincome.dta
			
		- output data: 
			Coefficients stored from regressions of urbanization on Bartik (used in Figure 4):
			GeneratedData/Bartik/Regressions/bartik_1990_2014_top100_collegecutoff40_2.dta
		- output: 
			Results/Bartik_Plots/Figure3, Figure4, Figure E.6


	4d_GW_Estimation.do
		- pulls together all datasets used in rho estimation and then run rho regressions
		- input: 
			datasets created in 4a_GW_Bartik_Construct (Bartik) and 4b_GW_Analysis_DataPrep (dependent and independent variables in Eq (14)):
			GeneratedData/Bartik/cbsa_bartik_brackvars_incomebrack_`firstyear'_`qual'`qualtype'`qualthreshold'_`housevar'_hhincome}_`grp'`cutoffname'.dta
			GeneratedData/Bartik/cbsa_bartik_cbsavars_incomebrack_`firstyear'_`qual'`qualtype'`qualthreshold'_hhincome_`grp'`cutoffname'.dta
			GeneratedData/Bartik/bartik_1990_1990_2014.dta
		        GeneratedData/Bartik/bartik_1990_1990_2014hightech.dta
			GeneratedData/Bartik/bartik_1990_1990_2014fire.dta
			GeneratedData/Bartik/bartik_1990_1990_2014urbtopd.dta
			RawData/Miscellaneous/tractsincbsa2010_allurban_2010codes.dta

		- output: 
			Results/Bartik_RegResults/Table 1, Table D.6, Table D.7, Table D.8


	4e_GW_Pretrend.do
		- run some pre-trend and balance test on the Bartik instrument
		- input: 
			datasets created in 4a_GW_Bartik_Construct (Bartik) and 4b_GW_Analysis_DataPrep (dependent and independent):
			GeneratedData/Bartik/cbsa_bartik_brackvars_incomebrack_1990_collegecutoff`spec'_zill_2br_avg_mort_c9014_hhincome_top100.dta
			GeneratedData/Bartik/pretrend_cbsa_bartik_cbsavars_incomebrack_1970_collegecutoff40_hhincome_top100.dta
			GeneratedData/Bartik/bartik_1990_1990_2014
			GeneratedData/Bartik/cbsa_bartik_cbsavars_incomebrack_1990_collegecutoff40_hhincome_top100.dta
			RawData/Miscellaneous/tractsincbsa2010_allurban_2010codes.dta
		
		- output: 
			Results/Bartik_RegResults/Table D.9



****** Calibration/Counterfactual Analysis results ******


	5_Matlab/GWcalibration_run.m
		- input: 
			SharedData/IPUMS_urbanshare_incEst_household_consPUMA_new.csv
			SharedData/sharebyAreaQuality_cutoff_household_consPUMA_new.csv  
			SharedData/IPUMS_incEst_pctile_household_consPUMA_new.csv
			SharedData/IPUMS_urbanshare_incEst_family_consPUMA_new.csv
			SharedData/IPUMS_urbanshare_incEst_family_consPUMA_new_1950.csv  
			SharedData/IPUMS_urbanshare_incEst_family_consPUMA_new_1970.csv
				(both created by 3_GW_CalibrationData_19501970.do)
			SharedData/IPUMS_urbanshare_incEst_household_consPUMA_def15_def15.csv
			SharedData/sharebyAreaQuality_cutoff_household_consPUMA_def15_def15.csv  
			SharedData/IPUMS_urbanshare_incEst_family_consPUMA_def15_def15.csv
			
		- output: 
			Results/Calibration_figures/Figures 5, 6, 7, 9, 10, 11, 12, F7, H8, H9, H10
			Results/Calibration_tables:Raw data input for 5_Matlab/Results/Robustness.xlsx, which produces Tables 3, 4, G11, H12, H13, and H14
			

	5_Matlab/GWcalibration_cbsabycbsa.m
		- input: 
			SharedData/IPUMS_urbanshare_incEst_household_cbsa.csv (created by 3_GW_CalibrationData_run.do)
			RawData/Miscellaneous/cbsabycbsaelasticities.csv
		- output: 
			Results/Calibration_figures/Figure 8
		



***** Other results (maps) ******


	2_GW_CBSAMaps.do
		- create CBSA maps plot
		- input: 
			RawData/Miscellaneous/tract2010_database (US 2010 tract shape file)
			RawData/Miscellaneous/tract2010_coords
			RawData/Miscellaneous/tractsincbsa2010_allurban_2010codes.dta
			GeneratedData/NHGIS/medianincome_1990_2010tracts.dta
			GeneratedData/NHGIS/medianincome_2014_2010tracts.dta 
		- output: 
			Results/CBSA_Maps/Figure 2, Figure A.1, A.2





