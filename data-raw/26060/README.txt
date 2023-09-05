%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
REPLICATION KIT FOR THE MODEL IN GETE AND ZECCHETTO (2023)
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
FOLDER "EMPIRICS"
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

SUBFOLDER FigDataUSvsSpain 

* To generate Figure 1 in the paper:
FIGURE_1.m
NOTE: The raw data used is located in the same folder


SUBFOLDER SCF_moments

* To compute the SCF (Survey of Consumer Finances) moments used in Table 2 of the paper:
SCF_moments.do
NOTE: The SCF data comes from the replication kit of Kaplan, Moll and Violante (2018)


SUBFOLDER DataUS_business_cycle

* To compute consumption and output in Table 5:
figure_C_and_GDP_detrended_US.m
NOTE:The other data reported in Table 5 are found in the folder "raw"


SUBFOLDER EFF_moments

* To compute the EFF (Survey of Household Finances) moments used in Table 9 of the paper:
EFF_moments_liquid.do
EFF_moments_OLTV.do
NOTE: The EFF data comes from the Bank of Spain
https://www.bde.es/bde/en/areas/estadis/estadisticas-por/encuestas-hogar/relacionados/Encuesta_Financi/


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
FOLDER "MODEL"
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

The MATLAB code was run on Amazon EC2
Ubuntu 18.04.5 LTS (GNU/Linux 5.4.0-1066-aws x86_64) operating system


Some C MEX-files require the use of the GSL numerical library
https://www.gnu.org/software/gsl/


To run the "main.m" script: nohup ./jb_main_aws.sh &


Organzation:
(1) To generate the necessary output (*.mat files) for the results on the paper
(2) To generate the results in the paper (tables, figures, other results)


================================================================================
================================================================================
(1) TO GENERATE THE NECESSARY OUTPUT (*.MAT FILES) FOR THE RESULTS ON THE PAPER
================================================================================
================================================================================

The script "main.m" contains the following:


* To compile C MEX-files:
compile_linux.m

================================================================================
NON-RECOURSE (US BENCHMARK PARAMETERIZATION)
================================================================================

* To calibrate the non-recourse model to the US (benchmark parameterization):
calibrate.m


* To solve the transition path for the non-recourse econ:
trans.m


% To compute direct and indirect effects on household policy functions (non-recourse):
compute_dec_non_rec.m


* To compute the consumption responses by direct and indirect effects and household groups (non-recourse):
compute_cons_by_dec_group.m


* To compute the default responses by household groups (non-recourse):
compute_def_by_group.m


================================================================================
RECOURSE 
================================================================================

* To generate the recourse econ by introducing recourse to benchmark non-recourse econ:
calibrate_mod_rec.m


* To solve the transition path for the recourse econ:
trans_rec.m


* To compute counterfactual where the recourse econ is fed eq prices non-recourse econ:
compute_rec_with_non_rec_prices.m


* To compute direct and indirect effects on household policy functions (recourse):
compute_dec_rec.m


* To compute the consumption responses by direct and indirect effects and household groups (recourse):
compute_cons_by_dec_group_rec.m


* To compute the default responses by household groups (recourse):
compute_def_by_group_rec.m


================================================================================
RECOUSE (SPAIN)
================================================================================

* To calibrate the recourse model to Spain:
calibrate_spain.m


* To solve the transition path for the recourse econ (Spain):
trans_spain.m


* To compute counterfactual where the Spain econ is fed eq prices non-recourse econ:
compute_spain_with_non_rec_prices.m


* To compute the consumption responses by household groups (Spain):
compute_cons_by_group_spain.m


================================================================================
NON-RECOUSE (SPAIN)
================================================================================

* To generate the non-recourse econ by removing recourse from Spain econ:
calibrate_mod_spa_non_rec.m


* To solve the transition path for the non-recourse econ (Spain):
trans_spa_non_rec.m


================================================================================
CLEAR TRANSITION
================================================================================

* To remove the policy and value functions from the transition paths *.mat files to save space,
* since they are no longer needed to compute the paper results:
clear_trans.m
NOTE: The large transition path *.mat files are available upon request


================================================================================
OTHER OUTPUTS
================================================================================

SUBFOLDER Default_dec

* To compile the necessary C MEX-files:
compile_linux_simul.m


* To compute liquidity stats by simulating households in steady state (non-recourse):
simulate_DEF_SS.m


* To compute liquidity stats by simulating households in steady state (recourse):
simulate_DEF_SS_REC.m


* To compute default decomposition motives by simulating households over the transition (non-recourse):
simulate_DEF.m
NOTE: This script requires the *.mat file output of "trans.m" before cleanup


SUBFOLDER Altern_spec_g

* To generate the necessary *.mat files to compute the results of the paper (government spending adjusts):
main_g.m


The script "main_g.m" contains the following:


* To solve the transition path for the non-recourse econ:
trans_g.m


* To solve the transition path for the recourse econ:
trans_rec_g.m


* To solve the transition path for the recourse econ (Spain):
trans_spain_g.m


* To remove the policy and value functions from the transition paths *.mat files to save space,
* since they are no longer needed to compute the paper results:
clear_trans_g.m


