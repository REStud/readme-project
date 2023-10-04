The data files (in Stat a format) that are supplied are simple excerpts
from a master fil e that is a m erge of the data at the individual level
produced from the survey modules, each corr esponding to a questio
nnaire The ars enic data are also me rged to the indiv iduals in the
data set Line rgespecific arsenic levels were constructed using the
familial relationships among individuals as well as the location
information To protect the confidentiality of the respo ndents, no
person -id's or locality information is provided in the data sets, be
side num erical codes for village ( 'villmany' variable ) To replicate
the numbers in the tables, there is a do file that runs on the data sets
named in the file, which are also included The do files are labeled
according to the table they produce So, table1.do delivers the numbers
in table 1 etc Similarly, th ere are files that deliver the numbers in
the figures These files are named according to the figure number So,
figure3.do delivers the numbers graphed in figure 3 The table3a.do file
( producing Table 3) takes approximately 1.75 hours to complete because
of the number of instruments const ructed All the rest of the programs
finish quickly The do files that create figures data are used to create
P ower Point graphs , which are included All programs were run on S tata
14 Two S tata packages are used that are not p art of the standard Stata
package : cluster2 from http://fmwww.bc.edu/RePEc/bocode/c permits 2
-level cluster s cmp (st0224 and st0224\_1 ) is a m ixed process
estimator that permits multi level random effects described in the Stata
journal (https://www.stata -journal.com/article.html?article=st0358 )
and in Stata Journal 11: 159--206
