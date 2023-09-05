Trade and Domestic Production Networks

Emmanuel Dhyne, Ayumu Ken Kikkawa, Magne Mogstad, Felix Tintelnot

project ID ("MS26920")


Data Availability Statements
----------------------------

1. The Comtrade data used to support the findings of this study are included in this replication package.  The raw data can be downloaded from https://comtrade.un.org/.  To download relevant data, click "Get Data" from the webpage, and select the following criteria: "Goods" for "Type of product", "Annual" for "Frequency", "02" for "HS", all years ranging from 2002 to 2014 for "Periods (year)", all countries for "Reporters" (obtain one CSV file for each country), "World" and "Belgium" for "Partners", "Import" and "Export" for "Trade flows", and "AG6 - All 6-digit HS2002 commodities" for "HS2002 commodity codes". Note that UN Comtrade’s website query allows only for a maximum resultset of 50,000 entries.  Therefore, we recommend to either download the data sequentially by individual reporter and  year or to subscribe to the API (which allows for larger downloads). (last accessed: Jul 27 2020)

2. The concordance from HS 2002 codes to NACE Rev.2 codes is included in this replication package.  The raw data can be downloaded from the Eurostat at https://ec.europa.eu/eurostat/ramon/.  To download relevant data, click "Correspondence Tables" from the webpage, and select the following two correspondence tables: "CPA 2002 - HS 2002" and "CPA 2008 - CPA 2002".  Note that the first four digits of CPA 2008 codes are identical to NACE Rev.2 codes. (last accessed: Jul 22 2020)

3. The Belgian input-output table is included in this replication package.  The raw data can be downloaded from the Eurostat with the following link: https://appsso.eurostat.ec.europa.eu/nui/show.do?dataset=naio_10_cp1700&lang=en.  To download the 2010 table for Belgium, click the plus sign in the "Table Customization" tab, and select the following criteria: "BE" for "GEO", select all for "INDUSE", select all for "PROD_NA", "DOM" for "STK_FLOW", 2010 for "TIME", and "MIO_EUR" for "UNIT".  Once downloaded, we combine industries L68A and L68B into one. (last accessed: Jul 22 2020)

4. The aggregate statistics from annual national accounts are included in this replication package.  The raw data for GDP and outputs can be downloaded from the Eurostat with the following link: https://appsso.eurostat.ec.europa.eu/nui/show.do?dataset=nama_10_a64&lang=en.  To download relevant data, click the plus sign in the "Table Customization" tab, and select the following criteria: "BE" for "GEO", "TOTAL", "K", and "O-Q" for "NACE_R2", "B1G" and "P1" for "NA_ITEM", 2002, 2007, and 2012 for "TIME", and "CP_MEUR" for "UNIT".  Once downloaded, we subtract the values for public and financial sectors ("K", and "O-Q") from the national total ("TOTAL").  The raw data for imports and exports can be downloaded from the Eurostat with the following link: https://appsso.eurostat.ec.europa.eu/nui/show.do?dataset=nama_10_exi&lang=en.  To download relevant data, click the plus sign in the "Table Customization" tab, and select the following criteria: "BE" for "GEO", "P6" and "P7" for "NA_ITEM", 2002, 2007, and 2012 for "TIME", and "CP_MEUR" for "UNIT". (last accessed: Jul 28 2020)

5. The data on real interest rates are included in this replication package.  We compute them by subtracting inflation rates from nominal interest rates.  The raw data for inflation rates can be downloaded from the Eurostat with the following link: https://appsso.eurostat.ec.europa.eu/nui/show.do?dataset=prc_hicp_aind&lang=en.  To download relevant data, click the plus sign in the "Table Customization" tab, and select the following criteria: "BE" for "GEO", "CP00" for "COICOP", all years ranging from 2000 to 2014 for "TIME", and "RCH_A_AVG" for "UNIT".  The raw data for nominal interest rates can be downloaded from the Eurostat with the following link: https://appsso.eurostat.ec.europa.eu/nui/show.do?dataset=irt_st_a&lang=en.  To download relevant data, click the plus sign in the "Table Customization" tab, and select the following criteria: "EA" for "GEO", "IRT_M12" for "INT_RT", all years ranging from 2000 to 2014 for "TIME". (last accessed: Jul 28 2020)

