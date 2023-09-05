--------------------------------------
Replication Instructions for the Paper 
--------------------------------------

"Inference for Ranks with Applications to Mobility across Neighborhoods and Academic Achievement across
Countries" by Mogstad, Romano, Shaikh and Wilhelm

This file describes how to replicate all empirical results and simulations in the paper. 

--------
Overview
--------

The code in this replication package downloads files from three data sources (OECD (2019), Opportunity Insights 
Database, and Census 2000 population data) and uses R 3.6, Stata 14, MatLab 2020 for the analysis. Three main
files run all of the code for the parts Empirical Application, Simulations, and Comparison with Gupta (1956), 
resulting in 38 figures and 16 tables. The replicator should expect the code to run for approx 2 hours for the
Empirical Application part and for approx 10 hours for the Simulations part (MacBook Pro 13’ mid 2018 Core i5).

---------------------
Software Requirements
---------------------

Software used in the analysis:

1) R 3.6 with packages (versions valid on 5/2021)

“abind”,  ”cowplot", "data.table", "dplyr", "doMC”, "foreach",” foreign", "ggplot2", "gridExtra", "latex2exp”,
“lattice”, “latticeExtra”, "matrixcalc”, “MASS”, "mvtnorm", "openxlsx", "parallel", "readstata13", "readxl", 
"Rfast", "RStata",  "scales", "stringr",  "TruncatedNormal", "xtable"

2) Stata 14 with packages (versions valid on 5/2021)

“maptile” and “palettes”

3) MatLab 2020

---------------------------
Data Availability Statement 
---------------------------

The analysis uses data from three sources all of which are in the public domain.

First, we use data on 2018 PISA test outcomes for Reading, Math and Science (OECD, 2019). We download this 
dataset using the URL provided in the table below (also see line 7 of the file "PISA_OECD_Application.R"). 
The replicator can also access this data set through the cited DOI and then choosing "Tables" -> "Mean score and variation
in reading performance, by region". Table I.B1.4 (sheet 5 of the .xls file) rows 20-56 contain the reading data 
(Spain is missing), Table I.B1.5 (sheet 6 of the .xls file) rows 20-56 contain the math data, and Table I.B1.6 
(sheet 7 of the .xls file) rows 20-56 contain the science data.

Second, we use data on economic mobility provided in Chetty and Hendren (2018) and in Chetty et al. (2020).
We download these datasets using the URLs provided in the table below (also see lines 13, 17, 213, 271, 288, 
304, 443, 596 and 618 of the file "Mobility_Data_Preparation.R"). The replicator can also access these data sets
through the provided DOIs. 

For the CZ-level movers estimates from Chetty and Hendren (2018), after following the DOI link, select the 
"online_table3-2.tab" file. The variable "causal_p25_czkr26" contains the estimates, "causal_p25_czkr26_se" their
standard errors, and "pop2000" the population in the year 2000. Select "online_table5-2.tab" to obtain the movers
sample sizes by origin ("cz_origin") and destination ("cz_destination"). 

For the county-level movers estimates from Chetty and Hendren (2018), after following the DOI link, select the file
 "online_table4-2.tab". The variable "causal_p25_cty_kr26" contains the estimates, "causal_p25_cty_kr26_se"
their standard errors, and "cty_pop2000" the population in the year 2000. 

For the CZ-level correlational estimates from Chetty et al. (2020), after following the DOI link, select the file
"cz_outcomes.dta". The variable "kfr_pooled_pooled_p25" contains the estimates, "kfr_pooled_pooled_p25_se" 
their standard errors, and "pop2000" the population in the year 2000. 

For the county-level correlational estimates from Chetty et al. (2020), after following the DOI link, select the file
"cz_outcomes_dta.dta". The variable "kfr_pooled_pooled_p25" contains the estimates, "kfr_pooled_pooled_p25_se" 
their standard errors, and "pop2000" the population in the year 2000. 

The tract-level correlational estimates used in Bergman et al. (2019) are also provided by Chetty et al. (2020). So, 
after following the latter's DOI link, select the file "tract_outcomes_early_dta.dta" and subset King
County ("county"==33) and Seattle CZ ("czname" == "Seattle") tracts from this file. The variables 
"kfr_pooled_pooled_p25" and "kfr_pooled_pooled_p25_se" are estimates and standard errors respectively.

