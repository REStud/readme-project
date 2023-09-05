Overview
--------

Data Availability and Provenance Statements
----------------------------

### GIS Data

For the purposes of replication, we include geodatabases for interstate and Seattle road networks that are fully processed and cleaned, as well as the necessary shapefiles for performing the network analysis we use in the paper in the folder `data/gis`. Detail on how these data were processed and generated from the raw datasets below can be found in Section F of the Online Appendix.

This paper uses HPMS data from the 2012, 2013, and 2016 releases. Raw shapefiles can be found at https://www.fhwa.dot.gov/policyinformation/hpms/shapefiles_2017.cfm.

This paper uses SRTM elevation data from CGIAR - Consortium for Spatial Information, accessible at https://srtm.csi.cgiar.org/srtmdata/.

This paper uses 2012 CFS area shapefiles. These can be found at https://www.census.gov/programs-surveys/cfs/technical-documentation/geographies.2012.html.

This paper uses shapefiles for municipal boundaries in King County, WA, available at https://data-seattlecitygis.opendata.arcgis.com/datasets/municipal-boundaries.

Also used in this paper are shapefiles for various Census subdivisions with population data from IPUMS NH-GIS. Shapefiles were only used in data processing and are not being redistributed. Population data at the CBSA level are being redistributed and can be found in folder `data/interstates`

