Readme - Replication Package for "Estimation of Discrete Gameswith Weak
Assumptions on Information" Lorenzo Magnolﬁ∗and Camilla Roncoroni† June
5, 2022 Contents 1 Overview 2 2 Data Availability Statements 2 3 Dataset
List 2 4 Computational Requirements 3 5 Description of Programs 3 6
Instructions for Replicators 5 7 List of Exhibits and Programs 6
∗Corresponding Author : Department of Economics, University of
WisconsinMadison, magnolfi\@wisc.edu

†Department of Economics, University of Warwick,
c.roncoroni\@warwick.ac.uk

11 Overview The replication package contains data and code to generate
the ﬁgures and tables in thepaper Replication requires around 54 hours
for the simulation results (Sections 25 of thearticle), and 309 hours
for the empirical application results (Sections 67 of the article)

2 Data Availability Statements The sources of data used in the paper
include: (i) data on all supermarkets in Northernand Central Italy from
the market research ﬁrm IRI, (ii) handcollected information onshopping
malls, obtained from online directories, (iii) data on population from
the 2011 Italian Census, (iv) data on average income from the Italian
Ministry of the Economy Werefer to these sources, as IRI, Information
Resources Srl (2013), ISTAT (2011), and MEF,Italian Ministry of the
Economy (2013)

