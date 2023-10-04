Data and Programs for "How Exporters Grow" Fitzgerald, Haller and
YedidLevi May 12, 2023 1 Conﬁdential data access This work makes use of
conﬁdential data from the Central Statistics Oﬃce, Ireland (CSO)

Under the provisions of the Statistics Act, 1993, the CSO may provide
access to microdata ﬁles under strict conditions to ensure that the
integrity and conﬁdentiality of the data collected under the Act is
maintained The rules, procedures and application forms for accessto
microdata at the CSO are spelled out on their webpage: search for "data
for researchers."
SurveyformsandmethodologydocumentsfortheCSO'ssurveysarealsoavailableonthewebat
https://www.cso.ie/en/aboutus/lgdp/csodatapolicies/dataforresearchers/rmfregister/

2 Conﬁdential data and cleaning programs The conﬁdential data sets used
in our baseline analysis are called cip\_ex\_prodcom.dta
andexports\_newcn.dta In one robustness check we make use of an
additional data set calledprep\_prodcom\_data.dta In another robustness
check we make use of an additional dataset called exports\_newcn14.dta
The ﬁrst data set (cip\_ex\_prodcom.dta) is based on the research
microdata ﬁles of theenterprise data from the Census of Industrial
Production (CIP) which is collected by the Central Statistics Oﬃce (CSO)
in Ireland (Central Statistics Oﬃce, Ireland (CSO) (2005),(2006),
(2012a), (2012b)) It is obtained after combining, checking and cleaning
the original annual ﬁles provided by the CSO To obtain a measure of ﬁrm
age we complement the CIP data with information on ﬁrm's birth year from
the CSO's Business Register (Central Statistics Oﬃce, Ireland (CSO)
(2016)) The cleaning ﬁles make use of conﬁdential information and can
only be made available in the controlled environment of the CSO once
wehave conﬁrmation from the CSO that the researcher has been granted
access to the relevantresearch micro data ﬁles for the purpose of
replicating the work in the present paper Adetailed description of how
the data is cleaned is included in Section 3.1 of the paper and Section
E.1 of the Appendix We merge the enterpriselevel data with data on
exports atthe enterprise level obtained from customs records (Central
Statistics Oﬃce, Ireland (CSO) 1(2013)) and data on products at the
enterprise level obtained from the Prodcom survey (Central Statistics
Oﬃce, Ireland (CSO) (2012c))

The second data set (exports\_newcn.dta) is based on the research
microdata ﬁles of Intrastat and Extrastat customs records which were
matched to ﬁrms (enterprises) via the Business Register by the CSO
(Central Statistics Oﬃce, Ireland (CSO) (2013)) A detaileddescription of
how the data is cleaned is included in Section 3.2 of the paper and
Section E.2 of the Appendix The ﬁle to do this makes use of conﬁdential
information and canonly be made available in the controlled environment
of the CSO once we have conﬁrmationfrom the CSO that the researcher has
been granted access to the relevant research microdata ﬁles for the
purpose of replicating the work in the present paper We then perform
theproduct concordance over time using the Pierce and Schott (2012)
approach We adapt thecode developed by Ilke Van Beveren for concording
the CN8 classiﬁcation over time to dothis (see Van Beveren et al
(2012)), and make use of concordance ﬁles provided by Eurostat (n.d.)

The third data set (prep\_prodcom\_data.dta), used for a single
robustness check, isbased on data from the Prodcom survey which is
performed by the Central Statistics Oﬃce (CSO) in Ireland (Central
Statistics Oﬃce, Ireland (CSO) (2012c)) It is obtained afterchecking and
cleaning the original ﬁles provided by the CSO The cleaning ﬁle makes
useof conﬁdential information and can only be made available in the
controlled environmentof the CSO once we have conﬁrmation from the CSO
that the researcher has been grantedaccess to the relevant research
micro data ﬁles for the purpose of replicating the work in thepresent
paper A detailed description of how the data is cleaned is included in
Section E.3of the Appendix We then perform the product concordance over
time using the Pierce and Schott (2012) approach and make use of
concordance ﬁles provided by Eurostat (n.d.).

The fourth data set (exports\_newcn14.dta) is used for a single
robustness check It issimilar to the second data set
(exports\_newcn.dta) in that it is based on the research microdata ﬁles
of Intrastat and Extrastat customs records matched to the Business
Register bythe CSO (Central Statistics Oﬃce, Ireland (CSO) (2013) and
(2015)) This ﬁle is generatedby merging the customs records for the
period 19962014 A detailed description of howthe data is cleaned is
included in Section 3.2 of the paper and Section E.2 of the Appendix The
cleaning ﬁle makes use of conﬁdential information and can only be made
available inthe controlled environment of the CSO once we have
conﬁrmation from the CSO that theresearcher has been granted access to
the relevant research micro data ﬁles for the purposeof replicating the
work in the present paper We then perform the product concordanceusing
the Pierce and Schott approach We adapt the code developed by Ilke Van
Beverenfor concording the CN8 classiﬁcation over time to do this (see
Van Beveren et al (2012)) andmake use of concordance ﬁles provided by
Eurostat (n.d.).

