## Overview

This is the replication archive for Allcott, Kim, Taubinsky, and Zinman (2021): "Are High-Interest Loans Predary?" The code in this replication package constructs the analysis file using a combination of Python, Stata, and R. 

The code in this replication package uses three data sources. The first data source is confidential, and is a dataset of survey respondents merged with administrative data provided by the firm Purpose Financial. Due to contractual restrictions, we cannot post the data, so this archive contains only the code.

The second data source used is unemployment and income data publicly available from the Federal Reserve Bank of St. Louis. These are included in the replication package as `INUR.csv` and `INOPCI.csv`, respectively.


This archive contains six subfolders: _build_, _reduced\_form_, and _model_, which build the main dataset from from survey and Lender data, conduct all analyses and create all associated tables and figures, and calibrate our model and perform all simulations, respectively; _lib_, which sets globals used in various do files; _expert\_survey_, which is a stand-alone folder that constructs and analyzes responses from our expert survey; and _release_, which contains all of the figures and tables of the paper.

The file MakePaper.py runs the entire directory. It calls files that prepare the data, do the analysis, and compile the pdf file. 

## Data Availability Statements

This paper uses two types of data:

### Public Use Data Collected by the Authors

Data on Indiana income and unemployment come from the Federal Reserve Bank of St. Louis. 

Indiana's unemployment data is publicly available at <https://fred.stlouisfed.org/series/INUR> or in this replication package as `INUR.csv`. 

Indiana's income data is publicly available at <https://fred.stlouisfed.org/series/INOPCI> or in this replication package as `INOPCI.csv`

### Confidential survey and administrative data from Purpose Financial.

The data for this project are confidential and due to contractual restrictions, we cannot post the data. However, the data may be obtained with Data Use Agreements with Purpose Financial. Researchers interested in access to the data may contact Jessica Rustin, Chief Legal Counsel, at <jrustin@teampurpose.com>. The authors will assist with any reasonable replication attempts.

In addition, the experimental instructions and questionnaires are available in the Online Appendix, in Sections I and J. The experimental design, including the selection criteria and exclusions, are available in Section 4 of the main paper.


### Statement about Rights

I certify that the authors of the manuscript have legitimate access to and permission to use the data used in this manuscript.

## Computational Reuirements

### Software Requirements

Analysis was carried out in R version 3.5, Python version 3.7.1, and in Stata version 16.0.

If you are using a Windows computer, download and install the following font: [Doulos SIL](https://software.sil.org/doulos/download/). This font will be used to properly print unicode characters in graphs.

### Python libraries

The following Python libraries are required to run the replication package.

- `getpass`
- `gslab_scons`
   - This package can be downloaded using pip or by visiting <https://github.com/gslab-econ/gslab_python>

### R libraries

The following R libraries are required to run the replication package: `data.table`, `zipcode`, `stargazer` `ggplot2`, `ggthemes`, `pwr`, `readxl`, `gmm`, `readstata13`, `IDPmisc`, `boot`, `FixedPoint`, `rootSolve`, `gmm`, `cubature`, `hypergeo`, `optimx`.


## References

Purpose Financial. (2021). Confidential administrative data for Allcott, Kim, Taubinsky, and Zinman (2021). Unpublished data. 

U.S. Bureau of Labor Statistics, Unemployment Rate in Indiana [INUR], retrieved from FRED, Federal Reserve Bank of St. Louis; <https://fred.stlouisfed.org/series/INUR>.

U.S. Bureau of Economic Analysis and Federal Reserve Bank of St. Louis, Per Capita Personal Income in Indiana [INOPCI], retrieved from FRED, Federal Reserve Bank of St. Louis; <https://fred.stlouisfed.org/series/INOPCI>.

