READ ME: Competition and Career Advancement\
Julian Vedeler Johnsen, Hyejin Ku, Kjell Gunnar Salvanes

This document provides a description of the data, do -files, and
variables used for the analyses in the article "Competition and Career
Advancement" by Julian Vedeler Johnsen, Hyejin Ku, and Kjell G Salvanes\
Data Availability\
The data used in the analyses are drawn from Norwegian administrative
registers covering the full population of Norway Due to confidentiality
restrictions, we are unable to include our data in this replication
package With permission, the described data may be licensed from
Statistics Norway For detailed information (in English ) on how to
obtain this data, see https://www.ssb.no/en/data -tilforskning/utlan
-avdata -tilforskere\
All replication scripts are available at the following DOI: ...

The data are d rawn from the following registers:\
- Birth register\
- Social security registers\
- Employee registers\
- Tax registers\
- Education registers

Dofiles\
Stata version 16 was used for the analyses The do -files listed below
produce the tables and figures in the paper The individual tables and
figures are found in the subfolders "Tables" and "Figures" Item Dofile
Dataset\
Figure 1 fig1.do Mainsample\
Figure 2 N/A (figure is constructed without data)\
Figure 3 fig3.do Mainsample\
Figure 4 fig4.do Mainsample\
Figure 5 fig5.do Mainsample\
Figure 6 fig6.do Mainsample\
Figure A1 figA1.do Mainsample\
Figure A2 figA2.do Mainsample\
Figure A3 figA3.do Mainsample\
Table 1 tab1.do Mainsample\
Table 2 tab2.do Mainsample\
Table 3 tab3.do Mainsample\
Table 4 tab4.do tab4\_row4.do Mainsample\
Donutsample\
Table 5 tab5.do Placebosample\
Table 6 tab6.do Mainsample\
Table 7 tab7\_panelA.do tab7\_panelBandC.do\
Focal workers\_ nonfathers\
Focalworkers\_women\
Table 8 tab8.do Mainsample\
Table A1 tabA1.do Mainsample\
Table A2 tabA2.do Mainsample\
Table A3 tabA3.do Mainsample\
Table A4 tabA4.do Mainsample

Data sets and variables

Mainsample.dta\
Population definition:\
- All men in the Norwegian population registers who: o Fathered a
firstborn child in the window 01.07.1992 to 31.12.1993 o Was aged
withing P10 to P90 of fathers of first -born children (age 25 to 36) o
Worked in the same plant in the years -2, -1, and 0 relative to the
child's birth year o Had at least one male co -worker who had the same
educational level, were within +/- 4 years of age, overlapped in the
same plant in the years -2, -1, and 0 relative to the child's birth
year, and who also fathered a child in the window 01.07.1992 to
31.12.1993 o Had earnings of at least 1G in each of the years -3 to 7
relative to the birth year of the child Panel structure:\
- Annual panel data for years -since -birth -3 to 7 (calendar years 1989
-2000)