22.1 Cleaning programs This lists the cleaning programs used in creating
the data This information is also containedin master\_pq.do Files marked
CONFIDENTIAL make use of conﬁdential information andcan only be made
available in the controlled environment of the CSO once we have
conﬁrmation from the CSO that the researcher has been granted access to
the relevant researchmicro data ﬁles for the purpose of replicating the
work in the present paper All other ﬁlesare made available in the
attached packet.3 1 master\_pq.do Collects all do ﬁles and runs them
(brief descriptions of what is in each ﬁle provided) 2
trademicrosum\_1506.do \[CONFIDENTIAL\] Reads in the trade data for
19962014 (Central Statistics Oﬃce, Ireland (CSO) (2013)and(2015)),
cleansthedata, putstheminpanelformat\[CONFIDENTIAL\] generates
trademicro14.dta \[CONFIDENTIAL\] 3 Ilke\_CN\_edited\_1506.do Uses
trademicro14.dta \[CONFIDENTIAL\] Uses concordances CN\_1997.csv
through CN\_2014.csv (Eurostat (n.d.)) Concords the 8digit CN codes
over time for the 19962014 data Generates exports\_newcn14.dta
\[CONFIDENTIAL\] 4 trademicrosum\_1607.do \[CONFIDENTIAL\] Reads in the
trade data for 19962009 (Central Statistics Oﬃce, Ireland (CSO) (2013)),
cleans the data, puts them in panel format \[CONFIDENTIAL\] generates
trademicro.dta \[CONFIDENTIAL\] 5 Ilke\_CN\_edited\_1412.do Uses
trademicro.dta \[CONFIDENTIAL\] Uses concordances CN\_1997.csv through
CN\_2009.csv (Eurostat (n.d.)) Concords the 8digit CN codes over time
for the 19962009 data Generates exports\_newcn.dta \[CONFIDENTIAL\] 6
prep\_customs\_180213.do Uses exports\_newcn.dta \[CONFIDENTIAL\]
3Performs some cleaning Calculates number of markets, products, export
revenue, intrastat and extrastatindicators, export entry and exit
Generates export\_summary.dta \[CONFIDENTIAL\] 7 prodcom\_1412.do
\[CONFIDENTIAL\] Reads in the 19962009 Prodcom data (Central Statistics
Oﬃce, Ireland (CSO) (2012c)) \[CONFIDENTIAL\] Performs cleaning
Generates pc\_9609.dta \[CONFIDENTIAL\] 8 prep\_prodcom\_171117.do
Uses pc\_9609.dta \[CONFIDENTIAL\] Uses concordance ﬁle
pc8\_pc8plus\_1996\_2009.dta (Eurostat (n.d.)) Generates
prep\_prodcom\_data\_150430.dta \[CONFIDENTIAL\] Generates
prodcom\_summary\_171117.dta \[CONFIDENTIAL\] 9 prep\_cip\_171115.do
Uses \${data04}pre91.dta, the combined 19791990 Census of Industrial
Production data (Central Statistics Oﬃce, Ireland (CSO) (2006)),
extracts the information on startup dates \[CONFIDENTIAL\] Uses
\${data09}enter\_clean\_enrmerge.dta, the output of cleaning the
19912009 CIP enterprise data (Central Statistics Oﬃce, Ireland (CSO)
(2005), (2012a),(2012b)) \[CONFIDENTIAL\] Merges in
{data12}birthcease.dta, Business Register birth and cease dates (Central
Statistics Oﬃce, Ireland (CSO) (2016)) \[CONFIDENTIAL\] Combines the
information from the startup dates in \${data04}pre91.dta and
{data12}birthcease.dta to calculate a birth year variable which is later
used toobtain ﬁrm age Merges in \${data09}capstock\_fuelsh.dta, capital
stocks for the 19912009 CIPdata, calculated as described in Haller
(2012) and Haller and Hyland (2014) usingthe Census of Industrial
Production data (Central Statistics Oﬃce, Ireland (CSO) (2005), (2012a),
(2012b)) These capital stocks are used in the calculation of TFP
\[CONFIDENTIAL\] Uses export\_summary.dta \[CONFIDENTIAL\] Uses
prodcom\_summary\_171117.dta \[CONFIDENTIAL\] Generates
cip\_ex\_prodcom.dta \[CONFIDENTIAL\] 42.2 Concordance ﬁles 1
CN\_1997.csv through CN\_2014.csv: concordances for customs data,
obtained from Eurostat (Eurostat (n.d.)) 2 pc8\_pc8plus\_1996\_2009.dta:
concordances for Prodcom data, created using concordances from Eurostat
(Eurostat (n.d.)) 3 Stata programs for data analysis All analysis was
performed using Stata 15 Userwritten programs called upon by these do
ﬁles include: matsave estout reghdfe The following lists the .do ﬁles
used to perform the analysis in the paper and the Appendix,the .dta ﬁles
each .do ﬁle calls on, along with the tables and ﬁgures sourced from
each ﬁle 1 pq\_sumstats.do
Usesexports\_newcn.dta\[CONFIDENTIAL\],cip\_ex\_prodcom.dta\[CONFIDEN-
TIAL\] Calculates summary statistics: Table 1 in the paper Table 2 in
the paper Table 5 in the Appendix 2 pq\_dynamics\_prodmkt\_0.do
Usesexports\_newcn.dta\[CONFIDENTIAL\],cip\_ex\_prodcom.dta\[CONFIDEN-
TIAL\] Uses bilat\_distance.dta Coeﬃcients to form Figure 1 in the
paper Coeﬃcients to form Figure 2 in the paper Coeﬃcients to form
ﬁrmproductmarket exit hazard in Figure 3 in the paper Table 6 in the
paper, column 5 Table 7 in the paper, column 5 5Table 9 in the
Appendix, columns 1, 2, 3 Table 10 in the Appendix Table 11 in the
Appendix Table 12 in the Appendix Table 15 in the Appendix, column 1
Table 16 in the Appendix Table 18 in the Appendix, column 1, row 1,
column 1, row 2 Table 19 in the Appendix Table 20 in the Appendix
Table 25 in the Appendix, column 1, row 1 Table 26 in the Appendix,
columns 1,2,3 Table 27 in the Appendix, column 1 Table 28 in the
Appendix, column 1 Table 29 in the Appendix Table 30 in the Appendix
Table 31 in the Appendix 3 pq\_dynamics\_prodmkt\_1.do
Usesexports\_newcn.dta\[CONFIDENTIAL\],cip\_ex\_prodcom.dta\[CONFIDEN-
TIAL\], exports\_newcn14.dta \[CONFIDENTIAL\] Uses bilat\_distance.dta
Uses avgdpsh.dta Section 5 of the paper: correlation between mi;fk
Section 5.1 in the paper: where the means of mi;fk across all
observations sitin terms of distributions of these variables Section
5.3 in the paper: Rsquared for quantity and price regressions using only
ﬁrmprodyear and mktprodyear ﬁxed eﬀects as controls Table 3 from the
paper Table 4 from the paper: columns 3, 4 Table 5 from the paper
Table 6 in the paper: Columns 1,2,3,4 Table 7 in the paper Columns
1,2,3,4 Table 7 from the Appendix, columns 1,2,5,6 6Table 8 in the
Appendix: Columns 1, 2, 4 Table 23 in the Appendix, columns 1,2,3
Table 24 in the Appendix, column 1 Table 25 in the Appendix, column 1,
row 2 Table 32 in the Appendix, columns 1,2,3 Table 33 in the
Appendix, columns 1,2,3 Table 34 in the Appendix, columns 1,2,3 Table
35 in the Appendix, columns 1,2,3 Table 36 in the Appendix, column 1
Table 37 in the Appendix Table 38 in the Appendix Tables 39, 41, 43,
45 in the Appendix, columns 1,2,3 Tables 40, 42, 44, 46 in the
Appendix, column 1 Tables 47, 49 in the Appendix, columns 1,2,3 Tables
48, 50 in the Appendix, column 1 Tables 51, 53 in the Appendix, columns
1,2,3 Tables 52, 54 in the Appendix, column 1 Table 55 in the Appendix
Table 56 in the Appendix Table 58 in the Appendix Table 59 in the
Appendix Table 60 in the Appendix 4 pq\_dynamics\_mkt\_0.do
Usesexports\_newcn.dta\[CONFIDENTIAL\],cip\_ex\_prodcom.dta\[CONFIDEN-
TIAL\] Uses bilat\_distance.dta Coeﬃcients to form ﬁrmmarket exit
hazard in Figure 3 in the paper Table 9 in the Appendix, columns 4,5
Table 13 in the Appendix Table 14 in the Appendix Table 15 in the
Appendix, column 2 7Table 17 in the Appendix Table 18 in the Appendix,
column 2 Table 21 in the Appendix Table 22 in the Appendix Table 26
in the Appendix, columns 4,5 Table 27 in the Appendix, column 2 Table
28 in the Appendix, column 2 5 pq\_dynamics\_mkt\_1.do
Usesexports\_newcn.dta\[CONFIDENTIAL\],cip\_ex\_prodcom.dta\[CONFIDEN-
TIAL\], exports\_newcn14.dta \[CONFIDENTIAL\] Uses bilat\_distance.dta
Uses avgdpsh.dta Table 4 in the paper, columns 1,2 Table 7 in the
Appendix, columns 3,4 Table 8 in the Appendix, Columns 3,5 Table 23 in
the Appendix, columns 4,5 Table 24 in the Appendix, column 2 Table 25
in the Appendix, column 2 Table 32 in the Appendix, columns 4,5 Table
33 in the Appendix, columns 4,5 Table 34 in the Appendix, columns 4,5
Table 35 in the Appendix, columns 4,5 Table 36 in the Appendix, column
2 Tables 39, 41, 43, 45, columns 4,5 Tables 40, 42, 44, 46 in the
Appendix, column 2 Tables 47, 49 in the Appendix, columns 4,5 Tables
48, 50 in the Appendix, column 2 Tables 51, 53 in the Appendix, columns
4,5 Tables 52, 54 in the Appendix, column 2 6 price\_facts.do
8Usesexports\_newcn.dta\[CONFIDENTIAL\],cip\_ex\_prodcom.dta\[CONFIDEN-
TIAL\] Uses gravdata\_price\_facts.dta Table 57 in the Appendix 7
pq\_dynamics\_prod.do,Usescip\_ex\_prodcom.dta\[CONFIDENTIAL\],prep\_prodcom\_data\_150430.dta
\[CONFIDENTIAL\] Table 61 in the Appendix 4 External data ﬁles used
with conﬁdential data We use external data contained in four ﬁles made
available in this packet: 1 cpi.xls Data on the Consumer Price Index
taken from the CSO Statbank (Central Statistics Oﬃce, Ireland (CSO)
(2023)) Used to deﬂate all nominal values in the data 2
bilat\_distance.dta Data on bilateral distance by partner country Taken
from CEPII (see CEPII (2011) and Mayer and Zignago (2011))

