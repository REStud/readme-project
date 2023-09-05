This is a replication package for Charles Engel and Steve Pak Yeung Wu: Liquidity and Exchange Rates: An Empirical Investigation (Review of Economics Studies)

All do files can be ran independently.

Hardware and time requirement: Progam is ran with a PC of processor Intel Core i7-1065G7, 16 RAM.
Total runtime of file 1), 2), 4), 5), 6), 8), 10) below are less than 10 mins.
Total runtime of file 3), 7), 9) below (GLS) file are about 4 hours.
Total runtime of RES_structural_estimation_exercise.m is less than 1 min.

The package contains 
A) two sets of data +  an excel file
B) 10 STATA do files
C) one Matlab code
D) a "Results" folder that contains all the outputs from the do files

These programs are ran on STATA 16 and MATLAB 2019b.

Explanation of A)
There are two sets of data (data_replication.dta, data_EM_replication.data). One for the main analysis and the other one for the Emerging market regression described in Section 3.2. The excel file ("variables_definition.xlsx") explains the variables' names. The dataset is stored in .dta format

Explanation of B)
There are 10 STATA do files that take the two .dta from 1) to reproduce figures, and tables in the main text. 

STATA package installations: 
sum2docx: install by typing on STATA command window
ssc install sum2docx
xtscc: install by typing on STATA command window
ssc install xtscc

For Table 1A-1G, 2A-2B, 3A and 4, there are two sets of code to generate all the information in the table.
The first program uses a self-written code to compute the estimates and GLS standard errors (file name ends with _GLS).
The second program uses STATA command xtscc to compute the estimates and within R2 (file name ends with xtscc)
(it also produces Driscoll Kraay standard errors, but we reported GLS standard errors in the paper)
So one needs to take the first program to obtain estimates, and standard errors and the second program to obtain within R2 for the Tabes reported in the paper. One needs to install xtscc by typing "ssc install xtscc" to complete the installation.

In each STATA file, there is a line at the very beginning 
global path "C:\Users\steve\Dropbox\Joint Project\Engel Wu - Liquidity and Exchange Rates"
change the C:\Users\steve\Dropbox\Joint Project\Engel Wu - Liquidity and Exchange Rates to your own path.

1) RES_submission_figure1.do reproduces figure 1 in the paper (will be saved in png files)
2) RES_submission_summary_stat.do reproduces summary statistics in Appendix A3 (need to install sum2docx using ssc install sum2docx,will be saved in docx file)
3) RES_submission_Table1A_Table3A_GLS.do gives estimates and GLS s.e. of Table 1A-1G, 2A-2B and 3A (will be saved in csv files)
4) RES_submission_Table1A_Table3A_xtscc.do gives estimates, Driscoll Kraay s.e. and within R2 of Table 1A-1G, 2A-2B and 3A (will be saved in csv files)
5) RES_submission_Table2C.do reproduces the variance covariance of variables in Table 2C (will be printed on the screen, see RES_Table2C.xlsx)
6) RES_submission_Table3B_country_by_country.do reproduces the underlying 45 regressions that are summarized in Table 3B (will be saved in csv files)
7) RES_submission_Table4_MR1983_GLS.do reproduces estimates of Table 4 (will be saved in dta files, Table4DMW_full_RW.dta, Table4CW_full_vs_no_liquidity.dta and Table4CW_no_liquidity_vs_RW.dta)
8) RES_submission_Table4_MR1983_xtscc.do reproduces estimates of Table 4 using Driscoll Kraay standard errors (not reported in the paper)
9) RES_submission_EM_GLS.do gives estimates and GLS s.e. of the Emerging Market regressions in Supplementary Appendix A4 (will be saved in csv files)
10) RES_submission_EM_xtscc.do gives estimates, Driscoll Kraay s.e. and within R2 of the Emerging Market regressions in Supplementary Appendix A4 (will be saved in csv files)

DEM=EUR in all the code

Explanation of C)
RES_structural_estimation_exercise.m reproduces the structural estimates discussed in section 3.2, detailed in Supplementary Appendix B4 (will be printed on screen)


Explanation of D)