Source (i) is the "Top Trade Guide" dataset, collected and sold by IRI (
https://www.iriworldwide.com/itit ) While this data may not be disclosed
by the authors according to the contract between the authors and the
data provider, the data can be purchasedby other researchers for the
purposes of replication Source (ii) is collected and madeavailable by
the authors Sources (iii) and (iv) are publicly available for download
from IS- TAT ( http://daticensimentopopolazione.istat.it/Index.aspx )
and from the Italian Ministry of the Economy (
https://www1.finanze.gov.it/finanze/analisi\_stat/public/index.php?opendata=yes
), respectively We certify that the authors of the manuscript have
legitimate access to and permission touse the data used in this
manuscript The code is licensed under a Creative Commons/CC- BYNC
license 3 Dataset List The data ﬁles used are as follows: Data File
Source Providedsupermarkets.csv (i): IRI, Information Resources Srl
(2013) Nodemographics.csv (ii)--(iv): ISTAT (2011) Yes MEF, Italian
Ministry of the Economy (2013) 24 Computational Requirements Software:
The software required for replication includes: •MATLAB (the code was
run with version R2016a), including the additional packages: --MPT
Toolbox (v 3.0) - see Kvasnica, Grieder, Baotić, and Morari (2004);
--CVX (v 2.1) for MATLAB, including the solver SeDuMi - see Grant and
Boyd (2014, 2008); •AMPL (v 10) and the solver Knitro (v 9.1); •The
script Parampl (v 1.1) - see Olszak and Karbowski (2018); •Stata 15.1
Memory and Runtime: The simulation results (Sections 25 of the paper)
and some of theempirical application results (Sections 67 of the paper)
are obtained with a 2014 Windows 10 desktop machine with 4 cores and
32GB of RAM ( PC) The total runtime on PCisapproximately 55 hours Other
empirical application results (Sections 67 of the paper) areobtained on
a Linux server with 36 cores and 768GB of RAM ( server) The total
runtimeonserveris approximately 308 hours 5 Description of Programs •The
MATLAB script Table1.m generates the Excel ﬁle Table1.xls , which
contains the results in Table 1 of the paper The main script uses
auxiliary functions GenData\_Unif.m ,allcomb.m , and
computeBCE\_par\_Unif .allcomb.m is written byvan der Geest (2013) The
function computeBCE\_par\_Unif.m relies on the function
fprintAmplParamCLSU.m to produce data ﬁles for AMPL, as well as on the
AMPL scripts Dual\_Problem\_Par.mod and Dual\_Problem\_Parampl.run The
functionfprintAmplParamCLSU.m
,usedhereaswellasinmanyotherstepsinthispackage,is included in Su and
Judd (2012)

•The MATLAB script Table2.m generates the three panels in Table 2 of the
paper The script relies on a number of functions: --GenData.m generates
the simulated data needed to perform the identiﬁcationexercise in the
table; --computeBCE\_par.m andcomputeBCE\_par\_corr.m , respectively,
generate identi- ﬁed sets for panels A,B and C; 3--The function
computeBCE\_par.m uses the AMPL scripts Dual\_Problem\_Parampl.run
andDual\_Problem\_Par.mod to solve the optimization step required to ﬁnd
the identiﬁed set; --Similarly, the function computeBCE\_par\_corr.m
uses the AMPL scripts Dual\_Problem\_Parampl\_corr.run
andDual\_Problem\_Parampl\_corr.mod tosolvethe optimization step
required to ﬁnd the identiﬁed set

•The MATLAB script Figure2.m generates the two panels of Figure 2 in the
paper,using the two AMPL scripts Polytope.mod andPolytope.run

•The MATLAB script Figure3.m generates the three panels of Figure 3 in
the paper The script relies on a number of functions: --GenData.m
andGenData\_PublicSignal.m generate the data; --computeMXNE.m
,computeR1.m ,computeR2.m ,computeBCE\_par.m ,computeBCE\_PublicInfo.m
,computeBCE\_PublicInfo\_higherBase.mcompute identiﬁed sets for diﬀerent
assumptions on information and equilibrium; --The function
computeBCE\_par.m calls AMPL and Knitro AMPL uses the ﬁles
Dual\_Problem\_Par.mod andDual\_Problem\_Parampl.run

•TheMATLABscript BCE\_estim\_CF.m producesestimationresultsinTable3,
Column I (lines 1502), and counterfactual results in Table 4, Column I,
and Table 5 (lines 503745) The script relies on a number of functions:
--TheMATLABfunctions loadData.m ,prepdata.m andQuantTrue.m
preparethedata for estimation; --MATLABfunctions BCE\_Inf\_CC\_cluster.m
andBCE\_Inf\_CC\_cluster\_m.m ,and AMPL scripts Dual\_Problem\_m.run
andDual\_Problem.mod are used in the estimation step; --The function
anneal.m is written by Vandekerckhove (2006)

--MATLAB functions BCE\_VLI\_CF.m ,BCE\_Inf\_forCF\_server.m
,BCE\_FLI\_CF.mandAMPLscripts CF\_OneX.run ,CF\_REps\_OneX\_w9\_2.mod
,Dual\_Problem\_forCF.run ,NewCF\_OneX\_1\_knitro.run , and
NewCF\_newdef.mod are used in the counterfactual step;
--Thescriptproducesthedataﬁles VLI\_Interval\_bef.mat
andVLI\_Interval\_aft.mat

•The MATLAB script NE\_estim\_CF.m produces estimation results in Table
3, Column II(lines1428), andcounterfactualresultsinTable4,
ColumnII(429672), andFigure 4 (673772) The script relies on a number of
functions: 4--MATLAB functions Nash\_Inf\_CC\_cluster.m and
Nash\_Inf\_CC\_cluster\_m.mare used in the estimation step; these
functions rely on CorrN\_Quadra.m to compute event probabilities

--The MATLAB function Nash\_CFcomp.m is used in the counterfactual step;
•TheMATLABscript BNE\_estim\_CF.m producesestimationresultsinTable3,
Column III and counterfactual results in Table 4, Column III Part 1 of
the script (lines 1- 256) performs the estimation step Part 2 of the
script (lines 257438) performscountefactual policy exercises The script
relies on a number of functions: --AMPL scripts Data\_3pl.run ,3pl.mod,
and DataCF\_3pl.run ,3pl\_CF.mod execute the maximization step necessary
for estimation and counterfactual prediction, respectively

•The Stata script RedForm\_CF.do produces the reduced form
counterfactual results incolumn IV of Table 4 6 Instructions for
Replicators •OnPC,unzipthepackageina homefolder; theAMPLexecutable
ampl.exe shouldbeinstalledinafolder home\ampl
Createanempty home\Outputfolderfortemporary ﬁles All MATLAB packages
listed above, and Parampl, should be installed Tables 12 and Figures 23
can be obtained by running the corresponding MATLAB scriptse.g., run
Table1.m to obtain Table 1 The steps to follow are: 1 Run Figure2.m (2
minutes on PC) 2 Run Table1.m (6 minutes on PC) 3 Run Figure3.m (6.5
hours on PC) 4 Run Table2.m (47 hours on PC) •Tables 35 and Figure 4 are
obtained as follows: 1 Run BCE\_estim\_CF.m (162 hours on server) 2 Run
NE\_estim\_CF.m (147 hours on server) 3 Run BNE\_estim\_CF.m (1.2 hours
on PC) 4 Run RedForm\_CF.do (2 minutes on PC) These steps require the
two data ﬁles supermarkets.csv anddemographics.csv

57 List of Exhibits and Programs The package reproduces the tables and
ﬁgures in the paper Excel ﬁles correspondingto the tables, and eps ﬁles
for the ﬁgures, are also included in the folder Figures&Tables

Exhibit Programs Output File Note Table 1 Table1.m Table1.xls Table 2
Table2.m Table2.xls Table 3 Col I BCE\_estim \_CF.m Table3\_colI\_II.xls
(lines 1502) Col II NE\_estim \_CF.m Table3\_colI\_II.xls (lines 1428)
Col III BNE\_estim \_CF.m Table3\_colIII.xls (lines 1256) Table 4 Col I
BCE\_estim \_CF.m Table4\_colI\_II.xls (lines 503745) Col II NE\_estim
\_CF.m Table4\_colI\_II.xls (lines 429672) Col III BNE\_estim \_CF.m
Table4\_colIII\_IV.xls (lines 257438) Col IV RedFormCF.do
Table4\_colIII\_IV.xls Table 5 BCE\_estim \_CF.m Table5.xls (lines
53745) Figure 1 Schematic similar to earlierliterature e.g., Tamer
(2003) Panel A Fig1\_A.eps Panel B Fig1\_B.eps Panel C Fig1\_C.eps
Figure 2 Figure2.m Panel A Fig2\_A.eps Panel B Fig2\_B.eps Figure 3
Figure3.m Panel A Fig3\_PanelA.eps Panel B Fig3\_PanelB.eps Panel C
Fig3\_PanelC.eps Figure 4 NE\_estim \_CF.m (lines 673772) Panel A
Fig4\_A.eps Panel B Fig4\_B.eps 6References Grant, M and S Boyd (2008):
"Graph implementations for nonsmooth convex programs," in Recent
Advances in Learning and Control , ed by V Blondel, S Boyd, and H
Kimura, SpringerVerlag Limited, Lecture Notes in Control and Information
Sciences,95--110, http://stanford.edu/\~boyd/graph\_dcp.html

--------- (2014): "CVX: Matlab Software for Disciplined Convex
Programming, version 2.1,"http://cvxr.com/cvx

IRI, Information Resources Srl (2013): "Top Trade Guide,"
https://www.iriworldwide.com/itit

ISTAT (2011): "2011 Population and housing census,"
http://daticensimentopopolazione.istat.it/Index.aspx , accessed in May
2022 Kvasnica, M., P Grieder, M Baotić, and M Morari (2004):
"Multiparametrictoolbox (MPT)," in International workshop on hybrid
systems: Computation and control ,Springer, 448--462 MEF, Italian
Ministry of the Economy (2013): "2013 Income Tax (IR- PEF) Data,"
https://www1.finanze.gov.it/finanze/analisi\_stat/public/index.php?opendata=yes
, accessed in May 2022 Olszak, A and A Karbowski (2018): "Parampl: A
Simple Tool for Parallel and Distributed Execution of AMPL Programs,"
IEEE Access , 6, 49282--49291 Su, C.-L and K L Judd (2012): "Constrained
optimization approaches to estimationof structural models," Econometrica
, 80, 2213--2230 Tamer, E (2003):
"IncompleteSimultaneousDiscreteResponseModelwithMultipleEquilibria," The
Review of Economic Studies , 70, 147--165.van der Geest, J (2013):
"allcomb,"
https://www.mathworks.com/matlabcentral/fileexchange/10064allcombvarargin
, MATLAB Central File Exchange Vandekerckhove, J (2006): "anneal,"
https://www.mathworks.com/matlabcentral/fileexchange/10548generalsimulatedannealingalgorithm
, MATLAB Central File Exchange 7