6. The firm level data, including B2B transactions and international trade flows, used in for this project are confidential, but may be obtained with Data Use Agreements with the National Bank of Belgium.  Researchers interested in access to the data may contact Emmanuel Dhyne, email: emmanuel.dhyne@nbb.be.


Dataset list
------------

Public Data

|-------------------------------------------------|------------|----------|
| Data File                                       | Source     | Provided |
|-------------------------------------------------|------------|----------|
| data/public_data/comtrade_hs2002/AB_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/AD_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/AE_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/AF_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/AG_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/AL_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/AM_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/AN_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/AO_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/AR_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/AT_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/AU_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/AZ_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/BA_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/BB_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/BD_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/BE_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/BF_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/BG_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/BH_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/BI_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/BJ_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/BM_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/BN_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/BO_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/BR_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/BS_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/BT_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/BW_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/BY_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/BZ_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/CA_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/CF_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/CG_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/CH_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/CI_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/CK_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/CL_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/CM_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/CN_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/CO_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/CR_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/CU_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/CV_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/CY_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/CZ_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/DE_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/DJ_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/DK_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/DM_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/DO_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/DZ_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/EC_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/EE_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/EG_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/ES_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/ET_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/FI_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/FJ_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/FM_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/FO_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/FR_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/GA_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/GB_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/GE_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/GH_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/GL_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/GM_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/GN_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/GR_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/GT_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/GY_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/HK_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/HN_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/HR_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/HU_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/ID_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/IE_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/IL_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/IN_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/IQ_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/IR_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/IS_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/IT_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/JM_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/JO_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/JP_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/KE_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/KG_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/KH_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/KI_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/KM_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/KN_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/KR_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/KW_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/KY_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/KZ_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/LB_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/LC_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/LK_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/LS_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/LT_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/LU_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/LV_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/LY_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/MA_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/MD_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/ME_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/MG_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/MK_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/ML_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/MM_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/MN_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/MO_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/MR_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/MS_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/MT_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/MU_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/MV_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/MW_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/MX_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/MY_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/MZ_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/NA_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/NC_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/NE_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/NG_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/NI_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/NL_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/NO_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/NP_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/NZ_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/OM_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/PA_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/PE_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/PF_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/PG_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/PH_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/PK_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/PL_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/PS_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/PT_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/PW_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/PY_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/QA_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/RO_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/RS_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/RU_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/RW_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/SA_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/SB_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/SC_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/SD_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/SE_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/SG_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/SI_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/SK_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/SL_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/SN_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/SR_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/ST_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/SV_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/SY_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/TC_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/TG_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/TH_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/TN_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/TO_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/TP_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/TR_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/TT_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/TZ_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/UA_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/UG_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/US_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/UY_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/VC_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/VE_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/VN_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/VU_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/WS_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/YE_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/YT_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/ZA_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/ZM_trade.csv   | Comtrade   | Yes      |
| data/public_data/comtrade_hs2002/ZW_trade.csv   | Comtrade   | Yes      |
| data/public_data/HStoNACE_viacpa.dta            | EUrostat   | Yes      |
| data/public_data/naio_10_cp1700.tsv             | Eurostat   | Yes      |
| data/public_data/nama_10_a64_1_Data.csv         | Eurostat   | Yes      |
| data/public_data/nama_10_exi_1_Data.csv         | Eurostat   | Yes      |
| data/public_data/realintrate.dta                | Eurostat   | Yes      |
|-------------------------------------------------------------------------|

Restricted Access Data
                           