1) RES_submission_figure1.do gives AUD_m_s_m_eta_datanew.png, CAD_m_s_m_eta_datanew.png, DEM_m_s_m_eta_datanew.png, JPY_m_s_m_eta_datanew.png, NZD_m_s_m_eta_datanew.png, NOK_m_s_m_eta_datanew.png, SEK_m_s_m_eta_datanew.png, CHF_m_s_m_eta_datanew.png, GBP_m_s_m_eta_datanew.png, USD_m_s_m_eta_datanew.png
2) RES_submission_summary_stat.do gives summaryAUD.docx, summaryCAD.docx, summaryCHF.docx, summaryDEM.docx, summaryGBP.docx, summaryJPY.docx, summaryNOK.docx, summaryNZD.docx, summarySEK.docx, summaryUSD.docx
3) RES_submission_Table1A_Table3A_GLS.do gives Table1A_GLS.csv, Table1B_GLS.csv, Table1C_GLS.csv, Table1D_GLS_pre08.csv, Table1D_GLS_post08.csv, Table1E_GLS.csv, Table1F_GLS.csv, Table1G_GLS.csv, Table2A_GLS_all_sample.csv, Table2A_CDS_GLS_post2008.csv, Table2B_case1_GLS.csv, Table2B_case2_GLS.csv, Table2B_case3_GLS.csv, Table2B_case4_GLS.csv, Table2B_case5_GLS.csv, Table2B_case6_GLS.csv, Table3A_GLS.csv
4) RES_submission_Table1A_Table3A_xtscc.do gives Table1A_xtscc.csv, Table1B_xtscc.csv, Table1C_xtscc.csv, Table1D_xtscc_pre08.csv, Table1D_xtscc_post08.csv, Table1E_xtscc.csv, Table1F_xtscc.csv, Table1G_xtscc.csv , Table2A_xtscc_all_sample.csv, Table2A_CDS_xtscc_post2008.csv, Table2B_case1_xtscc.csv, Table2B_case2_xtscc.csv, Table2B_case3_xtscc.csv, Table2B_case4_xtscc.csv, Table2B_case5_xtscc.csv, Table2B_case6_xtscc.csv, Table3A_xtscc.csv
5) RES_submission_Table2C.do gives the left panel of Table2C.xlsx, then some excel calculation is done in Table2C.xlsx
6) RES_submission_Table3B_country_by_country.do gives Table3B.csv Table3B_post08.csv
7) RES_submission_Table4_MR1983_GLS.do gives Table4CW_full_RW_GLS.dta, Table4CW_full_vs_no_liquidity_GLS.dta, Table4CW_no_liquidity_vs_RW_GLS.dta
8) RES_submission_Table4_MR1983_xtscc.do gives Table4_full_RW_xtscc.dta, Table4_full_vs_no_liquidity_xtscc.dta, Table4_no_liquidity_RW_xtscc.dta
9) RES_submission_EM_GLS.do gives TableEM_vs_EM_GLS.csv and TableEM_vs_all_GLS.csv
10) RES_submission_EM_xtscc.do gives TableEM_vs_EM_xtscc.csv and TableEM_vs_all_xtscc.csv

---------------------------------------------
Please refer to Appendix A2 of the paper for a data source table.

Data Availability Statement
Bloomberg L.P.: access via university terminal subscription
Government Bond Yield 1999–2018. (Bloomberg Terminal Mnemonic: GTAUD1Y GOVT, C1271Y INDEX, C1011Y INDEX, GTDE M1Y GOVT, C9101Y INDEX, GTJPY 1Y GOVT, C1051Y INDEX, GTNZD1Y GOVT, C2501Y INDEX, ST3XY INDEX, C2661Y INDEX, BV010259 INDEX, C2591Y INDEX, C2561Y INDEX, GTGBP1Y Govt, GB12 GOVT, C0821Y INDEX, AUTE1MYL INDEX, FMSTTB1M INDEX, GETB1M INDEX, NDTB1M CURNCY, UKGTB1M INDEX, GB1M INDEX).
Interest Rate Swap 1999–2018. (Bloomberg Terminal Mnemonic: ADSWAP1Q CURNCY, ADSWAP1 CURNCY, CDSW1 CURNCY, EUSW1V3 CURNCY, EUSA1 CURNCY, JYSW1 CURNCY, NDSWAP1 CURNCY, NKSW1 CURNCY, SKSW1 CURNCY, SFSW1V3 CURNCY, SFSW1 CURNCY, BPSW1V3 CURNCY, BPSW1 CURNCY, USSW1 CURNCY).
Credit Default Swap 1999–2018. (Bloomberg Terminal Mnemonic: AUSTLA CDS USD SR 1Y D14 Corp, CANPA CCDS USD SR 1Y D14 Corp, GERMAN CDS USD SR 1Y, JGB CDS USD SR 1Y D14 Corp, NZ CDS USD SR 1Y D14 Corp, NORWAY CDS USD SR 1Y D14 Corp, SWED CDS USD SR 1Y D14 Corp, SWISS CDS USD SR 1Y D14 Corp, UK CDS USD SR 1Y D14 Corp, US CDS USD SR 1Y D14 Corp).
Bloomberg L.P.. 2018. Bloomberg exchange rate forecasts 1999–2018.  (FCUSAUQ”XYY” Index, FCUSCAQ”XYY” Index, FCUSEUQ”XYY” Index, FCUSJPQ”XYY” Index, FCUSNZQ”XYY” Index, FCUSNOQ”XYY” Index, FCUSSEQ”XYY” Index, FCUSCHQ”XYY” Index, FCUSGBQ”XYY” Index)
Replace X with quarter number (1,2,3,4) and YY with year (e.g. 02)

