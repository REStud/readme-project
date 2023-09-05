# README for Kleiner and Soltas, "A Welfare Analysis of Occupational Licensing in U.S. States"

## Data Availability and Provenance Statements

The paper uses data obtained from IPUMS-CPS (Flood et al., 2018). IPUMS-CPS does not currently provide the ability to store or reference custom extracts, but allows for redistribution for the purpose of replication. The archive contains the extracted data and cleaning files that prepare the main dataset used for analysis. The data citation in the main article has the full URL.

Robustness checks in the paper's appendix also use data from IPUMS-USA (Ruggles et al., 2017). IPUMS-USA does not currently provide the ability to store or reference custom extracts, but allows for redistribution for the purpose of replication. The archive contains the extracted data and cleaning files that prepare the main dataset used for analysis. The data citation in the main article has the full URL.

This paper also uses data from Shor and McCarty (2011), cited in full in the main article. The data have been released into the public domain and are available on the Harvard Dataverse at https://dataverse.harvard.edu/dataset.xhtml?persistentId=doi:10.7910/DVN/AP54NE.

The paper also uses data from the Institute for Justice (IJ, Carpenter et al., 2017) and the National Conference of State Legislatures (NCSL 2019). Full citations are included in the paper. The IJ data are available for download here: https://ij.org/report/license-to-work-2/ltw2-data/. The NCSL data are available for download here: https://www.ncsl.org/research/labor-and-employment/occupational-licensing-statute-database.aspx. Additional data were collected on state-level occupational licensing rules, with documentation in Appendix D of the paper.

This paper also uses data from the GSS 1972-2010 Cumulative Datafile (version 3.5), as maintained by the Berkeley SDA here: https://sda.berkeley.edu/cgi-bin/hsda?harcsda+gss10. The archive contains the extracted data and cleaning files. The data citation in the main article has the full URL.

This paper also uses a list of universally licensed occupations included in Gittleman et al. (2018) in Appendix Table 3, p.100.

## Statement about Rights

 I certify that the author(s) of the manuscript have legitimate access to and permission to use the data used in this manuscript.

 ## Summary of Availability

 All data are publicly available.

 ## Details on Each Data Source

The paper uses IPUMS-CPS data (Ruggles et al, 2018). IPUMS-CPS does not allow for redistribution, except for the purpose of replication archives. Permissions as per https://cps.ipums.org/cps/citation.shtml have been obtained. Datafile: DATA/cps_00039.dat

The paper uses IPUMS-USA data (Ruggles et al, 2018). IPUMS-USA does not allow for redistribution, except for the purpose of replication archives. Permissions as per https://usa.ipums.org/usa/cite.shtml have been obtained. Datafile: DATA/usa_00012.dat

Data from Shor and McCarty (2011), the Institute for Justice (Carpenter et al., 2017), and the National Conference of State Legislatures (NCSL 2019) are freely available for download at the links provided above. Datafiles: "DATA/PoliticalEconomy/shor mccarty 1993-2014 state aggregate data public June 2015.dta", DATA/truth_licensing.xlsx. The Excel file compiles the IJ and NCSL data along with other sources listed above.

## Dataset list