|----------------------------------------------------------------|----------|----------|
| Data File                                                      | Source   | Provided |
|----------------------------------------------------------------|----------|----------| 
| data/restricted_access_data/B2B_vat.dta                        | NBB      | No       |
| data/restricted_access_data/FMP_vat.dta                        | NBB      | No       |
| data/restricted_access_data/INTL_vat_hs_2002.dta               | NBB      | No       |
| data/restricted_access_data/vat_firm_id_yearly_corrected.dta   | NBB      | No       |
|--------------------------------------------------------------------------------------|


Computational requirements
---------------------------

### Software Requirements

- Stata (code was last run with version 16)
  - "areg"
  - "estout"
  - "python"
  - "reghdfe"

- Python (code was last run with Python 2.7)
  - "networkx"
  - "numpy"
  - "pandas"
  - "scipy"


### Descriptions of programs

- Programs in `program/restud_master.do` run all program files in `program/` including the ones in subfolders.

- Programs in `program/setup_folder.do` set up the project folder if the code is run for the first time.

- Programs in `program/define_global.do` declare relevant strings as globals.

- Programs in `program/01_clean_data/` construct the analysis sample from the data files referenced above.  `clean_data_part1_FMP_firm.do` and `clean_data_part2_B2B_firm.do` aggregate multiple VAT IDs into firm IDs.  `clean_data_part3_FMP_strictsel.do`, `clean_data_part4_INTL_strictsel.do`, and `clean_data_part5_B2B_strictsel.do` apply the sample selection.  `restud_master.do` calls `clean_data_master.do`, which then calls all the other program files in this subfolder.

- Programs in `program/02_construct_share/` compute the total import and export shares and total export shocks for each firm.  `construct_share_main_part1_wid_change.do` and `construct_share_main_part2_direct_shock.do` use the Comtrade data to construct changes in world import demand for each direct exporter.  `construct_share_main_part3_import_share.do` computes the total import shares as defined in equation (1).  "construct_share_main_part4_export_share.do" computes the total export shares as defined in equation (2).  "construct_share_main_part5_export_shock.do" computes firm’s total exposure to foreign demand shocks as discussed in Section 7.  "construct_share_main_part6_merge.do" merges the total import and export shares and total export shocks to the analysis sample.  `construct_share_appendix_figure_D3.do`, `construct_share_appendix_figure_D4.do`, `construct_share_appendix_figure_D5.do`, and `construct_share_appendix_figure_D6.do` compute the total import and export shares using alternative definitions.  `restud_master.do` calls `construct_share_main_master.do` and `construct_share_appendix_master.do`, which then call all the other program files in this subfolder.

- Programs in `program/03_main_text/` generate all figures and tables used in the main text.  The name of each program file identifies the figure(s) and table it creates (e.g., `figure_1.do` generates `figure_1_a.eps` and `figure_1_b.eps`, which correspond to Figures 1(a) and 1(b) in the manuscript).

- Programs in `program/04_appendix/` generate all figures and tables used in the appendix.  The name of each program file identifies the figure(s) and table it creates.


### Memory and Runtime Requirements

All program files were last run on a **16-core Intel server with 128 GB of RAM**.  Computation took approximately 12 hours. 


Instructions
------------

1. Prepare all data files for this study.  Each file needs to be stored in the subfolders of `data/` as referenced above.

2. Run `program/restud_master.do`, which runs all program files in `program/`. 

3. See `output/` for the figures and tables.


List of figures and tables
--------------------------

