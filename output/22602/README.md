1 Data Availability Statement\
The data are confidential micro data from Statistics Finland The data
are compiled of the following two data sets:\
1 Industrial Output for the years 2004 -- 2011 , cited as:\
Statistics Finland, 2012 "Industrial Output"
https://stat.fi/en/statistics/documentation/tti\
2 Longitudinal Database on Plants in Finnish Manufacturing (LDPM) for
the years 2004 -- 2011 , cited as:\
Statistics Finland, 2012 "Longitudinal Database on Plants in Finnish
Manufacturing (LDPM)" These data sets are provided by the Research
Services department of Statistics Finland Statistical legislation and
data protection and confidentiality practices s pecified in legislation
are applied in releasing the data Release of data is subject to a user
licence Instructions for applying for a user licence are provided here:
https://www.tilastokeskus.fi/tup/mikroaineistot/hakumenettely\_en.html\
The data can be used via a remote access system or at the Research
Laboratory of Statistics Finland based in Helsinki, Finland Practical
matters concerning u se at the Research Laboratory are described here:
https://www.tilastokeskus.fi/tup/mikroaineistot/aineistot\_en.html\
In order to use data via the remote access system, the researcher's
organisation must conclude a remote access agreement w ith Statistics
Finland, and the researcher must submit a user and workspace -specific
remote access commitment Instructions on making remote access agreement
and commitment , together with a description on how to log in to the
remote access system, are provided here:
https://www.tilastokeskus.fi/tup/mikroaineistot/etakaytto\_en.html\
Licence to use ready -made data modules (like the two data sets u sed in
this study), using a Research Laboratory workstation, and remote access
use are all subject to charge The prices are listed here: https://www.ti
lastokeskus.fi/tup/mikroaineistot/aineistojen -japalveluiden
-hinnat\_en.html\
Dataset description\
The compiled data set consists of product -plant -year -level variables
from the Industrial Output data and plant -year -level variables from
the Longitudinal Database on Plants in Finnish Manufacturing The product
-plant -year -level variables are output quan tity and output price,
which are identified by plant id, year and PRODCOM code The plant -year
-level variables are capital stock, expenditures on labour , materials
price index, and expenditures on materials, which are identified by
plant id and year The compiled data set meets the following conditions:\
A plant manufacture s at least one product with three -digit PRODCOM
code 161 or 162 and it does not manufacture products in other industries
Each product is observed in at least four pairs of observations, with
each observation pair being from two consecutive years in a given plant
2 The ratio of the plant -level sum of product -specific sales revenue
to gross output value (a variable provided in the Longitudinal Database
on Plants in Finnish Manufacturing ) is at least 0.6 but not more than
1.4 Products are identified by their PRODCOM codes (2010 classification)
Instead of importing the PRODCOM codes to Matlab , the data is imported
to Matlab as plant -year -level observations, where the order of the
output quantity and price data (in columns) identifies the products
Software\
Stata is used to compute d escriptive statistics Stata is available at
the Research Services department of Statistics Finland Matlab (version
2008 ) and GMM library by Mike Cliff are used for estimating the
empirical model The GMM library is available here:
https://sites.google.com/site/mcliffweb/computer -programs -anddata The
Research Services department of Statistics Finland does not provide
Matlab but one can purchase a licence at one's own expense Alternative
ly, one may use Octave, which requires some modification of the Matlab
codes included in this replication package Programs multiproduct.m is
executed to prepare the data for estimation and give the estimation
command multiproduct.m calls a function for moments defined in
multiproduct\_moments.m Tables and directions for replication\
Table 1 This table comprises PRODCOM titles in English Statistics
Finland uses Finnish\
PRODCOM titles, which are provided here:
https://www.stat.fi/meta/luokitukset/prodcom/001 - 2010/in dex.html The
Finnish titles have been translated into English using the PRODCOM lists
provided by Eurostat, at present provided here:
https://op.europa.eu/en/web/eu -vocabularies/eurostat\
Table 2 This table comprises summary statistics for variables of the
compiled data set and products' relative price s, which are defined as
the ratio of the product -plant -year -specific price to the product
-yearspecific mean The Stata command to obtain these summary statistics
is "summar ize, detail" Table 3 This table comprises summary statistics
on differences between relative prices within plants that produce two,
three, four, five, and at least six products For each plant -year -level
observation, products ' relative prices are ordered in descending order
, and differences between the relative prices are computed Summary s
tatistics on these differences , conditional on plant producing two,
three, four, five, and at least six products, are obtained with Stata
command "summar ize" Table 4 The content of this table is estimation
results They are obtained by executing "multiproduct.m" in Matlab, which
calls a function for moments defined in multiproduct\_ moments.m 3 Refer
ences\
Statistics Finland , 2012 "Industrial Output"
https://stat.fi/en/statistics/documentation/tti\
Statistics Finland , 2012 "Longitudinal Database on Plants in Finnish
Manufacturing (LDPM)"
