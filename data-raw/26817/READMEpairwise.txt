# Kidney Exchange data and simulation description 

***** Data Availability Statements ********

The sources of these datasets are:
1. The sources for generating the file "kematrixAlldata.csv"  are anonymized scrambles from the organization  NKR, APKD, Methodist at San Antonio.
   The data they these organization provided us include blood types, antigens and antibodies, which in turn allow to construct a compatibility matrix from after merging the datasets
2. "kematrixSpecific.csv" and "pairsSpecific.csv" are generated only from the National Kidney Registry.

How to obtain such datasets:  
1. Data from  UNOS is publicly available upon data request and a small fee from  "https://optn.transplant.hrsa.gov/data/view-data-reports/request-data/".  Access is likley to be provided within 12 weeks.
2. Data from NKR, APKD and Methodist at San Antonio is not publicly available, and one may request these data from these organizations directly.  
We do not know whether access will be provided nor how long it will take.

********DATA***************
The input data needed is as follows

Compatibility matrix (square matrix) where M(i, j) denotes whether pair i and pair j can exhange donors.
	So importantly, the matrix files are symmetric (and capturing already only whether there is a two-way exchange.
	The file "kematrixAlldata.csv" corresponds to sample and annonymized version of the pairs of 4 datasets (as in section 2).
	The file "kematrixSpecific.csv" corresponds to a sample and annonymized version used in the simulations section (section 5).
	The file "pairsSpecific.csv" describes for each pair in the NKR dataset whether it is overdemanded (od), underdemanded (ud) or neither
		The first column  is the index of the pair (and corresponds to the NKR row/columnn matrix).



***********CODE*******************

We are providing here two different pieces of code: in  C# and in Python.

********** C# code***************

This code that developed in Visual Studio through a Console application (and run on Windows). This is THE code used for the paper and has all the functionality. There are two classes for artifical and data-driven policies: SimulpPolicy and DataPolicy. RunGreedy, RunPatient and RunBatchEfficient are functions that call the patient/greedy/batching

The "Main" function is in the file Program.cs in the class Program. Main calls three functions to generate the outcomes:

1. ANSstaticRealData(): simulates the FWP and SMM  (figure 1) in section 2 for real and artifical data respecitively. You can adjust the number of iterations within ksample
2. ANSdynamicSimulationsArtificialData(): calls the different algorithms patient/greedy/batching and generates the outcomes for section 5:  for tables 1 and figures 7 and 8.
3. ANSdynamicSimulationsArtificialData(): calls the different algorithms patient/greedy/batching and generates the outcomes for section 4 (figures 5(a-d) and figure 6)


******* Computing environment and compiling the code ****************

Important: in order to use the batching algorithm you need to install CPLEX. CPLEX is an optimization software that is used here to solve the integer program every batching period. CPLEX is free for academic research https://www.ibm.com/products/ilog-cplex-optimization-studio. Further instructions about installing CPLEX can be found here: https://community.ibm.com/community/user/datascience/blogs/xavier-nodet1/2020/07/09/cplex-free-for-students

When you set up the project in Visual Studio, you will need to add as references to the project the libraries ILOG.Concert.dll and ILOG.CPLEX.dll, so that CPLEX can call them. Alternatively, if you are familiar with C#, you can replace the "optimization code" (in the Match2wayDirect function) with some matching algorithm, or another solver, like Gurobi.

******* Before running the complied program *******
The complied program, Console.exe, will be placed in a "build" folder by Visual Studio. Before running this program, you need to copy the following files into this same folder:
- ILOG.Concert.dll
- ILOG.CPLEX.dll
- kematrixAlldata.csv
- kemaatrixSpecific.csv
- pairsSpecific.csv
- cplex2210.dll
- inputANS.txt

******* Simulations ADVICE (speed) *********

All the paramaters are hard coded (see the comments in the Program.cs where to adjust for different figures).

The number of iterarions for the output that is generated each figure may be different. These are large numbers in order to generate smooth graphs.

The iteration numbers are currently set to  

testsizeshort = 1000000
testsize = 2000000;
testsizeLong = 1000000
testsizeLongVeryLong = 20000000

Each figure can take a long time and to generate quickly output for less smoother fiugures you can set test sizes for around 1000. (Always use a number higher than 200 as the first 200 samples are discarded.)
Figure 1 will still take time, as it is hard coded, but one can change inside the funcdion DataPOlicy. KSample the iterations from 150 to a smaller number (the function is called from ANSstaticRealData).
Some figures (e.g., Figures 5 and 6)  will have not reach a relative "stable" solution before 100k iterations but one will see the trends will show.

**********Python Code***************
If you are not famliar with C#, we also wrote a short code in Python for the greedy algorithm that will allow you to get a headstart and work fast with Python. 

The code greedy_ke.py does the greedy algorithm. All you need to add in order to complete greedy is a main/read the data from above.

The description of how it works is as follows:

Creates a simulation of the kidney exchange market according to a Poisson process for patient-donor pairs (and altruistic donors) with optimal matching (greedy or periodic).

To set up the simulation (which is descreibed in the paper), arrival and departure times can be enerated for each pair before running anything and the arrival times can be sorted in lists.

Then, the Greedy simulation is as follows:

1. Until there is a match, sample an arrival to the system from the list of pairs (with replacement) and update the current time.
2. Remove the pairs that have departed from the system prior to the current time.
3. For the current pair that just arrived, look for a match in the current pool (pairs in the system that are waiting and have not been matched yet) that gives the highest value.
	b. We break ties in randomly
4. If the current pair finds a match, remove them from the pool. If not, sample another pair to join the pool and repeat the steps.

We haven't implemented Patient or Batching in python but the ideas are similar:

Patient: the simulation triggers the same process but when a pair departs.

For the batching algorithm, we started a piece of code but you will need to complete it. It should do the following:
	Every k periods, solve an optimization problem (using an integer program) with the existing pairs in the pool and remove those that are matched.
	Before each optimization period - remove all the pairs that have departed between the periods so they are not in the optimization.

******** References ********

National Kidney Registry, “Incompatible Patient-Donor Pairs Anonymized DataSet,”
https://www.kidneyregistry.org/ 2014

APKD, Methodist at San Antonio and NKR, “Combined Datasets from APKD Methodist at San Antonio and the NKR,” Data sources from the Alliance for Paired Kidney Donation, Methodist at San Antonio and National Kidney Registry. 2020