### Other Data
Data purchased from [USCitiesList.org](https://www.uscitieslist.org/cart/packages/) are used in this paper, and the vintage of the USCitiesList data is from August 2017. This vintage is included in the folder `data/interstates/uscities`.

2012 CFS Microdata are used in this paper and can be found in the folder `data/interstates/cfs`.

We also use LEHD Origin-Destination Employment Statistics (LODES) data for Washington State. We use the LODES7 version of the data. These can be found in data/seattle/lodes.

Routing and geocoding data are sourced from [HERE](https://developer.here.com/) and [Google Maps](https://mapsplatform.google.com/maps-products/#geocoding) APIs, respectively.    

### Statement about Rights

- [X] I certify that the author(s) of the manuscript have legitimate access to and permission to use the data used in this manuscript.


### Summary of Availability

- [X] All data **are** publicly available.
- [ ] Some data **cannot be made** publicly available.
- [ ] **No data can be made** publicly available.

Where noted, data is included in the archive.

HPMS geospatial data were downloaded from the US Federal Highway Administration, are accessible from https://www.fhwa.dot.gov/policyinformation/hpms/shapefiles_2017.cfm. We use 2012 PA NHS data, 2013 West Virginia data, and 2016 Washington data. Datafiles which are derived from this data are:
* `data/interstates/gis/lower48network.gdb`
* `data/interstates/OD_bilateral.txt`
* `data/interstates/adjacency.txt`
* `data/interstates/OD_matrix_cbsa_cfs_link.txt`
* `data/seattle/gis/seattlenetwork.gdb`
* `data/seattle/bilateral_gridcity120.txt`


SRTM elevation rasters were downloaded from CGIAR - Consortium for Spatial Information, accessible at https://srtm.csi.cgiar.org/srtmdata/. Datafiles which are derived from this data are:
* `data/interstates/gis/lower48network.gdb`
* `data/seattle/gis/seattlenetwork.gdb`
* `data/interstates/OD_bilateral.txt`
* `data/interstates/OD_matrix_cbsa_cfs_link.txt`

This paper uses IPUMS-NHGIS shapefiles for Census block groups and CBSAs. IPUMS-NHGIS does not allow for redistribution, except for the purpose of replication archives. Datafiles which are derived from this data are:
* `data/interstates/gis/lower48network.gdb`
* `data/interstates/OD_bilateral.txt`
* `data/interstates/OD_matrix_cbsa_cfs_link.txt`
* `data/seattle/gis/seattlenetwork.gdb`
* `data/seattle/blk_grp_areas.txt`
* `data/seattle/grid_seattle_area_xwalk.txt`


This paper uses IPUMS-NHGIS population and income data for CBSAs and blockgroups in Washington. IPUMS-NHGIS does not allow for redistribution, except for the purpose of replication archives. The datafiles being redistributed are:
* `data/interstates/cbsa_pop_income.csv`
* `data/seattle/nhgis0008_ds225_20165_2016_blck_grp.csv`

This paper uses municipal boundaries in King County to help generate a gridded version of Seattle. These are available at https://data-seattlecitygis.opendata.arcgis.com/datasets/municipal-boundaries. Datafiles which are derived from this data are:
* `data/seattle/gis/seattlenetwork.gdb`
* `data/seattle/gis/seattlenetwork.gdb`
* `data/seattle/grid_seattle_area_xwalk.txt`
* `data/seattle/gridcity_pts.txt`

Data purchased from [USCitiesList.org](https://www.uscitieslist.org/cart/packages/) are used in this paper, and the vintage of the USCitiesList data is from August 2017. The data are included in the archive at:
* `data/interstates/uscities/us-cities.dta`

2012 CFS Microdata were downloaded from the Census Bureau at https://www.census.gov/data/datasets/2012/econ/cfs/historical-datasets.html. We convert this data from .csv format to .dta format and include it in the archive at:
* `data/interstates/cfs/cfs_2012_micro.dta`.

LEHD Origin-Destination Employment Statistics (LODES) data for Washington State were downloaded from the Census Bureau at https://lehd.ces.census.gov/data/. We use the LODES7 version of the data. The LODES data included in the archive are:
* `data/seattle/lodes/wa_xwalk.csv`
* `data/seattle/lodes/wa_od_main_JT00_2017.csv`
* `data/seattle/lodes/wa_rac_S000_JT00_2017.csv`
* `data/seattle/lodes/wa_wac_S000_JT00_2017.csv`

Routing and geocoding data are sourced from [HERE](https://developer.here.com/) and [Google Maps](https://mapsplatform.google.com/maps-products/#geocoding) APIs, respectively. Datafiles which include HERE API data are:
* `data/interstates/fullinterstate_travel_times.dta`
* `data/interstates/table1_adjmat_interstates.dta`
* `data/seattle/fullgridcity_travel_times.dta`
* `data/seattle/table1_adjmat_seattle.dta`   
Datafiles which include Google Maps API data are:
* `data/seattle/gmaps/all_nodes_address.json`
* `data/seattle/gmaps/all_nodes_neighborhood.json`

Dataset list
------------
See datadirectory.xlsx

Computational requirements
---------------------------

### Software Requirements


- Stata (code was last run with version 15.1)
  - `reghdfe` (version 5.7.3)
  - `ftools` (version 2.37.0)
  - `ivreg2`(version 04.1.11)
  - `ivreghdfe` (version 04.1.10)
  - `insheetjson` (latest version as of 2021 Nov 23)
  - `vincenty` (latest version as of 2021 Nov 23)
- Matlab (code was run with Matlab Release 2019a)
  - Parallel Computing Toolbox (Version 7.0, R2019a)
  - Image Processing Toolbox  (Version 10.4, R2019a)
- ArcGIS Pro




### Memory and Runtime Requirements


#### Summary

Approximate time needed to reproduce the analyses on a standard 2021 desktop machine:

- [ ] <10 minutes
- [ ] 10-60 minutes
- [ ] 1-8 hours
- [ ] 8-24 hours
- [ ] 1-3 days
- [x] 3-14 days
- [ ] > 14 days
- [ ] Not feasible to run on a desktop machine, as described below.

#### Details

STATA code was last run on a **2-core Intel-based laptop with MacOS version 11.6**.

Portions of the code were last run on a **16-core Intel desktop with 64 GB of RAM, 877 GB of fast local storage**. Computation took 115 hours.


Description of programs/code
----------------------------

- .do files in `analysis/interstates` and `analysis/seattle` will extract and reformat all datasets referenced above. The file `analysis/build_datasets.do` will run all these files
- `analysis/interstates/predict_trade.m` and `analysis/seattle/predict_commuting.m` generate the predicted flows graphed in Figure 2
- `analysis/interstates/interstate_link_intensity.m` and `analysis/seattle/seattle_link_intensity.m` generate the link intensities mapped in Figure 4.
- Programs in `analysis/counterfactuals` are run counterfactual simulations for a variety of parameter constellations.



Instructions to Replicators
---------------------------


### Data
- All data required to replicate has been provided.
### Details (Main Results)
- Order matters; please run the programs in the following sequence
- `analysis/figure1/figure_1.m`
  - This will generate the a), b), c), and d) panels of Figure 1.
- `analysis/build_datasets.do`:
   - This will run all .do files within `analysis/interstates` and `analysis/seattle` needed to construct the datasets for analysis and counterfactual simulation in correct order.
   - Last run top to bottom in Nov. 2021.
- `analysis/interstates/interstate_link_intensity.m`
  - This will run the analysis required for Figure 4, Panel A.
- `analysis/interstates/predict_trade.m`
  - This will run the analysis required for the scatters in Figure 2.
