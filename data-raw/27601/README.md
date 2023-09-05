# Overview

The code in this replication package constructs the analysis file from one data source (NielsenIQ Datasets) using R. 12 main files run all of the code to generate the data for 20 figures (8 main, 12 appendix) and 10 tables (4 main, 6 appendix) in the paper. 

The replicator should expect the code to run for a few days. 

# Data Availability and Provenance Statements

The [Nielsen Company](http://www.nielsen.com/us/en.html) provides various datasets through the Chicago Booth’s [Kilts Center for Marketing](https://www.chicagobooth.edu/research/kilts/).

+ Data access description: Researchers can subscribe to the data through the Kilts Center. There is a cost.
+ As per the Kilts Center’s policies (https://www.chicagobooth.edu/research/kilts/datasets/nielsen/policies), presentations, papers, and publications must include the following citation:

> “Researcher(s) own analyses calculated (or derived) based in part on data from The Nielsen Company (US), LLC and marketing databases provided through the Nielsen Datasets at the Kilts Center for Marketing Data Center at The University of Chicago Booth School of Business.”

> “The conclusions drawn from the Nielsen data are those of the researcher(s) and do not reflect the views of Nielsen. Nielsen is not responsible for, had no role in, and was not involved in analyzing and preparing the results reported herein.”

Adding those paragraphs into the title page footnote has been found to be sufficient in past papers (see Kilts Center SSRN).

+ Ability to redistribute extracts: Unknown
+ Ability to redistribute aggregated data: Unknown

### Statement about Rights

+ I certify that the author(s) of the manuscript have legitimate access to and permission to use the data used in this manuscript.

### Summary of Availability

- No data can be made publicly available.

### Details on each Data Source

NielsenIQ Retail Scanner (RMS) and Consumer Panel (HMS) data are provided by the Kilts Center at the University of Chicago Booth School of Business (NielsenIQ, 2022).

### Dataset list

| **Data file**                                                | Source                                                       | Notes                               | Provided |
| ------------------------------------------------------------ | ------------------------------------------------------------ | ----------------------------------- | -------- |
| `/kilts/nielsen_extracts/RMS/[year]/Movement_Files/[group number]_[year]/[module number]_[year].tsv` | Nielsen IQ, accessed thru the Kilts Center for Marketing at the University of Chicago Booth School of Business | 41 groupXmodule pairs were selected | No       |
| `/kilts/nielsen_extracts/RMS/[year]/Annual_Files/stores_[year].tsv` | Nielsen IQ, accessed thru the Kilts Center for Marketing at the University of Chicago Booth School of Business | 41 groupXmodule pairs were selected | No       |
| `/kilts/nielsen_extracts/HMS/[year]/Annual_Files/purchases_[year].tsv` | Nielsen IQ, accessed thru the Kilts Center for Marketing at the University of Chicago Booth School of Business | 41 groupXmodule pairs were selected | No       |
| `/kilts/nielsen_extracts/HMS/[year]/Annual_Files/trips_[year].tsv` | Nielsen IQ, accessed thru the Kilts Center for Marketing at the University of Chicago Booth School of Business | 41 groupXmodule pairs were selected | No       |
| `/kilts/nielsen_extracts/HMS/[year]/Annual_Files/panelists_[year].tsv` | Nielsen IQ, accessed thru the Kilts Center for Marketing at the University of Chicago Booth School of Business | 41 groupXmodule pairs were selected | No       |
| `InterimData/data_[group]_[module].Rds`                      | Nielsen IQ, accessed thru the Kilts Center for Marketing at the University of Chicago Booth School of Business | cleaned version of the raw data     | No       |



# Computational Requirements

### Software Requirements

- R 4.2.0
  - tidyverse
  - broom
  - lfe
  - lubridate
  - fixest
  - viridis
  - ggthemes
  - scales
  - distr
  - ggpubr
  - stargazer

### Controlled Randomness

Random seed is set at line of program.

- Line 87 in `03_supply_multiproduct_optimal_pricing_simulation.R`
- Line 17 in `03_Supply2_SupplySideBS.R`

### Memory and Runtime Requirements

The code was last run on a **150 machine cluster (some of the code), consuming a few days**

### Description of code

#### Highlevel overview

- `replication_package` contains all programs to generate tables and figures in the main body and appendix of the article. Output files are saved in `Output/` and to see corresponding output names to the table and figure numbering, refer to List of tables and code section below. 
- Programs can be roughly divided into 5 parts: Data building (programs starting with `01[a-c]_`), demand side (programs starting with `02_`), supply side (starting with `03_`), welfare (starting with `04_`), and figures and tables (starting with `05_`)

#### Instructions to Replicators

- Open `LDB99_rep_code.Rproj` to set to the correct working directory—ensuring all relative paths will run.
- First run `01a_build_clean_chains.R` and `01b_build_by_module.R` to clean data. Then run the demand side (programs starting with `02_`). Programs for supply side (starting with `03_`), welfare (starting with `04_`) can be run in any order. Lastly, run figures and tables programs (starting with `05_`). `01c_HMS_nielsen_code.R` requires `thetas` created from `02a_resids_drop_and_thetas.R` and `02b_resids_drop_and_thetas.R`. 

#### Details

##### Data building

* `01a_build_clean_chains.R`
  * **Implementation:** Run as whole, refer to `submit_01a_build_clean_chains.sh` for submission script
  * **Description:** build clean stores and chains for `01_build_by_module.R`
  * **Output:** `clean_data_chains_raw.Rds`, `clean_data_chains.Rds`
* `01b_build_by_module.R`
  * **Implementation:** Run as whole, refer to `submit_01b_build_by_module.sh` for submission script
  * **Description:** Cleans the raw data, creates necessary variables for analysis, saves summary statistics after each step and one summary statistics at the end for each group-module pair.
  * **Output:** (henceforth,# corresponds to array number or number) 41 `step_sum_grp#_module#.Rds`, 41`sumstat_grp#_module#.Rds`, and 41 `data_grp#_module#.Rds` (one per group-module combo)
* `01c_HMS_nielsen_code.R`
  * **Implementation:** Run as whole, refer to `submit_01c_hms_builld.sh` for submission script
  * **Description:** Extracts relevant upcs from `theta` files, reads purchase data, adds trips data on when those items were purchased, adds panelists characteristics. For each `upcXyear`, calculates quantities purchased and purpose of the purchase per-unit price in each trip by each household. Summarizes demographics and other information at the upc level and saves it. Note: requires`thetas#.Rds` from `02_resids_drops_and_thetas_nofilter1500.R`.  
  * **Output:** `upcs.hh.nielsen.data.Rds`

##### Demand Side

- `02a_resids_drops_and_thetas.R`
  
  * **Implementation:** Run as array (1-41), refer to `submit_02a_resids_drops_thetas.sh` for submission script
  * **Description:** For each array, calculates elasticities, drops, and thetas at different levels (moduel, upcXchain, upc, moduleXchain) and different specifications (OLS, iv, floor, 5th degree polynomials, semi-elasticity), and saves it.
  * **Output:** 
    * `elasticities.ols.semi.floor.upcXchain#.Rds`
    * `elasticities.ols.semi.floor.upc#.Rds` 
    * `elasticities.ols.semi.floor.module#.Rds`
    * `elasticities.ols.semi.floor.moduleXchain#.Rds`
    * `elasticities.ols#.Rds`
    * `elasticities.iv#.Rds`
    * `elasticities.ols.5th.deg.poly#.Rds`
    * `elasticities.ols.semi.elasticity#.Rds`
    * `drops#.Rds`
    * `thetas#.Rds`
  
  `02b_resids_drops_and_thetas.R`
  
  * **Implementation:** Run as a single high memory machine, refer to `submit_02b_resids_drops_thetas.sh` for submission script
  * **Description:** Loads the entire data, calculates elasticities, drops, and thetas at different levels (by chain, aggregated) and a single specification (OLS semi-elasticity), and saves it.
  * **Output:** 
    * `elasticities.ols.semi.floor.chain.Rds`
    * `elasticities.ols.semi.floor.aggregated.Rds`
    * `drops.agg.Rds`
    * `thetas.agg.Rds`

##### Supply Side

* `03_supply1_multiproduct_optimal_pricing_simulation.R`
  * **Implementation:** Run as array (1-250), refer to `submit_03_supply_opt_pricing_sim.sh` for submission script
  * **Description:** For each array, simulates a distribution of cost, elasticities, and perceived left-digit bias, calculates optimal prices and profit given perceived parameters and profit given prices but potentially different left-digit bias, and saves it.
  * **Output:** 250 `prices_#.Rds`
* `03_Supply2_SupplySideBS_createpdf.R`
  * **Implementation:** Run as whole, refer to `submit_03_supplysideBS_createpdf.sh` for submission script
  * **Description:** Create price distribution - by upcXchain (module), clean.flag, on.sale, suspected.price, and spell.length.
  * **Output:** `pdf.detailed.Rds`
* `03_Supply3_SupplySideBS.R`
  * **Implementation:** Run as array (1-301), refer to `submit_03_supplysideBS.sh` for submission script
  * **Description:** For each array, estimates parameters of as if pricing procedures. Uses various samples of price distributions and various assumptions.
  * **Output:** 301 `supply.side.estimates_temp_array#_elasticity#.Rds`
* `03_supply4_counterfactuals.R`
  * **Implementation:** Run as whole, refer to `submit_03_supply_counterfactuals.sh` for submission script
  * **Description:** Runs a counterfactual exercise comparing gross profits under optimal price setting to different sub-optimal cases. 
  * **Output:** `counterfactuals.Rds`

##### Welfare

* `04_welfare_code.R`
  * **Implementation:** Run as whole, refer to `submit_04_welfare.sh` for submission script
  * **Description:** Solves for optimal prices in a setting with distributed values for a product and left-digit-bias of consumers, and shows the welfare effects of stronger/weaker left-digit-bias for six different distributions. 
  * **Output:** One of each for each distribution
    * `[dist]PHists.png`
    * `[dist]Share99s.png`
    * `[dist]WelfareFull.png`
    * `[dist]WelfareThetaSoph.png`
    * `[dist]WelfareUnderest.png`

##### Figures and Tables

* `05_figures.R`

  * **Implementation:** Run as whole, refer to `submit_05_figures.sh` for submission script
  * **Description:** Creates various figures and tables for the paper.
  * **Output:** See section List of tables and code for more details.

* `05_summary_tables.R`

  * **Implementation:** Run as whole, can be done locally
  * **Description:** Reads summary statistics and step summaries from `01b_build_by_module.R`, cleans and saves as LaTex tables. Reads 41 modules used in the analysis and creates a summary statistics table containing module description, full and cleaned revenues, and numbers of products. 
  * **Output**: See section List of tables and code for more details.

  

### List of tables and code

The provided code reproduces:

- All numbers provided in text in the paper
- All tables and figures in the paper

| Figure/Table # | Program                    | Output file                                                  | Note                                     |
| -------------- | -------------------------- | ------------------------------------------------------------ | ---------------------------------------- |
| Figure 1       | `05_figures.R`             | `Fig1a.pdf` , `Fig1b.pdf`                                    |                                          |
| Figure 2       | `05_figures.R`             | `fig2_Non parametric demand module 1463 - 37 products.pdf`   |                                          |
| Figure 3       | `05_figures.R`             | `residuals.ols.pdf`                                          |                                          |
| Figure 4       | `05_figures.R`             | `fig4_theta.semi.estimates.pdf`                              |                                          |
| Figure 5       | `05_figures.R`             | `figure5_both panels.pdf`                                    |                                          |
| Figure 6       | `05_figures.R`             | `fig6_histogram.clean.prices.pdf`                            |                                          |
| Figure 7       | `05_figures.R`             | `fig7_demand_vs_supply_thetas.pdf`                           |                                          |
| Figure 8       | `fig8_welfare_figures.tex` | Compile the `.tex` file to create `fig8_welfare_figures.pdf` |                                          |
| Table 1        | `05_summary_tables.R`      | `total_summary_statistics.tex`                               |                                          |
| Table 2        | `05_figures.R`             | `table2.thetas.csv` and `table2.drops.csv`                   |                                          |
| Table 3        | `05_figures.R`             | `table3 perceived estimates.csv`                             |                                          |
| Table 4        | `05_figures.R`             | `table4 - main counterfactuals.csv`                          |                                          |
| Figure A-1     | `05_figures.R`             | `residuals.iv.pdf`, `residuals.semi.elasticity.pdf`, `residuals.5th.pdf`, and `residuals.upcXchain.pdf` |                                          |
| Figure A-2     | `05_figures.R`             | `figA2_drops_distribution.pdf`                               |                                          |
| Figure A-3     | `05_figures.R`             | `figA3_price.ending.cdf.by.first.digit.pdf`                  |                                          |
| Figure A-4     | `05_figures.R`             | `figA4_empirical_and_predicted_cdf_fit_example.pdf`          |                                          |
| Figure A-5     | `05_figures.R`             | `figA5_moments_and_model_fit_example.pdf`                    |                                          |
| Figure A-6     | `05_figures.R`             | `figA6_rule_of_thumb_heterogeneity.pdf`                      |                                          |
| Figure A-7     | `05_figures.R`             | `figA7_perceived_parameters_heterogeneity.pdf`               |                                          |
| Figure A-8     | `05_figures.R`             | `figA8_average_price_by_ldb.png`                             |                                          |
| Figure A-9     | `05_figures.R`             | `figA9a_two products illustration price schedule.pdf` and `figA9b_two products illustration NLP.pdf` |                                          |
| Figure A-10    | `05_figures.R`             | `figA10_data_description_real_on_sale_nielsen.pdf`           |                                          |
| Figure A-11    | `05_figures.R`             | `figA11_hms_correlates.pdf`                                  |                                          |
| Figure A-12    | `05_figures.R`             | `figA12a_demand vs supply thetas elasticity estimated.pdf` and `figA12b_demand vs supply elasticities estimated.pdf` |                                          |
| Table A-1      | `05_figures.R`             | `table2.drops.csv` and `table2.thetas.csv`                   |                                          |
| Table A-2      | `05_figures.R`             | `best fit model.csv`                                         |                                          |
| Table A-3      | `05_figures.R`             | `table4 - robustness counterfactuals.csv`                    |                                          |
| Table A-4      | `05_summary_tables.R`      | `41_modules_summary_tbl.tex`                                 | Reference: DellaVigna and Gentzkow, 2019 |
| Table A-5      | `05_summary_tables.R`      | `sum.step_sum_combined.html`                                 |                                          |
| Table A-6      | `05_figures.R`             | `product characteristics correlates.tex`                     |                                          |

### References 

NielsenIQ. 2022. NielsenIQ data provided by the Kilts Center for Marketing 2006 – 2019. NielsenIQ data at the Kilts Center for Marketing, Chicago, IL. Accessed on 08-05-2022.
