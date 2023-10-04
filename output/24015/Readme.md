README and Guidance Data Availability and Provenance Statements Data on
average maturity of the outstanding public debt, as given inthe datafile
below, was obtained from Jagdish Chada, as source datafor the analysis
in the paper Chada et al (2013) A copy of the datais provided as part of
this archive, as given below The data are inthe public domain Datafile:
Data\_BIS\_Figure3.xlsx Data on reserves as given in the datafile below,
was obtained from Jagdish Chada, as source data for the analysis in the
paper Chadaet al (2013) A copy of the data is provided as part of this
archive The data are in the public domain Datafile:
Data\_BIS\_FRB\_H3.xlsx Data on outstanding US Federal debt as given in
the datafile below,was obtained from Jagdish Chada, as source data for
the analysis inthe paper Chada et al (2013) A copy of the data is
provided aspart of this archive The data are in the public domain
Datafile: Data\_BIS\_USFederalDebt.xlsx Data on nominal GDP and tax
receipts were obtained from the Bureau of Economic Analysis (19472010),
as part of National Income and Product Account Tables 1.1.5 and 3.2 Data
on Market Value of Government Debt was obtained from the Federal Reserve
Bank of Dallas (19422010) database These data are on thedatafile
Data\_fiscal given below The datafile Data\_fiscal alsocontains
computations for parameters ˆbSandψused in Table 1on spreadsheet
Fiscal\_Data within the file A copy of the data isprovided as part of
this archive The data are in the public domain It can be obtained from
Bureau of Economic Analysis as part of National Income and Product
Account Tables and Federal Reserve Bank of Dallas Debt Data,
seehttps://apps.bea.gov/iTable/iTable.cfm?ReqID=19&step=4
&isuri=1&1921=flatfiles&3Place=N,https://www.dallasfed.org/research/econdata/govdebt
Datafile: Data\_fiscal.xlsx ColumnsCfrom Data\_BIS\_Figure3.xlsx ,Vfrom
Data\_BIS\_FRB\_H3.xlsxand E from Data\_BIS\_USFederalDebt.xlsx are
combined togetherinMaturityAdjustedForReserves\_final.xlsx to compute
thematurity adjusted for reserves A truncated version of the
resultingtime series are copied as a comma separated file which is used
toproduce Figure C8 1Datafile: MaturityAdjustedForReserves.csv Dataset
is from Ramey and Zubairy (2018) which is available onlineas a part of
the data archive
herehttps://www.journals.uchicago.edu/doi/suppl/10.1086/696277 Datafile:
RZDAT.xlsx Dataset list Data file Source Notes Provided
Data\_BIS\_Figure3.xlsx Chada et al

(2013)Public Yes Data\_BIS\_FRB\_H3.xlsx Chada et al

(2013)Public Yes Data\_BIS\_USFederalDebt.xlsx Chada et al

(2013)Public Yes Data\_fiscal.xlsx Bureau of Economic Analysis
(19472010)and Federal Reserve Bankof Dallas (19422010)Public Yes
RZDAT.xlsx Ramey and Zubairy (2018)Public Yes
MaturityAdjustedForReserves.csv Chada et al

(2013)Combinesmultiple datasources, serves asinput for Figure C8.Yes
Computational Requirements Software Requirements •Stata (code was last
run with version 15.1 ) --ivreg2 --ranktest --weakivtest --avar --weakiv
•Mathematica 12.3.0 2--MaTeX, can be downloaded from Wolframcloud
website,https://resources.wolframcloud.com/FunctionRepository/resources/MaTeXInstall/
•Matlab (code was run with Matlab Release 2021b) Memory and Runtime
Requirements The code was last run on a 4core Intelbased laptop with
MacOS version 12.4 with 16 GB of RAM Computation took about 20 hours
total Description of programs and their outputs Instructions: Please,
run the scripts in the order given in the list It is crucial torestart
the Mathemtatica kernel between the scripts Folders list grouped by
sections Section 2 results 1 Figure 1 (a)Run
SimpleModelStickyPriceCommitement\_fig1.nb , quit Mathamtica kernel (b)
Run forwardGuidance\_fig1.nb (c) Figure 1 is panel.pdf in
./FiscalStickyCommitementModelResults (d)Figure A.1 panel\_fnf.pdf in
./FiscalStickyCommitementModelResults 2 Figures 2 to 5 (a)Run
SimpleModelStickyPriceCommitement\_fig1.nb , quit Mathamtica kernel (b)
Run SimpleModelStickyPriceFinal\_fig2.nb
(c)Figure2ispanel\_s.pngin./stickyPriceModelResults/unb\_Calibration\_1/
(d)Figure 3 is panel\_x\_comparison.png in
./stickyPriceModelResults/unb\_Calibration\_1/
(e)Figure4ismcmb.pngin./stickyPriceModelResults/unb\_Calibration\_2/
(f)Figure5isrenegPanel4.pngin./stickyPriceModelResults/unb\_Calibration\_2/
(g)Figure A.2 is panel\_x\_short.png in
./stickyPriceModelResults/unb\_Calibration\_1/ (h)Figure A.3 is
panel\_d\_short.png in ./stickyPriceModelResults/unb\_Calibration\_1/ 3
Figures 6 to 7 (a) Run NoFiscalforwardGuidance\_fig6.nb , quit
Mathamtica kernel 3(b)Run SimpleModelStickyPriceFinal\_fig2.nb , quit
Mathamtica kernel (c) Run SimpleModelStickyPriceCommitement\_fig6.nb
(d)Figure 6 is panel.png in ./stickyPriceCommitementModelResults/
Calibration\_2/ (e)Figure A.4 is panel.png in
./stickyPriceCommitementModelResults/ Calibration\_4/ (f)Figure 7 is
panel2.png in ./stickyPriceCommitementModelResults/ Calibration\_2/
Section 3 results 1 Table 1 Figure 810 (a) Run
IRF\_ESTIMATES/taxes\_irf.do in Stata (b) Run
IRF\_ESTIMATES/inflation\_irf.do in Stata (c) Run
IRF\_ESTIMATES/std\_irf.do in Stata (d) Run summaryTable.nb (e) Run
/Model/simulate\_QE\_commitment.m in Matlab (f) Run UB/completQE2\_UB.nb
, quit Mathematica kernel (g) Run LB/completQE2\_LB.nb , quit
Mathematica kernel (h) Run completQE2\_point\_estimate.nb (i)Table 1 is
based on table1.csv in ./OOS\_benchmark Note that λyandλTare annualized
by multiplication by 16 The numbers in themain text Table 1 and in the
subsequent tables are being rounded

