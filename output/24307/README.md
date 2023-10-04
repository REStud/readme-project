Data Availability Statements\
The text data which records the performance results depicted in section
4.6 of the manuscript ha ve been deposited in Benjamin Moll 's publicly
available repository : https://benjaminmoll.com The paper also makes
uses of publicly available data from the 2007 Survey of Consumer
Finances, downloadable from: https://
www.federalreserve.gov/econres/scf\_2007.htm Dataset List\
Data File Confidential Source Provided Purpose\
Data/plot\_data.txt No https://benjaminmoll.com/comparison/ Yes Create
figure s A.1a/A.1b\
N/A No https://www.federalreserve.gov/econres /scf\_2007.htm No Table
A.2

Computational Requirements\
Software Requirements\
- Matlab (Code run with Matlab Release 2019b)\
Description of Programs\
Programs in MatlabCode/ generate all the figures in the main manuscript
Each file is name d in accordance with the figures it generates For
example , MatlabCode/fig\_2\_3.m generates figures 2 and 3 in the paper
Figures in appendix a re ordered too although they are matc hed using
the units digit For example, figure A .2 is generate by MatlabCode/fig\_
12.m The only exception s are MatlabCode/partialeq\_subroutine.m , which
is an auxiliary file for MatlabCode/fig\_5.m , and MatlabCode/
main\_dist.m , MatlabCode /cont\_true\_dist .m, MatlabCode/
disc\_true\_dist.m , MatlabCode/ latexTable2 , MatlabCode/
discrete\_normal.m , MatlabCode/ lininterp1.m , and MatlabCode/
rouwenhorst.m , which are auxiliary files for MatlabCode/fig\_ 9\_11 .m
Memory and Runtime Requirements\
The code was last run on a n Intel(R) Core(TM) i7 -6500U CPU\@2.50GHz
2.59GHz with 7.9 GB usable RAM, running 64bits Windows10 It took
64.205813 seconds to run the code excluding the auxiliary files for
MatlabCode/fig\_ 9\_11 .m, and 2644.397659 seconds when running them as
well Instructions\
The only file needed to be run is MatlabCode/main.m It should be open in
a new Matlab session to define the directory automatically It will
generate all the figures in the manuscript , listed below Please note
that to replicate the exact figures from the paper, the auxiliary files
of MatlabCode/fig\_ 9\_11 .m are not to be run, as they would report the
algorithms ' performance obtained from running the code in your own
machine To avoid this, we stored the results depicted in section 4.6 of
the manuscript in the text file Data/plot\_data.txt , retrieved
automatic ally by the script Nevertheless, i f you would like to see
your own performance results in the figures, you should set to 1 the
variable own\_machine\_performance in MatlabCode/main.m , which will
generate new text files in the folder Data to be used for the figures
/table List of Tables and Programs\
Figure \# File / Source\
Figure 1a MatlabCode/fig\_1\_6\_7.m\
Figure 1b MatlabCode/fig\_1\_6\_7.m\
Figure 2 MatlabCode/fig\_2\_3.m\
Figure 3 MatlabCode/fig\_2\_3.m\
Figure 4a MatlabCode/fig\_4.m\
Figure 4b MatlabCode/fig\_4.m\
Figure 5a MatlabCode/fig\_5.m\
Figure 5b MatlabCode/fig\_5.m\
Figure 6a MatlabCode/fig\_1\_6\_7.m\
Figure 6b MatlabCode/fig\_1\_6\_7.m\
Figure 7a MatlabCode/fig\_1\_6\_7.m\
Figure 7b MatlabCode/fig\_1\_6\_7.m\
Figure 8 MatlabCode /fig\_8.m\
Figure 9a MatlabCode/fig\_9\_11.m\
Figure 9b MatlabCode/fig\_9\_11.m\
Figure 10a MatlabCode/fig\_10.m\
Figure 10b MatlabCode/fig\_10.m\
Figure 10c MatlabCode/fig\_10.m\
Figure 10d MatlabCode/fig\_10.m\
Figure 10e MatlabCode/fig\_10.m\
Figure 10f MatlabCode/fig\_10.m\
Table A.1 MatlabCode/fig\_ 9\_11 .m Figure A.1a MatlabCode/fig\_ 9\_11
.m Figure A.1a MatlabCode/fig\_ 9\_11 .m Figure A.2a MatlabCode/fig\_
12.m Figure A.2a MatlabCode/fig\_ 12.m Figure A.3a MatlabCode/fig\_ 13.m
Figure A.3b MatlabCode/fig\_ 13.m Figure A.4a MatlabCode/fig\_ 14.m
Figure A.4b MatlabCode/fig\_ 14.m Figure A.5a MatlabCode/fig\_ 15.m
Figure A.5b MatlabCode/fig\_ 15.m Figure A.6a MatlabCode/fig\_ 16.m
Figure A.6b MatlabCode/fig\_ 16.m Figure A.7a MatlabCode/fig\_ 17.m
Figure A.7b MatlabCode/fig\_ 17.m Figure A.8a MatlabCode/fig\_ 18.m
Figure A.8b MatlabCode/fig\_ 18.m Figure A.8c MatlabCode/fig\_ 18.m
Figure A.8d MatlabCode/fig\_ 18.m Table A.2 MatlabCode/fig\_ 18.m &
https://www.federalreserve.gov/econres/scfindex.htm

References\
"Survey of Consumer Finances", Board of Governors of the Federal Reserve
System Available at https://www.federalreserve.go
v/econres/scf\_2007.htm , last accessed in 2014
