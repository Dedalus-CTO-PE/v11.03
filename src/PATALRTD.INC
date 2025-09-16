. *----------------------------------------------------------------------
. * Include Name  :   PATALRTD.INC
. *
. * Function      :   CGI variables for PATALRFD - patalrtf.dat
. *----------------------------------------------------------------------
.  Modifications Done :
.
.  V10.10.00  08/05/2017  Davin             TSK 0321570
.             Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length   Description
.----     ----      ------   -----------
PTCATARR  DIM       2[20]    Alert table link category array
.                            Link category
PTCATCNT  FORM      2        Alert table category array count
.
PTCODARR  DIM       5[200]   Alert table category,code array
.                            Link category and category code
PTCODCNT  FORM      3        Alert table category,code array count
.
PATALRKY  DIM       8        Patient alert UR number
PATALRCT  DIM       2        Patient alert category
.
PTALRCNT  FORM      3        Alert counter

