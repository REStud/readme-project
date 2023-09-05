           __________________________________________________

            REPLICATION PACKAGE FOR ``WHICH INVESTORS MATTER
               FOR GLOBAL EQUITY VALUATIONS AND EXPECTED
                               RETURNS?''
           __________________________________________________


This folder contains the replication materials necessary to reproduce the
results in ``Which Investors Matter for Global Equity Valuations and
Expected Returns?'' by Ralph S.J. Koijen, Robert J. Richmond, and
Motohiro Yogo in The Review of Economic Studies.


1 Data Availability Statement
=============================

  The data used for this project are owned by and was obtained from the
  following third party data providers. The data cannot be made publicly
  available, but can be obtained from the data providers:

  - Compustat -- Capital IQ. Available on WRDS
    (<https://wrds-www.wharton.upenn.edu/>). Standard and Poor’s (2020).
  - Center for Research in Security Prices (CRSP). Available on WRDS
    (<https://wrds-www.wharton.upenn.edu/>). Center for Research in Security Prices (2020).
  - FactSet. Obtained via license from
    FactSet. (<https://www.factset.com/>). FactSet (2020).
  - IBES. Available on WRDS (<https://wrds-www.wharton.upenn.edu/>). Institutional Brokers' Estimate System (2020).
  - ISS: Institutional Shareholder Services. Available on WRDS
    (<https://wrds-www.wharton.upenn.edu/>). Institutional Shareholder Services (2020).
  - Ken French Data Library
    (<https://mba.tuck.dartmouth.edu/pages/faculty/ken.french/data_library.html>). French (2020).
  - Sustainalytics -- Capital IQ. Available on WRDS
    (<https://wrds-www.wharton.upenn.edu/>). Morningstar (2020).


2 Dataset List
==============

  The directory `RawData/' should contain the following files which can
  be obtained as specified:

  - `RawData/Compustat/20201221/compustat_q.dta':
    <https://wrds-www.wharton.upenn.edu/pages/get-data/center-research-security-prices-crsp/annual-update/crspcompustat-merged/fundamentals-quarterly/>
  - `RawData/Compustat/20201221/compustat_a.dta':
    <https://wrds-www.wharton.upenn.edu/pages/get-data/center-research-security-prices-crsp/annual-update/crspcompustat-merged/fundamentals-annual/>
  - `RawData/CRSP/20201221/stocks_monthly.dta':
    <https://wrds-www.wharton.upenn.edu/pages/get-data/center-research-security-prices-crsp/annual-update/stock-security-files/monthly-stock-file/>
  - `RawData/FactSet/Unzipped/': Unzipped txt files from the FactSet Ownership database.
  - `RawData/ISS/20200925.dta':
    <https://wrds-www.wharton.upenn.edu/pages/get-data/institutional-shareholder-services-iss/governance/governance/>
  - `RawData/KFF/Fama-French Factors Monthly.dta':
    <https://mba.tuck.dartmouth.edu/pages/faculty/ken.french/data_library.html>
  - `RawData/Sustainalytics/CIQCUSIP.csv':
    <https://wrds-www.wharton.upenn.edu/pages/get-data/compustat-capital-iq-standard-poors/capital-iq/identifiers/identifiers/>
  - `RawData/Sustainalytics/scores_weighted.dta':
    <https://wrds-www.wharton.upenn.edu/pages/get-data/sustainalytics/sustainalytics-north-america-only/historical-weighted-scores/>
  - `RawData/KY/Data1.fst': Data panel from Koijen and Yogo (2019)
    JPE. Can be reproduced using code available at <https://www.journals.uchicago.edu/doi/abs/10.1086/701683?mobileUi=0>
    which produces `data1.dta', which should be placed in `RawData/KY19/'. The program `Convert_KY.R' converts this file from
    `dta' to `fst' for use in other R programs.


3 Computational requirements
============================

  The computation for this project was done on a computer running
  ArchLinux with the following specifications:

  - 2 x AMD EPYC 7402 24-Core Processor
  - 512GB RAM
  - 8TB SSD Storage

  With the exception of the cross-validation, running the analysis takes
  approximately 2 hours for the main tables and 6 hours for the appendix
  tables when the code is run in parallel across 40 cores as
  written. The cross validation in `Code/Estimation_CV.R' was run on the
  NYU Greene Computing Cluster. This takes approximately 4-6 hours
  depending on the amount of compute units available.


4 Software requirements
=======================

  - All analysis code is written in R and was run on a linux machine running ArchLinux.
  - R version 4.3.0
  - The following R packages are loaded by `Code/Path.R' and are used
    throughout the analysis:
  ,----
  | dqrng 0.3.0        scales 1.2.1       cowplot 1.1.1     
  | ggrepel 0.9.3      ggplot2 3.4.2      fixest 0.11.1     
  | gridExtra 2.3      fastDummies 1.6.3  textclean 0.9.3   
  | texreg 1.38.6      forcats 1.0.0      modelsummary 1.4.0
  | kableExtra 1.3.4   dplyr 1.1.2        doMC 1.3.8        
  | iterators 1.0.14   doFuture 1.0.0     future 1.32.0     
  | foreach 1.5.2      broom 1.0.4        lfe 2.9-0         
  | Matrix 1.5-4       roll 1.1.6         readstata13 0.10.1
  | RcppRoll 0.3.0     Hmisc 5.1-0        stringr 1.5.0     
  | haven 2.5.2        zoo 1.8-12         lubridate 1.9.2   
  | fst 0.9.8          purrr 1.0.1        data.table 1.14.8
  | pracma 2.4.2       RPostgres 1.4.5    progressr 0.13.0
  `----


5 Description of programs/code
==============================

  - All programs are available under the `Code/' directory.
  - Running `Code/Run.R' will run these programs in the appropriate
    order and contains comments which explain what each of the groups of
    programs do.
  - The final output of these programs is placed in the `Tables/' and
    `Figures/' directory which contain the tables and figures used in
    the paper.
  - There are files labeled `Code/Support_*.R' that contain support
    functions which are used in various other scripts.
  - There are files labeled `Code/Functions_*.R' that contain functions
    for estimation of demand curves and computation of counterfactuals.
  - `Code/Tables_Main.R' and `Code/Tables_Appendix.R' output the final
    Tables and Figures once the other programs have been run.


6 Instructions to Replicators
=============================

  - Download all data specified in `Dataset List' above to the
    appropriate sub directories.
  - `Code/Import_Compustat_Segments.R' and `Code/Import_IBES.R' download
    data directly from WRDS (<https://wrds-www.wharton.upenn.edu/>). You
    will need to put a username and password into these files for them
    to run.
  - Adjust `Code/Path.R' to reflect the paths where the raw data has
    been stored if necessary.
  - Run the programs listed in `Code/Run.R' in the order specified.
  - Note that `Code/Estimation_CV.R' is designed to be run on a
    computing cluster, so `CleanData/DataEstimation.fst' will need to be
    transferred to the particular computing cluster along with the
    Programs in `Code/'. The estimated parameters from the
    cross-validation are copied into the file `Code/Estimation_NL_*.R'.

7 References
============

Center for Research in Security Prices (CRSP). 2020. Center for Research in Security Prices Database. Wharton Research Data Services. Accessed December 21, 2020. https://wrds-www.wharton.upenn.edu/.

FactSet. 2020. FactSet Database. Accessed December 21, 2020. https://www.factset.com/.

French, Kenneth. 2020. Ken French Data Library. Tuck School of Business at Dartmouth. Accessed December 21, 2020. https://mba.tuck.dartmouth.edu/pages/faculty/ken.french/data_library.html.

Institutional Brokers' Estimate System (IBES). 2020. Institutional Brokers' Estimate System Database. Wharton Research Data Services. Accessed December 21, 2020. https://wrds-www.wharton.upenn.edu/.

Institutional Shareholder Services (ISS). 2020. Institutional Shareholder Services Database. Wharton Research Data Services. Accessed December 21, 2020. https://wrds-www.wharton.upenn.edu/.

Morningstar. 2020. Sustainalytics Database - Morningstar. Wharton Research Data Services. Accessed December 21, 2020. https://wrds-www.wharton.upenn.edu/.

Standard and Poor’s (S&P). 2020. Compustat-Capital IQ. Wharton Research Data Services. Accessed December 21, 2020. https://wrds-www.wharton.upenn.edu/.
