###################################################################################################
README.txt
###################################################################################################
Author: JRowley
Andrews, Kitagawa, McCloskey
Inference on Winners
Version: 21 Aug 2020
###################################################################################################
Description of files for replication of empirical and simulation studies in Inference on Winners.
Guide to practical use.

CONTENTS
S1.FILE STRUCTURE
S2.DESCRIPTION OF FILES
S3.GUIDE TO REPLICATION
S4.FAQ
###################################################################################################
S1.FILE STRUCTURE
###################################################################################################
All files are contained in a folder, referred to in what follows as THE FOLDER.
THE FOLDER contains four sub-folders. 
--R code
--R files
--R functions
--writeup
THE FOLDER contains three files.
--README.txt
--Manual_source_file.R
--Select_this_file.R
###################################################################################################
S1.FILE STRUCTURE	1.R code
###################################################################################################
<THE FOLDER/R code> contains two sub-folders.
--Karlan
--Toy
###################################################################################################
S1.FILE STRUCTURE	1.R code	1.Generic
###################################################################################################
<THE FOLDER/R code/Karlan> contains one file.
--oracle_AKM.R
###################################################################################################
S1.FILE STRUCTURE	1.R code	2.Karlan
###################################################################################################
<THE FOLDER/R code/Karlan> contains three files.
--bootstrap_AKM.R
--oracle_AKM.R
--summary_AKM.R
###################################################################################################
S1.FILE STRUCTURE	1.R code	3.Toy
###################################################################################################
<THE FOLDER/R code/Toy> contains three files.
--figures_AKM.R
--summary_AKM.R
--toy_AKM.R
###################################################################################################
S1.FILE STRUCTURE	2.R files
###################################################################################################
<THE FOLDER/R files> contains one sub-folder.
--Objects
<THE FOLDER/R files> contains one file.
--Karlan.rds
###################################################################################################
S1.FILE STRUCTURE	2.R files	1.Objects
###################################################################################################
<THE FOLDER/R files/Objects> contains three sub-folders.
--Generic
--Karlan
--Toy
###################################################################################################
S1.FILE STRUCTURE	2.R files	1.Objects	1.Generic
###################################################################################################
<THE FOLDER/R files/Objects/Karlan> contains two sub-folders.
--ATE
--Levels
###################################################################################################
S1.FILE STRUCTURE	2.R files	1.Objects	1.Generic	1.ATE
###################################################################################################
<THE FOLDER/R files/Objects/Generic/ATE> is empty.
###################################################################################################
S1.FILE STRUCTURE	2.R files	1.Objects	1.Generic	2.Levels
###################################################################################################
<THE FOLDER/R files/Objects/Generic/Levels> is empty.
###################################################################################################
S1.FILE STRUCTURE	2.R files	1.Objects	2.Karlan
###################################################################################################
<THE FOLDER/R files/Objects/Karlan> contains two sub-folders.
--ATE
--Levels
<THE FOLDER/R files/Objects/Karlan> contains one file.
--Karlan.rds
###################################################################################################
S1.FILE STRUCTURE	2.R files	1.Objects	2.Karlan	1.ATE
###################################################################################################
<THE FOLDER/R files/Objects/Karlan/ATE> contains 22 files.
--Bootstrap[N].rds	[N]={1,...,21}
--Oracle.rds
###################################################################################################
S1.FILE STRUCTURE	2.R files	1.Objects	2.Karlan	2.Levels
###################################################################################################
<THE FOLDER/R files/Objects/Karlan/Levels> contains 22 files.
--Bootstrap[N].rds	[N]={1,...,21}
--Oracle.rds
###################################################################################################
S1.FILE STRUCTURE	2.R files	1.Objects	3.Toy	
###################################################################################################
<THE FOLDER/R files/Objects/Toy> contains one sub-folder.
--INDEPENDENT
<THE FOLDER/R files/Objects/Toy> contains 33 files.
--MCdraws_[N]policies.rds	[N]={2,10,50}
--MCresults_[N]policies.rds	[N]={2,10,50}
--Toy[N]x[P].rds		[N]={2,10,50}	P={0,...,8}
###################################################################################################
S1.FILE STRUCTURE	2.R files	1.Objects	3.Toy		1.INDEPENDENT
###################################################################################################
<THE FOLDER/R files/Objects/Toy/INDEPENDENT> contains two files.
--WinnerCurse_2policies.R
--WinnerCurse_2policies.RData
###################################################################################################
S1.FILE STRUCTURE	3.R functions	
###################################################################################################
<THE FOLDER/R functions> contains 2 files.
--function_EWM.R
--script_AKM.R
###################################################################################################
S1.FILE STRUCTURE	4.writeup	
###################################################################################################
<THE FOLDER/R functions> contains several files, including two .tex and two .pdf files.
--Karlan_ATEwriteup.[ex]	[.ex]={.tex,.pdf}
--Karlan_writeup.[ex]		[.ex]={.tex,.pdf}
###################################################################################################
S2.DESCRIPTION OF FILES 1.THE FOLDER
###################################################################################################
<THE FOLDER/Manual_source_file.R> is designed to be run in advance of any replication of the 
	Karlan and List application, of the Karlan and List (bootstrap) simulation exercise or of 
	the toy example simulation exercise. The script pulls up an interactive 
	directory; the user should select <THE FOLDER/Select_this_file.R>, which saves the location 
	of the file within the R script.