Finally, we use population data from the decennial Census (2000) downloaded directly from the Census website.

Table 1 presents details on each data source

------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------
Data type:                      URL:                         	     Code line:    References:
------------------------------------------------------------------------------------------------------------
Data download and preparation code:	"PISA_OECD_Application.R"
------------------------------------------------------------------------------------------------------------
2018 PISA OECD results          https://www.oecd-ilibrary.org/mean	7          OECD (2019)
				-score-and-variation-in-reading-pe
				rformance-by-region_a31f3e56-en.xl
				sx?itemId=%2Fcontent%2Fcomponent%2
				Fa31f3e56-en&mimeType=vnd.openxmlf
				ormats-officedocument.spreadsheetm
				l.sheet
------------------------------------------------------------------------------------------------------------
Data download and preparation code:	"Mobility_Data_Preparation.R"
------------------------------------------------------------------------------------------------------------
CZ population               	https://opportunityinsights.org/wp       13        Chetty and Hendren(2018)
				-content/uploads/2018/04/preferr
				ed_measures-1.dta
                                                       
CZ correlational           	https://opportunityinsights.org/wp       17        Chetty et al. (2020)
Est and SE			-content/uploads/2018/10/cz_out                    
			        comes.dta 
                                                         
CZ movers Est and SE            https://opportunityinsights.org/wp       213       Chetty and Hendren (2018)               
				-content/uploads/2018/04/online_
				table3-2.dta

CZ movers sample sizes		https://opportunityinsights.org/wp       271       Chetty and Hendren(2018)
				-content/uploads/2018/04/online_
				table5.dta

County population		http://www2.census.gov/program           288       Census (2000)   
				s-surveys/decennial/2000/phc/ph
				c-t-04/tab02.xls

County correlational 		https://opportunityinsights.org/wp       304       Chetty et al. (2020)
Est and SE			-content/uploads/2018/10/county                    
				_outcomes_dta.zip

County movers 			https://opportunityinsights.org/wp       443       Chetty and Hendren (2018)
Est and SE			-content/uploads/2018/04/online_                                   
				table4-2.dta

King County tracts 		https://opportunityinsights.org/wp       596       
correlational Est and SE	-content/uploads/2018/10/tract_o                   Chetty et al. (2020)
				utcomes_dta.zip


King County tracts 		http://www2.census.gov/programs          618       Census (2000)
population			-surveys/decennial/tables/time-ser
				ies/tract-change-00-10/censustract
				-00-10.xlsx
------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------      
                               Table 1: Details data sources description


------------
Dataset List
------------

Table 2 contains the description of datasets prepared from downloaded data and used in the actual analysis.

-------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------
File path:                              Description:
-------------------------------------------------------------------------------------------------
"data/OECDReadingData.dta"		2018 PISA reading estimates for OECD countries

"data/OECDMathData.dta"			2018 PISA math estimates for OECD countries

"data/OECDScienceData.dta"		2018 PISA science estimates for OECD countries

"data/figure1a.dta"			Subset of data for illustrations on Figure 1

"data/figure1b.dta"			Subset of data for illustrations on Figure 1

"data/figure2a.dta"			Subset of data for illustrations on Figure 2

"data/figure2b.dta"			Subset of data for illustrations on Figure 2

"data/figure3a.dta"			Subset of data for illustrations on Figure 3

"data/figure3b.dta"			Subset of data for illustrations on Figure 3

"data/CZtop50Corr.dta"			correlational estimates for the 50 most populous CZs

"data/CZtop50Movers.dta"		movers estimates for the 50 most populous CZs

"data/CTYtop50Corr.dta"			correlational estimates for the 50 most populous counties 

"data/CTYtop50Movers.dta"		movers estimates for the 50 most populous counties

"data/CZCorrelationalAM.dta"		national correlational estimates for CZs

"data/CZMoversEstim.dta"		national movers estimates for CZs

"data/CountyCorrelationalAM.dta"	national correlational estimates for counties

"data/CTYMoversEstim.dta"		national movers estimates for counties 

"data/KingCountySample.dta"		correlational estimates for King County tracts
-------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------
			    Table 2: Datasets used in the analysis

-----------------------
Description of programs
-----------------------

1) The file "Empirical Application/Ranks_Application_Master.R" executes all scripts for the empirical 
applications and downloads all required R packages. 

2) Output for Empirical Application is written to the subfolders "Empirical Application/tables" and 
"Empirical Application/graphs".

