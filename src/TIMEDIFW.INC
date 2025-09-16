.------------------------------------------------------------
. Modifications
.------------------------------------------------------------
. V11.00.00  26/05/2020  Thanh T        TSK 0857573 
.            Initial Version. Copied from V10.09
.------------------------------------------------------------
. Time Differences Calculation                              
.------------------------------------------------------------
.
. WORKING VARIABLES FOR TIMEDIFS.PBL
.
DTFRSDTE  DIM       8
DTFRSTIM  DIM       8
DTLSTDTE  DIM       8
DTLSTTIM  DIM       8
.
DTSTAMP1  DIM       14
DTSTAMP2  DIM       14
DTDATE1   DIM       8
DTDATE2   DIM       8
DTHH1     DIM       2
DTHH2     DIM       2
DTMM1     DIM       2
DTMM2     DIM       2
DTSS1     DIM       2
DTSS2     DIM       2
DTHOUR1   FORM      2
DTHOUR2   FORM      2
DTMINUT1  FORM      3
DTMINUT2  FORM      3
DTSECON1  FORM      3
DTSECON2  FORM      3
DTTMP14   DIM       14
.
DTOSIGN   FORM      1    
DTODAYS   FORM      6
DTOHOUR   FORM      2
DTOMIN    FORM      2
DTOSEC    FORM      2 