| Data file        | Source    | Notes      | Provided
--------------------------------------------------------
acs_data.dta    | IPUMS-USA and authors' analysis | Derivative product of usa_00012.dat. This is the ACS analysis dataset. | Yes
betabin_results_*.csv, betabin_results_*.txt | IPUMS-USA and author's analysis | This is an intermediate data file produced in the estimation of state-occupation licensed shares. | Yes
census_division_to_state_xwalk.dta | US Census and authors' analysis | Derivative product of https://www2.census.gov/geo/pdfs/maps-data/maps/reference/us_regdiv.pdf | Yes
change_occ.dat | IPUMS-CPS and authors' analysis | Derivative product of cps_00039.dat (via data_cleaned_new.dta). This file contains estimated rates of occupational transitions, for use in robustness checks. | Yes
cps_00039.dat.zip | IPUMS-CPS | Raw CPS data. Provided under terms of use, see above. Must be unzipped before analysis. | Yes
data_cleaned_new.dta | IPUMS-CPS and authors' analysis. | Derivative product of cps_00039.dat. This is the main analysis file for CPS data used in the paper. | Yes
ground_truth_statecert.dta | Gittleman et al. (2018) and authors' analysis | This is a list of universally licensed occupations used to create the main analysis sample. | Yes
lemp2000.dta, lemp2010.dta | IPUMS-CPS | These are compiled extracts of CPS data from 2000 and 2010. Original CPS-IPUMS data is not included in this repository, but code is included if these extracts are downloaded from IPUMS. | Yes, but see details
lpred_ld.dta, lpred_ls.dta | IPUMS-CPS and authors' analysis. | Derivative product of cps_00039.dat. These are intermediate data files used in robustness checks.
PoliticalEconomy/GSS_rawdata.txt | xxxxx |
PoliticalEconomy/occ_partyid.dta | xxxx and authors' analysis | Derivative product of GSS_rawdata.txt. This file includes estimates of party ID by occupation.
PoliticalEconomy/shor mccarty 1993-2014 state aggregate data public June 2015.dta | Shor and McCarty (2011) | Raw data on state legislator partisanship. | Yes
truth_licensing.xlsx | NCSL, IJ, others (see Appendix D), authors' analysis | Compilation across sources of state-occupation level licensing policies.
usa_00012.dat.zip | IPUMS-USA | Raw ACS data. Provided under terms of use, see above. Must be unzipped before analysis. | Yes

## Software Requirements

Stata (code was last run with StataSE 16). Dependencies are included in the CODE/ado file and are listed below.
- reghdfe (version 5.7.3, 13nov2019)
- ppmlhdfe (version 2.0.1, 05mar2019)
- ivreghdfe (version 1.0.0, 07jul2018)
- gcollapse (version 1.3.0, 11Jun2019)
- gegen (version 1.4.1, 26Jan2020)
- maptile (version 1.04, 5may2016)
- binscatter (version 7.02, 24nov2013)
- gunique (version 1.0.1, 23Jan2019)

## Controlled Randomness

Random seed is set at line 245 of program mc_simulate_measurementerror.do.

## Memory and Runtime Requirements

Approximate time needed to reproduce the analyses on a standard 2022 desktop machine: 3-14 days

The code was last run on a 2-core Intel-based laptop (late 2016 edition) with MacOS version 12.3.1

## Description of Programs/Code, Instructions to Replicators, and List of Tables and Programs

The provided code replicates all tables and figures in the paper.

See CODE/replicate_clean.do for a program that runs all cleaning code and explains their roles in reproducing the analysis dataset.

See CODE/replicate_analysis.do for a program that runs all the analysis code and associates each with the relevant tables/figures in the paper.

Due to long runtime, the code file clean/pca_control.do is commented out in clean/cps_dat_cleaner.do. Please remove the commenting-out or run clean/pca_control.do separately if you wish to reproduce this file.

The code file analysis/correlated_random_coefs.do must be manually adjusted to get the cases of other assumed elasticities (see code file for details).

## References

Carpenter, D.M., Sweetland, K., Knepper, L. and McDonald, J., 2017. License to work: A national study of burdens from occupational licensing.

Sarah Flood, Miriam King, Renae Rodgers, Steven Ruggles, and J. Robert Warren. Integrated Public Use Microdata Series, Current Population Survey: Version 6.0 [dataset]. Minneapolis, MN: IPUMS, 2018. https://doi.org/10.18128/D030.V6.0

Gittleman, M., Klee, M.A. and Kleiner, M.M., 2018. Analyzing the labor market outcomes of occupational licensing. Industrial Relations: A Journal of Economy and Society, 57(1), pp.57-100.

Steven Ruggles, Katie Genadek, Ronald Goeken, Josiah Grover, and Matthew Sobek. Integrated Public Use Microdata Series: Version 7.0 [dataset]. Minneapolis: University of Minnesota, 2017. http://doi.org/10.18128/D010.V7.0

Shor, Boris, 2020, "Aggregate State Legislator Shor-McCarty Ideology Data, July 2020 update", https://doi.org/10.7910/DVN/AP54NE, Harvard Dataverse, V1, UNF:6:PPNnE2bgMV3PZ8nP1fJtxg== [fileUNF]

SDA. 2018. General Social Survey (GSS) 1972-2010 Cumulative Datafile: Version 3.5 [dataset], https://sda.berkeley.edu/cgi-bin/hsda?harcsda+gss10.