3) Subfolders "Empirical Application/Karlan-List" and "Empirical Application/Matlab_Code” contain the 
replication code by Andrews, Kitagawa and McCloskey (2018). We kept the names of their original folders
“Karlan-List” and “Matlab_Code” intact. The code in "Empirical Application/Karlan-List" computes the
results in Table 15 (lines 465-587 of the "Empirical Application/Mobility_Application.R", in particular,
the lines 485 and 494). The code in "Empirical Application/Matlab_Code” computes the results in Table 16
(lines 592-687 of "Empirical Application/Mobility_Application.R", in particular, the lines 607 and 608).

4) The file “Simulations/Simulations_Master.R” executes all simulation scripts and downloads all required R 
packages. 

5) Output for Simulations is written to the subfolders "Simulations/tables" and "Simulations/graphs".

6) The file “Other Figures/GuptaContour.R” produces analysis for comparison with Gupta (1956) in Appendix C. 

7) Output of “Other Figures/GuptaContour.R” is stored in “Other Figures/graphs/GuptaContour.pdf”

Table 3 provides detailed description of all major programs

-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
Path:                                   Section:          Description:   
-------------------------------------------------------------------------------------------------------
					Empirical Application
-------------------------------------------------------------------------------------------------------  
"Empirical Application/PISA_OECD_	4.1 and 	  CS for the ranks of OECD by 2018 PISA 
Application.R"				Appendix F1-3	  estimates
					  	   
			  
"Empirical Application/Mobility_			  Download and preparation of mobility data
Data_Preparation.R"				  
"Empirical Application/Mobility_	4.2 and 	  CS for the ranks of US places by mobility 
Application.R" 				Appendix F4-12	  estimates
				  

"Empirical Application/Ranks_				  Runs all the Empirical Application analysis
Application_Master.R"				  
-------------------------------------------------------------------------------------------------------
					     Simulations
-------------------------------------------------------------------------------------------------------                                       
"Simulations/start-corr-marg.R"		Appendix E.1	  Marg CS for correlational design
"Simulations/start-move-marg.R"		Appendix E.1	  Marg CS for movers design

"Simulations/start-corr-simul.R" 	Appendix E.2	  Simul CS for correlational design
"Simulations/start-move-simul.R" 	Appendix E.2	  Simul CS for movers design

"Simulations/start-corr-taubest.R"	Appendix E.3	  Tau-best CS for correlational design
"Simulations/start-move-taubest.R"	Appendix E.3	  Tau-best CS for movers design
"Simulations/start-simple-taubest.R"	Appendix E.3      Tau-best CS for alternative ("simple") design

"Simulations/start-simple-marg.R"	Appendix E.4	  Comparison of single-step and stepwise
							  methods

"Simulations/start-corr-skew-kurt.R" 	Appendix E.5	  Non-normal data for correlational design
"Simulations/start-move-skew-kurt.R"	Appendix E.5	  Non-normal data for movers design

"Simulations/Simulations_Master.R"                        Runs all Simulations
-------------------------------------------------------------------------------------------------------
					     Gupta (1956)
-------------------------------------------------------------------------------------------------------  
"Other Figures/GuptaContour.R"		Appendix C        Produces Gupta (1956) contour plot
-------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------- 
				Table 3: Description of programs 

---------------------------
Instructions to Replicators
---------------------------

1) Provide your version of Stata in line 14 and the path to Stata on your machine in line 15 of "Empirical 
Application/Ranks_Application_Master.R"

2) Run "Empirical Application/Ranks_Application_Master.R"

3) Switch working directory to subfolder "Simulations"

4) Run “Simulations/Simulations_Master.R”

5) Switch working directory to subfolder "Other Figures"

6) Run "Other Figures/GuptaContour.R"	