<THE FOLDER/Select_this_file.R> is an easy to use way to summarise the results of the Karlan and 
	List application, of the Karlan and List (bootstrap) simulation exercise or of the toy 
	example simulation exercise. The script pulls up an interactive 
	directory; the user should select <THE FOLDER/Select_this_file.R>, which saves the location 
	of the file within the R script. The script then asks the user to specify what they would 
	like to do via a sequence of yes or no questions that can be answered by [1] [ENTER] or [2] 
	[ENTER]. From these questions, the script deduces whether the user wants to simply 
	summarise results or to generate results separately and then summarise results. Within this 
	script, the user can:
	--Summarise estimates of the effect of the winning treatment arm in the Karlan and List
		dataset and in simulation exercises. 
		(ATE: [1] [ENTER] [1] [ENTER] | Levels: [1] [ENTER] [2] [ENTER])
	--Summarise estimates and generate figures from the Toy example simulation exercises. 
		([2] [ENTER])
###################################################################################################
S2.DESCRIPTION OF FILES 1.THE FOLDER	1.R code	1.Generic
###################################################################################################
<THE FOLDER/R code/Generic/oracle_AKM.R> is designed to produce estimates for a generic (user-
	specified) dataset. 

NB:Before running the above file, change 
L4	OUTCOME.VARS<-c("Your outcome variable name here");
and
L5	GROUP.VARS<-c("Your group variable names here");
and
L10	YESTOATE<-FALSE;
and
L11	REFERENCE.GROUP<-NA;
as necessary (see file itself for further instruction).
###################################################################################################
S2.DESCRIPTION OF FILES 1.THE FOLDER	1.R code	2.Karlan
###################################################################################################
<THE FOLDER/R code/Karlan/bootstrap_AKM.R> produces the estimates that are needed for the Karlan 
	and List (bootstrap) simulation exercise.
<THE FOLDER/R code/Karlan/oracle_AKM.R> produces estimates for the Karlan and List application.
<THE FOLDER/R code/Karlan/summary_AKM.R> summarises the results of the Karlan and List (bootstrap)
	simulation exercise.

NB:Before running any of the above files, run <THE FOLDER/Manual_source_file.R>, changing 
L4	PARALLELID<-1L;
and
L7	YESTOATE<-FALSE;
as necessary.
###################################################################################################
S2.DESCRIPTION OF FILES 1.THE FOLDER	1.R code	3.Toy
###################################################################################################
<THE FOLDER/R code/Toy/figures_AKM.R> reproduces draws the figures for the toy example simulation 
	exercise.
<THE FOLDER/R code/Toy/summary_AKM.R> collects the results of the toy example simulation exercise
	into a ready-to-use format.
<THE FOLDER/R code/Toy/toy_AKM.R> produces estimates for the toy example simulation exercise. 
NB:Before running any of the above files, run <THE FOLDER/Manual_source_file.R>, changing 
<<PARALLELID<-1L;>> and <<YESTOATE<-FALSE;>> as necessary.
###################################################################################################
S2.DESCRIPTION OF FILES 1.THE FOLDER	1.R code	3.Toy		1.INDEPENDENT
###################################################################################################
NO DESCRIPTION AVAILABLE.
REASON: WRITTEN SEPARATELY BY T.KITAGAWA. STANDALONE FILE.
###################################################################################################
S2.DESCRIPTION OF FILES 1.THE FOLDER	2.R files
###################################################################################################
<THE FOLDER/R files/Karlan.rds> contains the Karlan and List dataset.
###################################################################################################
S2.DESCRIPTION OF FILES 1.THE FOLDER	2.R files	1.Objects	2.Karlan	1.ATE
###################################################################################################
<THE FOLDER/R files/Objects/Karlan/ATE/Bootstrap[N].rds> 	[N]={1,...,21} contains the output
	of <THE FOLDER/R code/Karlan/bootstrap_AKM.R> when <<PARALLELID<-[N];>> and 
	<<YESTOATE<-TRUE;>>. Each file contains estimates for 500 bootstrap replications of the 
	Karlan and List data. The reference group for the ATE is the control group.