3 avgdpsh.dta (country, avgdpsh, lavgdpsh, check source) share of world
gdp (av over 19962014) at country level Data on average share of world
GDP over 19962014 by partner country Basedon data from World Development
Indicators (The World Bank (2023))

4 gravdata\_price\_facts.dta Data on bilateral distance, annual GDP,
annual GDP per capita and remotenessconstructed using GDP and bilateral
distance Taken from CEPII (see CEPII (2011), Mayer and Zignago (2011),
CEPII (2022), Conte et al (2022), The World Bank (2023))

5 Matlab programs We use Matlab R2016a to perform the quantitative
analysis reported in the paper and inthe Appendix Our code makes use of
the following toolboxes, also from R2016a: 9Global optimization
Optimization Parallel Computing Statistics and Machine Learning 5.1
Main estimation This folder contains the following .m ﬁles: 1
main\_smm\_nested.m Code used to estimate the baseline (nested) model
with the baseline momentsusing a combination of particle swarm and
pattern search This ﬁle calls on objective\_nested\_TE3.m (and therefore
also rouwenhorst.m), which must be savedin an appropriate location This
code can be used to estimate restricted versionsof the model as
described in the preamble to the code 2 objective\_nested\_TE3.m
Objective function used to estimate the baseline (nested) model with
the baselinemoments Thisﬁlecallsonrouwenhorst.m,
whichmustbesavedinanappropriatelocation 3 rouwenhorst.m
CodetoapproximateAR(1)processusingtheRouwenhorstmethodasinKopeckyand
Suen (2010)

4 plotting\_output.m Code to generate Figures 5, 6, 7, 8 in the paper,
and to calculate the functions of FandDreported in Table 8 in the paper

This ﬁle calls on rouwenhorst.m, which must be saved in an appropriate
location

This ﬁle also calls on x\_best\_psi\_1.mat This folder also contains
the following .mat ﬁle: 1 x\_best\_psi\_1.mat This mat ﬁle contains the
vector of parameters which was the outcome of oursearch procedure to
minimize the distance between data and model moments, i.e.the "best"
parameter vector that we found 105.2 Bootstrap This folder contains the
following .m ﬁles: 1 main\_smm\_bootstrap.m This ﬁle implements the
bootstrap It takes as input the vector of best parametersfrom the main
estimation (x\_best\_psi\_1.mat) In each iteration, it uses
objective\_nested\_TE3\_gen\_moments.m together with the vector of best
parametersand a new seed for simulation to generate a new set of target
moments objective\_nested\_TE3.estimate.m is then called on to estimate
a new vector x thatyieldsthebestﬁttothenewsetoftargetmoments
Thislaststepusesyetanotherseedforthesimulationstage
Bothobjective\_nested\_TE3\_gen\_moments.mandobjective\_nested\_TE3.estimate.m
call on rouwenhorst.m 2 objective\_nested\_TE3\_gen\_moments.m This ﬁle
is used together with the vector of best parameters and a new seed
forsimulation to generate a new set of target moments 3
objective\_nested\_TE3.estimate.m This ﬁle estimates a new vector x
that yields the best ﬁt to the new set of targetmoments Note that = 1is
imposed in this exercise 4 bootstrap\_results.m This ﬁle calculates the
bootstrapped standard errors reported in Table 8 in thepaper based on
171 rounds of the parametric bootstrap It also generates Figure 51 from
the Appendix illustrating the distribution of bootstrapped estimates
Calls on bootstrap\_output.mat 5 rouwenhorst.m
CodetoapproximateAR(1)processusingtheRouwenhorstmethodasinKopeckyand
Suen (2010)

This folder also contains the following .mat ﬁle: 1 x\_best\_psi\_1.mat
This mat ﬁle contains the vector of parameters which was the outcome of
oursearch procedure to minimize the distance between data and model
moments, i.e.the "best" parameter vector that we found 2
bootstrap\_output.mat This mat ﬁle contains the 171 bootstrapped
estimates of the model along withthe baseline estimate 115.3 Parameter
robustness This folder contains the following .m ﬁles: 1
psi\_robustness.m CodetogenerateFigure4inthepaper, i.e
modelﬁtfordiﬀerentvaluesof Thiscode also generates Figures 5275 and
116118 in the Appendix It calls on
objective\_nested\_TE3\_moments.m,objective\_nested\_TE3\_altgrid\_moments.m,objective\_nested\_TE3\_quantity\_moments.m,objective\_nested\_TE3\_price\_moments.m,objective\_nested\_TE3\_exit\_moments.m,x\_best\_psi\_ﬁxed\_values\_1.matandx\_best\_psi\_ﬁxed\_values\_2.mat
2 objective\_nested\_TE3\_moments.m Objective function used to
calculate ﬁt of diﬀerent moments using the baselineapproach to
constructing the grid for customer base This ﬁle calls on rouwenhorst.m,
which must be saved in an appropriate location 3
objective\_nested\_TE3\_altgrid\_moments.m Objective function used to
calculate ﬁt of diﬀerent moments using an alternativeapproach to
constructing the grid for customer base This ﬁle calls on rouwenhorst.m,
which must be saved in an appropriate location 4
objective\_nested\_TE3\_quantity\_moments.m Objective function used to
calculate quantity moments using the baseline approach to constructing
the grid for customer base This ﬁle calls on rouwenhorst.m, which must
be saved in an appropriate location 5
objective\_nested\_TE3\_price\_moments.m Objective function used to
calculate price moments using the baseline approach toconstructing the
grid for customer base This ﬁle calls on rouwenhorst.m, whichmust be
saved in an appropriate location 6
objective\_nested\_TE3\_exit\_moments.m Objective function used to
calculate exit moments using the baseline approach toconstructing the
grid for customer base This ﬁle calls on rouwenhorst.m, whichmust be
saved in an appropriate location 7 rouwenhorst.m
CodetoapproximateAR(1)processusingtheRouwenhorstmethodasinKopeckyand
Suen (2010)

