. *----------------------------------------------------------------------
. * Include Name  :   EMRDELTD.INC
. *
. * Function      :   CGI variables for EMRDELFD - emrdelaf.dat
. *----------------------------------------------------------------------
.  Modifications Done :
.
.  V10.06.01  20/03/2015  Ebon Clements CAR 304779
.             Removed delay reason array
.  V10.06.00  11/03/2015  Ebon Clements CAR 304779
.             Added additional delay reasons and comments
.  V10.03.00  12/10/2012  Ebon Clements CAR 266929
.             Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length  Description
.----     ----      ------  -----------
EMDEL001  DIM       8       Visit Number
EMDEL002  DIM       8       Delay Date (CCYYMMDD)
EMDEL003  DIM       8       Delay Time (HH:MM:SS)
EMDEL004  DIM       3       Type of Delay 1 (Category Ya)
EMDEL005  DIM       2       Count
EMDEL006  DIM       3       Reason for Delay (Category Yb)
EMDEL007  DIM       1       Deleted
EMDEL008  DIM       3       Type of Delay 2 (Category Ya)
EMDEL009  DIM       3       Type of Delay 3 (Category Ya)
EMDEL010  DIM       3       Type of Delay 4 (Category Ya)
EMDEL011  DIM       3       Type of Delay 5 (Category Ya)
EMDEL012  DIM       3       Type of Delay 6 (Category Ya)
EMDEL013  DIM       3       Type of Delay 7 (Category Ya)
EMDEL014  DIM       3       Type of Delay 8 (Category Ya)
EMDEL015  DIM       3       Type of Delay 9 (Category Ya)
EMDEL016  DIM       3       Type of Delay 10 (Category Ya)
EMDEL017  DIM       150     Delay Comments 1st 150 Characters
EMDEL018  DIM       150     Delay Comments last 150 Characters
.
