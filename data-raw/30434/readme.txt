%== Contract analysis ==%

/contract_analysis/

1. ContractTerms.m
    This script produces tables that describes the terms
    (i.e. consumptions, premiums, and front-loading) under the
    optimal dynamic contracts for various income streams.

2. WelfareTables.m
    This script produces tables comparing welfare outcomes
    under optimal dynamic contracts with welfare under
    the first-best insurance and under spot markets for insurance.

3. ProduceContracts.m
    This script saves optimal dynamic contracts as MATLAB objects.


%== Initial health state and subsidies ==%

/init_state/

The first two scripts compute utilities under various
subsidies for computing break-even subsidies.

1. SimulateSubsidies.m

2. SimulateSubsidies_ACA.m

The remaining scripts analyze welfare conditional
on initial health state.

3. InitialHealthState.m
    This script analyzes welfare under various health insurance schemes
    conditional on the consumer's initial health state.
    It uses the Markov 1 transitions.

4. InitialHealthState_Markov2.m
    This script analyzes welfare under various health insurance schemes
    conditional on the consumer's initial health state.
    It uses the Markov 2 transitions.   

5. InitialHealthState_Markov2_sim.m
    This script analyzes welfare under various health insurance schemes
    conditional on the consumer's initial health state
    It uses the Markov 2 transitions and simulates
    welfare to speed up computations.

6. InitialHealthState_Markov2_sim_Marginal.m
    This script analyzes welfare under various health insurance schemes
    conditional on the consumer's initial health state.
    Use Markov 2 transitions and simulated welfare to speed up 
    computations. Use BE subsidies that equalize marginal utilities.   

7. InitialHealthState_Markov2_ACA_sim.m
    This script analyzes welfare under various health insurance schemes
    conditional on the consumer's initial health state.
    Use Markov 2 transitions and the HHW sample.
    Use simulated welfare to speed up computations.

8. InitialHealthState_Markov2_ACA_sim_lowRA.m
    As above, but with reduced risk aversion.

9. InitialHealthState_Markov2_ACA_Marginal_sim.m
    This script analyzes welfare under various health insurance schemes
    conditional on the consumer's initial health state.
    Use the Markov 2 transitions and the HHW sample.
    Compute break-even subsidies to equalize marginal utilities
    across initial health states.
    Use simulated welfare to speed up computations.
 
10. InitialHealthState_Markov2_ACA_Marginal_sim_lowRA.m
    As above, but with reduced risk aversion.

11. InitialHealthState_FlatnetM2_Welfare.m
    This script analyzes welfare under various health insurance schemes
    conditional on the consumer's initial health state
    It uses the flat net (Markov 2) income stream and simulation
    to speed up welfare computations

%== ACA ==%

/aca/

1. ACA.m
    This script generates tables comparing welfare outcomes under
    the ACA with those under alternative insurance regimes.
    This script uses the HHW sample and computes welfare under
      Spot insurance
      Optimal dynamic contracts (without subsidies)
      ACA (with and without saving)

2. PrecautionarySavings_ACA.m
    This script computes CEs for the ACA insurance regime
    when precautionary savings are allowed.
    It uses the HHW sample.

%== Precautionary savings ==%

1. PrecautionarySavings.m
    This script computes welfare under spot insurance with     
    precautionary savings. It uses the Utah men sample. 

2. SavingsTable.m
    This script produces tables that compare welfare under
    optimal dynamic contracts with welfare under spot insurance
    with precautionary savings.

3. MakeSavingsTable_for_draft.m
    This script prepares a precautionary savings table for inclusion
    in the  draft of the paper. 
    It produces this table by (i) loading the table generated by
    SavingsTable.m and (ii) adding a column to the table.

%== Income streams ==%

/income_streams/

1. ComputeFlatNet.m
    This script computes the flat net income profiles 
    used in the main analysis.

2. PlotIncomeStreams.m
    This script plots the income streams used in the main analysis.

%== Data processing ==%

/process_data/

1. ProcessInitDist.m
    This script processes the raw data files with the "empirical"
    initial distribution of health states for use in MATLAB

2. PrepareHHW.m
    This script processes the HHW data for use in the main
    analysis scripts.

2. HHW_plots.m
    This script plots expected medical expenses by 
    health score and premiums by age under the ACA for the
    HHW sample.

%== Persistence/transitions of health expenses ==%

/persistence/

1. PersistenceTables.m
    This script produces tables that characterize the degree
    to which health expenses persist across time

2. TransitionTables.m
    This function generates tables reporting health state
    transition matrices.

%== PKH comparison ==%

/PKH/

1. PKH.m
    This script computes figures for the "Comparison to Pauly, 
    Kunreuther, and Hirth (1995)" section

%== Switching costs: Utah men welfare ==%

/switching_cost_Utah/

1. SwitchingCost_empirical_init.m
    This script computes long-run welfare under optimal dynamic
    contracts for various switching costs.
    It uses the Utah men sample and the "empirical" initial
    distribution of health states.

2. SwitchingCost.m
    This script computes long-run welfare under optimal dynamic
    contracts for various switching costs.
    It uses the Utah men sample and the "healthiest consumer" initial
    distribution of health states.

%== Switching costs: ACA comparison ==%

/switching_cost_ACA/

1. ComputeACA_CE.m
    This script computes CEs for the ACA and saves them in a MATLAB .mat
    data file. This script's purpose is to produce these CEs for the 
    computation of switching costs that give the optimal 
    dynamic contract CEs equal to those under the ACA.

2. ACA_Switching_Comparison.m
    This script computes long-run welfare for under the optimal dynamic 
    contracts for the HHW sample and various switching costs.

3. ACA_switching_match.m
    This script uses the output of `ACA_Switching_Comparison.m` 
    to find the switching cost that achieves the same long-run welfare
    under optimal dynamic contracts as does the ACA for each
    income profile.

%== Other scripts for making tables ==%

/table_tools/

1. ConstructSubsidyWelfareTable.m
    Produce a table characterizing welfare under 
    break-even subsidies that equalize marginal utilities
    across initial health states.
    
2. ConstructSubsidyWelfareTable_ACA.m
    As above, but using the HHW sample.

3. AddBreakEven.m
    This script adds a CE_{Break Even} column to the 
    ACA comparison table. The CE_{Break Even} quantities 
    correspond to break-even subsidies that equalize
    utilities across intial health states (not marginal utilities)

4. AddBreakEven_lowRA.m
    As above, but with reduced risk aversion

5. GenerateWelfareTableACA.m
    This script adds a column to the ACA welfare comparison
    tables that reports the CE under break-even subsidies
    This script is like AddBreakEven.m, but it adds a column
    corresponding to break-even subsidies that equalize 
    *marginal* utility across initial health states.
