Replication of Figures in Drenik, Kirpalani, and Perez (2021), "Currency Choice in Contracts."

Data access:

The figures in the paper were created using publicly available data. Below, we enumerate all data sources and provide a link to access them.

1) World Development Indicators: This dataset is compiled by the World Bank and can be accessed here: https://datacatalog.worldbank.org/search/dataset/0037712. Relevant variables include: "Broad money (current LCU)" (FM.LBL.BMNY.CN), "GDP (current LCU)" (NY.GDP.MKTP.CN), "General government final consumption expenditure (current LCU)" (NE.CON.GOVT.CN), "General government final consumption expenditure (constant 2010 US$)" (NE.CON.GOVT.KD), "GDP (constant 2010 US$)" (NY.GDP.MKTP.KD). In the replication folder, these data are saved in WDI_Seigniorage_Base.xlsx, g_constant_usd.csv, and API_NY.GDP.MKTP.KD_DS2_en_csv_v2_10134482.csv.

2) Dollarization data from Levy-Yeyati, Eduardo (2006). "Financial dollarization: evaluating the consequences," Economic Policy 21, no. 45, Pages 62-118: The original dataset can be obtained from https://www.utdt.edu/listado_contenidos.php?id_item_menu=8006. To obtain access to the updated dataset, interested readers should contact the author by email. In the replication folder, these data are saved in FD_Database_update.dta.

3) Classification of exchange rate regimes from Jay C. Shambaugh (2004). "The Effect of Fixed Exchange Rates on Monetary Policy," Quarterly Journal of Economics, Volume 119, no. 1, Pages 301-352: The data can be obtained from https://iiep.gwu.edu/jay-c-shambaugh/data/. In the replication folder, these data are saved in Exchange_Rate_Regimes_Classification.dta.

4) Country ISO codes: The data can be obtained from https://unstats.un.org/unsd/tradekb/knowledgebase/country-code. In the replication folder, these data are saved in CountryISO3.xlsx.

5) Data on currency invoicing from Gopinath, Gita (2016). "The International Price System." Jackson Hole Symposium Proceedings: The data can be obtained from https://scholar.harvard.edu/gopinath/publications. In the replication folder, these data are saved in data_invoice_currencies.xlsx.

6) Trade data: This dataset is compiled by Direction Of Trade Statistics IMF (DOTS) and can be accessed here: https://data.imf.org/?sk=9d6028d4-f14a-464c-a2f2-59b2cd424b85. In the replication folder, these data are saved in DOT_02-27-2018 08-33-05-81_panel.csv.

Analysis Codes:

The analysis of the data was conducted in Stata 13. To reproduce Figure D1, run WDIDataCleaning.do and FigureD1.do. To reproduce Figure D2, run FigureD2.do. All the codes should be run from the folder /Replication_Figures.

REFERENCES:

GOPINATH, G. (2016): “The International Price System,” Jackson Hole Symposium Proceedings.

IMF (2017): “Direction of Trade Statistics (DOTS),” International Monetary Fund, Washington, DC.

LEVY-YEYATI, E. (2006): “Financial dollarization: evaluating the consequences,” Economic Policy, 21, 62–118.

SHAMBAUGH, J. C. (2004): “The effect of fixed exchange rates on monetary policy,” the Quarterly Journal of Economics, 119, 301–352.

WORLD BANK (2014): “World development indicators 2014,” The World Bank.