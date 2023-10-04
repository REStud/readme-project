This is a replication package for Pietro Bonaldi: "Motives and
Consequences of Libor Strategic Reporting: How Much Can We Learn from
Banks' Self -Reported Borrowing Rates?" (Review of Economic Studies)
This package contains:\
1) 4 "Main\_*.R \" files that replicate all tables and plots in the
paper and the Appendix\
2) 14 additional .R files that are called by the \" Main\_*.R" files\
3) A 'Results' folder with all tables and plots in the paper\
4) 5 additional folders with temporary files and results, all generated
by th e .R files included in the package

This document contains: a data available statement, a statement about
rights, data citations, descriptions of the analysis datasets, hardware
and software requirements, and instructions to replicators Data
Availabilit y Statement\
Bloomberg L.P.: access via university terminal subscription\
Libor submissions provided by banks in the 3month USD Libor panel from
09/03/2005 to 12/31/2010 The Bloomberg symbols are: US2003M, US6703M,
US0303M, US1403M, US1603M, US2803M, US340 3M, US5603M, US7503M, US0103M,
US7103M, US1903M, US4803M, US1803M, US3303M, USBN03M, US7603M, USSM03M,
US9903M, US2303M, US2203M 3month USD Libor from 09/03/2005 to 12/31/2010
The Bloomberg symbol is: US0003M New York Funding Rate from 06/02/2008
to 12/31/2010 The Bloomberg symbol is: NYFR3M Board of Governors of the
Federal Reserve System: Freely available online at FRED\
U.S Short -Term Interest Rates: Daily 3 -Month Eurodollar Deposit Rate
(DED3) 2005 -- 2010\
3Month Treasury Bill Secondary Market Rate, Discount Basis (DTB3) 2005
-- 2010\
TED Spread (TEDRATE) 2005 -- 2010\
IHS Markit: access via Wharton Research Data Services (WRDS)\
Credit Default Swaps Spreads for 5 -year senior unsecured debt issued by
banks in the USD Libor panel 2005--2010 Markit RedCode : 06DABK, 0G655D,
JJ4650, 189BFD, HK9FHL, 2H6677, 4G425R, 4I75AU, 4C933G, GLA86Z, 6BB62B,
NP4897, NUD88R, 8B69AP, HPHB2J, DMFCCI, Tier: SNRFOR, Ccy: EUR, DocCl
ause: CR Statement about Rights\
I certify that I am the author of the manuscript and have legitimate
access to and permission to use the data used in this manuscript I
acknowledge that I do not have permission to redistribute or publish the
data listed in the Data Citation below Data Citation\
Bloomberg L.P., 2014, Libor submissions provided by banks in the 3
-month USD Libor panel from 01/01/2005 to 12/31/2010 The Bloomberg
symbols are: US2003M, US6703M, US0303M, US1403M, US1603M, US2803M,
US3403M, US5603M, US7503M, US0103M, US7103M, US1903M, U S4803M, US1803M,
US3303M, USBN03M, US7603M, USSM03M, US9903M, US2303M, US2203M
Subscription Service (accessed 2014) Bloomberg L.P., 2014 3month USD
Libor from 09/03/2005 to 12/31/2010 Bloomberg symbol: US0003M (Accessed
2014)\
New York Funding Rate fr om 06/02/2008 to 12/31/2010 Bloomberg symbol:
NYFR3M (Accessed 2014)\
Board of Governors of the Federal Reserve System (US), 2014, U.S Short
-Term Interest Rates: Daily 3 -Month Eurodollar Deposit Rate (DED3) 2005
-- 2010, retrieved from FRED, Federal Reser ve Bank of St Louis;
https://fred.stlouisfed.org/series/DED3 ( Accessed 2014) Board of
Governors of the Federal Reserve System (US), 2014, 3Month Treasury Bill
Secondary Market Rate, Discount Basis (DTB3) 2005 -- 2010, retrieved
from FRED, Federal Reserv e Bank of St Louis;
https://fred.stlouisfed.org/series/ DTB3 (Accessed 2014) Board of
Governors of the Federal Reserve System (US), 2014, TED Spread (TEDRATE)
2005 -- 2010, retrieved from FRED, Federal Reserve Bank of St Louis;
https://fred.stlouisfed.or g/series/ TEDRATE (Accessed 2014) Markit ,
2014, Credit Default Swaps Spreads for 5 -year senior unsecured debt
issued by banks in the USD Libor panel 2005 --2010 Markit RedCode:
06DABK, 0G655D, JJ4650, 189BFD, HK9FHL, 2H6677, 4G425R, 4I75AU, 4C933G,
GLA86Z,\
6BB62B, NP4897, NUD88R, 8B69AP, HPHB2J, DMFCCI, Tier: SNRFOR, Ccy: EUR,
DocClause : CR (Accessed 2014) Analysis Datasets\
Please refer to the Data Availability Statement above for information on
how to access the raw data The file Code/Main\_ estimation.R loads two
analysis datasets described below (not included with this package) Data
file 1: Libor\_3M\_USD\_data.RData\
Sample: All daily Libor submissions for the 3 -month USD Libor by all
banks in the USD Libor panel from 01/04/2005 to 12/31/2010\
Data structure: An R data.frame with d aily panel data from 09/03/2005
to 12/31/2010 Contains the following variables: date.r: date of the
Libor submissions (R class: Date, format: "%Y -%m-%d") name: name of the
bank submitting a Libor quote (R class: chara cter) libor3m: Libor
submission (R class: numeric) libor3m\_fix: 3 -month USD Libor benchmark
rate (R class: numeric)\
H15\_M3: Daily 3 -Month Eurodollar Deposit Rate (R class: numeric)
nyfr3m: daily New York Funding Rate (06/02/2008 -- 12/31/2010) (R class:
num eric) ted: TED spread (R class: numeric) tbill3m: 3month Treasury
bill rate (R class: numeric)

