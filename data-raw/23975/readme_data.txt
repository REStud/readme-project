Readme File DATA

Appendix A-1 in the Online Appendix (replicated in data_appendix.pdf) describes the sources, the sample, and variables used.
We use data from Compustat North America Fundamentals Annual and LoPucki Bankruptcy Data as our main sources of data.
We are not allowed to distribute Compustat Data or the LoPucki Bankruptcy Data set used to construct our estimates since they are proprietary data.
We provide a file usdata.csv with Consumer Price Index (CPI) and Federal Funds Rates (rf) that we used
as well as a set of Stata (.do) files that were used to compute the estimates in the paper (Tables 1, 2, and 3 as well as Figures 3, 4, and 6).

We access Compustat trough Wharton Research Data Service (WRDS).  To request an account please visit:
https://wrds-www.wharton.upenn.edu/
Data pulled from WRDS, Compustat - Capital IQ, North America, Fundamentals Annual
Download variables and footnotes in separate files. See file vars_compustat.txt for full list of variables to be downloaded.
Variables needed with "footnotes": AT.

Compustat data has been used for example by
Hennessy, Christopher A., and Toni M. Whited. "Debt dynamics." The journal of finance 60.3 (2005): 1129-1165.

We access The UCLA-LoPucki Bankruptcy Research Database (BRD) at
https://lopucki.law.ucla.edu/index.htm

We merge the two samples using gvkey codes and date.  Once the sample is merged we use the do files that we describe below.

Using the .do files provided below we construct the estimates for 
> Table 1, 
> Table 2, 
> Table 3,
> Figure 4, 
> Figure 5, and 
> Figure 6

Stata .do files provided and description:
------------------------------------------------

1. aux01.do: basic cleaning of data and naming some variables

2. aux02.do:
   cleans outliers, define some variables (net debt, assets, cash-flow, equity issuance,...), 
   computes ratios to assets, computes time series std for some variables and statistics for equity issuance
   computes distance to default measure and z-score

3. aux03.do: creates entry, exit, bankruptcy indicators, bankruptcy stats

4. aux04.do: computes entry, exit, bankruptcy rates reported in Table 1 and Table 3.

5. aux05.do: computes moments of distributions conditional on firm status (non-bankruptyc, CH 11, CH 7)
			 		  * Non-bankrupt firm = dummy for ch11_ind=0, del_ch7=0, exit =0
			 		  * CH 11 firms: first year of ch 11 bankruptcy
			 		  * CH 7 deleted firms that are liquidated
   	    This file generates data values reported in Table 1, Table 3, and Figure 4.

6. aux06.do: Runs regression to compute autorcorrelation and standard deviation of z presented in Table 2.

7. aux07.do: Performs Event analysis (data) presented in Figures 5 and 6.