128 other\_parameter\_robustness.m Code to generate Figures 76115 in
the Appendix It calls on alphamat.mat,deltamat.mat, phimat.mat,
signumat.mat, sigetamat.mat, rhomat.mat, gammamat.mat and pooledmat.mat
This folder also contains the following .mat ﬁles: 1
x\_best\_psi\_ﬁxed\_values\_1.mat This mat ﬁle contains the vectors of
parameters used to construct Figure 4 in thepaper 2
x\_best\_psi\_ﬁxed\_values\_2.mat
Thismatﬁlecontainsthevectorsofparametersusedtogetherwithx\_best\_psi\_ﬁxed\_values\_1.matto
construct Figure 52 in the Appendix 3 alphamat.mat Contains estimates
of the baseline model restricting , along with correspondingmodel ﬁt,
and also the best estimates of the model along with ﬁt 4 deltamat.mat
Contains estimates of the baseline model restricting , along with
correspondingmodel ﬁt, and also the best estimates of the model along
with ﬁt 5 phimat.mat Contains estimates of the baseline model
restricting , along with correspondingmodel ﬁt, and also the best
estimates of the model along with ﬁt 6 signumat.mat Contains estimates
of the baseline model restricting , along with correspondingmodel ﬁt,
and also the best estimates of the model along with ﬁt 7 sigetamat.mat
Contains estimates of the baseline model restricting , along with
correspondingmodel ﬁt, and also the best estimates of the model along
with ﬁt 8 rhomat.mat Contains estimates of the baseline model
restricting , along with correspondingmodel ﬁt, and also the best
estimates of the model along with ﬁt 139 gammamat.mat Contains
estimates of the baseline model restricting , along with
correspondingmodel ﬁt, and also the best estimates of the model along
with ﬁt 10 pooledmat.mat
Thismatﬁlepoolstogethertheparameterestimatesinx\_best\_psi\_ﬁxed\_values\_2.mat,alphamat.mat,deltamat.mat,phimat.mat,signumat.mat,sigetamat.mat,rhomat.mat,gammamat.mat
along with ﬁt of the model along various dimensions for these parameter
values The parameter vectors are restricted to those where \>0:96 5.4
Simulations This folder contains the following .m ﬁles: 1
propositions\_support.m Code that provides numerical support for
extensions of propositions 14 from Section 2.1 of the paper This code
also veriﬁes that the proxies for marginal cost,market size and
idiosyncratic demand used in the reduced form empirical strategybehave
as conjectured in Section 4 of the paper under our baseline
parameterization of the model Both of these analyses are described in
detail in Section D.3of the Appendix This code generates Figures 1, 2,
and 3 in the Appendix 2 rouwenhorst.m
CodetoapproximateAR(1)processusingtheRouwenhorstmethodasinKopeckyand
Suen (2010)

This folder also contains the following .mat ﬁles: 1
x\_best\_psi\_1\_extended.mat This mat ﬁle contains the vector of
parameters which was the outcome of oursearch procedure to minimize the
distance between data and model moments, i.e.the "best" parameter vector
that we found In addition, it contains parametersfor the cost, market
size and sunk cost distributions for the augmented model
inpropositions\_support.m 2 x\_best\_psi\_0\_extended.mat This mat ﬁle
contains the vector of parameters which minimize the distance between
data and model moments conditional on = 0 In addition, it
containsparameters for the cost, market size and sunk cost distributions
for the augmentedmodel in propositions\_support.m 145.5 Application This
folder contains the following .m ﬁles: 1 trade\_cost\_impulseresponses.m
This ﬁle generates impulseresponses of incumbents to diﬀerent types of
tradecost shocks for parameter vectors with = 1and = 0 It generates
Figure 9 inthe paper and Figures 125130 in the Appendix This ﬁle calls
on rouwenhorst.m,x\_best\_psi\_1\_short.mat and
x\_best\_psi\_0\_short.mat 2 rouwenhorst.m
CodetoapproximateAR(1)processusingtheRouwenhorstmethodasinKopeckyand
Suen (2010)

It also contains the following .mat ﬁles: 1 x\_best\_psi\_1\_short.mat
This mat ﬁle contains a subset of the vector of parameters which
minimize thedistance between data and model moments, i.e the "best"
parameter vector thatwe found 2 x\_best\_psi\_0\_short.mat This mat ﬁle
contains a subset of the vector of parameters which minimize thedistance
between data and model moments conditional on = 0 5.6 Unrestricted theta
This folder contains the following .m ﬁles: 1 smm\_unrestricted\_theta.m
Code used to estimate a customer markets model with unrestricted using
acombination of particle swarm and pattern search This ﬁle calls on
objective\_unrestricted\_theta.m (and therefore also rouwenhorst.m),
which must besaved in an appropriate location 2
objective\_unrestricted\_theta.m Objective function used to estimate a
customer markets model with unrestricted with the baseline moments This
ﬁle calls on rouwenhorst.m, which must besaved in an appropriate
location 3 rouwenhorst.m
15CodetoapproximateAR(1)processusingtheRouwenhorstmethodasinKopeckyand
Suen (2010)

4 plotting\_output\_unrestricted\_theta.m Code to generate Figures
119121 in the Appendix, and to calculate the functionsofFandDreported in
Table 65 in the Appendix

This ﬁle calls on rouwenhorst.m, which must be saved in an appropriate
location

This ﬁle also calls on x\_best\_psi\_0\_unrestricted\_theta.mat It also
contains the following .mat ﬁles: 1
x\_best\_psi\_0\_unrestricted\_theta.mat This mat ﬁle contains the
vector of parameters which was the outcome of oursearch procedure to
minimize the distance between data moments and momentsgenerated by the
customer markets model with unrestricted 

5.7 Learning model This folder contains the following .m ﬁles: 1
smm\_bayes\_setqty.m Code used to estimate the learning about demand
model where ﬁrms set quantities described in Appendix C This ﬁle calls
on objective\_bayes\_setqty.m (andtherefore also rouwenhorst.m), which
must be saved in an appropriate location 2 objective\_bayes\_setqty.m
Objective function used to estimate the learning about demand model
where ﬁrmsset quantities described in Appendix C This ﬁle calls on
rouwenhorst.m, whichmust be saved in an appropriate location 3
rouwenhorst.m
CodetoapproximateAR(1)processusingtheRouwenhorstmethodasinKopeckyand
Suen (2010)

4 plotting\_output\_bayes\_setqty.m Code to generate Figures 122124 in
the Appendix, and to calculate the functionofFreported in Table 66 in
the Appendix

This ﬁle calls on rouwenhorst.m, which must be saved in an appropriate
location

