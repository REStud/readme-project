Overview
--------

The code in this replication package builds the datasets and runs the analyses for Fowlie et al. (2021), "Default Effects and Follow-on Behaviour: Evidence from an Electricity Pricing Program". This code will not run properly for users without access to the data, which are confidential. See Data Availability and Provenance Statements below for more detail.

Data Availability and Provenance Statements
----------------------------

The data used in this analysis are confidential. These data track sub-hourly electricity use for \~71,000 households in Sacramento, California prior to and during the field experiment. Authors gained access to these data under a confidentiality agreement that restricts access. The Department of Energy (DOE) entered into this confidentiality agreement with the Sacramento Municipal Utility district (SMUD) as part of a larger project that supported investment in (and evaluation of) smart metering infrastructure. This agreement established the terms under which the National Labs (NREL and LBNL) could access the data. Three of the authors are lab scientists at LBNL. The other three authors worked as subcontractors to LBNL which granted them access to these data. All analysis was done on secure LBNL servers. These data are currently curated and managed by LBNL. 

These restricted-use data cannot be shared outside of LBNL under the terms of the DOE contract. Researchers interested in accessing the data would need to first get approval from SMUD and then work with LBNL.  Negotiating data use agreements and accessing the data is a time-consuming process. The authors will assist with any reasonable replication attempts for two years following publication.

### Statement about Rights

- [x] I certify that the author(s) of the manuscript have legitimate access to and permission to use the data used in this manuscript. 

### Summary of Availability

- [ ] All data **are** publicly available.
- [ ] Some data **cannot be made** publicly available.
- [x] **No data can be made** publicly available.


Dataset list
------------

As stated above, the data used in this project are confidential and require an NDA for access. If access is granted, the recommended process is to use the processed (cleaned and serialized) datasets than the raw data, as the cleaned datasets have all been placed in a central location that will be conveniently preserved for access in the future. Accordingly, the following table lists the processed datasets.

| Data file                                     | Source                                | Notes                                                                                                                                                                                    | Provided |
|-----------------------------------------------|---------------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|----------|
| process_data/bills.fst                        | Sacramento Municipal Utility District | Billing data by customer. Confidential.                                                                                                                                                  | No       |
| process_data/bills_monthly.fst                | Sacramento Municipal Utility District | Billing data by customer, averaged by month. Confidential.                                                                                                                               | No       |
| process_data/CPPdays.qs                       | Sacramento Municipal Utility District | Critical Peak Pricing event days from the treatment period and simulate   event days from the pre-treatment period. Confidential.                                                        | No       |
| process_data/customer_characteristics.fst     | Sacramento Municipal Utility District | Customer characteristics data. Confidential.                                                                                                                                             | No       |
| process_data/SMUD_rates.csv                   | Sacramento Municipal Utility District | Electricity rate structures during the treatment period. Confidential.                                                                                                                   | No       |
| process_data/usage_pretreat_<group>.fst       | Sacramento Municipal Utility District | Hourly electricity usage by customer during weekdays pretreatment period   summer (2011). Confidental. <group> is one of the codes for the   experimental groups, e.g., RICTE or CCCCC.  | No       |
| process_data/usage_aprmay2012peak_<group>.fst | Sacramento Municipal Utility District | Hourly electricity usage by customer during April and May of 2012 during   peak hours. Confidental. <group> is one of the codes for the   experimental groups, e.g., RICTE or CCCCC.     | No       |
| process_data/usage_CPPdays_<group>.fst        | Sacramento Municipal Utility District | Hourly electricity usage by customer on CPP days during the summer.   Confidental. <group> is one of the codes for the experimental groups,   e.g., RICTE or CCCCC.                      | No       |
| process_data/usage_peak_<group>.fst           | Sacramento Municipal Utility District | Hourly electricity usage by customer during peak hours of the 2011-2013   summers. Confidental. <group> is one of the codes for the experimental   groups, e.g., RICTE or CCCCC.         | No       |
| process_data/usage_agg_<group>.fst            | Sacramento Municipal Utility District | Aggreggated summer electricity usage by peak and off-peak hours.   Confidential. <group> is one of the codes for the experimental groups,   e.g., RICTE or CCCCC.                        | No       |

Computational requirements
---------------------------

### Software Requirements