SUBFOLDER  Altern_spec_zlb

* To generate the necessary *.mat files to compute the results of the paper (ZLB):
main_ZLB.m


The script "main_ZLB.m" contains the following:


* To solve the transition path for the non-recourse econ:
trans_ZLB.m


* To solve the transition path for the recourse econ:
trans_rec_ZLB.m


* To solve the transition path for the recourse econ (Spain):
trans_spain_ZLB.m


* To remove the policy and value functions from the transition paths *.mat files to save space,
* since they are no longer needed to compute the paper results:
clear_trans_ZLB.m
 

================================================================================
================================================================================
(2) TO GENERATE THE RESULTS IN THE PAPER (TABLES, FIGURES, OTHER RESULTS)
================================================================================
================================================================================

NOTE: The output *.mat files necessary to compute the results are available upon request


================================================================================
TABLES (LOCATED IN FOLDER "RESULTS")
================================================================================

* To generate Table 1 in the paper:
TABLE_1.m 


* To generate Table 2 in the paper:
add_moments_a_dist.m
add_moments_OLTV.m
add_moments_WHTM.m
TABLE_2.m 


* To generate Table 3 in the paper:
compute_mpc_y.m
TABLE_3.m


* To generate Table 4 in the paper:
compute_def_prob.m
compute_def_prob_rec.m
TABLE_4.m


* To generate Table 5 in the paper:
TABLE_5.m


* To generate Table 6 in the paper:
TABLE_6.m


* To generate Table 7 in the paper:
TABLE_7.m
TABLE_7_g.m
NOTE: The last script is located in the folder "Altern_spec_g"


* To generate Table 8 in the paper:
TABLE_8.m


* To generate Table 9 in the paper:
TABLE_9.m


* To generate Table 10 in the paper:
TABLE_10.m


* To generate Table 11 in the paper:
TABLE_11.m
TABLE_11_g.m
NOTE: The last script is located in the folder "Altern_spec_g"


* To generate Table A1 in the paper:
check_moments_income_HANK.m
TABLE_A1.m 


* To generate Table A2 in the paper:
TABLE_A2.m 


* To generate Table A3 in the paper:
TABLE_A3.m


================================================================================
FIGURES (LOCATED IN FOLDER "RESULTS")
================================================================================

* To generate Figure 2 in the paper:
add_moments_a_dist.m
compute_mpc_y.m
FIGURE_2A.m
FIGURE_2B.m  NOTE: This requires the *.mat file output of "trans.m" before cleanup
FIGURE_2C.m
FIGURE_2D.m


* To generate Figure 3 in the paper:
FIGURE_3.m


* To generate Figure 4 in the paper:
FIGURE_4.m


* To generate Figure 5 in the paper:
FIGURE_5AC.m
FIGURE_5BD.m


* To generate Figure 6 in the paper:
FIGURE_6.m


* To generate Figure 7 in the paper:
FIGURE_7.m


* To generate Figure 8 in the paper:
FIGURE_8.m


* To generate Figure A1 in the paper:
FIGURE_A1.m


* To generate Figure A2 in the paper:
FIGURE_A2.m
NOTE: This script is located in the folder "Altern_spec_g"


* To generate Figure A3 in the paper:
FIGURE_A3.m
NOTE: This script is located in the folder "Altern_spec_zlb"


================================================================================
OTHER RESULTS IN THE PAPER (LOCATED IN FOLDER "OTHER_RESULTS")
================================================================================

* To generate comment in Section 4.1.4 of the paper:
display_share_HH_net_transfer_gov.m


* To generate comment in Section C.5.1 of the paper:
display_prepayment_stats.m


* To generate comment in Section 4.3.2 of the paper:
compute_elast_ph.m
display_elast_ph.m


* To generate comment in Section 5.1 (A) of the paper:
display_liq_saving_at_def_ss.m
NOTE: This script is located in the folder "Default_dec"


* To generate comments in Sections 5.1 (B) and 6.1 (A) of the paper:
add_moments_OLTV.m
add_moments_OLTV_rec.m
add_moments_OLTV_spain.m
display_OLTV_nonrec_rec_spain.m


* To generate comments in Section 5.2 (A) and Appendix H of the paper:
display_def_dec.m    
NOTE: This script is located in the folder "Default_dec"


* To generate comment in Section 5.2 (B) of the paper:
display_share_underwater_crisis.m


* To generate comment in Section 5.3 of the paper:
data_vs_model_recovery.xlsx


* To generate comment in Section 5.4 of the paper:
display_rec_with_non_rec_prices.m


* To generate comment in Section 5.6 of the paper:
display_dir_vs_ind_effects.m


* To generate comment in Section 5.6.1 of the paper:
display_hh_choices_dir_eff.m


* To generate comment in Section 6.1 (B) of the paper:
disp_gini_spain_section.m


* To generate comment in Section 6.2 (A) of the paper:
data_vs_model_recovery.xlsx


* To generate comment in Section 6.2 (B) of the paper:
display_spain_with_non_rec_prices.m


* To generate comment in Section 6.3 of the paper:
display_cons_by_LTV_spain.m


* To generate comment in Section 8 of the paper:
display_lender_losses.m


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
