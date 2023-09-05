program define readinData

	*! This reads in the files

	syntax [varlist], suffix(string) [permcontrol(string) stablese(string)]

	* stablefe = whether we've run the s.e. code. Otherwise, reads in placeholder 999 variables.

	*! If the experiment is permanent, we need to compare two control groups
	if regexm("`suffix'","perm") {

		* Use perm control for treatment
		insheet using "$data/data_by_year_est_control_`suffix'.csv", comma clear
		
		foreach var of varlist cons_equiv* {
			destring `var', replace force
			}
		foreach var of varlist *beta* *inc* *cons* fval{
			destring `var', ignore("NaN" "Inf") replace force
			}

		capture gen time_id = survey_round
		sum time_id if year_experiment ==1
		keep if time_id>=`r(mean)'
		gen treatment = 1
		
		tempfile treatment
		save `treatment', replace

		* Use permcontrol for control
		insheet using "$data/data_by_year_est_control_`permcontrol'.csv", comma clear

		capture gen time_id = survey_round

		foreach var of varlist cons_equiv* {
			destring `var', replace force
			}
		foreach var of varlist *beta* *inc* *cons* fval{
			destring `var', ignore("NaN" "Inf") replace force
			}

* Cheat to get time since experiment working correctly: duplicate here, and then *merge* on time_id>=year_experiment
		expand 2, gen(treatment)
		merge 1:1 treatment time_id using `treatment', update replace
		}

	*! Else, just read in standard treatment/control file
	else {

		insheet using "$data/data_by_year_est_treatment_`suffix'.csv", comma clear
		tempfile treatment

		foreach var of varlist cons_equiv* {
			destring `var', replace force
			}
		foreach var of varlist *beta* *inc* *cons* fval{
			destring `var', ignore("NaN" "Inf") replace force
			}
		
		save `treatment', replace

		insheet using "$data/data_by_year_est_control_`suffix'.csv", comma clear
		gen treatment = 0

		foreach var of varlist cons_equiv* {
			destring `var', replace force
			replace `var' = 999 if `var' == .
			}
		foreach var of varlist *beta* *inc* *cons* fval{
			destring `var', ignore("NaN" "Inf") replace force
			replace `var' = 999 if `var' == .
			}
	
		append using `treatment'
		replace treatment = 1 if treatment == .

		}

	replace b_nonpec_decay_rate = 1-b_nonpec_decay_rate //make it into a decay rate//

	save $outpath/data_`suffix', replace
	sum fval
	local fval = `r(mean)'

	* look for beta that is exog_beta
	ds, has(varlabel "beta")
	rename `r(varlist)' beta_exog

	*! Read in standard errors
	*! Placeholders are 999 if didn't rerun the std error code
	if "`stablese'" == "yes" {
		local stablese _stablese
		}
	else {
		local stablese
		}
	

	insheet using $data/b_var`stablese'_`suffix'.csv, comma clear
	capture replace b_nonpec_decay_rate = 1-b_nonpec_decay_rate //make it into a decay rate//

	* Want to transform this into estimates
	convertEst
	eststo test
	estadd scalar fval = `fval'
	estimates save $outpath/estimates_`suffix', replace

	
end
