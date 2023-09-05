Readme.txt file for "Global Imbalances and Policy Wars at the Zero Lower Bound" by Ricardo Caballero, Emmanuel Farhi and Pierre-Olivier Gourinchas
Date: Feb. 19 2021

Overview:

This replication package contains data sources and excel files to produce figures 1-2 in the paper. It also contains the GeoGebra files necessary to replicate figures 3-4 and appendix figure A.1.


Data Availability Statements:

 To construct figures 1-2, the paper uses data from:
 
 (a) The International Monetary Fund, October 2019 World Economic Outlook database (IMF, 2019). We extracted the entire WEO which is included in the first sheet of the file fig_1_a.xlsx (see below).  
 
 (b) Global Financial Database, (GFD, 2019). The paper uses data downloaded from the Global Financial Database. The archive contains the extracted data (fig_1_b.xlsx, see below)
 
 (c) Duarte and Rosa (2015). These authors shared the data underlying their paper. The archive contains the data (ERP_Duarte_Rosa.xlsx see below)
 
 (d) The Saint Louis Federal Reserve Bank Federal Reserve Economic Data (FRED) database (FRED, 2019). The archive contains the extracter data (fig_2_b.xlsx, see below).
 
 (e) Lane and Milesi-Ferretti (2018). These authors published the data underlying their paper. The archive contains the data (41308_2017_48_MOESM1_ESM.xlsx)
 
 

1. Figure 1(a): Global Imbalances
	source file: fig_1_a.xlsx
	Current account balances as a fraction of world GDP from 1980 to 2019. 
	Source: October 2019 World Economic Outlook.
	Variables: current account balances in USD. World output in USD.
	Note: 
		1. Oil Producers consists of: Bahrain, Canada, Iran, Iraq, Kuwait, Libya, Mexico, Nigeria, Norway, Oman, Russia, Saudi Arabia,
		United Arab Emirates, Venezuela. No data for Russia before 1991 and for Iraq after 2004.
		2. Emerging Asia ex-China consists of: India, Indonesia, Korea, Malaysia, Philippines, Singapore, Taiwan, Thailand, Vietnam.
		3. China's current account balances before 1997 from April 2014 World Economic Outlook.
		4. Taiwan's current account balances before 1984 from April 2013 World Economic Outlook.


2. Figure 1(b): Global 10-year yields.
	source file: fig_1_b.xlsx
	10-year nominal yields 1980-2019
	Source: Global Financial Database
	Variables: 10-year government yield for United Kingdom (IGGBR10D), Japan (IGJPN10D), USA (IGUSA10D) and Germany	(IGDEU10D)
	Note: We use Germany's 10-year yield as a proxy for the Eurozone 10-year yield.
	
	
3. Figure 2(a): Expected Equity Risk Premium.
	source file: ERP_Duarte_Rosa.xlsx (sheet ER_Rf2)
	Expected equity risk premium 1980-2015 constructed from Duarte and Rosa (2015).
	

4. Figure 2(b): Bond Premia
	source file: fig_2_b.xlsx
	The figure reports the spread between Moody's Aaa and Baa seasoned corporate bond yields and the 20-year constant maturity Treasury, 1980-2019.
	Source: FRED.
	Variables: Moody's Seasoned Aaa Corporate Bond Yield (code:AAA), Moody's Seasoned Baa Corporate Bond Yield (code:BAA), 20-Year Treasury Constant Maturity Rate 	(code:GS20).
	Note: between 1987Q1 and 1993Q3, the 20-year constant maturity rate is approximated as the average of the 10-Year constant maturity rate (code:GS10) and the 	30-Year constant maturity rate (code:GS30)
	
	
5. Figure 2(c): Net Safe Asset Imbalance, 1980-2015.
	source file: 41308_2017_48_MOESM1_ESM.xlsx
	The figure reports Net Safe positions as a fraction of world GDP, 1980-2015. Net Safe positions are defined as the sum of Official Reserves (minus Gold), Portfolio 	Debt and Other Assets, minus Portfolio Debt and Other Liabilities. 
	Source: Lane and Milesi-Ferretti (2018) update of the External Wealth of Nations. Data available online at: https://doi.org/10.1057/s41308-017-0048-y. World output 	from the April 2019 World Economic Outlook.
	Note: 
		1. Oil Producers consists of: Bahrain, Canada, Iran, Iraq, Kuwait, Libya, Mexico, Nigeria, Norway, Oman, Russia, Saudi Arabia, United Arab Emirates, Venezuela;
		2. Emerging Asia ex-China consists of: India, Indonesia, Korea, Malaysia, Philippines, Singapore, Taiwan, Thailand, Vietnam.
		3. Euro area consists of: Austria, Belgium, Finland, France, Germany, Ireland, Italy, Luxembourg, Netherlands, Portugal and Spain before 1999.

6. Figure 3(a) and (b)
	Source file: MetzlerP1h.ggb
	figure created with GeoGebra Classic 6 available at https://www.geogebra.org/download.
	
7. Figure 4(a) and (b)
	Source file: MetzlerQ9.ggb
	figure created with GeoGebra Classic 6.
	
	
8. Figure A1
	Source file: ADAS2e_debt.ggb
	figure created with GeoGebra Classic 6.
 
 
 References:
 
 Duarte, Fernando M. and Carlo Rosa, “The equity risk premium: a review of models,” Staff Reports 714, Federal Reserve Bank of New York, February 2015.
 FRED, 2019, "Federal Reserve Economic Data," Federal Reserve Bank of St Louis, https://fred.stlouisfed.org/ (last accessed in October 2019).
 GFD, 2019, "Global Financial Database", Global Financial Data, https://globalfinancialdata.com/ (last accessed October 3, 2019). Subscription needed.
 IMF, 2019, "World Economic Outlook", International Monetary Fund, https://www.imf.org/en/Publications/WEO/weo-database/2019/October (accessed February 11, 2021)
 Lane, Philip R. and Gian Maria Milesi-Ferretti, “The External Wealth of Nations Revisited: International Financial Integration in the Aftermath of the Global 	Financial Crisis,” IMF Economic Review, Mar 2018, 66 (1), 189–222. Replication folder accessible at: https://doi.org/10.1057/s41308-017-0048-y
 
 