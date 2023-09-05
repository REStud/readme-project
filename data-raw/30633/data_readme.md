We draw data from many sources in this project. Each input source is in a separate directory in `data`.

## anderson_etal

Data on public health and water treatments were originally collected by Anderson et al (2022).

## commisioner_reports

For rejection by cause data, we pull from 1901-1931 Commissioner General of Immigration Reports. Links, page numbers, and specific tables are summarized in `commissioner_general_notes.xlsx`.

## complete_count_out

We construct a number of collapses of the complete count census data from Ruggles et al (2021) to generate population denominators and counts of other outcomes, etc. These are all done on the NBER server using the restricted complete count data.

## curran

We construct city-level spending outcomes from Curran (1979). See the readme in the subdirectory for more information.

## deaths_by_cause_city

We draw death data by cause and by city (and by race in some years and cities) from the Vital Statistics of the United States annual volumes, 1900 to 1942. Data collection and data entry was conducted by the authors of this project, both for the current project and for past projects.

For more on this data, see Feigenbaum et al (2022).

## deaths_nationality_1910

We draw death data by country of birth from the Vital Statistics of the United States annual volume, 1910. Data collection and data entry was conducted by the authors of this project.

## deaths_by_nativity_city

We draw death data by nativity and by city from the Vital Statistics of the United States annual volumes, 1900 to 1922. Data collection and data entry was conducted by the authors of this project.

## fertility

We draw on birth data from the annual reports from 1915-1937 of the Birth Registration Area: Birth statistics for the birth registration area of the United States; annual report. Data collection and data entry was conducted by the authors of this project.

## hospital_data

We collect data on hospitals in 1910 from a Department of Commerce report on "Benevolent Institutions" published in 1910.

## immigration_by_nationality

Quota numbers and number of immigrants admitted under quotas are drawn from various editions of the Statistical Abstracts of the United States. These data were entered by hand and checked by an RA into `quotas_1922_1930.csv`, `admitted_country_yr.csv`, and `immigration_under_quotas_four_examples.csv`. Table and Statistical Abstract number are recorded in the `source` column of each of these spreadsheets. If numbers are combinations of countries, details of computation are recorded in the `notes` column. We use the following Statistical Abstracts: 

    - Statistical Abstract of the United States (1924). Table 79. `sa_1924.pdf` 
    - Statistical Abstract of the United States (1925). Table 101. `sa_1925.pdf` 
    - Statistical Abstract of the United States (1929). Table 106, 111. `sa_1929.pdf` 
    - Statistical Abstract of the United States (1931). Table 104. `sa_1931.pdf` 

Immigration flows by nationality are entered into the "Table III + FW" sheet of `immigstats_willcox.xlsx`. The raw data is entered into the sheet `Table III` and corresponds to Table III of Willcox (1929) (`willcox_1929.pdf`). For our analysis, we read in `Table III + FW`. This augments the raw data from Willcox (1929) with other tables from Willcox (1929), specifically Tables XXIII, XXVII, XXXII, and XXXV. This is necessary for nation states that changed boundaries during our period. Notes are recorded in the `notes` column when the data differs from the data in Table III. These alterations are indicated by highlighted rows. Additionally, we used the Statistical Abstracts cited above for data for the following years:

    - 1921: Statistical Abstract of the United States (1921). Table 73. `sa_1921.pdf` 
    - 1922: Statistical Abstract of the United States (1924). Table 79. Numbers are used for countries in which the number admitted was under the per centum limit. `sa_1924.pdf` 
    - 1924: Statistical Abstract of the United States (1924). Table 73. `sa_1924.pdf` 
    - 1925-1928: Statistical Abstract of the United States (1929). Table 106. `sa_1929.pdf` 
    - 1930: Statistical Abstract of the United States (1931). Table 99. `sa_1931.pdf` 

## ipums_extracts

Due to a data error regarding dwelling in the complete count IPUMS data, we draw on dwelling (for a dwelling based measure of internal density) from the public IPUMS website (Ruggles 2022).

## life_expectancy

We draw data on life expectancy from Gapminder.

## maps