Construction:\
- To construct this dataset, we use the birth register to find all men
who fathe red a first -born child in the window 01.07.1992 to 31.12.1993
We exclude those who fathered multiple children (including twins) in the
period We further restrict the sample to those aged ---at child's birth
---within the 10th and the 90th percentiles (25 and 3 6 years) of the
age distribution We define these as focal fathers - We then merge these
data to the employee registers and further restrict the sample to those
who had the same plant identifier in years -2, -1, and 0 relative to the
birth year of the child - Within the employee registers we find and
define competitors as all male co -workers who had the same educational
level as the focal fathers, were within +/ - 4 years of age of the focal
father, overlapped with the focal father in the same plant in the ye ars
-2, -1, and 0 relative to the birth year of the child of the focal
father, and who also fathered a child in the window 01.07.1992 to
31.12.1993 To enable our analysis, we restrict the sample to focal
fathers who had at least one such competitor - We th en link this
dataset of focal fathers and competitors to social security registers
containing data on parental leave take -up - Finally , we use this
population to construct panel data and merge in outcomes from the tax
registers To maintain a balanced sample, we restrict the sample to focal
fathers with earnings of at least 1G in each of the panel data periods
Donuts ample.dta\
- This sample is identical to Mainsample.dta, except that we exclude all
conte sts that include any births (to fo cal father or competitor)
occurri ng in March of A pril 1993 Timeinvariant variabl es in
Mainsample.dta\
Variable name Description npid Personal identifier t Years since
calendar year of child's birth year Calendar year\
Z Indicator for birth occurring after April 1st, 1993\
D Indicator for taking up parental leave (=1 if days of leave\>0)\
S Share of competitors eligible for paid paternity leave (child born
after April 1st, 1993)\
C Share of competitors taking paid paternity leave leave\_duration Days
of parental leave nmb\_ competito rs \# of competitors contest\_size
Size of contest (\# of competitors + 1) plant\_0 Identifier of plant
worked in at calendar year of child's birth employees Firm size of
plant\_0 (\# of registered employees) micro Indicator for firm si ze
\<10 small Indicator for firm size\>=10 & \<50 medium Indicator for firm
size \>=50 & \<250 public =1 if plant is in pu blic sec tor (based on
industry codes) mean\_ income average earnings in the plant mean\_ age
average age of employees in the plant sharemale Share of male employee s
in the plant shareHS Share of employees in the plant with \>= a high
school degree mean\_eduy Average years of education of employees in the
plant sd\_earnings\_gr owth\_r The standard deviation of earnings growth
from (focal father's) YSB -2 to 0 of male workers aged 25 to 36 who are
employed in the same plant as the focal father growth Percentage growth
in fi rm size of focal father's plant from (focal father's) YSB2 to 0
share\_above *p50 Share of top earners within the focal father's plant ,
with top earners defined as workers with an above -median wage, relative
to a wage distribution calculated within a county by two -digit industry
sector by firmsize category cell byr\_child Calendar year of child's
birth bmonth\_child Calendar month of child's birth male* child =1 if s
ex of chil d is male age\_0 Age per 31.12 of calendar yea r of child's
birth edulevel\_0 Education level attained per 31.12 of calendar year of
child's birth (1: \<= 2 years of high -school, 2: high -school diploma,
3: \<= 4 years of colleg e, 4: \>4 years of college)

Time -variant variables in Mainsample.dta\
Variable name Description income earnings (inflation -adjusted to 1993
NOK) ln\_income log earnings (inflation -adjusted to 1993 NOK)\
FD\_ln\_income log earnings relative to log earnings in years -since
-birth = -1 firm\_change Indicator variable equal to 1 if the plant
identifier in a given year is not equal to plant\_0 (0 otherwise) age
age per 31.12 of calendar year Placebosample .dta Population
definition:\
- All men in the Norwegian population registers who: o Fathered a first
-born child in the window 01.07.199 1 to 31.12.199 2 o Was aged withing
P10 to P90 of fathers of first -born children (age 25 to 36) o Worked in
the same plant in the years -2, -1, and 0 relative to the child's birth
year o Had at least one male co -worker who had the same educational
level, were within +/- 4 years of age, overlapped in the same plant in
the years -2, -1, and 0 relative to the child's birth year, and who also
fathered a child in the window 01.07.199 1 to 31.12.199 2 o Had earnings
of at least 1G in each of the years -3 to 7 relative to the birth year
of the child Panel structure:\
- Annual panel data for years -since -birth -3 to 7 (calendar years 198
81999 )

Construction:\
- To construct this dataset, we use the birth register to find all men
who fathered a first -born child in the window 01.07.199 1 to 31.12.199
2 We exclude those who fathered multiple children (including twins) in
the period We further restrict the sample to those aged ---at child's
birth ---within the 10th and the 90th percentiles (25 and 36 years) of
the age distribution We define these as focal fathers - We then merge
these data to the employee registers and further restrict the sample to
those who had the same plant identifier in years -2, -1, and 0 relative
to the birth year of the child - Within the employee registers we find
and define competitors as a ll male co -workers who had the same
educational level as the focal fathers, were within +/ - 4 years of age
of the focal father, overlapped with the focal father in the same plant
in the years -2, -1, and 0 relative to the birth year of the child of
the foc al father, and who also fathered a child in the window 01.07.199
1 to 31.12.199 2 To enable our analysis, we restrict the sample to focal
fathers who had at least one such competitor - Finally, we use this
population to construct panel data and merge in outc omes from the tax
registers To maintain a balanced sample, we restrict the sample to focal
fathers with earnings of at least 1G in each of the panel data periods
Time -invariant variables in Placebosample.dta\
Variable name Description npid Personal identifier t Years since
calendar year of child's birth year Calendar year\
Z Indicator for birth occurring after April 1st, 199 2 S Share of
competitors eligible for placebo reform (child born after April 1st,
1992) plant\_0 Identifier of plant worked in at calendar year of child's
birth byr\_child Calendar year of child's birth bmonth\_child Calendar
month of child's birth age\_0 Age per 31.12 of calendar year of child's
birth edulevel\_0 Education level attained per 31.12 of calendar year of
child's birth

Time -variant variables in Placebosample.dta\
Variable name Description ln\_income log earnings (inflation -adjusted
to 1993 NOK) age age per 31.12 of calendar year

Focalworkers\_ nonfathers .dta Population definition:\
- All men in the Norwegian population registers who: o Did not father a
child in the window 01.07.1992 to 31.12.1993 o Were a ged 25 to 36 in
1992 o Worked in the same plant in the calendar year s 1990 to 1993 o
Had at least two male co -worke rs in his plant who had the same
educational level, were within +/ - 4 years of age, overlapped in the
same plant in the years 1990 to 1993 , and who fathered a child in the
window 01.07.1992 to 31.12.1993 o Had earnings of at least 1G in each of
the years 1990 to 1999 Panel structure:\
- Annual panel data for years 1990 to 1999 Construction:\
- To construct this dataset, we start by selecting al l plants who,
among the employees listed for 1992, ha d at least t wo men who fathe
red a child in the window 01.07.1992 to 31.12.1993 We exclude plants in
which at least one male employee fathered multiple children (including
twins) in the period - Within these plants , we select male employees
with stable employ ment in the plant in the period 1990 to 1993 and who
were aged 25 to 36 in 1992 We exclude men who fathe red a child in the
window 01.07.1992 to 31.12.1993 - For these focal non -fathers, we find
and define competitors as all male co -workers who had the same
educational level as the focal nonfather, were within +/ - 4 years of
age of the focal nonfather, overlapped with the focal nonfather in the
same plant in the ye ars 1990 to 1993 , and who fathered a child in the
window 01.07.1992 to 31.12.1993 To enable our analysis, we restrict the
sample to focal nonfathers who had at least one such competitor - We use
this population to construct panel data and merge in outcomes from the
tax registers To maintain a balanced sample, we restrict the sample to
focal nonfathers with earnings of at least 1G in each of the panel data
periods Timeinvariant variabl es in Focalworkers\_ nonfathers .dta
Variable name Description npid Personal identifier year Calendar year\
S Share of competitors eligible for paid paternity leave (child born
after April 1st, 1993) plant\_ 1992 Identifier of plant worked in 1992
age92 Age per 31.12 of 1992 edulevel\_0 Education level attained per
31.12 of 1992 (1: \<= 2 years of high -school, 2: high -school diploma,
3: \<= 4 years of colleg e, 4: \>4 years of college)

Time -variant variables in Focalworkers\_ nonfathers .dta Variable name
Description income earnings (inflation -adjusted to 1993 NOK) ln\_income
log earnings (inflation -adjusted to 1993 NOK) age age per 31.12 of
calendar year

Focalworkers\_ women .dta Population definition:\
- All women in the Norwegian population registers who: o Were aged 25 to
36 in 1992 o Worked in the same plant in the calendar year s 1990 to
1993 o Had at least two male co -worker s in her plant who had the same
educational level, were within +/ - 4 years of age, overlapped in the
same plant in the years 1990 to 1993 , and who fathered a child in the
window 01.07.1992 to 31.12.1993 o Had earnings of at least 1G in each of
the years 1990 to 1999 Panel structure:\
- Annual panel data for years 1990 to 1999 Construction:\
- To construct this dataset, we start by selecting al l plants who,
among the employees listed for 1992, ha d at least t wo men who fathe
red a child in the window 01.07.1992 to 31.12.1993 We exclude plants in
which at least one male employee fathered multiple children (including
twins) in the period - Within these plants , we select female employees
with stable employ ment in the plant in the period 1990 to 1993 and who
were aged 25 to 36 in 1992 - For these focal women , we find and define
competitors as all male co -workers who had the same educational level
as the focal woman , were within +/ - 4 years of age of the focal woman
, overlapped with the focal woman in the same plant in the ye ars 1990
to 1993 , and who fathered a child in the window 01.07.1992 to
31.12.1993 To enable our analysis, we restrict the sample to focal women
who had at least one such competitor - We use this population to
construct panel data and merge in outcomes from the tax registers To
maintain a balanced sample, we restrict the sample to focal women with
earnings of at least 1G in each of the panel data periods Timeinvariant
variabl es in Focalworkers\_ women .dta Variable name Description npid
Personal identifier year Calendar year\
S Share of competitors eligible for paid paternity leave (child born
after April 1st, 1993) plant\_ 1992 Identifier of plant worked in 1992
age92 Age per 31.12 of 1992 edulevel\_0 Education level attained per
31.12 of 1992 (1: \<= 2 years of high -school, 2: high -school diploma,
3: \<= 4 years of colleg e, 4: \>4 years of college) birth = 1 if the
woman had a birth in the window 01.07.1992 to 31.12.1993

Time -variant variables in Focalworkers\_ women .dta Variable name
Description income earnings (inflation -adjusted to 1993 NOK) ln\_income
log earnings (inflation -adjusted to 1993 NOK) age age per 31.12 of
calendar year\
Stata ado -files used:\
• reghdfe is used in tab8.do and tabA4.do To install, use the following
command: ssc install reghdfe
