Replication Package for Figures 4 and 5 in
"Equilibrium Analysis in Behavioral One-Sector Growth Models"
Daron Acemoglu and Martin Kaae Jensen, Review of Economic Studies, 2023

	Changelog: 	This is an updated version of https://doi.org/10.5281/zenodo.7525634
			Changes since previous version: Individual readme files collated into a single readme file; Data Availability Statement (DAS) and configuration information added to readme file; typos corrected in readme. 

	Data Availability Statement: The paper does not use original data. 
	
	RECOMMENDED (MINIMUM) HARDWARE CONFIGURATION:
	PROCESSOR: Mobile Intel(R) Core(TM) i5-7200U CPU @ 2.50GHz, 2712 Mhz, 2 Cores (integrated graphics)
	MEMORY: 8 GB
	O/S: No specific requirements except ability to run Matlab (see software requirements)
	Notes: (i) All data can be replicated also on slower processors. On slower processors, consider skipping Figure 4, Step A (which may be
	very time consuming).
	       (ii) All runtimes below refer to the recommended (minimum) system specification.  
	
	SOFTWARE REQUIREMENTS:
	MATLAB (R) 2020a Update 8 or later with the following add-ons:
		Symbolic Math Toolbox (Version 8.5 or later)
		Statistics and Machine Learning Toolbox (Version 11.7 or later)
		Simulink (Version 10.1 or later)
		Optimization Toolbox (Version 8.5 or later)
		Global Optimization Toolbox (Version 4.3 or later)
		Econometrics Toolbox (Version 5.4 or later)
		

Figure 4, Panel A

To replicate the data displayed in Panel A, Figure 4:

	A: Execute "HL_exact_eq_final_higherk_ub.m" in the folder "\Figure 4\Quasihyp".
 		This will compute the savings functions in the quasi-hyperbolic model described in
		the notes to Figure 4, and save the output as "quasihyp.mat".
	RUNTIME (MINIMUM CONFIGURATION): Approx. 28 minutes.
	NOTES:  (a) "HL_exact_eq_final_higherk_ub.m" performs a high-precision computation that may be skipped (the file quasihyp.m has been pre-generated as described next).
		(b) For documentation of the numerical algorithm used, see Jensen, "The Ego Loss Approach to Dynamic Inconsistency" (available at https://sites.google.com/site/mkaaejensen/research)

	B: Move the file "quasihyp.m" saved in A to the folder "\Figure 4" and 
	execute "runme.m" in the folder "\Figure 4". This will:
		i. simulate the Aiyagari model using the
		   Endogenous Grid Points with IID Income Algorithm of Greg Kaplan 2017 (available at http://benjaminmoll.com/ha_codes/). 
		ii. import the file "quasihyp.m" from Step A 		
		iii. Plot Figure 4 (i.e., the outputs generated in Steps A and B).
	RUNTIME (MINIMUM CONFIGURATION): Approx. 47 seconds.	
	NOTES:  (a) Step B can be executed without performing Step A (using the already saved output in "quasihyp.mat").
		(b) Kaplan's algorithm has been modified to allow for a discrete endowment shock and an explicit productivity parameter.

FIGURE 5, Panels A and C 

To replicate the data displayed in Panel A, Figure 5:

	A: Open "runme.m" in the folder "\Figure 5\Figure 5 - Panel A" and set "tax=0.00" in line 19 of the code, and execute/run.
		This will compute the savings functions with no tax in the quasi-hyperbolic model described in the notes to Figure 5, and save the output as "no_tax.mat".
	RUNTIME (MINIMUM CONFIGURATION): Approx. 28 seconds.
	NOTES:  For documentation of the numerical algorithm used, see Jensen, "The Ego Loss Approach to Dynamic Inconsistency" (available at https://sites.google.com/site/mkaaejensen/research)

	B: Repeat Step A setting "tax=0.02" in line 19 of the code.
		This will compute that case with a capital income tax, load "no_tax.mat" from Step A, and plot Panel A, Figure 5.
	RUNTIME (MINIMUM CONFIGURATION): Approx. 30 seconds.

To replicate the data displayed in Panel C, Figure 5:

	A: Open "runme.m" in the folder "\Figure 5\Figure 5 - Panel C", set "tax=0.00" in line 19 of the code, and execute/run.
		This will compute the savings functions with no tax in the quasi-hyperbolic model described in the notes to Figure 5, and save the output as "no_tax.mat".
	RUNTIME (MINIMUM CONFIGURATION): Approx. 43 seconds.
	NOTES:  For documentation of the numerical algorithm used, see Jensen, "The Ego Loss Approach to Dynamic Inconsistency" (available at https://sites.google.com/site/mkaaejensen/research)
	B: Repeat Step A setting "tax=0.02" in line 19 of the code.
		This will compute that case with a capital income tax, 
		load "no_tax.mat" from Step A, and plot Panel C, Figure 5.
	RUNTIME (MINIMUM CONFIGURATION): Approx. 44 seconds.


 