Data construction: Download the daily Libor submissions by all banks in
the panel using the symbols below and merge all other variables by date
To match these Data with the CDS spreads data described below, use the
following names:\
Bloomberg symbol Name\
US0303M Barclays\
US6703M BOA\
US2003M BTMU\
US1603M Citi US2803M Credit Suisse\
US3403M Deutsche

Data file 2: CDSspreads\_2005\_2010.RData\
Sample: All daily Credit Default Swap (CDS) spreads for 5 -year senior
unsecured debt issued by banks in the USD Libor panel from 09/03/2005 to
12/31/2010 : Data structure: An R data.frame with daily panel data from
09/03/2005 to 12/31/2010 Contains the fol lowing variables: date.r: date
of CDS spread (R class: Date, format: "%Y -%m-%d") name: name of the
bank (R class: character) spread5y : CDS spread (R class: numeric)

Data construction: Start with the daily CDS spreads by banks in the
panel Banks are ident ified by their Markit RedCode Use only CDS on
unsecured senior debt (Tier: SNRFOR) , priced in Euro (Ccy: EUR) , and
with full restructuring (DocCaluse: CR) Define a new variable 'name'
using the rule below For each bank (name), redefine spread5y as the a
verage daily spread (a few banks may have more than one observation per
date) and collapse the data by name and date Merge all the other
variables by date RedCode name\
06DABK Barclays\
0G655D BOA\
JJ4650 BTMU\
189BFD Citi HK9FHL Credit Suisse\
2H6677 Deutsche\
4G425R HBOS\
4I75AU HSBC\
4C933G JPM GLA86Z Lloyds\
6BB62B Norinchuckin\
NP4897 Rabobank\
NUD88R RBS 8B69AP Societe Generale\
HPHB2J UBS DMFCCI WestLB

Hardware and Software Requirements\
All the programs were run on a PC with the following configuration
Hardware: AMD Ryzen Threadripper 3970X 32 -Core Processor, 128 GB of RAM
US9903M HBOS\
US7503M HSBC\
US1403M JPM US0103M Lloyds\
US7103M Norinchuckin\
US1903M Rabobank\
US4803M RBC US1803M RBS US5603M Societe Generale\
US3303M UBS US2303M WestLB Software: R version 4.1.3 (64 -bit), Windows
10 Pro\
R packages: data.table, kSamples, lmtest, optimx, parallel, sandwich,
stargazer, truncnorm

Total r unning ti me is approximately 155 minutes To install the latest
versions of the R packages on the default library directory run the
following line on the R console: install.packages(pkgs =
c("data.table","kSamples","lmtest","optimx","parallel","sandwich","stargazer","truncnorm"))

