. *----------------------------------------------------------------------
. * Include Name  :   PMSHRDTD.INC
. *
. * Function      :   CGI variables for PMSHRDFD - pmshrdaf.dat
. *----------------------------------------------------------------------
.  Modifications Done :
.
.  V9.11.00   02/12/2008  Ebon Clements          CAR 174082
.             Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
PMHRD001  DIM       3      Hospital Id (pathspaf)
PMHRD002  DIM       3      Ward (patwr1af)
PMHRD003  DIM       3      Bed
PMHRD004  DIM       8      Request Date (ccyymmdd)
PMHRD005  DIM       8      Request Time (hh:mm:ss)
PMHRD006  DIM       3      Requested Housekeeping Stat(Cat BV)
PMHRD007  DIM       3      Completed Housekeeping Stat(Cat BV)
PMHRD008  DIM       10     Completed By (websecaf)
PMHRD009  DIM       8      Completed Date (ccyymmdd)
PMHRD010  DIM       8      Completed Time (hh:mm:ss)
PMHRD011  DIM       3      Satisfactory Status (Cat hw)
PMHRD012  DIM       50     Comment 1
PMHRD013  DIM       50     Comment 2
PMHRD014  DIM       3      Cleaner Responsible (Cat hx)