Board of Governors of the Federal Reserve System: Freely available online at FRED
Market Yield on U.S. Treasury Securities at 1-Year Constant Maturity, Quoted on an Investment Basis [DGS1], retrieved from FRED, Federal Reserve Bank of St. Louis; https://fred.stlouisfed.org/series/DGS1. 

Datastream: access via university terminal subscription. 
Exchange Rates 1999–2018. (Datastream Mnemonic: AUSTDO$, CNDOLL$, USEURSP, JAPAYE$, NZDOLL$, NORKRO$, SWEKRO$, SWISSF$, USDOLLR)
Forward Rates 1999–2018. (Datastream Mnemonic: USAUDYF, USAUD1F, USCADYF, USCAD1F, USEURYF, USEUR1F, USJPYYF, USJPY1F, USNZDYF, USNZD1F, USNOKYF, USSEKYF, USSEK1F, USCHFYF, USCHF1F, USGBPYF, USGBP1F).
Government Bond Yield 1999–2018. (Datastream Mnemonic: CNTBB1Y, NZGBY1Y, TRAU1MT, TRCN1MT, TRBD1MT, TRJP1MT, TRNZ1MT, TRSD1MT, TRSW1MT, TRUK1MT, TRUS1MT).
Eurocurrency Rates 1999–2018. (Datastream Mnemonic: ECAUD1M, ECCAD1M, ECEUR1M, EUJPY1M, ECNZD1M, ECSWE1M, ECSWF1M, ECUKP1M, ECUSD1M).
International Monetary Fund International Financial Statistics (IFS): free account registration (https://data.imf.org/?sk=4c514d48-b6ba-49ed-8ab9-52b0c1a0179b)

Markit: access via Wharton Research Data Services (WRDS)
Credit Default Swap 1999–2018. (Mnemonic: MK:QS973P, MK:27CBJG, MK:3AB549, MK:4B818G, MK:6B5178, 6CFB55, 8F7220, HPBCIO, 9A17DE, 9A3AAA).

Sveriges Riksbank Statistics: Freely available online
Treasury Bills (SE 12M), 1999-2018. Sveriges Riksbank. https://www.riksbank.se/en-gb/statistics/search-interest--exchange-rates/

Swiss National Bank Statistics: Freely available online
Current interest rate for 1 year government bond.  Swiss National Bank. https://www.snb.ch/en/iabout/stat/statrep/id/current_interest_exchange_rates#t2
 


Data Citation
Bloomberg L.P.. 2018. Government Bond Yield 1999–2018. (Bloomberg Terminal Mnemonic: GTAUD1Y GOVT, C1271Y INDEX, C1011Y INDEX, GTDE M1Y GOVT, C9101Y INDEX, GTJPY 1Y GOVT, C1051Y INDEX, GTNZD1Y GOVT, C2501Y INDEX, ST3XY INDEX, C2661Y INDEX, BV010259 INDEX, C2591Y INDEX, C2561Y INDEX, GTGBP1Y Govt, GB12 GOVT, C0821Y INDEX, AUTE1MYL INDEX, FMSTTB1M INDEX, GETB1M INDEX, NDTB1M CURNCY, UKGTB1M INDEX, GB1M INDEX). Subscription Service (accessed Mar 1, 2018).
Bloomberg L.P.. 2018. Interest Rate Swap 1999–2018. (Bloomberg Terminal Mnemonic: ADSWAP1Q CURNCY, ADSWAP1 CURNCY, CDSW1 CURNCY, EUSW1V3 CURNCY, EUSA1 CURNCY, JYSW1 CURNCY, NDSWAP1 CURNCY, NKSW1 CURNCY, SKSW1 CURNCY, SFSW1V3 CURNCY, SFSW1 CURNCY, BPSW1V3 CURNCY, BPSW1 CURNCY, USSW1 CURNCY). Subscription Service (accessed Mar 1, 2018).
Bloomberg L.P.. 2018. Credit Default Swap 1999–2018. (Bloomberg Terminal Mnemonic: AUSTLA CDS USD SR 1Y D14 Corp, CANPA CCDS USD SR 1Y D14 Corp, GERMAN CDS USD SR 1Y, JGB CDS USD SR 1Y D14 Corp, NZ CDS USD SR 1Y D14 Corp, NORWAY CDS USD SR 1Y D14 Corp, SWED CDS USD SR 1Y D14 Corp, SWISS CDS USD SR 1Y D14 Corp, UK CDS USD SR 1Y D14 Corp, US CDS USD SR 1Y D14 Corp). Subscription Service (accessed Mar 1, 2018).
Bloomberg L.P.. 2018. Bloomberg exchange rate forecasts 1999–2018.  Subscription Service (accessed Mar 1, 2018).
Board of Governors of the Federal Reserve System (US). 2018.  Market Yield on U.S. Treasury Securities at 1-Year Constant Maturity, Quoted on an Investment Basis [DGS1], retrieved from FRED, Federal Reserve Bank of St. Louis; https://fred.stlouisfed.org/series/DGS1. (accessed Mar 1, 2018).
Datastream. 2018. Thomson Reuters Datastream. Exchange Rates 1999–2018. (Datastream Mnemonic: AUSTDO$, CNDOLL$, USEURSP, JAPAYE$, NZDOLL$, NORKRO$, SWEKRO$, SWISSF$, USDOLLR). Subscription Service (accessed Mar 1, 2018).
Datastream. 2018. Thomson Reuters Datastream. Forward Rates 1999–2018. (Datastream Mnemonic: USAUDYF, USAUD1F, USCADYF, USCAD1F, USEURYF, USEUR1F, USJPYYF, USJPY1F, USNZDYF, USNZD1F, USNOKYF, USSEKYF, USSEK1F, USCHFYF, USCHF1F, USGBPYF, USGBP1F). Subscription Service (accessed Mar 1, 2018).
Datastream. 2018. Thomson Reuters Datastream. Government Bond Yield 1999–2018. (Datastream Mnemonic: CNTBB1Y, NZGBY1Y, TRAU1MT, TRCN1MT, TRBD1MT, TRJP1MT, TRNZ1MT, TRSD1MT, TRSW1MT, TRUK1MT, TRUS1MT). Subscription Service (accessed Mar 1, 2018).
Datastream. 2018. Thomson Reuters Datastream. Eurocurrency Rates 1999–2018. (Datastream Mnemonic: ECAUD1M, ECCAD1M, ECEUR1M, EUJPY1M, ECNZD1M, ECSWE1M, ECSWF1M, ECUKP1M, ECUSD1M). Subscription Service (accessed Mar 1, 2018).
International Financial Statistics (IFS). 2018. Central bank policy rates, Consumer Price Index, 1999-2018. Washington, D.C.: International Monetary Fund (accessed Mar 1, 2018).
Markit. 2018. Credit Default Swap 1999–2018. (Mnemonic: MK:QS973P, MK:27CBJG, MK:3AB549, MK:4B818G, MK:6B5178, 6CFB55, 8F7220, HPBCIO, 9A17DE, 9A3AAA). Subscription Service (accessed Mar 1, 2018).
Sveriges Riksbank Statistics. 2018. Treasury Bills (SE 12M), 1999-2018. Sveriges Riksbank. https://www.riksbank.se/en-gb/statistics/search-interest--exchange-rates/ (accessed Mar 1, 2018).
Swiss National Bank Statistics. Current interest rate for 1 year government bond 1999–2018.  Swiss National Bank. https://www.snb.ch/en/iabout/stat/statrep/id/current_interest_exchange_rates#t2 (accessed Mar 1, 2018).

