*************************************************************************************************************************
*** Improving Management with Individual and Group-Based Consulting: Results from a Randomized Experiment in Colombia  **
*** Leonardo Iacovone, William Maloney and David McKenzie                                                              **
*** REVIEW OF ECONOMIC STUDIES, forthcoming                                                                            **
*** README for Data Replication                                                                                        **
*************************************************************************************************************************

OVERVIEW
The code in this replication package uses five data sources. Four of these are included in the replication package (data on management practices 
collected through our firm surveys, World Management Survey data for Colombia, anonymized data on employment from the Colombian PILA, anonymized 
data on worker-level employment from the Colombian PILA), while the fifth (data on firm performance from the Colombian EAM) is confidential data
that must be run in a datalab. Four Stata do files are provided. The two files ReplicationTables_part1.do and ReplicationTables_part2.do should be run
in this order and use the four available datasets to construct the majority of tables and figures as listed below. The other two files Table A3_1.do
and Paper_results.do provide the code for using the EAM in the datalab.

DATA AVAILABILITY AND PROVENANCE STATEMENTS
The paper uses three types of data: 

1) Public Use Data Collected by the Authors:
Data on management practices collected through firm surveys, and through application of the World Management Survey to Colombia were collected
by the authors for this study, and have been deposited in Zenodo at http://doi.org/10.5281/zenodo.4306043. They are available under
a Creative Commons Non-commercial license (Iacovone et al, 2020). 

2) Anonymized administrative data from the PILA (Planilla Integrada de Liquidación de Aportes (Unified Register of Contributions)): 
The PILA is the national information system used by firms to file the mandatory contributions to health, pensions, and disability insurance 
paid for workers. These data were anonymized and provided to us by the Colombian Ministry of Health. The anonymized data are also deposited in
Zenodo at http://doi.org/10.5281/zenodo.4306043. They are available under a Creative Commons Non-commercial license (Iacovone et al, 2020).

3) Confidential firm data from the Colombian annual manufacturing survey (Encuesta Anual Manufacturera (EAM)) (DANE, 2020):
These data are not publicly available. Our replication materials include Stata do files used on these data, and approved log files and Excel files
that provide the output from these do files and that were approved for public release by the Colombian Departamento Administrativo Nacional 
de Estadística - DANE. 
* Process for requesting access to the EAM:
Researchers must access this confidential firm-level data on site at the Laboratorio de Microdatos in Bogota. For this purpose the researchers need to send 
a signed request (“solicitud”) with the required information. The request needs to be sent to Fabio Buitrago Hoyos from the Department of Information and 
Services to Citizens (fbuitragoh@dane.gov.co). The researchers will be able to clear results that do not violate confidentiality of the information analyzed.
Furthermore, a detailed description of the protocols to access confidential data from DANE can be found at https://www.dane.gov.co/files/sen/regulacion/protocolo/PMA.pdf

DATASET LIST

*** Stata Data Files ***
ManagementDatasetpublic.dta - data on management practices collected through firm surveys
final_manuf_colombia_public.dta - World Management Survey data for Colombia
EmploymentDatasetpublic.dta - anonymized data on employment from the PILA
WorkerLevelDatapublic.dta - anonymized data on worker-level employment from the PILA

*** Stata Do Files ****
ReplicationTables_part1.do: reproduces
	Main Paper Tables and Figures
		Table 1: Baseline Balance
		Table 2: Impact on Management Practices
		Table 3: Correlation of Practice Changes Within Groups
		Figure 1: Trajectory of Impacts on Management Practices
		Figure 2: Impact on Distribution of Management Practices
		Figure 3: The Individual and Group Treatments Improved Specific Practices to a Similar Extent
	Appendix Tables and Figures
		Table A5.1: Comparison of Baseline Characteristics of Firms that Completed Intervention to Drop-outs
		Table A5.2: Comparison of Baseline Characteristics of Non-Attritors to Attritors, and Balance on Non-Attiting Sample
		Table A6.1: Robustness of Impact on Management Practices to different weighting schemes
		Table A6.2: Management Data availability by measure and time period
		Table A6.3: Lee Bounds of Impact on Anexo K Score
		Table A7.1: Summary of Impacts at the Sub-Index and Individual Practice Level
		Table A7.2: Practices that increase by 0.8 or more from at least on treatment
		Table A8.1: Correlations between baseline Management Measures
		Table A8.2: Baseline Association of Outcomes with Management
		Table A8.3: Impact on Other Measures of Management Practices
		Table A8.4: Impact on Anexo K on Same Samples as WMS and MOPS
		Figure A6.1: Distribution of Baseline Anexo K Management Practices by Whether or Not Endline Management Data are Missing
		Figure A8.1: Comparison of WMS Management Practices Distribution to a Representative Sample of the Colombian Manufacturing Sector
		Figure A8.3: Cross-sectional and panel correlations between management measures