This ﬁle also calls on x\_best\_learn.mat 16It also contains the
following .mat ﬁles: 1 x\_best\_learn.mat This mat ﬁle contains the
vector of parameters which was the outcome of oursearch procedure to
minimize the distance between data moments and momentsgenerated by the
learning about demand model where ﬁrms set quantities Where tables &
ﬁgures come from 6.1 Paper 6.1.1 Tables 1 Summary statistics: Firms and
exports, averages 19962009 stata/do ﬁles/pq\_sumstats.do 2 Percentage
of exporters by change in number of markets year to year stata/do
ﬁles/pq\_sumstats.do 3 Correlations of miandfkwith employment, GDP and
distance stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 4 Distribution of
duration: Export spells and export observations Columns 1, 2: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do Columns 3, 4: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do 5 Regression of duration on miandfk
stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 6 Building our speciﬁcation:
Quantity Columns 1,2,3,4: stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do
Column 5: stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do 7 Building our
speciﬁcation: Price Columns 1,2,3,4: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do Column 5: stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do 8 Structural model: parameter estimates
conditional on = 1 Estimation uses code in matlab/main\_estimation
Conﬁdence intervals obtained using code in matlab/bootstrap 176.1.2
Figures 1 Estimated quantity trajectories stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do 2 Estimated price trajectories
stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do 3 Estimated exit trajectories
stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do 4 Model ﬁt for diﬀerent
values of\
Restrictedversionsofthemodelestimatedusingcodeinmatlab/main\_estimation
Figure generated by matlab/parameter\_robustness/psi\_robustness.m 5
Model ﬁt: Quantities Model estimated using code in
matlab/main\_estimation Figure generated using
matlab/main\_estimation/plotting\_output.m 6 Model ﬁt: Prices Model
estimated using code in matlab/main\_estimation Figure generated using
matlab/main\_estimation/plotting\_output.m 7 Model ﬁt: Exit Model
estimated using code in matlab/main\_estimation Figure generated using
matlab/main\_estimation/plotting\_output.m 8 Selling expenses as a share
of revenue Model estimated using code in matlab/main\_estimation
Figure generated using matlab/main\_estimation/plotting\_output.m 9
Impulseresponses of incumbent exports to tariﬀ changes Generated using
matlab/application/trade\_cost\_impulseresponses.m 186.2 Appendix 6.2.1
Tables 1 Exports matched to ﬁrms as a share of published merchandise
exports From online appendix to "Exporters and Shocks" by Fitzgerald
and Haller (2018)

2 Export status: CIP and Customs classiﬁcation, number of ﬁrms From
online appendix to "Exporters and Shocks" by Fitzgerald and Haller
(2018)

3 Export status: CIP and Customs classiﬁcation, share of CIP revenue
From online appendix to "Exporters and Shocks" by Fitzgerald and Haller
(2018)

4 Diﬀerent measures of exports From online appendix to "Exporters and
Shocks" by Fitzgerald and Haller (2018)

5 Distribution of exporting ﬁrms across NACE 2digit sectors (%)
stata/do ﬁles/pq\_sumstats.do 6 Breakdown of total exports by HS2
category (%) for sample period Based on publicly available CSO data on
exports 7 Percentiles of distribution of \# markets per ﬁrm and \# of
ﬁrms per market Columns 1,2,5,6: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do Columns 3,4: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 8 Summary statistics on full sample of
exporteryears and baseline estimation samples: Columns 1,2,4: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do Columns 3,5: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 9 Dynamics of revenue, quantity, price, and
number of products Columns 1,2,3: stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do Columns 4,5: stata/do
ﬁles/pq\_dynamics\_mkt\_0.do 10 Baseline dynamics of ﬁrmproductmarket
quantities: full results stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do 11
Baseline dynamics of ﬁrmproductmarket prices: full results 19stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do 12 Baseline dynamics of
ﬁrmproductmarket revenue: full results stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do 13 Baseline dynamics of ﬁrmmarket
revenue: full results stata/do ﬁles/pq\_dynamics\_mkt\_0.do 14 Baseline
dynamics of ﬁrmmarket \# of products: full results stata/do
ﬁles/pq\_dynamics\_mkt\_0.do 15 Exit hazard Column 1: stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do Column 2: stata/do
ﬁles/pq\_dynamics\_mkt\_0.do 16 Firmproductmarket exit hazard: full
results stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do 17 Firmmarket exit
hazard: full results stata/do ﬁles/pq\_dynamics\_mkt\_0.do 18 Entry and
1year exit Column 1: stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do Column
2: stata/do ﬁles/pq\_dynamics\_mkt\_0.do 19 Firmproductmarket entry:
full results stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do 20
Firmproductmarket 1year exit: full results stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do 21 Firmmarket entry: full results
stata/do ﬁles/pq\_dynamics\_mkt\_0.do 22 Firmmarket 1year exit: full
results stata/do ﬁles/pq\_dynamics\_mkt\_0.do 2023 Dynamics of revenue,
quantity, price, and number of products: no interactions withmiandfk
Columns 1,2,3: stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do Columns 4,5:
stata/do ﬁles/pq\_dynamics\_mkt\_1.do 24 Exit hazard: no interactions
with miandfk Column 1: stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do
Column 2: stata/do ﬁles/pq\_dynamics\_mkt\_1.do 25 Entry and 1year exit
unconditional on miandfk Column 1, row 1: stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do Column 1, row 2: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do Column 2: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 26 Dynamics of revenue, quantity, price, \#
products: interactions with lnmiandlnfk Columns 1,2,3: stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do Columns 4,5: stata/do
ﬁles/pq\_dynamics\_mkt\_0.do 27 Exit hazard: interactions with
lnmiandlnfk Column 1: stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do Column
2: stata/do ﬁles/pq\_dynamics\_mkt\_0.do 28 Entry and 1year exit:
interactions with lnmiandlnfk Column 1: stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do Column 2: stata/do
ﬁles/pq\_dynamics\_mkt\_0.do 29 Dynamics of revenue, quantity, price:
interactions with mijandfjk stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do
30 Exit hazard: interactions with mijandfjk stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do 31 Entry and 1year exit: interactions
with mijandfjk stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do 32 Dynamics of
revenue, quantity, price, \# products: spell ﬁxed eﬀects 21Columns
1,2,3: stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do Columns 4,5: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 33 Dynamics of revenue, quantity, price, \#
products: estimation in diﬀerences Columns 1,2,3: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do Columns 4,5: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 34 Dynamics of revenue, quantity, price, \#
products: Long sample, topcoding at 10 Part I Columns 1,2,3: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do Columns 4,5: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 35 Dynamics of revenue, quantity, price, \#
products: Long sample, topcoding at 10 Part II Columns 1,2,3: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do Columns 4,5: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 36 Exit hazard: Long sample, topcoding at
10 Column 1: stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do Column 2:
stata/do ﬁles/pq\_dynamics\_mkt\_1.do 37 Dynamics of revenue, quantity,
price: dropping unit value outliers stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do 38 Dynamics of revenue, quality, price:
alternative measure of quantity stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do 39 Dynamics of revenue, quantity,
price, \# products Columns 1,2,3: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do Columns 4,5: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 40 Exit hazard: Consumer food Column 1:
stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do Column 2: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 41 Dynamics of revenue, quantity, price, \#
products Columns 1,2,3: stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do
22Columns 4,5: stata/do ﬁles/pq\_dynamics\_mkt\_1.do 42 Exit hazard:
Consumer nonfood nondurables Column 1: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do Column 2: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 43 Dynamics of revenue, quantity, price, \#
products: Intermediates Columns 1,2,3: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do Columns 4,5: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 44 Exit hazard: Intermediates Column 1:
stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do Column 2: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 45 Dynamics of revenue, quantity, price, \#
products: Capital goods Columns 1,2,3: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do Columns 4,5: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 46 Exit hazard: Capital goods Column 1:
stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do Column 2: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 47 Dynamics of revenue, quantity, price, \#
products: Domesticowned Columns 1,2,3: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do Columns 4,5: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 48 Exit hazard: Domesticowned, column 1
Column 1: stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do Column 2: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 49 Dynamics of revenue, quantity, price, \#
products: Foreignowned Columns 1,2,3: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do Columns 4,5: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 50 Exit hazard: Foreignowned Column 1:
stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 23Column 2: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 51 Dynamics of revenue, quantity, price, \#
products: Intrastat only Columns 1,2,3: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do Columns 4,5: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 52 Exit hazard: Intrastat only Column 1:
stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do Column 2: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 53 Dynamics of revenue, quantity, price, \#
products: Extrastat only Columns 1,2,3: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do Columns 4,5: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 54 Exit hazard: Extrastat only Column 1:
stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do Column 2: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 55 Dynamics of revenue, quantity, price, \#
products: Only 11 CN8 matches stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do
56 Exit hazard: Only 11 CN8 matches stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do 57 Crosssectional relationship between
quantity and price and gravity variables stata/do ﬁles/price\_facts.do
58 Dynamics of quantity, price: Not controlling for spell length
stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 59 Dynamics of quantity,
price: Not controlling for ﬁrmlevel heterogeneity I stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do 60 Dynamics of prices: Not controlling
for ﬁrmlevel heterogeneity II stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do
61 Firmproduct prices and ﬁrmproduct age, not controlling for costs or
selection 24stata/do ﬁles/pq\_dynamics\_prod.do 62 Structural model:
parameter estimates for trade elasticity of 3, = 0 Model estimated
using code in matlab/main\_estimation See
matlab/parameter\_robustness/psi\_robustness.m for code to call on
parameters and generate ﬁt 63 Data and model moments: Quantities and
prices Baseline model estimated using code in matlab/main\_estimation
Customer markets model estimated using code in
matlab/unrestricted\_theta Learning model estimated using code in
matlab/learning\_model See relevant folders for code to call on
parameters and generate ﬁt 64 Data and model moments: Entry and exit
Baseline model estimated using code in matlab/main\_estimation
Customer markets model estimated using code in
matlab/unrestricted\_theta Learning model estimated using code in
matlab/learning\_model See relevant folders for code to call on
parameters and generate ﬁt 65 Model with = 0andunrestricted: parameters
and ﬁt Model estimated using code in matlab/unrestricted\_theta See
this folder for code to call on parameters and generate ﬁt 66 Learning
about demand model: parameters and ﬁt Model estimated using code in
matlab/learning\_model See this folder for code to call on parameters
and generate ﬁt 6.2.2 Figures 1 Number of markets per ﬁrm and
productivity: Simulated example Generated in
matlab/simulations/propositions\_support.m 2 Number of ﬁrms per market
and market size: Simulated example Generated in
matlab/simulations/propositions\_support.m 3 Duration and idiosyncratic
demand: Simulated example 25Generated in
matlab/simulations/propositions\_support.m 4 Dynamics of quantities:
baseline vs unconditional on miandfk Baseline: stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do Unconditional: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do 5 Dynamics of prices: baseline vs
unconditional on miandfk Baseline: stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do Unconditional: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do 6 Exit hazard: baseline vs
unconditional on miandfk Baseline ﬁrmproductmarket: stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do Unconditional ﬁrmproductmarket:
stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do Baseline ﬁrmmarket: stata/do
ﬁles/pq\_dynamics\_mkt\_0.do Unconditional ﬁrmmarket: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 7 Dynamics of quantities: baseline vs
conditional on lnmiandlnfk stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do 8
Dynamics of prices: baseline vs conditional on lnmiandlnfk stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do 9 Exit hazard: baseline vs conditional
on lnmiandlnfk Firmproductmarket: stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do Firmmarket: stata/do
ﬁles/pq\_dynamics\_mkt\_0.do 10 Dynamics of quantities: baseline vs
conditional on mijandfjk stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do 11
Dynamics of prices: baseline vs conditional on mijandfjk stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do 12 Exit hazard: baseline vs conditional
on mijandfjk stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do 13 Dynamics of
quantities: baseline vs with spell f.e

