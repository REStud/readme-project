Files and processors used for computation There are ten (10) files,
including two (2) input files We use Intel compiler and run the codes on
40 processors using Intel MPI We use MATLAB R2019b Update 4, 64bit
(maci64) on a MacBook Pro (13inch, 2017, Four Thunderbolt 3 Ports) with
processor 3.5 GHz DualCore Intel Core i7 1 "distmf40e280.dat": The
probabilities of 40 discrete entrepreneurial productivity (z) Input file
2 "supportmf40e280.dat": The values of 40 discrete entrepreneurial
productivity (z) Input file 3 "steadynomf40by2.f90": Computes the
stationary equilibrium without microfinance 4
"steadymf40by2\_clspread.f90": Computes the stationary equilibrium with
microfinance 5 "lrsoe\_clspread.f90": Computes the stationary
equilibrium with microfinance for a small open economy taking the world
interest rate as given 6 "tranmf40by2\_clspread.f90": Computes the
transition dynamics following the introduction of microfinance It takes
as input "p.nomf", which is the initial wealth distribution (density)
conditional on entrepreneurial and labor productivity (40 by 2), which
can be constructed from the output file of "steadynomf40by2.f90" 7
"srpe\_clspread\_tha.f90": Generates the decision rule for the
microfinance intervention in partial equilibrium for Thailand (Table 3)
See "mmt\_srpe\_clspr.m" below 8 "srpe\_clspread\_ind.f90": Generates
the decision rule for the microfinance intervention in partial
equilibrium for India (Table 4) See "mmt\_srpe\_clspr.m" below 9
"mmt\_srpe\_clspr.m": A MATLAB file using the output files from
"steadynomf40by2.f90" and "srpe\_clspread\_tha/ind.f90", compute the
changes in moments of interest in partial equilibrium reported in Tables
3 and 4 10 "welfarecomp.m": A MATLAB file using output files from
"steadynomf40by2.f90" and "tranmf40by2\_clspread.f90", construct Figure
A.1 11 "twofer.f90": This is the file that generated the twosector
results in our 2012 NBER working paper A summary of the results can be
found in Appendix C of the current paper