------------------------------------
List of figures, tables and programs
------------------------------------
-------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------
Fig/Tab:  Program:                  Code line:     Output path:
-------------------------------------------------------------------------------------------------------------
Table 1   "Mobility_Application.R"      238        "Empirical Application/tables/Table_1.tex"
Table 2   "PISA_OECD_Application.R"     120        "Empirical Application/tables/Table_2_and_12.tex"
Table 3	  "Mobility_Application.R"      303        "Empirical Application/tables/Table_3.tex"
Table 4	  "Mobility_Application.R"      374        "Empirical Application/tables/Table_4.tex"
Table 5   "Simulations_Master.R"        32-35      "Simultions/tables/table_cov_ranks-single.tex"
Table 6   "Simulations_Master.R"        43-46      "Simultions/tables/table_cov_ranks-multiple.tex"
Table 7   "Simulations_Master.R"        54-57      "Simultions/tables/table_cov_tau-best.tex"
Table 8   "Simulations_Master.R"  	60	   "Simultions/tables/table_cov_tau-best_simple.tex"
Table 9   "Simulations_Master.R"  	66	   "Simultions/tables/table_cov_ranks-single_simple.tex"
Table 10  "Simulations_Master.R"  	66	   "Simultions/tables/table_len_ranks-single_simple.tex"
Table 11  "Simulations_Master.R"  	73-76  	   "Simultions/tables/table_cov_ranks-single_skew-kurt.tex"
Table 12  "PISA_OECD_Application.R"     120        "Empirical Application/tables/Table_2_and_12.tex"
Table 13  "PISA_OECD_Application.R"     257        "Empirical Application/tables/Table_13.tex"
Table 14  "Mobility_Application.R"      462        "Empirical Application/tables/Table_14.tex"
Table 15  "Mobility_Application.R"      586        "Empirical Application/tables/Table_15.tex"
Table 16  "Mobility_Application.R"      686        "Empirical Application/tables/Table_16.tex"
Figure 1  "Mobility_Application.R"      58         "Empirical Application/graphs/Figure_1.pdf"
Figure 2  "Mobility_Application.R"      72         "Empirical Application/graphs/Figure_2.pdf"
Figure 3  "Mobility_Application.R"      86         "Empirical Application/graphs/Figure_3.pdf"
Figure 4  "PISA_OECD_Application.R"     138   	   "Empirical Application/graphs/Figure_4.pdf"
Figure 5  "Mobility_Application.R"      140        "Empirical Application/graphs/Figure_5.pdf"
Figure 6  "National_Mobility_Maps.do"   15-28      "Empirical Application/graphs/Figure_6_Estimates.pdf"
						   "Empirical Application/graphs/Figure_6_Lower_Endpoint_95
						   	.pdf"
						   "Empirical Application/graphs/Figure_6_Upper_Endpoint_95
							.pdf"
						   "Empirical Application/graphs/Figure_6_Lower_Endpoint_05
							.pdf"
						   "Empirical Application/graphs/Figure_6_Upper_Endpoint_05
							.pdf"
Figure 7  "National_Mobility_Maps.do"   36-46      "Empirical Application/graphs/Figure_7_Halves.pdf"
						   "Empirical Application/graphs/Figure_7_Quarters.pdf"
						   "Empirical Application/graphs/Figure_7_Halves_Contrast
							.pdf"
						   "Empirical Application/graphs/Figure_7_Quarters_Contrast
							.pdf"
Figure 8 "Other Figures/graphs/GuptaContour.pdf"
Figure 9   "Simulations_Master.R"        32        "Simultions/graphs/dgps_ranks-single_corr.pdf"
Figure 10  "Simulations_Master.R"        35        "Simultions/graphs/dgps_ranks-single_move.pdf}"
Figure 11  "Simulations_Master.R"        32        "Simultions/graphs/length_ranks-single_corr.pdf"
Figure 12  "Simulations_Master.R"        35        "Simultions/graphs/length_ranks-single_move.pdf"
Figure 13  "Simulations_Master.R"        43        "Simultions/graphs/length_ranks-multiple_corr.pdf"
Figure 14  "Simulations_Master.R"        46        "Simultions/graphs/length_ranks-multiple_move.pdf"
Figure 15  "Simulations_Master.R"        54        "Simultions/graphs/length_tau-best_corr.pdf"
Figure 16  "Simulations_Master.R"        57        "Simultions/graphs/length_tau-best_move.pdf"
Figure 17  "Simulations_Master.R"        60        "Simultions/graphs/length_tau-best_simple.pdf"
Figure 18  "Simulations_Master.R"        66        "Simultions/graphs/density_ranks-single_corr_skew-kurt
							.pdf"
Figure 19  "Simulations_Master.R"        73        "Simultions/graphs/length_ranks-single_corr_skew-kurt
							.pdf"
Figure 20  "Simulations_Master.R"        76        "Simultions/graphs/length_ranks-single_move_skew-kurt
							.pdf"