We geolocate the cities in our sample using [geocodio](https://www.geocod.io/). We include the code to generate the data in `data/maps` but because the API could change and it requires a private key, we also include the data as we used it.

## ports

Admittance data is pulled from Table I of 1910 Report of the Commissioner General of Immigration. We geolocate the cities using [geocodio](https://www.geocod.io/).

## rural

We use rural mortality data originally collected and cleaned by Hoehn-Velasco (2018).

## segregation

We draw Logan-Parman style neighbor-based segregation data from Eriksson and Ward (2019). See the readme in that folder for more details from Zach Ward.

## statelevel

We draw state-level death data from the Vital Statistics of the United States annual volumes, 1923 to 1932.

## xwalks

We use various simple crosswalks in the project to connect nationalities to IPUMS bpls, states to state codes, cities and counties to codes, etc.

# References

Anderson, D. Mark, Kerwin Kofi Charles, and Daniel I. Rees. 2022. "Reexamining the Contribution of Public Health Efforts to the Decline in Urban Mortality." American Economic Journal: Applied Economics, 14 (2): 126-57.

Curran, Christopher Financial Characteristics of Cities in the United States, 1905-1930 [computer file]. Madison, WI: Christopher Curran [producer], 1979. Madison, WI: Data and Information Services Center [distributor], 1979; <http://www.disc.wisc.edu/archive/Curran/index.html> (13 July 2022).

Eriksson, K., & Ward, Z. (2019). The Residential Segregation of Immigrants in the United States from 1850 to 1940. The Journal of Economic History, 79(4), 989-1026. doi:10.1017/S0022050719000536

Feigenbaum, James J., Lauren Hoehn-Velasco, Christopher Muller, and Elizabeth Wrigley-Field. 2022. "1918 Every Year: Racial Inequality in Infectious Mortality, 1906−1942." AEA Papers and Proceedings, 112: 199-204.

Gapminder, “Life expectancy at birth in Gapminder World,” http://gapminder.org/data/ . Accessed: 2010-09-30.

Hoehn-Velasco, Lauren, “Explaining declines in US rural mortality, 1910-1933: The role of county health departments,” Explorations in Economic History, 2018, 70, 42–72.

Ruggles, Steven, Catherine A. Fitch, Ronald Goeken, J. David Hacker, Matt A. Nelson, Evan Roberts, Megan Schouweiler, and Matthew Sobek. IPUMS Ancestry Full Count Data: Version 3.0 [dataset]. Minneapolis, MN: IPUMS, 2021.

Ruggles, Steven, Sarah Flood, Ronald Goeken, Megan Schouweiler and Matthew Sobek. IPUMS USA: Version 12.0 [dataset]. Minneapolis, MN: IPUMS, 2022. https://doi.org/10.18128/D010.V12.0

United States. Bureau of Foreign and Domestic Commerce and United States. Bureau of the Census. "1921, Forty-Fourth Number," Statistical Abstract of the United States (1921). Table 73. https://fraser.stlouisfed.org/title/66#22029, accessed on July 14, 2022.

United States. Bureau of Foreign and Domestic Commerce and United States. Bureau of the Census. "1924, Forty-Seventh Number," Statistical Abstract of the United States (1924). Table 73, 79. https://fraser.stlouisfed.org/title/66#22031, accessed on July 13, 2022.

United States. Bureau of Foreign and Domestic Commerce and United States. Bureau of the Census. "1925, Forty-Eight Number," Statistical Abstract of the United States (1925). Table 101. https://fraser.stlouisfed.org/title/66#22032, accessed on July 13, 2022.	

United States. Bureau of Foreign and Domestic Commerce and United States. Bureau of the Census. "1929, Fifty-First Number," Statistical Abstract of the United States (1929). Table 106, 111. https://fraser.stlouisfed.org/title/66/item/22039, accessed on July 13, 2022.

United States. Bureau of Foreign and Domestic Commerce and United States. Bureau of the Census. "1931, Fifty-Third Number," Statistical Abstract of the United States (1931). Table 99, 104. https://fraser.stlouisfed.org/title/66#22037, accessed on July 13, 2022.

United States. Bureau of Immigration and Naturalization. (1913). Annual report of the Commissioner-General of Immigration to the Secretary of Commerce and Labor for the fiscal year ended (1901-1931) (Various Volumes). Washington: G.P.O. https://hdl.handle.net/2027/njp.32101058061357 

Willcox, Water F. "Statistics of Migrations, National Tables, United States." _International Migrations, Volume I: Statistics._ (1929). p. 372-498. Table III, XXIII, XXVII, XXXII, and XXXV. NBER. http://www.nber.org/chapters/c5134