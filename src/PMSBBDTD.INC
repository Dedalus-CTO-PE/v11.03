. *----------------------------------------------------------------------
. * Include Name  :   PMSBBDTD.INC
. *
. * Function      :   CGI variables for PMSBBDFD - pmsbbdaf.dat
. *----------------------------------------------------------------------
.  Modifications Done :
.
.  V9.11.02   30/10/2008  Ebon Clements          CAR 174077
.             Added PMBBD021 and PMBBD022
.  V9.11.01   08/10/2008  Ebon Clements          CAR 174068
.             Added PMBBD020
.  V9.11.00   24/09/2008  Ebon Clements          CAR 174038
.             Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
PMBBD001  DIM       3      Hospital Id (pathspaf)
PMBBD002  DIM       3      Ward (patwr1af)
PMBBD003  DIM       3      Room
PMBBD004  DIM       3      Bed
PMBBD005  DIM       2      Sequence of ward View 1
PMBBD006  DIM       2      Sequence of ward View 2
PMBBD007  DIM       2      Sequence of ward View 3
PMBBD008  DIM       2      Sequence of ward View 4
PMBBD009  DIM       2      Sequence of ward View 5
PMBBD010  DIM       8      Current Admission Number
PMBBD011  DIM       8      Theatre booking date (ccyymmdd)
PMBBD012  DIM       8      Theatre booking time (hh:mm:ss)
PMBBD013  DIM       3      Exp Post Op ward
PMBBD014  DIM       3      Exp Post Op Bed
PMBBD015  DIM       20     Surname
PMBBD016  DIM       25     Given name
PMBBD017  DIM       1      Gender
PMBBD018  DIM       1      Health Fund Stepdown reached
PMBBD019  DIM       1      Deceased
PMBBD020  DIM       8      U/R Number
PMBBD021  DIM       3      Expected Ward (Bed Request)
PMBBD022  DIM       3      Expected Bed (Bed Request)
