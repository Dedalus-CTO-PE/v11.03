. *----------------------------------------------------------------------
. * Include Name  :   VISCODTD.INC
. *
. * Function      :   CGI variables for VISCODFD - viscodaf.dat
. *----------------------------------------------------------------------
.  Modifications Done :
.
.  V10.03.01  31/05/2013  Davin             CAR 283509
.             Increased VISCODKY to 30 chars
.  V10.03.00  17/08/2012  Ebon Clements     CAR 270232
.             Created include
. *----------------------------------------------------------------------
.
. Local Variable
.---------------------------------------
VSCODLDS  FORM      1        Output Long Description         0=No 1=Yes
VSCODDEF  FORM      1        Output Check Default            0=No 1=Yes
VSCODCOM  FORM      1        Output All with Comments        0=No 1=Yes
.
.Name     Type      Length   Description
.----     ----      ------   -----------
VSCATARR  DIM       4[20]    Visit coding table category array               
.                            Link type and Link category
VSCATCNT  FORM      2        Visit coding table category array count
.
VSCODARR  DIM       207[200] Visit coding table category,code array 
.                            Link type, Link category and category code
VSCODCNT  FORM      3        Visit coding table category,code array count
.
VISCODTY  DIM       2        Visit coding link type
VISCODKY  DIM       30       Visit coding link type key
VISCODCT  DIM       2        Visit coding link category
.


