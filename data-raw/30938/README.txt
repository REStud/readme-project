Replication code for "The Darwinian Returns to Scale" by David Baqaee, Emmanuel Farhi, and Kunal Sangani.

#########################################
# Package contents
#########################################

1. driver.py
Purpose: Generates all tables and figures in the text. Specifically, driver.py outputs Tables 1-3 in the main text, Figures 2-4 in the main text, and Appendix Tables B.1-B.3, D.2, G.1, I.1-I.2, K.1, and N.1, and Appendix Figures B.1-B.3, and N.1.
Note: For many tables (e.g., Tables 1-3 in the main text), driver.py generates four columns, corresponding to boundary conditions (mu_bar = 1.045 with efficient selection, mu_bar = 1.045 with efficient entry, mu_bar = 1.09 with efficient selection, and mu_bar = 1.09 with efficient entry). In the final text, for parsimony only the final two columns are reported (mu_bar = 1.09 with efficient selection, and mu_bar = 1.09 with efficient entry).

2. main_fitting.m
Purpose: Fits smooth curves to pass-through estimates by firm size provided by Amiti et al. (2019) and to the sales distribution from Belgian VAT data. Uses Data/DataFigA2.xlsx to create the Data/Prod_Ups_ODE.xlsx file, which is used by driver.py. We have already included the Data/Prod_Ups_ODE.xlsx file, so it is optional to rerun this program and regenerate that file.

3. support_functions.py and klenow_willis.py
Purpose: Provide additional functions that are used in driver.py.

4. ODE_Store
Purpose: This folder caches solutions to the non-parametric calibration approach for various values of the boundary conditions to speed up driver.py. When the solution has already been generated and is stored in ODE_Store, support_functions.py will use the saved version. Clear the cache in ODE_Store to re-run all calibration procedures from scratch.

5. Functions and SLMtools
Purpose: Additional functions that are used by main_fitting.m

6. logfile.txt
Logged output from running driver.py.
The following tables can be found in the logfile.
Table 1: Lines 4-20
Table 2: Lines 22-35
Table B.1: Lines 37-53
Table 3: Lines 55-69
"How important is selection?": Lines 71-86
Table D.2: Lines 88-104
Table B.2: Lines 106-125
Table B.3: Lines 127-146
Table G.1: Lines 148-158
Table I.1: Lines 160-175
Table I.2: Lines 177-189
Table K.1: Lines 191-202
Table N.1: Lines 204-220

7. requirements.txt
List of Python package dependencies. These can be installed using "pip install -r requirements.txt" as a first step.


#########################################
# Dataset list
#########################################

1. Data/DataFigA2.xlsx
Description: Estimates of pass-through by firm size from Amiti et al. (2019). These estimates were shared with the authors by the Mary Amiti, Oleg Itskhoki, and Jozef Konings. 

2. Data/Prod_Ups_ODE.xlsx and Data/Prod_Ups_ODE_product.xlsx
These files are generated using the main_fitting.m file (i.e., they are not primitive data sources). See the description in "Package contents" under "main_fitting.m" above.

#########################################
# Data Availability Statement
#########################################

Data Availability Statement: The sole data requirement for this replication package are estimates from Amiti et al. (2019) on pass-through by firm size. These data are available in this replication package in the file Data/DataFigA2.xlsx. These data were shared with the authors by Mary Amiti, Oleg Itskhoki, and Jozef Konings. Note that the estimates in Data/DataFigA2.xlsx are also plotted in the published version of "International Shocks, Variable Markups, and Domestic Prices" (Review of Economic Studies, 2019) available at https://itskhoki.com/papers/DomesticPrices.pdf, in Figure A1.

#########################################
# Computational requirements
#########################################

###############################
# Software requirements

1. driver.py is executed using Python 3.9.6. (It may run with earlier versions of Python, but we have not tested compatibility across versions.)
Package dependencies:
matplotlib==3.6.3
numpy==1.24.2
pandas==1.5.3
scipy==1.10.1
statsmodels==0.13.5
tikzplotlib==0.10.1

These are also included in the requirements.txt file and can be installed using "pip install -r requirements.txt" as a first step.

2. main_fitting.m is run with MATLAB R2022b. (It may run with earlier versions of Matlab, but we have not tested compatibility across versions.) 
Note that the MathWorks Optimization Toolbox may have to be installed for the script to run.

###############################
# Memory and runtime requirements

Approximate time needed to reproduce the analyses on a standard 2023 desktop machine: 1-2 hours.

Details: The code was last run on a 10-core Apple M1 Pro-based laptop with MacOS version Ventura 13.3.1.

#########################################
# Data citations
#########################################

Data/DataFigA2.xlsx contains data on the size distribution of Belgian manufacturing firms from Belgian VAT data and data underlying Figure A2 from:
Amiti, Mary, Oleg Itskhoki, and Jozef Konings. "International shocks, variable markups, and domestic prices." The Review of Economic Studies, 86(6), 2356-2402.

All other outputs are generated from files within this folder.