(j) Table 2 is based on outputEffects.csv in ./OOS\_benchmark
(k) Table 3 is based on KVJmoments.csv in ./OOS\_benchmark
(l) Table 4 is based on Table4.csv in ./OOS\_benchmark (m)Table C.1 the
    last two columns are based on Tablec1high.csv in
    ./UB/OOS\_benchmarkandonTablec1low.csvin./LB/OOS\_benchmarkand
(m) Table 5 is based on Table5.csv in ./OOS\_benchmark
(n) Table 6 is based on Table6.csv in ./OOS\_benchmark
(o) Figure 8 is bigModelPanel4.pdf in ./OOS\_benchmark
(p) Figure 9 is estimationRatio.png in ./OOS\_benchmark
(q) Figure 10 bigModelPanel.pdf in ./OOS\_benchmark 42 Figure 11
(r) Run timeVaryingMaturity.nb
(s) Figure 11 is based on tvPanel.pdf and 3 Figure 12
(t) Run completQE2Bayes.nb
(u) Figure 12 is based on lambdaTposterior.pdf
(v) Run ./LB/completQE2\_LB.nb (d)The lower bound on QE2 output effects
    (reported Appendix B.4) istaken from
    ./LB/OSS\_Benchmark/outputEffects.csv
(w) Run ./UB/completQE2\_UB.nb (f)The upper bound on QE2 output effects
    (reported Appendix B.4) istaken from
    ./UB/OSS\_Benchmark/outputEffects.csv Appendix results 1 Figure A5
    A6
(x) Run SimpleModelHybrid2.nb (b)Figure A.5 is panel\_x\_short.png in
    ./hybridPriceModelResults/ Calibration\_28/ (c)Figure A.6 is
    panel\_d\_short.eps in ./hybridPriceModelResults/ Calibration\_28/ 2
    Figure A7
(y) Run SimpleModelStickyPriceQuadratic.nb, quit mathematica kernel
(z) Run SimpleModelStickyPriceNonlinear.nb, quit mathematica kernel
    (c)Figure A.7 is panel\_quad\_nonlin.png in
    ./stickyPriceModelResultsCombined/ Calibration\_1/ 3 Figure C8
(a) Run nicePlots.nb
(b) Figure C.8 is MaturityAdjustedForReserves\_new 4 Table C2
(c) Run ./UB/TableC2high.nb
(d) Run ./LB/TableC2low.nb 5(c)Table C2 the last two columns are based
    on TableC2high.csv in
    ./UB/OOS\_benchmarkandonTableC2low.csvin./LB/OOS\_benchmarkand 5
    Table C3 4
(e) Run yeildMatch.nb
(f) Table C.3 is TableC3.csv in ./Benchmark
(g) Table C.4 is outputEffects.csv in ./Benchmark (d)p.37α= 0.97output
    effects are given in outputEffects.csv in ./Discounted 6 Figure E9
(h) Run LongTermDebt.m in matlab
(i) Run longTermDebtPic.nb in Mathematica
(j) Figure E9 is given in inflationPic.eps 6References Bureau of
    Economic Analysis 19472010 "National Incomeand Product Accounts."
    United States Department of Commerce
    https://apps.bea.gov/iTable/iTable.cfm?ReqID=19&step=4
    &isuri=1&1921=flatfiles&3Place=N (accessed August 12, 2011)

Chadha, Jagjit S., Philip Turner, and Fabrizio Zampoli 2013 "Data for:
The Interest Rate Effects of Government Debt Maturity." Bank of
International Settlements Working Paper 415 (provided July 21, 2014)

Federal Reserve Bank of Dallas 19422010 "Market Valueof U.S Government
Debt" Federal Reserve Bank of
Dallas.https://www.dallasfed.org/research/econdata/govdebt (accessed
Sept 1,2011)

Ramey, Valerie A., and Sarah Zubairy 2018 "Replication data for:
Government Spending Multipliers in Good Times and in Bad: Evidencefrom
US Historical Data." Journal of Political Economy, 126,
850901.https://www.journals.uchicago.edu/doi/suppl/10.1086/696277 7