- **R version 4.0.3 (2020-10-10)**
	- scales(v.1.1.0)
	- xtable(v.1.8-4)
	- kableExtra(v.1.3.1)
	- stargazer(v.5.2.2)
	- cowplot(v.1.1.0)
	- survminer(v.0.4.8)
	- ggpubr(v.0.4.0)
	- survival(v.3.2-7)
	- mlogit(v.1.1-0)
	- dfidx(v.0.0-3)
	- lfe(v.2.8-5.1)
	- Matrix(v.1.2-18)
	- pbmcapply(v.1.5.0)
	- glue(v.1.4.2)
	- qs(v.0.23.4)
	- fst(v.0.9.4)
	- readxl(v.1.3.1)
	- zoo(v.1.8-7)
	- forcats(v.0.5.0)
	- stringr(v.1.4.0)
	- dplyr(v.1.0.2)
	- purrr(v.0.3.4)
	- readr(v.1.4.0)
	- tidyr(v.1.1.2)
	- tibble(v.3.0.4)
	- ggplot2(v.3.3.2)
	- tidyverse(v.1.3.0)
	- data.table(v.1.13.4)
	- modelsummary(v0.6.4)
	- broom(v0.7.2)
	- RStata(v1.1.1)
	- haven(v2.3.1)
- **STATA version 15**

### Memory and Runtime Requirements

#### Summary

Approximate time needed to reproduce the analyses on a standard 2020 desktop machine:

- [ ] <10 minutes
- [ ] 10-60 minutes
- [ ] 1-8 hours
- [ ] 8-24 hours
- [ ] 1-3 days
- [x] 3-14 days
- [ ] > 14 days
- [ ] Not feasible to run on a desktop machine, as described below.

#### Details

The code was last run on a 32-processor server running Windows 2012 Server with 1 TB of RAM. The code takes about 3 days to run all the way through. 

Description of programs/code
----------------------------

- `code/00-setup.R` loads all packages used, sets standard directory variables, and defines common functions.
- `code/01-load-data.R` builds all of the processed datasets used to create the tables and figures. It runs in about 24 hours.
- `code/02-analysis.R` is a master file that calls the individual scripts to create tables and figures, e.g., `Table3.R` and `FigureA1.R`. 

Instructions to Replicators
---------------------------

These instructions assume that the replicator has been granted access to the processed data files. 

- Open the R Project file `smud-default-bias.Rproj` to set the working directory.
- Run `code/02-analysis.R` to reproduce the analysis.
	- Note that it is not necessary to run `code/01-load-data.R` since its purpose is to create the processed data files.

List of tables and programs
---------------------------

The provided code reproduces:

- [ ] All numbers provided in text in the paper
- [ ] All tables and figures in the paper
- [x] Selected tables and figures in the paper, as explained and justified below.

| Data file                                     | Source                                | Notes                                                                                                                                                                                    | Provided |
|-----------------------------------------------|---------------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|----------|
| process_data/bills.fst                        | Sacramento Municipal Utility District | Billing data by customer. Confidential.                                                                                                                                                  | No       |
| process_data/bills_monthly.fst                | Sacramento Municipal Utility District | Billing data by customer, averaged by month. Confidential.                                                                                                                               | No       |
| process_data/CPPdays.qs                       | Sacramento Municipal Utility District | Critical Peak Pricing event days from the treatment period and simulate   event days from the pre-treatment period. Confidential.                                                        | No       |
| process_data/customer_characteristics.fst     | Sacramento Municipal Utility District | Customer characteristics data. Confidential.                                                                                                                                             | No       |
| process_data/SMUD_rates.csv                   | Sacramento Municipal Utility District | Electricity rate structures during the treatment period. Confidential.                                                                                                                   | No       |
| process_data/usage_pretreat_<group>.fst       | Sacramento Municipal Utility District | Hourly electricity usage by customer during weekdays pretreatment period   summer (2011). Confidental. <group> is one of the codes for the   experimental groups, e.g., RICTE or CCCCC.  | No       |
| process_data/usage_aprmay2012peak_<group>.fst | Sacramento Municipal Utility District | Hourly electricity usage by customer during April and May of 2012 during   peak hours. Confidental. <group> is one of the codes for the   experimental groups, e.g., RICTE or CCCCC.     | No       |
| process_data/usage_CPPdays_<group>.fst        | Sacramento Municipal Utility District | Hourly electricity usage by customer on CPP days during the summer.   Confidental. <group> is one of the codes for the experimental groups,   e.g., RICTE or CCCCC.                      | No       |
| process_data/usage_peak_<group>.fst           | Sacramento Municipal Utility District | Hourly electricity usage by customer during peak hours of the 2011-2013   summers. Confidental. <group> is one of the codes for the experimental   groups, e.g., RICTE or CCCCC.         | No       |
| process_data/usage_agg_<group>.fst            | Sacramento Municipal Utility District | Aggreggated summer electricity usage by peak and off-peak hours.   Confidential. <group> is one of the codes for the experimental groups,   e.g., RICTE or CCCCC.                        | No       |