Baseline: stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do 26Spell f.e.:
stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 14 Dynamics of price: baseline
vs with spell f.e

Baseline: stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do Spell f.e.:
stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 15 Dynamics of quantities:
Estimation in diﬀerences stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 16
Dynamics of prices: Estimation in diﬀerences stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do 17 Dynamics of quantities: Long sample,
topcoding at 10 stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 18 Dynamics
of prices: Long sample, topcoding at 10 stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do 19 Exit hazard: Long sample, topcoding
at 10 Firmproductmarket: stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do
Firmmarket: stata/do ﬁles/pq\_dynamics\_mkt\_1.do 20 Dynamics of
quantities: Dropping unit value outliers Baseline: stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do Dropping uv outliers: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do 21 Dynamics of prices: Dropping unit
value outliers Baseline: stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do
Dropping uv outliers: stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 22
Dynamics of quantities: Alternative measure of quantity Baseline:
stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do Alt quantities: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do 23 Dynamics of prices: Alternative
measure of quantity Baseline: stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do
Alt quantities: stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 2724 Dynamics
of quantities: Consumer food Baseline: stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do Consumer food: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do 25 Dynamics of prices: Consumer food
Baseline: stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do Consumer food:
stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 26 Exit hazard: Consumer food
Baseline ﬁrmproductmarket: stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do
Consumerfoodﬁrmproductmarket: stata/doﬁles/pq\_dynamics\_prodmkt\_1.do
Baseline ﬁrmmarket: stata/do ﬁles/pq\_dynamics\_mkt\_0.do Consumer
food ﬁrmmarket: stata/do ﬁles/pq\_dynamics\_mkt\_1.do 27 Dynamics of
quantities: Consumer nonfood nondurables Baseline: stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do Consumer nonfood nondur: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do 28 Dynamics of prices: Consumer nonfood
nondurables Baseline: stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do
Consumer nonfood nondur: stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 29
Exit hazard: Consumer nonfood nondurables Baseline ﬁrmproductmarket:
stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do
Consumernonfoodnondurﬁrmproductmarket:
stata/doﬁles/pq\_dynamics\_prodmkt\_1.do Baseline ﬁrmmarket: stata/do
ﬁles/pq\_dynamics\_mkt\_0.do Consumernonfoodnondurﬁrmmarket:
stata/doﬁles/pq\_dynamics\_mkt\_1.do 30 Dynamics of quantities:
Intermediates Baseline: stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do
Intermediates: stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 31 Dynamics of
prices: Intermediates Baseline: stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do Intermediates: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do 2832 Exit hazard: Intermediates
Baseline ﬁrmproductmarket: stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do
Intermediates ﬁrmproductmarket: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do Baseline ﬁrmmarket: stata/do
ﬁles/pq\_dynamics\_mkt\_0.do Intermediates ﬁrmmarket: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 33 Dynamics of quantities: Capital goods
Baseline: stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do Capital goods:
stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 34 Dynamics of prices: Capital
goods Baseline: stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do Capital
goods: stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 35 Exit hazard: Capital
goods Baseline ﬁrmproductmarket: stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do Capital goods ﬁrmproductmarket:
stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do Baseline ﬁrmmarket: stata/do
ﬁles/pq\_dynamics\_mkt\_0.do Capital goods ﬁrmmarket: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 36 Dynamics of quantities: Domesticowned
Baseline: stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do Domesticowned:
stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 37 Dynamics of prices:
Domesticowned Baseline: stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do
Domesticowned: stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 38 Exit
hazard: Domesticowned Baseline ﬁrmproductmarket: stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do Domesticownedﬁrmproductmarket:
stata/doﬁles/pq\_dynamics\_prodmkt\_1.do Baseline ﬁrmmarket: stata/do
ﬁles/pq\_dynamics\_mkt\_0.do Domesticowned ﬁrmmarket: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 39 Dynamics of quantities: Foreignowned
29Baseline: stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do Foreignowned:
stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 40 Dynamics of prices:
Foreignowned Baseline: stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do
Foreignowned: stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 41 Exit hazard:
Foreignowned Baseline ﬁrmproductmarket: stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do Foreignownedﬁrmproductmarket:
stata/doﬁles/pq\_dynamics\_prodmkt\_1.do Baseline ﬁrmmarket: stata/do
ﬁles/pq\_dynamics\_mkt\_0.do Foreignowned ﬁrmmarket: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 42 Dynamics of quantities: Intrastat only
Baseline: stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do Intrastat:
stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 43 Dynamics of prices:
Intrastat only Baseline: stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do
Intrastat: stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 44 Exit hazard:
Intrastat only Baseline ﬁrmproductmarket: stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do Intrastat ﬁrmproductmarket: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do Baseline ﬁrmmarket: stata/do
ﬁles/pq\_dynamics\_mkt\_0.do Intrastat ﬁrmmarket: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 45 Dynamics of quantities: Extrastat only
Baseline: stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do Extrastat:
stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 46 Dynamics of prices:
Extrastat only Baseline: stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do
Extrastat: stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 47 Exit hazard:
Extrastat only 30Baseline ﬁrmproductmarket: stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do Extrastat ﬁrmproductmarket: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do Baseline ﬁrmmarket: stata/do
ﬁles/pq\_dynamics\_mkt\_0.do Extrastat ﬁrmmarket: stata/do
ﬁles/pq\_dynamics\_mkt\_1.do 48 Dynamics of quantities: Only 11 CN8
matches Baseline: stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do 11 CN8
matches: stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 49 Dynamics of
prices: Only 11 CN8 matches Baseline: stata/do
ﬁles/pq\_dynamics\_prodmkt\_0.do 11 CN8 matches: stata/do
ﬁles/pq\_dynamics\_prodmkt\_1.do 50 Exit hazard: Only 11 CN8 matches
Baseline: stata/do ﬁles/pq\_dynamics\_prodmkt\_0.do 11 CN8 matches:
stata/do ﬁles/pq\_dynamics\_prodmkt\_1.do 51 Distribution of
bootstrapped parameter estimates matlab/bootstrap/bootstrap\_results.m
52 Fit of the model for diﬀerent values of 2\[0;1\]
matlab/parameter\_robustness/psi\_robustness.m 53 Fit components for
diﬀerent values of\
matlab/parameter\_robustness/psi\_robustness.m 54 Quantity moments
model ﬁt: = 0 matlab/parameter\_robustness/psi\_robustness.m 55 Price
moments model ﬁt: = 0 matlab/parameter\_robustness/psi\_robustness.m 56
Quantity moments model ﬁt: = 0:8
matlab/parameter\_robustness/psi\_robustness.m 57 Price moments model
ﬁt: = 0:8 matlab/parameter\_robustness/psi\_robustness.m 3158 Quantity
moments model ﬁt: = 0:9 matlab/parameter\_robustness/psi\_robustness.m
59 Price moments model ﬁt: = 0:9
matlab/parameter\_robustness/psi\_robustness.m 60 Quantity moments
model ﬁt: = 0:95 matlab/parameter\_robustness/psi\_robustness.m 61
Price moments model ﬁt: = 0:95
matlab/parameter\_robustness/psi\_robustness.m 62 Quantity moments
model ﬁt: = 0:975 matlab/parameter\_robustness/psi\_robustness.m 63
Price moments model ﬁt: = 0:975
matlab/parameter\_robustness/psi\_robustness.m 64 Quantity moments
model ﬁt: = 0:99 matlab/parameter\_robustness/psi\_robustness.m 65
Price moments model ﬁt: = 0:99
matlab/parameter\_robustness/psi\_robustness.m 66 Alpha for diﬀerent
values of psi matlab/parameter\_robustness/psi\_robustness.m 67 Delta
for diﬀerent values of psi
matlab/parameter\_robustness/psi\_robustness.m 68 Signu for diﬀerent
values of psi matlab/parameter\_robustness/psi\_robustness.m 69 Sigeta
for diﬀerent values of psi
matlab/parameter\_robustness/psi\_robustness.m 70 Rho for diﬀerent
values of psi 32matlab/parameter\_robustness/psi\_robustness.m 71 Omega
for diﬀerent values of psi
matlab/parameter\_robustness/psi\_robustness.m 72 Gamma for diﬀerent
values of psi matlab/parameter\_robustness/psi\_robustness.m 73 Lambda
for diﬀerent values of psi
matlab/parameter\_robustness/psi\_robustness.m 74 F for diﬀerent values
of psi matlab/parameter\_robustness/psi\_robustness.m 75.Dfor diﬀerent
values of psi matlab/parameter\_robustness/psi\_robustness.m 76 Fit for
ﬁxed values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 77 Fit for
all values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 78 Quantity
ﬁt for all values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 79 Exit and
entry ﬁt for all values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 80 Fit for
ﬁxed values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 81 Fit for
all values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 82 Quantity
ﬁt for all values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 3383 Exit
and entry ﬁt for all values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 84 Fit for
ﬁxed values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 85 Fit for
all values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 86 Quantity
ﬁt for all values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 87 Exit and
entry ﬁt for all values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 88 Fit for
ﬁxed values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 89 Fit for
all values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 90 Quantity
ﬁt for all values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 91 Exit and
entry ﬁt for all values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 92 Fit for
ﬁxed values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 93 Fit for
all values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 94 Quantity
ﬁt for all values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 95 Exit and
entry ﬁt for all values of 
34matlab/parameter\_robustness/other\_parameter\_robustness.m 96 Fit
for ﬁxed values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 97 Fit for
all values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 98 Quantity
ﬁt for all values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 99 Exit and
entry ﬁt for all values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 100 Fit for
ﬁxed values of
matlab/parameter\_robustness/other\_parameter\_robustness.m 101 Fit for
all values of
matlab/parameter\_robustness/other\_parameter\_robustness.m 102
Quantity ﬁt for all values of
matlab/parameter\_robustness/other\_parameter\_robustness.m 103 Exit
and entry ﬁt for all values of
matlab/parameter\_robustness/other\_parameter\_robustness.m 104 Fit for
all values of !
matlab/parameter\_robustness/other\_parameter\_robustness.m 105
Quantity ﬁt for all values of !
matlab/parameter\_robustness/other\_parameter\_robustness.m 106 Exit
and entry ﬁt for all values of !
matlab/parameter\_robustness/other\_parameter\_robustness.m 107 Fit for
all values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 35108
Quantity ﬁt for all values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 109 Exit
and entry ﬁt for all values of 
matlab/parameter\_robustness/other\_parameter\_robustness.m 110 Fit for
all values of F
matlab/parameter\_robustness/other\_parameter\_robustness.m 111
Quantity ﬁt for all values of F
matlab/parameter\_robustness/other\_parameter\_robustness.m 112 Exit
and entry ﬁt for all values of F
matlab/parameter\_robustness/other\_parameter\_robustness.m 113 Fit for
all values of D
matlab/parameter\_robustness/other\_parameter\_robustness.m 114
Quantity ﬁt for all values of D
matlab/parameter\_robustness/other\_parameter\_robustness.m 115 Exit
and entry ﬁt for all values of D
matlab/parameter\_robustness/other\_parameter\_robustness.m 116 Fit of
model with trade elasticity of 3, = 0: Quantities
matlab/parameter\_robustness/psi\_robustness.m 117 Fit of model with
trade elasticity of 3, = 0: Prices
matlab/parameter\_robustness/psi\_robustness.m 118 Fit of model with
trade elasticity of 3, = 0: Exit
matlab/parameter\_robustness/psi\_robustness.m 119 Fit of the Customer
Markets model ( = 0,unrestricted): Quantities
matlab/unrestricted\_theta/plotting\_output\_unrestricted\_theta.m 120
Fit of the Customer Markets model ( = 0,unrestricted): Prices
36matlab/unrestricted\_theta/plotting\_output\_unrestricted\_theta.m
121 Fit of the Customer Markets model ( = 0,unrestricted): Exit
matlab/unrestricted\_theta/plotting\_output\_unrestricted\_theta.m 122
Fit of the learning about demand model: Quantities
matlab/learning\_model/plotting\_output\_bayes\_setqty.m 123 Fit of the
learning about demand model: Prices
matlab/learning\_model/plotting\_output\_bayes\_setqty.m 124 Fit of the
learning about demand model: Exit
matlab/learning\_model/plotting\_output\_bayes\_setqty.m 125
Impulseresponses of incumbent exports to tariﬀ changes: baseline model
matlab/application/trade\_cost\_impulseresponses.m 126 Impulseresponses
of incumbent exports to news shock: baseline model
matlab/application/trade\_cost\_impulseresponses.m 127 Impulseresponses
of incumbent exports to tariﬀ changes: customer markets model
matlab/application/trade\_cost\_impulseresponses.m 128 Comparison of
revenue elasticities across models
matlab/application/trade\_cost\_impulseresponses.m 129 Impulseresponses
of incumbent export prices to tariﬀ changes: customer marketsmodel
matlab/application/trade\_cost\_impulseresponses.m 130 Impulseresponses
of incumbent exports to news shock: customer markets model
matlab/application/trade\_cost\_impulseresponses.m 37References \[1\]
Central Statistics Oﬃce, Ireland (CSO) (2005), Census of Industrial
Production 19912004, ﬁrst accessed 16th December
2005,https://www.cso.ie/en/aboutus/lgdp/csodatapolicies/dataforresearchers/rmfregister/
\[2\] Central Statistics Oﬃce, Ireland (CSO) (2006), Census of
Industrial Production 19791990, ﬁrst accessed 15th November
2006,https://www.cso.ie/en/aboutus/lgdp/csodatapolicies/dataforresearchers/rmfregister/
\[3\] Central Statistics Oﬃce, Ireland (CSO) (2012a), Census of
Industrial Production 2005, ﬁrst accessed 20th January
2012,https://www.cso.ie/en/aboutus/lgdp/csodatapolicies/dataforresearchers/rmfregister/
\[4\] Central Statistics Oﬃce, Ireland (CSO) (2012b), Census of
Industrial Production 20062009, ﬁrst accessed 17th May
2012,https://www.cso.ie/en/aboutus/lgdp/csodatapolicies/dataforresearchers/rmfregister/
\[5\] Central Statistics Oﬃce, Ireland (CSO) (2012c), Prodcom 19962009,
ﬁrst accessed 23rd April 2012,
https://www.cso.ie/en/methods/industry/prodcom/ \[6\]
CentralStatisticsOﬃce, Ireland(CSO)(2013), Tradedata19962012,
ﬁrstaccessed21st
June2013,https://www.cso.ie/en/aboutus/lgdp/csodatapolicies/dataforresearchers/rmfregister/
\[7\] Central Statistics Oﬃce, Ireland (CSO) (2015), Tradedata 20132014,
ﬁrst accessed 6th March
2015,https://www.cso.ie/en/aboutus/lgdp/csodatapolicies/dataforresearchers/rmfregister/
\[8\] Central Statistics Oﬃce, Ireland (CSO) (2016), Business Register,
Birth and Cease dates, ﬁrst accessed 8th March
2016,https://www.cso.ie/en/aboutus/lgdp/csodatapolicies/dataforresearchers/rmfregister/
\[9\] Central Statistics Oﬃce, Ireland (CSO) (2023), Consumer Price
Index,https://data.cso.ie/table/CPA04 \[10\] CEPII, (2011),
"GeoDist,"http://www.cepii.fr/CEPII/en/bdd\_modele/bdd\_modele\_item.asp?id=6
\[11\] CEPII, (2022),
"Gravity,"http://www.http://www.cepii.fr/CEPII/en/bdd\_modele/bdd\_modele\_item.asp?id=8
\[12\] Conte, M., P Cotterlaz and T Mayer (2022), "The CEPII Gravity
Database," Working Papers 202205, CEPII research center

