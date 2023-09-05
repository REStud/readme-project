The files in this directory are as follows:

Main dataset.

1. "ECPF.dta" - a stata dataset containing the ECPF data used in the paper.
2. "Variable definition.txt" - a text file containing basic information on the definition of variables and codings.

The following files are programs

3. "GARP.R" - an R script which tests GARP.
4. "SomePathsNHD.ipynb" and "SomePathsSHD.ipynb" - Julia files (in Jupyter notebook form) which create Figure 1. 
5. "Empirical.Section.1.R" an R file which calculates pass rates for the various models and computes the area for the Selten index. It produces an RData file for use in "Empirical.Section.2.R" 
6. "Empirical.Section.2.R" uses the output from "Empirical.Section.1.R" to produce Tables 1, 3 and 4.
7. "Beta.Delta.Figs.Tables.R" an R file which produces Figures 3, 4, 5 and 6, the statistics for Tables 5 and 6 and the probit for Table 2.
8. "Appendix_Figures.R" an R file which creates Figs. 7-10 in "Appendix - Discounted Prices".

The following files are the output files and intermediate output files created in the programs

9.  "Figure1.eps"
10. "Figure3.eps"
11. "Figure4.eps"
12. "Figure5.eps"
13. "Figure6.eps"
14. "Figure7.eps"
15. "Figure8.eps"
16. "Figure9.eps"
17. "Figure10.eps"

18. "marginaleffectprobit.tex"

19. "results.Emp.Sect.Rdata"
20. "Beta.Delta.Data.Rdata"

21. "07nhd07.txt" 
22. "07nhd15.txt" 
23. "07shd07.txt"
24. "07shd15.txt"

=============

DATA AVAILABILITY STATEMENT

Dataset used in this paper "ECPF.dta" is an extract of the Encuesta Continua de Presupuestos Familiares (ECPF). A copy of the data is provided as part of this archive. "Variable definition.txt" which is also part of this archive is a text file containing information on the definition of variables and codings. The original survey data are in the public domain. The ECPF itself is available for public use from the Spanish Instituto Nacional de Estadística and can be accessed via https://www.ine.es/prensa/epf_prensa.htm.

=============

DATASET LIST

"ECPF.dta" - a stata dataset containing the ECPF data used in the paper.

=============

SOFTWARE REQUIREMENTS

R version 4.0.2 

Packages used: 

	lpSolve (5.6.15)
	foreign (0.8-80)
	Matrix (1.2-18)
	matrixStats (0.52.2)
	entropy (1.2.1)
	stargazer (5.2.2)
	NlcOptim (0.6)
	nloptr (1.2.2.2)
	alabama (2015.3-1
	mfx (1.2-2)


Julia Version 1.3.1. 

We use Jupyter notebook to run the files, accessed via the Anaconda distribution of Python. 

Packages required: 

	Optim
	Dierckx
	DelimitedFiles
	PyPlot

=============

DESCRIPTION OF PROGRAMS

- "SomePathsNHD.ipynb" and "SomePathsSHD.ipynb" - these are Julia files (in Jupyter notebook form) which create Figure 1. 
- "Empirical.Section.1.R" an R file which calculates pass rates for the various models and computes the area for the Selten index. It produces an RData file called "results.Emp.Sect252.Rdata" 
- "Empirical.Section.2.R" uses the dataset "results.Emp.Sect252.Rdata" created in "Empirical.Section.1.R" to produce Tables 1, 3 and 4.
- "Beta.Delta.Figs.Tables.R" an R file which produces Figures 3, 4, 5 and 6, the statistics for Tables 5 and 6 and the probit for Table 2.
- "Appendix_Figures.R" an R file which creates Figs. 7-10 in "Appendix - Discounted Prices".

=============

INSTRUCTIONS TO REPLICATORS

Julia programs

Run programs in the following order

1. Run SomePathsNHD.ipynb. This will save two files "07nhd07.txt" and "07nhd15.txt". 
2. Run SomePathsSHD.ipynb. This will save two files "07shd07.txt" and "07shd15.txt". It then loads all the 4 txt files and creates Figure 1.


R programs: 

Install the R libraries listed above.
Set the working directory ("setwd()" in R to the locations where you have stored the files and want the outputs saved.

Run programs in the following order

1. "Empirical.Section.1.R"
2. "Empirical.Section.2.R" (produces the the statistics found in Tables 1, 3 and 4.)
3. "Beta.Delta.Figs.Tables.R" (produces Figures 3, 4, 5 and 6, the statistics for Tables 5 and 6 and the probit for Table 2).
4. "Appendix_Figures.R" (produces Figs. 7-10).

=============

LIST OF TABLES AND PROGRAMS

Table/Figure	Lines		Program				Output

Table 1		Lines 105-110	"Empirical.Section.2.R"		No output file (values are in memory after the program is run, transcribed into the text)
Table 2		Lines 411-425   "Beta.Delta.Figs.Tables.R"	Output file: "marginalfxprobit.tex"
Table 3		Lines 105-110	"Empirical.Section.2.R"		No output file (values are in memory after the program is run, transcribed into the text)
Table 4		Lines 105-110	"Empirical.Section.2.R"		No output file (values are in memory after the program is run, transcribed into the text)
Table 5		Lines 236-241	"Beta.Delta.Figs.Tables.R"	No output file (values are in memory after the program is run, transcribed into the text)
Table 6		Lines 236-241	"Beta.Delta.Figs.Tables.R"	No output file (values are in memory after the program is run, transcribed into the text)
Figure 1	Line 371	"SomePathsSHD.ipynb"		Figure1.eps.
Figure 2	NA 						(illustration drawn in Powerpoint)
Figure 3	Lines 209-211	"Beta.Delta.Figs.Tables.R"	Figure3.eps
Figure 4	Lines 215-217	"Beta.Delta.Figs.Tables.R"	Figure4.eps
Figure 5	Lines 221-223	"Beta.Delta.Figs.Tables.R"	Figure5.eps
Figure 6	Lines 286-299	"Beta.Delta.Figs.Tables.R"	Figure6.eps
Figure 7 	Lines 38-43	"Appendix_Figures.R"		Figure7.eps
Figure 8 	Lines 53-55	"Appendix_Figures.R"		Figure8.eps
Figure 9 	Lines 65-70	"Appendix_Figures.R"		Figure9.eps
Figure 10 	Lines 117-119	"Appendix_Figures.R"		Figure10.eps

=============

REFERENCES

Instituto Nacional de Estadística (1985-1997), "Encuesta Continua de Presupuestos Familiares" [dataset], Ministry of Economic Affairs and Digital Transformation, https://www.ine.es/daco/daco43/metodo_ecpf_trimestral.pdf