- `analysis/seattle/seattle_link_intensity.m`
  - This will run the analysis required for Figure 4, Panel B.
- `analysis/seattle/predict_trade.m`
  - This will run the analysis required for the scatters in Figure 2.
- `counterfactuals/interstates/asym_counterfactual.m`
  - No need to run to replicate, results provided in `counterfactuals/interstates/all_chiyl_asym.csv`. Last run top to bottom on Oct. 4, 2020.
- `counterfactuals/interstates/asym_nc_counterfactual.m`
  - No need to run to replicate, results provided in `counterfactuals/interstates/all_chiyl_asym_nc.csv`. Last run top to bottom on Oct. 5, 2020.
- `counterfactuals/seattle/asym_counterfactual_berlin.m`
  - No need to run to replicate, results provided in `counterfactuals/seattle/all_chi_lr_lf_ber.csv`. Last run top to bottom on Nov. 19, 2020.
- `counterfactuals/seattle/asym_nc_counterfactual_berlin.m`
  - No need to run to replicate, results provided in `counterfactuals/seattle/all_chi_lr_lf_ber_nc.csv`. Last run top to bottom on Nov. 23, 2020.
- `analysis/results.do`.
   - Creates panels for tables, panels of figures, and data for maps; sends all of them to the `outputs` folder
   - Last run top to bottom in Nov. 2021.
   - Stop here, if only replicating main results