Instructions to Replicators\
1 Set the R working directory to the ' Code ' folder included in this
package by running setwd(' \[Location of the folder in your local
machine\]/Code \") 2 Build the datasets ' Libor\_3M\_USD\_data.RData '
and 'CDSspreads\_2005\_2010.RData' following the data construction steps
indicated in the Analysis Datasets section above Save them in the folder
' Code ' 3 Run 'Code/Main\_estimation.R' For faster execution, edit the
file and set: bootstrap.flag = FALSE (if FALSE uses pre -stored
confidence intervals If TRUE uses the bootstrap to compute confidence
intervals) counterfactual.flag = FALSE (If FALSE uses pre -stored
counterfactual libor rates If TRUE simulates counterfactual equilibria)\
4 Run 'Code/Main\_BNE\_simulation.R' (This works even if you skipped
steps 2 -3) 5 Run 'Code/Main\_estimation\_monte\_carlo.R' (This works
even if you skipped steps 2 -4) 6 Run 'Main\_BNE\_uniqueness\_test.R'
(This works even if you skipped steps 2 -5 using preloaded results)\
7 All Figures and Tables are stored in ' Code/Results ' as described
below Code/Main\_estimation.R : Loads two datasets:
Libor\_3M\_USD\_data.RData and CDSspreads\_2005\_2010.RData , estimates
all model parameters, performs inference using the bootstrap\
(bootstrap.flag = TRUE ), simulates counterfactuals (counterfactual.flag
= TRUE ), and produces:\
Figure 1 (left): 'Code/Results/cds\_mean\_spread.eps'\
Figure 1 (right): 'Code/Results/libor\_edr\_nyfr.eps'\
Figure 4 (left): 'Code/Results/Libor\_common\_cost\_spread.eps'\
Figure 4 (right):
'Code/Results/Libor\_common\_other\_costs\_spread.eps'\
Figure 5:
'Code/Results/Libor\_common\_other\_costs\_spread\_2005\_2008.eps'\
(using 'Libor\_common\_cost\_pre\_BNP\_plot.R')\
Figure 6: 'Code/Results/Libor\_common\_cost\_no\_signal.eps'\
Figure 7: 'Code/Results/counter factual\_libor\_manipulation.eps'\
Figure 9 Appendix: 'Code/Results/usd\_libor\_ted\_2007\_2010.eps'\
Table 1: 'Code/Results/Table1\_signaling\_exposure.csv'\
(using 'exposure\_signal\_tables.R')\
Table 2: 'Code/Results/table2\_reg\_signal\_cds\_spreads.tex'\
(using 'r eg\_signaling\_cds\_spreads.R')\
Table 3: 'Code/Results/Table3\_signal\_exposure\_robustness\_means.csv'\
(using 'exposure\_signal\_table\_robustness.R')\
Table 4: 'Code/Results/Table4\_Costs\_sd.csv'\
Table 6 Appendix: 'Code/Results/Table6\_appendix\_alpha\_signal.csv'\
(using 'exposure\_signal\_tables.R')\
Table 7 Appendix:
'Code/Results/Table7\_appendix\_signal\_exposure\_robustness.csv'\
(using 'exposure\_signal\_table\_robustness.R')\
Table 8 Appendix: 'Code/Results/Table8\_Costs\_sd\_all\_banks.csv'
Code/Main\_BNE\_simulation.R : Simulates the Bayes -Nash Equilirium of
the game and produces:\
Figure 2 (left): 'Code/Results/strategy\_no\_signal\_B0.eps'\
Figure 2 (right): 'Code/Results/strategy\_with\_signal\_B0.eps'\
Figure 3 (left):
'Code/Results/quotes\_distribution\_only\_signal\_B0.eps'\
Figure 3 (right):
'Code/Results/quotes\_distribution\_signal\_beta\_B0.eps'

Code/Main\_estimation\_monte\_carlo.R : Performs a Monte Carlo
simulation to evaluate the estimation method and produces:\
Figure 8 A ppendix: 'Code/Results/estimation\_MC\_simulation.eps'\
Table 5 Appendix:
'Code/Results/Table\_5\_estimation\_MC\_results\_table.csv'

Code/Main\_BNE\_uniqueness\_test.R : Loads
'Code/BNE\_unique\_test/estimation\_parameters\_p2.RData' produced by
'Code/Main\_estimation.R' and produces:\
Table 9 Appendix:
'Code/Results/Table\_equilibrium\_uniqueness\_test.csv' (using
'BNE\_unique\_test\_table.R')
