---
contributors:
  - Tarek A. Hassan
  - Thomas M. Mertens
  - Tony Zhang
---

Overview
--------

The code in this replication package produces Table 1, Figure 1, and Table 2 in the Online Appendix. 

Data Availability and Provenance Statements
----------------------------

All data used in the analysis are provided in the `data` subfolder.

### Details on each Data Source

Data on intrest rate differentials (forward premia), currency excess returns were taken from Hassan and Mano (2019). Additional data on the capital intensity of countries were taken from the Penn World Tables (Feenstra, Inklaar and Timmer, 2019). These data have been combined into a single file.

Datafile: `fx_data.csv`

Data on exchange rate regimes were downloaded from Carmen Reinhart's website: https://carmenreinhart.com/exchange-rate/ . For each country, these data describe both the exchange rate regime as well as the anchor currency if the exchange rate is stabilized. These data are used in Ilzetzki, Reinhart, and Rogoff (2019).

Datafiles: `ReinhartRogoff_StabilizationData.xlsx`, `ReinhartRogoff_AnchorData.xlsx`

Data on country level GDP in current dollars were downloaded from the World Bank (2020). The data can be accessed directly from the World Bank website: https://databank.worldbank.org/reports.aspx?source=2&seriejs=NY.GDP.MKTP.CD .

Datafiles: `WorldBank_GDP.xlsx`

A list of euro area countries was taken from Wikipedia (2017) and are used identifying Euro area countries. 

Datafiles: `EuroXWalk.csv`

Computational requirements
---------------------------

### Software Requirements

- R
  - `broom`
  - `countrycode`
  - `data.table`
  - `ggplot2`
  - `ggthemes`
  - `haven`
  - `lfe`
  - `readxl`
  - `stargazer`
  - `texreg`
  - `tidyverse`
  - `xtable`
  - `stat_binscatter.R` (provided)

Description of programs/code
----------------------------

> INSTRUCTIONS: Give a high-level overview of the program files and their purpose. Remove redundant/ obsolete files from the Replication archive.

- The script `code/GenerateExhibits.R` produces all exhibits and outputs to the `out` folder. The file names for each table corresponds to its location in the manuscript (`Table_1.tex`, 
`Table_2_Panel_A.tex`). The three figures correspond to the three panels in Figure 1 of the manuscript.

Instructions to Replicators
---------------------------

- Run `code/GenerateExhibits.R`. 

## References

Feenstra, R. C., R. Inklaar and M. P. Timmer (2019). "Penn World Table 9.1." Groningen Growth and Development Centre. https://doi.org/10.15141/S50T0R 

Hassan, T. A. and R. Mano (2019). Forward and spot exchange rates in a multi-currency world. The Quarterly Journal of Economics 134 (1), 397–450.

Ilzetzki, E., C. M. Reinhart, and K. S. Rogoff (2019). Exchange arrangements entering the 21st century: Which anchor will hold? The Quarterly Journal of Economics 134 (2), 599-646.

Wikipedia (2017). "Eurozone." Last modified February 24, 2017. https://en.wikipedia.org/wiki/Eurozone 

World Bank (2020). World development indicators. The World Bank Group. Accessed May 5, 2020. https://databank.worldbank.org/reports.aspx?source=2&seriejs=NY.GDP.MKTP.CD