<THE FOLDER/R files/Objects/Karlan/ATE/Oracle.rds> contains the output of 
	<THE FOLDER/R code/Karlan/oracle_AKM.R> when <<YESTOATE<-TRUE;>>. It contains the 
	estimates for the Karlan and List data. The reference group for the ATE is the control 
	group.
###################################################################################################
S2.DESCRIPTION OF FILES 1.THE FOLDER	2.R files	1.Objects	2.Karlan	2.Levels
###################################################################################################
<THE FOLDER/R files/Objects/Karlan/Levels/Bootstrap[N].rds> 	[N]={1,...,21} contains the output
	of <THE FOLDER/R code/Karlan/bootstrap_AKM.R> when <<PARALLELID<-[N];>> and 
	<<YESTOATE<-FALSE;>>. Each file contains estimates for 500 bootstrap replications of the 
	Karlan and List data.
<THE FOLDER/R files/Objects/Karlan/Levels/Oracle.rds> contains the output of 
	<THE FOLDER/R code/Karlan/oracle_AKM.R> when <<YESTOATE<-FALSE;>>. It contains the 
	estimates for the Karlan and List data.
###################################################################################################
S2.DESCRIPTION OF FILES 1.THE FOLDER	2.R files	1.Objects	3.Toy
###################################################################################################
<THE FOLDER/R files/Objects/Toy/MCdraws_[N]policies.rds>	[N]={2,10,50} contains the complete 
	output of <THE FOLDER/R code/Toy/summary_AKM.R>, organised into list format.
<THE FOLDER/R files/Objects/Toy/MCresults_[N]policies.rds>	[N]={2,10,50} contains a refinement 
	of the output of <THE FOLDER/R code/Toy/summary_AKM.R>, organised into a convenient matrix 
	format.
<THE FOLDER/R files/Objects/Toy/Toy[N]x[P].rds>	[N]={2,10,50}	[P]={0,...,8} contains the output 
	of <THE FOLDER/R code/Toy/toy_AKM.R> when <<PARALLELID=3*([P]-1)+index{[N]}>> for 
	index{2}=1, index{10}=2 and index{50}=3. Each file contains the estimates for 10,000 
	bootstrap samples generated as Y{1}~N([P],1) Y{2:[N]}~N(0,1). 
###################################################################################################
S2.DESCRIPTION OF FILES 1.THE FOLDER	3.R functions
###################################################################################################
<THE FOLDER/R functions/function_ewm.R> defines several functions that are used elsewhere.
<THE FOLDER/R functions/script_AKM.R> is the engine, and performs all calculations. 
###################################################################################################
S2.DESCRIPTION OF FILES 1.THE FOLDER	4.writeup
###################################################################################################
<THE FOLDER/writeup/Karlan_ATEwriteup.pdf> stores the Karlan and List (bootstrap) simulation 
	results in an accessible document for the case <<YESTOATE<-TRUE;>>. See also 
	<THE FOLDER/R code/Karlan/summary_AKM.R>, which produces all of the tables and statistics
	that are in this document.
<THE FOLDER/writeup/Karlan_writeup.pdf> stores the Karlan and List (bootstrap) simulation 
	results in an accessible document for the case <<YESTOATE<-FALSE;>>. See also 
	<THE FOLDER/R code/Karlan/summary_AKM.R>, which produces all of the tables and statistics
	that are in this document.
###################################################################################################
S3.GUIDE TO REPLICATION
###################################################################################################
All of the figures and statistics that are produced for the Karlan and List application (empirical 
estimates or bootstrap simulation exercise) or for the toy example simulation exercise can be 
produced using <THE FOLDER/Select_this_file.R>. You simply need to source 
<THE FOLDER/Select_this_file.R> and, first, select <THE FOLDER/Select_this_file.R> when prompted 
(using the file explorer that should appear on Windows machines) and, second, enter your answer
to the question or questions that appear. These summaries are produced using files stored in 
<THE FOLDER/R files/Objects> and so this section is mainly concerned with replication of these
files rather than production of the aforementioned summaries.