ReplicationTables_part2.do: reproduces
	Main Paper Tables and Figures
		Table 4: Impact on Employment (columns 1-6; columns 7-10 use EAM confidential data) 
		Table 6: Potential Mechanisms for improving firm performance (column 1; remaining columns use EAM confidential data)
	Appendix Tables and Figures	
		Table A5.3: Impact on Firm Survival (columns 1 and 2, column 3 use EAM confidential data)
		Table A9.1: Impact on Employment Composition
		Table A9.2: Comparison of Characteristics of Workers who Switch Firms to those who don't
		Table A10.1: Table A10.1: Time-Varying Impacts on Employment, Profits and Sales (columns 1-2; columns 3-6 use EAM confidential data)
		Table A10.2: Impacts on Monthly Firm Sales Using Our Survey Data
		Figure A9.1: Employment Reported in PILA vs Employment Reported by Firms


*** Stata ado files for add-ons ****
LassoShooting.ado - needed for Appendix table A6.1. This Stata command was written by Christian Hansen and is used to carry out Lasso regression.
We use it as one approach for examining robustness of our management results to different ways of aggregating individual management indicators. This
code was originally available on Christian Hansen's webpage, but has been since replaced with the lassopack command and is no longer
available on his page for download. To use LassoShooting, type "adopath" in Stata to see where Stata looks for ado files on your computer, and then copy this
ado file into the PERSONAL directory 
* The code then downloads mat2txt, reghdfe, estout, rangestat, leebounds (with versions used stored in .ado file as well just in case)

*** Questionnaire for Management Measure ***
AnexoK.pdf - questionnaire used to measure management practices (Form Anexo K) (In Spanish)

** Analysis was carried out in Stata, version 16.1
** Make sure all data files are in the working directory, and that you have a folder named "output" in this directory
** ReplicationTables_part1.do takes about 5 minutes to run, and ReplicationTables_part2.do 1 minute to run on a standard Dell Latitude laptop. 



******************************** EAM Files ***************************************
*** Analysis using the Annual Manufacturing Survey (EAM) was done in a datalab, and these data are not publicly available
*** We include here Do files, and approved log files and output files from DANE.

* Do files
	Table A3_1.do - do file used to produce Table A3.1: Comparison of Matched and Unmatched firms in EAM
	Paper_results.do - do file used to produce:
		Table 4 columns 7-10 (lines 340-395)
		Table 5 (lines 406-574)
		Table 6 (lines 582-643)
		Appendix Table A3.2 (lines 662-952)
		Appendix Table A5.3 (lines 958-1040)
		Appendix Table A10.1 (lines 1045-1130)

* Log file
	log_paper_results.smcl
		Table 4: Impact on Employment (columns 7-10) - regressions with outcomes pertotal and l_pertotal in file
		Table 5: Impacts on Firm Performance - look for Table 5 in log file
			Outcomes: Sales (w_Rvalorven, l_Rvalorven); Value-Added (w_Rvalagri, l_Rvalagri); Production (w_Rgross_prod, l_Rgross_prod); 
				  Profits (w_Rprofits, l_Rprofits); Aggregate Index (w_index_1, logindex_1)
		Table 6: Impact on Mechanisms - look for Table 6 in log file
			Outcomes: Inventory (l_Rinventory), Energy costs/sales (l_Rener_sale), labor productivity (l_RvalagriPwork)
		Appendix Table A3.2: Selection into the Management Improvement Program 
		Appendix Table A5.3: column 3 on firm survival (look for line reg year_18 t_indiv t_group).
		Appendix Table A10.1: columns 3-6.

* outputfiles
	.txt and .xls output files produced by do files and seen as output also in log file
	Table 4: pertotal.xls
	Table 5: Rvalorven.xls (sales), Rprofits.xls (Profits), Rvalagri.xls (Value-added), Rgross_prod.xls (production), zscores.xls (Overall index)
	Table 6: Rinventory.xls (inventory), Rener_sale.xls (Energy costs/sales), RvalagriPwork.xls (labor productivity)
	Table A10.1: Time-varying impacts on sales (Rvalorven.xls) and profits (Rprofits.xls)

REFERENCES
Departamento Administrativo Nacional de Estadistica (DANE) Colombia - Encuesta Anual Manufacturera - EAM -2018, Reporte generado en
March 2, 2020. http://microdatos.dane.gov.co/index.php/catalog/650/get_microdata [accessed Jan 6, 2021].
Leonardo Iacovone, William Maloney, & David McKenzie. (2020). Replication package for: Improving Management with Individual and 
Group-Based Consulting: Results from a Randomized Experiment in Colombia [Data set]. Zenodo. http://doi.org/10.5281/zenodo.4306043