- Figure 1: The figure can be reproduced using `analysis/figure1/figure_1.m`
- Figure 2: Created from `outputs/fig2a.pdf` and `outputs/fig2b.pdf`
- Figure 3: created in ArcGIS, see panel instruction below
 - Panel A:
  1. In your ArcGIS project, create two new maps.
  2. In both maps, import `data/interstates/gis/lower48network.gdb/states` as a layer and set it to the lowest layer; right-click on the layer and use the Symbology settings to set its appearance as a white fill with a black outline
  3. In both maps, import `data/interstates/gis/lower48network.gdb/lower48_pts` as a layer above the states layer; use the Symbology settings and Graduated Symbols at manual intervals on the `population` field matching those in the paper to set its appearance as black dots growing in size with population (minimum size of 2pt, max size of 8pt).
  4. In one map, import `data/interstates/gis/lower48network.gdb/lower48_cleaned_patchWV` as a layer above the states layer and points layer; use the Symbology settings and Graduated Colors with manual intervals on the `SUM_roadcat_vmt` field normalized over `SUM_roadcat_sectn_len` matching those in paper to set its appearance as gradient with blue (#005CE6) and red (#F50000) representing low and high traffic (AADT) respectively.
  5. In the other map, import `data/interstates/gis/lower48network.gdb/lower48_edges` as a layer above the states layer and points layer; import `data/interstates/derived/interstate_mapping_mat.csv` and join it to `lower48_edges` using the field `edgeID` as the join ID; use the Symbology settings and Graduated Colors with manual intervals on the `total_vmt` field normalized over `total_length` matching those in paper to set its appearance as gradient with blue (#005CE6) and red (#F50000) representing low and high traffic (AADT) respectively.
 - Panel B:
 1. In your ArcGIS project, create two new maps.
 2. In both maps, import `data/seattle/gis/seattlenetwork.gdb/USA_CBSA_2012` as a layer and set it to the lowest layer; right-click on the layer and use the Symbology settings to set its appearance as a white fill with a black outline
 3. In both maps, import `data/seattle/gis/seattlenetwork.gdb/grid_seattle_pts` as a layer above the states layer; use the Symbology settings and Graduated Symbols at manual intervals on the `grid_pop` field matching those in the paper to set its appearance as black dots growing in size with population (minimum size of 4pt, max size of 18pt).
 4. In one map, import `data/seattle/gis/seattlenetwork.gdb/obs_seattle` as a layer above the states layer and points layer; use the Symbology settings and Graduated Colors with manual intervals on the `vmt` field normalized over `sectn_len` matching those in paper to set its appearance as gradient with blue (#005CE6) and red (#F50000) representing low and high traffic (AADT) respectively. Python script generating the route shapes underlying `obs_seattle` is available upon request.
 5. In the other map, import `data/seattle/gis/seattlenetwork.gdb/grid_seattle_edges` as a layer above the CBSA layer and points layer; import `data/seattle/derived/seattle_mapping_mat.csv` and join it to `grid_seattle_edges` using the field `edgeID` as the join ID; use the Symbology settings and Graduated Colors with manual intervals on the `total_vmt` field normalized over `total_length` matching those in paper to set its appearance as gradient with blue (#005CE6) and red (#F50000) representing low and high traffic (AADT) respectively.
- Figure 4:
  - Panel A:
    1. Create a new map. Follow steps 2 and 3 from Figure 3, Panel A to format the base layers.
    2. In the other map, import `data/interstates/gis/lower48network.gdb/lower48_edges` as a layer above the states layer and points layer; import `data/interstates/derived/interstate_link_intensity.csv` and join it to `lower48_edges` using the field `edgeID` as the join ID; use the Symbology settings and Graduated Colors with manual intervals on the `total_vmt` field normalized over `total_length` matching those in paper to set its appearance as gradient with blue (#005CE6) and red (#F50000) representing low and high traffic (AADT) respectively.
    3. Select the origin and end points, copy those selected features to a new layer, and use the Symbology Settings and Unique Symbols to set their appearance as in the paper.  
  - Panel B:
    1. Create a new map. Follow steps 2 and 3 from Figure 3, Panel B to format the base layers.
    2. In the other map, import `data/seattle/gisseattlenetwork.gdb/grid_seattle_edges` as a layer above the CBSA layer and points layer; import `data/seattle/derived/seattle_link_intensity.csv` and join it to `grid_seattle_edges` using the field `edgeID` as the join ID; use the Symbology settings and Graduated Colors with manual intervals on the `total_vmt` field normalized over `total_length` matching those in paper to set its appearance as gradient with blue (#005CE6) and red (#F50000) representing low and high traffic (AADT) respectively.
    3. Select the origin and end points, copy those selected features to a new layer, and use the Symbology Settings and Unique Symbols to set their appearance as in the paper.   
- Figure 5:
  - Panel A:
    1. Create a new map. Follow steps 2 and 3 from Figure 3, Panel A to format the base layers.
    2. In the other map, import `data/interstates/lower48network.gdb/lower48_edges` as a layer above the states layer and points layer; import `outputs/interstate_cost_benefit.csv` and join it to `lower48_edges` using the field `edgeID` as the join ID; use the Symbology settings and Graduated Colors with manual intervals on the `epsilon_W` field matching those in paper to set its appearance as gradient with blue (#005CE6) and red (#F50000) representing low and high welfare elasticity respectively.
  - Panel B:
    1. Create a new map. Follow steps 2 and 3 from Figure 3, Panel B to format the base layers.
    2. In the other map, import `data/seattle/gisseattlenetwork.gdb/grid_seattle_edges` as a layer above the CBSA layer and points layer; import `outputs/seattle_cost_benefit.csv` and join it to `grid_seattle_edges` using the field `edgeID` as the join ID; use the Symbology settings and Graduated Colors with manual intervals on the `epsilon_W` field matching those in paper to set its appearance as gradient with blue (#005CE6) and red (#F50000) representing low and high welfare elasticity respectively.
- Figure 6:
  - Panel A: Scatter can be found in `outputs/fig6a_scatter.pdf`. Instructions for the map follow below:
      1. Use the map from Figure 5, Panel A; use the Symbology settings and Graduated Colors with manual intervals on the `epsilon_diff` field matching those in paper to set its appearance as gradient with blue (#005CE6) and red (#F50000) representing low and high welfare elasticity respectively.
  - Panel B: Scatter can be found in `outputs/fig6b_scatter.pdf`.
      1. Use the map from Figure 5, Panel B; use the Symbology settings and Graduated Colors with manual intervals on the `epsilon_diff` field matching those in paper to set its appearance as gradient with blue (#005CE6) and red (#F50000) representing low and high welfare elasticity respectively.
- Figure 7:
  - Panel A:
    1. Use the map from Figure 5, Panel A; use the Symbology settings and Graduated Colors with manual intervals on the `roi` field matching those in paper to set its appearance as gradient with blue (#005CE6) and red (#F50000) representing low and high welfare elasticity respectively.
  - Panel B: Scatter can be found in `outputs/fig6b_scatter.pdf`.
    1. Use the map from Figure 5, Panel B; use the Symbology settings and Graduated Colors with manual intervals on the `roi` field matching those in paper to set its appearance as gradient with blue (#005CE6) and red (#F50000) representing low and high welfare elasticity respectively.
- Table 1: Panel A is `outputs/tab1_congestion_interstate.tex`, Panel B is `outputs/tab1_congestion_seattle.tex`
- Table 2: Panel A is `outputs/tab2_interstate_top10_roi.tex`, Panel B is `outputs/tab2_seattle_top20_roi.tex`


### Details (Appendix)
- `counterfactuals/interstates/asym_counterfactual_d014.m`
  - No need to run to replicate, results provided in `counterfactuals/interstates/all_chiyl_asym_d014.csv`.
- `counterfactuals/interstates/asym_counterfactual_nospill.m`
  - No need to run to replicate, results provided in `counterfactuals/interstates/all_chiyl_asym_ns.csv`.
- `counterfactuals/interstates/asym_counterfactual_theta4.m`
  - No need to run to replicate, results provided in `counterfactuals/interstates/all_chiyl_asym_t4.csv`.
- `counterfactuals/seattle/asym_counterfactual_berlin_d016.m`
  - No need to run to replicate, results provided in `counterfactuals/seattle/all_chi_lr_lf_ber_d016.csv`.
- `counterfactuals/seattle/asym_counterfactual_berlin_ns.m`
  - No need to run to replicate, results provided in `counterfactuals/seattle/all_chi_lr_lf_ber_ns.csv`.
- `counterfactuals/seattle/asym_counterfactual_berlin_t4.m`
  - No need to run to replicate, results provided in `counterfactuals/seattle/all_chi_lr_lf_ber_t4.csv`.
- `analysis/appendix.do`.
  - Creates panels for tables, panels of figures, and data for maps; sends all of them to the `appendix` folder.


List of tables and programs
---------------------------

The provided code reproduces:

- [ ] All numbers provided in text in the paper
- [ ] All tables and figures in the paper
- [X] Selected tables and figures in the paper, as explained and justified below.


| Figure/Table #    | Program                  | Line Number | Output file                      | Note                            |
|-------------------|--------------------------|-------------|----------------------------------|---------------------------------|
| Figure 1          | analysis/figure1/figure_1.m  |             | outputs/grid_lambda0_Lbar100.pdf, outputs/grid_lambda0.05_Lbar100.pdf, outputs/grid_lambda0.05_Lbar1000.pdf, outputs/grid_lambda0.05_Lbar10000.pdf               ||
| Figure 2          | analysis/results.do| 212, 247          | outputs/fig2a.pdf, outputs/fig2b.pdf                      ||
| Figure 3, Panel A          | analysis/interstates/buildadjmat.do  | 380, 387        | data/interstates/derived/interstate_mapping_mat.csv, data/interestates/derived/interstate_mapping_nodes.csv                     | See instructions above for map creation |
| Figure 3, Panel B          | analysis/gridcity_popinc.do; analysis/seattle/gridcity_adjmat.do  | 64; 113        | data/seattle/derived/gridcity_popinc.csv; data/seattle/derived/seattle_mapping_mat.csv| See instructions above for map creation |
| Figure 4        | analysis/results.do        | 296; 380            | outputs/interstate_cost_benefit.csv; outputs/seattle_cost_benefit.csv                                 | See instructions above for map creation         |
| Figure 5        | analysis/results.do        | 296; 380            | outputs/interstate_cost_benefit.csv; outputs/seattle_cost_benefit.csv                                 | See instructions above for map creation         |
| Figure 6        | analysis/results.do        | 296; 380; 305; 393            | outputs/interstate_cost_benefit.csv; outputs/seattle_cost_benefit.csv; outputs/fig6a_scatter.pdf; outputs/fig6a_scatter.pdf | |
| Figure 5        | analysis/results.do        | 296; 380            | outputs/interstate_cost_benefit.csv; outputs/seattle_cost_benefit.csv                                 | See instructions above for map creation
| Table 1        | analysis/results.do        | 63; 156            | outputs/tab1_congestion_interstate.tex; outputs/tab1_congestion_seattle.tex                               | |
| Table 2       | analysis/results.do        | 324; 448           | outputs/tab2_interstate_top10_roi.tex outputs/tab2_seattle_top20_roi.tex                               | |


## References
CFS (2012): "2012 Commodity Flow Survey Public Use Microdata," *Bureau of Transportation Statistics.*
CGIAR-CSI (2017): "Shuttle Radar Topography Mission," Discussion paper, NASA.
HPMS (2016): "Highway Performance Monitoring System," Discussion paper, United States
Department of Transportation.
LODES (2017): "Longitudinal Employer-Household Dynamics," Discussion paper, United States Census Bureau.
MPC (2011): "National Historical Information System: Version 2.0," *Minnesota Population Center*, http://www.nhgis.org.
Seattle (2017): "Seattle GeoData," Discussion paper, City of Seattle.
---