Figure 21  "PISA_OECD_Application.R"     46-54     "Empirical Application/graphs/Figure_21.pdf"
Figure 22  "PISA_OECD_Application.R"        	   "Empirical Application/graphs/Figure_22_Math.pdf"
	                		   	   "Empirical Application/graphs/Figure_22_Science.pdf"
Figure 23  "PISA_OECD_Application.R"     148   	   "Empirical Application/graphs/Figure_23.pdf"
Figure 24  "PISA_OECD_Application.R"     159   	   "Empirical Application/graphs/Figure_24.pdf"
Figure 25  "Mobility_Application.R"      106       "Empirical Application/graphs/Figure_28.pdf"
Figure 26  "Mobility_Application.R"      108       "Empirical Application/graphs/Figure_28.pdf"
Figure 27  "Mobility_Application.R"      124       "Empirical Application/graphs/Figure_27.pdf"
Figure 28  "Mobility_Application.R"      126       "Empirical Application/graphs/Figure_28.pdf"
Figure 29  "Mobility_Application.R"      151       "Empirical Application/graphs/Figure_29.pdf"
Figure 30  "Mobility_Application.R"      161       "Empirical Application/graphs/Figure_30.pdf"
Figure 31  "Mobility_Application.R"      171       "Empirical Application/graphs/Figure_31.pdf"
Figure 32  "Mobility_Application.R"      190       "Empirical Application/graphs/Figure_32.pdf"
Figure 33  "Mobility_Application.R"      194       "Empirical Application/graphs/Figure_33.pdf"
Figure 34  "National_Mobility_Maps.do"   94-101    "Empirical Application/graphs/Figure_34_Estimates.pdf"
						   "Empirical Application/graphs/Figure_34_Lower_Endpoint
							.pdf"
						   "Empirical Application/graphs/Figure_34_Upper_Endpoint
							.pdf"
Figure 35  "National_Mobility_Maps.do"   108-112   "Empirical Application/graphs/Figure_35_Halves.pdf"
						   "Empirical Application/graphs/Figure_35_Quarters.pdf"
Figure 36  "National_Mobility_Maps.do"   54-64     "Empirical Application/graphs/Figure_36_Halves.pdf"
						   "Empirical Application/graphs/Figure_36_Quarters.pdf"
						   "Empirical Application/graphs/Figure_36_Halves_TwoTone
							.pdf"
						   "Empirical Application/graphs/Figure_36_Quarters_TwoTone
							.pdf"
Figure 37  "National_Mobility_Maps.do"   76-83     "Empirical Application/graphs/Figure_37_Estimates.pdf"
						   "Empirical Application/graphs/Figure_37_Lower_Endpoint
							.pdf"
						   "Empirical Application/graphs/Figure_37_Upper_Endpoint
							.pdf"
Figure 38  "National_Mobility_Maps.do"   126-132   "Empirical Application/graphs/Figure_38_Estimates.pdf"
						   "Empirical Application/graphs/Figure_38_Lower_Endpoint
							.pdf"
						   "Empirical Application/graphs/Figure_38_Upper_Endpoint
							.pdf"
-------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------                 

----------
References
----------

1. Andrews, I., Kitagawa, T. and McCloskey, A. (2018). Inference on winners. Working Paper CWP 31/18, CeMMAP.

2. Bergman, P., Chetty, R., DeLuca, S., Hendren, N., Katz, L. F. and Palmer, C. (2019). Creating moves to 
opportunity: experimental evidence on barriers to neighborhood choice. Working Paper 26164, NBER.

3. Chetty, R. and Hendren, N. (2018). The impacts of neighborhoods on intergenerational mobility II: 
county-level estimates. The Quarterly Journal of Economics, 133 1163-1228, https://doi.org/10.7910/DVN/EI4WE2

4. Chetty, R., Friedman, J. N., Hendren, N., Jones, M.R. and Porter, S. R. (2020). The opportunity atlas:
mapping the childhood roots of social mobility. Tech. Rep., https://doi.org/10.7910/DVN/NKCQM1

5. Gupta, S. S. (1956). On a decision rule for a problem in ranking means. Ph. D. thesis, Institute of 
Statistics, University of North Carolina, Chapel Hill.

6. OECD (2019). PISA 2018 Results (Volume 1), https://doi.org/10.1787/5f07c754-en