It should be noted that the replication of the files stored in <THE FOLDER/R files/Objects> is 
costly, which is for several reasons. Replication can take several weeks on a standard PC if run 
in serial. Although the code is not written in parallel (for good reason), there are several ways
to run the code in parallel and these are now discussed.

A.RUNNING THE CODE ON ONE MACHINE
Did you know that multiple instances of R can be opened at the same time? The easiest way to 
run the code in parallel is to exploit this by running different simulations on different 
instances. As a guide the code does not exhaust the processing power or the memory capacity of a
laptop with an Intel i5-10351G1 CPU @ 1.00GHz 1.19GHz and 8.00 GB RAM (7.81 GB usable) for a single
instance, and several instances (at least two or three) can be opened before processing power is 
exhausted. To replicate the Karlan and List (bootstrap) simulation exercises in multiple instances:
1.Open several instances of R.
2.Open <THE FOLDER/Manual_source_file.R> in an editor.
3.Change <<YESTOATE<-TRUE;>> if interest is in the ATE, otherwise leave <<YESTOATE<-FALSE;>>.
4.Copy the contents of the file into the first instance of R.
5.An interactive dialogue box should appear; use it to navigate to <THE FOLDER/Select_this_file.R>
	and select this file.
6.Then source <<THE FOLDER/R code/Karlan/bootstrap_AKM.R>>.
7.Return to the editor. 
8.The code is now running for <<PARALLELID<-1L;>> on the first instance. Change <<PARALLELID<-2L;>>
	and copy the contents of the file into the second instance of R.
9.Repeat 5., 6. and 7.
10.The code is now running for <<PARALLELID<-1L;>> on the first instance and for 
	<<PARALLELID<-2L;>> on the second instance. Changing <<PARALLELID<-[N]L;>>	
	[N]={1,...,21} and copying into an unused instance allows the code to be run in parallel.
11.The code will printout the iteration, the total number of iterations to be completed, the 
	current time and an expected time of completion.
To replicate the toy example simulation exercises in multiple instances:
1.Open several instances of R.
2.Open <THE FOLDER/Manual_source_file.R> in an editor.
3.Keep <<YESTOATE<-FALSE;>>.
4.Copy the contents of the file into the first instance of R.
5.An interactive dialogue box should appear; use it to navigate to <THE FOLDER/Select_this_file.R>
	and select this file.
6.Then source <<THE FOLDER/R code/Toy/toy_AKM.R>>.
7.Return to the editor. 
8.The code is now running for <<PARALLELID<-1L;>> on the first instance. Change <<PARALLELID<-2L;>>
	and copy the contents of the file into the second instance of R.
9.Repeat 5., 6. and 7.
10.The code is now running for <<PARALLELID<-1L;>> on the first instance and for 
	<<PARALLELID<-2L;>> on the second instance. Changing <<PARALLELID<-[N]L;>>	
	[N]={1,...,27} and copying into an unused instance allows the code to be run in parallel.
11.The code will printout the iteration, the total number of iterations to be completed, the 
	current time and an expected time of completion.

A.RUNNING THE CODE ON SEVERAL MACHINES
Opening several instances of R is conceptually equivalent to running the code on several 
different machines at the same time. Each machine should have a copy of <THE FOLDER> saved in such
a way that it is accessible. The steps are then the same as for running the code on one machine.
CAUTION: <THE FOLDER/Manual_source_file.R> has not been tested on some machines; in particular, 
this file has not been tested on HPC-type machines. <<FILE<-file.choose();>> is an interactive 
command that might not work on all machines. If <THE FOLDER/Manual_source_file.R> does not work
then change <<FILE<-"";>> and <<DIR<-[directory];>>. For instance, if path to <THE FOLDER> is
<C:\Users\jeffr\Inference on winners\THE FOLDER> (note the WINDOWS slash direction) then 
change <<DIR<-"C:/Users/jeffr/Inference on winners/THE FOLDER";>> and run. 
###################################################################################################
S3.FAQ			1.WHY IS REPLICATION SO COSTLY?
###################################################################################################
It should be noted that the replication of the files stored in <THE FOLDER/R files/Objects> is 
costly, which is for several reasons. 
--Computation of the proposed optimal confidence regions and median unbiased estimates relies on 
	finding the root of a monotone function with a single crossing point. The computational
	engine exploits this feature by using a simple bisection method to find this root to a 
	high degree of precision. Unfortunately, it is not known ex-ante where this root should 
	lie and the function itself is obtained from a tail probability that itself must be 
	simulated. The function must then be calculated point-wise and the random seed used for 
	the simulation of the tail probability must be held constant. As a consequence, the 
	bisection method that is used is not as efficient as some other inbuilt methods (it is 
	a standard bisection method and does not use polynomial interpolation) and can only
	be run in serial (and not in parallel; so as to preserve the random seed). Since the 
	approximate location of the root of the function is unknown, the bisection method
	also must first specify an appropriately wide search interval, and so works by specifying
	an initial sensible search interval before doubling this interval successively until the
	function exhibits conflicting signs at the endpoints of the search interval. 
