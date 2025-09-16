. *----------------------------------------------------------------------
. * Include Name  :   PMSAMNTD.INC
. *
. * Function      :   CGI variables for PMAAMNFD - pmsamnaf.dat
. *----------------------------------------------------------------------
.  Modifications Done :
.
.  V10.03.00  04/09/2013  Ebon Clements     CAR 275205
.             Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length   Description
.----     ----      ------   -----------
PMCATARR  DIM       2[20]    Visit coding table link category array
.                            Link category
PMCATCNT  FORM      2        Visit coding table category array count
.
PMCODARR  DIM       205[200] Visit coding table category,code array
.                            Link category and category code
PMCODCNT  FORM      3        Visit coding table category,code array count
.
PMSAMNKY  DIM       10       Admission request type key
PMSAMNCT  DIM       2        Admission request category