\[13\] Eurostat(n.d.), RAMONCorrespondenceTables,
https://ec.europa.eu/eurostat/ramon 38\[14\] Fitzgerald, D and S Haller
(2018), "Exporters and Shocks," Journal of International Economics 113,
154171

\[15\] Haller, S (2012), "Intraﬁrm trade, exporting, importing, and ﬁrm
performance", Canadian Journal of Economics 45(4), 1397--1430

\[16\] Haller, S and M Hyland (2014), "CapitalEnergy Substitution:
Evidence from a Panelof Irish Manufacturing Firms." Energy Economics 45,
501510

\[17\] Kopecky, K and R Suen (2010), Review of Economic Dynamics 13,
701714

\[18\] Mayer, T and S Zignago, (2011), Notes on CEPII's distances
measures: the GeoDist Database, CEPII Working Paper 201125

\[19\] Pierce, J., and P Schott (2012), "A Concordance Between TenDigit
US Harmonized System Codes and SIC/NAICS Product Classes and
Industries," Journal of Economicand Social Measurement 37 (12), 6196

\[20\] The World Bank (2023), "World Development
Indicators,"https://doi.org/10.57966/6rwy0b07 \[21\] Van Beveren, I., A
B Bernard and H Vandenbussche (2012), "Concording EU Tradeand Production
Data over Time," mimeo 39