|------------------|----------------------------|-------------------|-----------------------------------------------|
| Figure/Table #   | Program                    | Output file       | Note                                          |
|------------------|----------------------------|-------------------|-----------------------------------------------|
| Figure 1(a)      | 03_main_text/figure_1.do   | figure_1_a.eps    |                                               |
| Figure 1(b)      | 03_main_text/figure_1.do   | figure_1_b.eps    |                                               |
| Figure 2         | 03_main_text/figure_2.do   | figure_2.eps      |                                               |
| Figure 3(a)      | 03_main_text/figure_3.do   | figure_3_a.eps    |                                               |
| Figure 3(b)      | 03_main_text/figure_3.do   | figure_3_b.eps    |                                               |
| Figure 3(c)      | 03_main_text/figure_3.do   | figure_3_c.eps    |                                               |
| Figure 3(d)      | 03_main_text/figure_3.do   | figure_3_d.eps    |                                               |
| Figure 3(e)      | 03_main_text/figure_3.do   | figure_3_e.eps    |                                               |
| Figure 3(f)      | 03_main_text/figure_3.do   | figure_3_f.eps    |                                               |
| Figure 4(a)      | 03_main_text/figure_4.do   | figure_4_a.eps    |                                               |
| Figure 4(b)      | 03_main_text/figure_4.do   | figure_4_b.eps    |                                               |
| Figure 4(c)      | 03_main_text/figure_4.do   | figure_4_c.eps    |                                               |
| Figure 4(d)      | 03_main_text/figure_4.do   | figure_4_d.eps    |                                               |
| Figure 5(a)      | 03_main_text/figure_5.do   | figure_5_a.eps    |                                               |
| Figure 5(b)      | 03_main_text/figure_5.do   | figure_5_b.eps    |                                               |
| Figure 6         | 03_main_text/figure_6.do   | figure_6.eps      |                                               |
| Table 1          | 03_main_text/table_1.do    | table_1.tex       |                                               |
| Table 2          | 03_main_text/table_2.do    | table_2.csv       | output provided in CSV format                 |
| Table 3          | 03_main_text/table_3.do    | table_3.tex       |                                               |
| Table 4          | 03_main_text/table_4.do    | table_4.csv       | output provided in CSV format                 |
|------------------|----------------------------|-------------------|-----------------------------------------------|
| Figure 7         | 04_appendix/figure_7.do    | figure_7.eps      |                                               |
| Figure 8(a)      | 04_appendix/figure_8.do    | figure_8_a.eps    |                                               |
| Figure 8(b)      | 04_appendix/figure_8.do    | figure_8_a.eps    |                                               |
| Table 5          | 04_appendix/table_5.do     | table_5.tex       |                                               |
|------------------|----------------------------|-------------------|-----------------------------------------------|
| Figure D1(a)     | 04_appendix/figure_D1.do   | figure_D1_a.eps   |                                               |
| Figure D1(b)     | 04_appendix/figure_D1.do   | figure_D1_b.eps   |                                               |
| Figure D1(c)     | 04_appendix/figure_D1.do   | figure_D1_c.eps   |                                               |
| Figure D1(d)     | 04_appendix/figure_D1.do   | figure_D1_d.eps   |                                               |
| Figure D1(e)     | 04_appendix/figure_D1.do   | figure_D1_e.eps   |                                               |
| Figure D2(a)     | 04_appendix/figure_D2.do   | figure_D2_a.eps   |                                               |
| Figure D2(b)     | 04_appendix/figure_D2.do   | figure_D2_b.eps   |                                               |
| Figure D2(c)     | 04_appendix/figure_D2.do   | figure_D2_c.eps   |                                               |
| Figure D2(d)     | 04_appendix/figure_D2.do   | figure_D2_d.eps   |                                               |
| Figure D2(e)     | 04_appendix/figure_D2.do   | figure_D2_e.eps   |                                               |
| Figure D3        | 04_appendix/figure_D3.do   | figure_D3.eps     | run `construct_share_appendix_figure_D3.do`   |
| Figure D4(a)     | 04_appendix/figure_D4.do   | figure_D4_a.eps   | run `construct_share_appendix_figure_D4.do`   |
| Figure D4(b)     | 04_appendix/figure_D4.do   | figure_D4_b.eps   | run `construct_share_appendix_figure_D4.do`   |
| Figure D5(a)     | 04_appendix/figure_D5.do   | figure_D5_a.eps   | run `construct_share_appendix_figure_D5.do`   |
| Figure D5(b)     | 04_appendix/figure_D5.do   | figure_D5_b.eps   | run `construct_share_appendix_figure_D5.do`   |
| Figure D6(a)     | 04_appendix/figure_D6.do   | figure_D6_a.eps   | run `construct_share_appendix_figure_D6.do`   |
| Figure D6(b)     | 04_appendix/figure_D6.do   | figure_D6_b.eps   | run `construct_share_appendix_figure_D6.do`   |
| Figure D6(c)     | 04_appendix/figure_D6.do   | figure_D6_c.eps   | run `construct_share_appendix_figure_D6.do`   |
| Figure D6(d)     | 04_appendix/figure_D6.do   | figure_D6_d.eps   | run `construct_share_appendix_figure_D6.do`   |
| Figure D7(a)     | 04_appendix/figure_D7.do   | figure_D7_a.eps   |                                               |
| Figure D7(b)     | 04_appendix/figure_D7.do   | figure_D7_b.eps   |                                               |
| Figure D8(a)     | 04_appendix/figure_D8.do   | figure_D8_a.eps   |                                               |
| Figure D8(b)     | 04_appendix/figure_D8.do   | figure_D8_b.eps   |                                               |
| Figure D9(a)     | 04_appendix/figure_D9.do   | figure_D9_a.eps   |                                               |
| Figure D9(b)     | 04_appendix/figure_D9.do   | figure_D9_b.eps   |                                               |
| Table C1         | 04_appendix/table_C1.do    | table_C1.tex      |                                               |
| Table C2         | 04_appendix/table_C2.do    | table_C2.tex      |                                               |
| Table C3         | 04_appendix/table_C3.do    | table_C3.tex      |                                               |
| Table D4         | 04_appendix/table_D4.do    | table_D4.tex      |                                               |
| Table D5         | 04_appendix/table_D5.do    | table_D5.tex      |                                               |
| Table D6         | 04_appendix/table_D6.do    | table_D6.tex      |                                               |
| Table D7         | 04_appendix/table_D7.do    | table_D7.csv      | output provided in CSV format                 |
| Table D8         | 04_appendix/table_D8.do    | table_D8.csv      | output provided in CSV format                 |
| Table D9         | 04_appendix/table_D9.do    | table_D9.tex      |                                               |
| Table D10        | 04_appendix/table_D10.do   | table_D10.tex     |                                               |
| Table D11        | 04_appendix/table_D11.do   | table_D11.csv     | output provided in CSV format                 |
| Table D12        | 04_appendix/table_D12.do   | table_D12.csv     | output provided in CSV format                 |
| Table D13        | 04_appendix/table_D13.do   | table_D13.csv     | output provided in CSV format                 |
| Table D14        | 04_appendix/table_D14.do   | table_D14.csv     | output provided in CSV format                 |
| Table E15        | 04_appendix/table_E15.do   | table_E15.tex     |                                               |
| Table E16        | 04_appendix/table_E16.do   | table_E16.tex     |                                               |
|------------------|----------------------------|-------------------|-----------------------------------------------|

Note: all output files listed above are included in the replication package.


References
----------

Eurostat (2002-2008): “RAMON - Reference And Management Of Nomenclatures,” https://ec.europa.eu/eurostat/ramon/, accessed July 22 2020.
——— (2002-2012): “National Accounts,” https://ec.europa.eu/eurostat/web/national-accounts/data/database, accessed July 28 2020.
——— (2002-2014a): “Exchange and Interest Rates,” https://ec.europa.eu/eurostat/web/exchange-and-interest-rates/data/database, accessed July 28 2020.
——— (2002-2014b): “Harmonised Indices of Consumer Prices (HICP),” https://ec.europa.eu/eurostat/web/hicp/data/database, accessed July 28 2020.
——— (2010): “ESA Supply, Use and Input-Output Tables,” https://ec.europa.eu/eurostat/web/esa-supply-use-input-tables/data/database, accessed July 22 2020.
National Bank of Belgium (2002–2014a): “Annual Account Filings,” Confidential dataset.
——— (2002–2014b): “Business-to-Business Transactions Database,” Confidential dataset.
——— (2002–2014c): “International Trade Dataset,” Confidential dataset.
United Nations (2002–2014): “Comtrade Database,” https://comtrade.un.org/, accessed July 27 2020.