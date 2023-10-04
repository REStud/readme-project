The file nonmon4.m is Matlab code for generating Figure A1 in Smith,
Sorensen and Tian: "Informational Herding, Optimal Experimentation, and
Contrarianism." It is available on Zenodo at the link provided in the
paper No other new data were generated or analysed in support of this
research The Matlab code was written by us in 2005 and 2006 It was rerun
in January 2021on a basic installation of Matlab R2020b Update 3; no
toolboxes needed The mainloop of the script is set to run 100 iterations
On a basic laptop computer, in January 2021 each loop took around 1
second, and the entire script executed in less than 100 seconds For the
signal structure of the example, the schipr first computes the
statecontingent probabilities of each action given each possible signal
threshold in a finite mesh These probabilities are used in Bayes rule to
compute public posterior beliefs for every pair of public belief and
signal threshold The main loop is an iteration of the value function,
building on the Bellman operator iteration given in the article's Claim
1 in Appendix A In order to speed up convergence to the limit with the
finite state and control meshes, updating of the value function is
damped Notation in the article was modified since the script was written
The variable rho in the code represents the threshold theta of the
article The variable theta in the code is instead the damping factor for
updating the value function,a feature that is not covered in the article
After running the script in 2006, we saved data from Matlab for plotting
the curve in Figure A1 We used Latex with the dvips package to generate
the figure The code for the curve includes data points, and looks
precisely as follows:
\pscurve(.305,.19222405)(.325,.22515953)(.35,.26106009)(.375,.29086266)(.395,.30
853496)
\pscurve(.40,.41966427)(.425,.43018756)(.45,.44039146)(.475,.46025311)
(.50,.47512992)(.525,.49002085)(.55,.50501522)(.575,.52020507)
(.60,.53568711)(.625,.55156491)(.65,.56291736)(.675,.57995227)
(.70,.59777321)(.725,.61154273)(.75,.62650189)(.775,.64292486)
(.80,.65610438)(.825,.67152422)(.85,.68461212)(.875,.70140281)
(.90,.70607114)(.925,.70912277)(.95,.71043972)(.98,.71337580)(.995,.71737563)
The Matlab code directly outputs a version of this figure which is
enclosed in this replication package as nonmon4.eps It slightly differs
by also visualizingthe control over the cascade set below .3 On this
range, the control is the upper bound of the belief distribution This
part of the figure has been omittedfrom the the paper.
