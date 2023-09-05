
Replication Package for: 

"The Dynamics of Return Migration, Human 
Capital Accumulation, and Wage Assimilation"
______________________________________________


Authors: Jerome Adda, Christian Dustmann and Joseph-Simon Goerlach. 
___________________________________________________________________

This replication package contains the Matlab code used to solve and simulate the model described 
in Adda, Dustmann and Goerlach (2021), "The Dynamics of Return Migration, Human Capital Accumulation, 
and Wage Assimilation" The replication package is split into two different folders: descr and mainest. 
The folder descr includes the data files and codes to replicate the descriptives shown in the paper
and the empirical moments used in the estimation of the model. The folder mainest contains the code 
to solve, simulate and estimate the model, and to simulate counterfactual predictions discussed
in the paper. 





Data Availability Statements
____________________________

The estimation uses three micro samples, augmented with aggregated data, all publicly available.


German Microcensus: 
The Microcensus is conducted with a sampling fraction of 1% of the persons and households in Germany. 
It supplies basic socio-demographic data and facilitates the ongoing monitoring of the labour market. 
It is available through FDZ, with doi: 10.21242/12211.1976.00.00.1.1.0 
to 10.21242/12211.2007.00.00.1.1.0.


Socio-Economic Panel: 
The Socio-Economic Panel (SOEP) is one of the largest and longest-running multidisciplinary household 
surveys worldwide. It is available through the DIW with doi: 10.5684/soep.v28.


Turkish Return Migrant Sample:
Hönekopp, Elmar. 1987. “Rückkehrförderung und Rückkehr ausländischer Arbeitnehmer.” Beiträge zur 
Arbeitsmarkt- und Berufsforschung 114: 287-366.

Aggregated data:
Bundesbank. 2013. “Time series BBDP1.A.DE.N.VPI.C.A00000.I10.L: Consumer Price Index - Germany”. Available at http://www.bundesbank.de/ (accessed 20.12.2021). 
European Commission. 2015. “Economic and Financial Affairs: AMECO Database”. Available at http://ec.europa.eu/economy_finance/ameco/user/serie/ResultSerie.cfm (accessed 20.12.2021).
Organisation for Economic Cooperation and Development (OECD). 2013. OECD.Stat Web Browser. http://stats.oecd.org/ (accessed 20.12.2021).
World Bank. 2014. World Development Indicators, Washington, D.C. https://openknowledge.worldbank.org/handle/10986/18237 (accessed 20.12.2021).

We describe the sources for all aggregated information in Appendix A of the paper, and supply these data
directly as files macroGerm.dta and macroTurk.dta.





Computational Requirements
__________________________


Software Requirements

Data preparation and descriptives use Stata (we used version StataSE 17). 
Model estimation and simulation use Matlab (we used version Matlab 2020b). All programs are 
either supplied or part of the Matlab's stardard toolbox.


Computiational Requirements

The code was run on a 3.10 GHz Intel(R) Xeon(R) processor with 64.0 GB RAM. Replication of 
model fit graphs (Figures 4, 5 in the paper and Figures A4-A6 in the appendix), which require 
simulation of return intentions at all ages, take longest, approximately 1 hour.





Description of Code
___________________

The folder ./replicationFiles/mainest/ contains all files related to model estimation and 
simulaion in Matlab. Everything is launched through ./replicationFiles/mainest/AAAmain.m. 
Follow the instruction at the beginning of the file. Estimation moments loaded by Matlab 
are generated in Stata do-files moms.do and MZ20170118.do; their covariance matrices in 
covmat.do and MZ20170411.do.

The folder ./replicationFiles/descr/ contains data preparation files and files generating 
descriptives executed in Stata. To replicate, set path at beginning do-files to folder that 
contains the folder "replicationFiles". Then, to replicate

Figure 1: run ./replicationFiles/descr/MZcellsSurvival.do

Figures 2 and 3: run ./replicationFiles/descr/AAAdescriptives.do
	(at beginning of file set global path
	global mainest  ".../replicationFiles/mainest")

Figures 4-8: run ./replicationFiles/mainest/AAAmain.m
	(see instructions at the beginning of the file)

Table 1a: run ./replicationFiles/descr/AAAdescriptives.do
	(first part of output)

Table 1b: extracted by remote access with submission file MZ20170906.do

Table 2: run ./replicationFiles/descr/AAAdescriptives.do
	(second part of output)

Tables 3 and 4: run ./replicationFiles/mainest/AAAmain.m
	(see instructions at the beginning of the file)

Table 5: run ./replicationFiles/mainest/AAAmain.m
	(see instructions at the beginning of the file)