--Precision is considered to be important and all simulated tail probabilities are calculated
	from 10,000 random draws. Equally, both the Karlan and List (bootstrap) simulation 
	exercise and toy example simulation exercise produce 10,000 separate estimates.
--The Karlan dataset contains 50,083 observations and the toy example simulation exercise is 
	performed for 27 different combinations of the number of policies and difference 
	between the best policy and other policies. 
###################################################################################################
S3.FAQ			2.CAN OTHER DATA BE USED?
###################################################################################################
With some minor modifications, yes! The code is written to be quite general and can handle any
dataset loaded into R in data.frame or data.table format. 

Specifically, <THE FOLDER/R code/Generic/oracle_AKM.R> has been designed to handle any generic 
dataset. It will save any output as <THE FOLDER/R files/Objects/Generic/ATE/Oracle.rds> or 
as <THE FOLDER/R files/Objects/Generic/Levels/Oracle.rds>. Please look at the file itself for 
further details: it specifies four arguments that need to be changed manually, and then requests
interactively that you specify both the path to THE FOLDER and the file location of the dataset
that you want to use. If interactive input is not possible then please change L27-L29 and L33-34
manually.

Note that <THE FOLDER/R code/Generic/oracle_AKM.R>, as written, is intended to load in raw data. 
For instance, suppose that you have data
||||||||||||||||||||||||||||||||||||
VAR.1	VAR.2	VAR.3
0.50	0	0
1.00	0	0
0.50	0	0
1.50	0	0
1.50	1	0
1.50	1	0
0.50	1	0
2.00	1	0
0.50	1	1
0.50	1	1
0.50	1	1
1.50	1	1
1.00	1	0
||>>TABLE1.0 -- EXAMPLE DATA FORMAT.
||||||||||||||||||||||||||||||||||||
available. You would need to, first, load this data into R and transform it into a data.frame or 
data.table and, second, save it in .rds format. Only then would you be able to run 
<THE FOLDER/R code/Generic/oracle_AKM.R>. The file will load this data in and transform it
into data.table format. As a guide, if VAR.1 is your outcome variable, and VAR.2 and VAR.3 are your
group variables, then you would change 
L4	OUTCOME.VARS<-c("VAR.1");
and
L5	GROUP.VARS<-c("VAR.2","VAR.3");
and the code will automatically compute the required objects (including the variance matrix). 

With respect to the previous remark, you may have objects Y (comprising observations of the outcome
variable) and X (comprising observations of the group variables). The snippet
||||||||||||||||||||||||||||||||||||
	DATA <- data.frame(cbind(Y,X));
	colnames(DATA) <- paste0("VAR.",1L:ncol(DATA));
	saveRDS(object=DATA,file="YOUR FILE LOCATION HERE");
||||||||||||||||||||||||||||||||||||
will save the data that you have in the same format as ||>>TABLE1.0.

In some cases, you may already have computed certain objects. For instance, you may prefer to 
compute your estimates (of the average outcomes for each group, and the estimated variance matrix)
separately. For instance, suppose that your M estimated group outcomes are saved in some object 
YHAT that is an Mx1 matrix, and that your estimated variance matrix is saved in some object SIGMA
that is an MxM positive semi-definite matrix. You would then comment the following lines of code:
L1-L23, L31-L35, L47-L135. You would then need to enter the snippet
||||||||||||||||||||||||||||||||||||
	assign("X",YHAT,envir=globalenv());
	assign("Y",YHAT,envir=globalenv());
	assign("Sigma",kronecker(matrix(rep(1,4),ncol=2),SIGMA),envir=globalenv());
	assign("alpha",0.05,envir=globalenv());
	assign("beta",0.005,envir=globalenv());
||||||||||||||||||||||||||||||||||||
so as to build the environment. You would then comment the following lines of code: L142-L191. Your
results can be found in the object <<Oracle>>. To interpret this object, refer to L60-L173.