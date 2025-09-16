. *----------------------------------------------------------------------
. * Include Name  :   PMSWORTD.INC
. *
. * Function      :   Patient Working Diagnosis File CGI Variables
. *
. * Modifications :                             
. *
. * V9.09.01  Ebon Clements         CAR 142954
. *           Added PMSWO019
. * V9.08.00  Ebon Clements         CAR 132858
. *           Added PMSWO006 to PMSWO018
. * V9.03.00  Ebon Clements         CAR 44795
. *           Created Include
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
PMSWO001  DIM       8      Admission Number
PMSWO002  DIM       35     Working Diagnosis 1
PMSWO003  DIM       35     Working Diagnosis 2
PMSWO004  DIM       35     Working Diagnosis 3
PMSWO005  DIM       8      Expected Discharge Date (CCYYMMDD)
PMSWO006  DIM       8      Expected Discharge Time (HH:MM:SS)
PMSWO007  DIM       3      Discharge Preparation Status (Cat vi)
PMSWO008  DIM       10     Discharge Coordinator (pmshcpaf)
PMSWO009  DIM       5      Expected Discharge Destination
PMSWO010  DIM       8      Date Ready for Transfer (CCYYMMDD)
PMSWO011  DIM       3      User Defined Field 1 (Cat va)
PMSWO012  DIM       3      User Defined Field 2 (Cat vb)
PMSWO013  DIM       3      User Defined Field 3 (Cat vc)
PMSWO014  DIM       3      User Defined Field 4 (Cat vd)
PMSWO015  DIM       3      User Defined Field 5 (Cat ve)
PMSWO016  DIM       3      User Defined Field 6 (Cat vf)
PMSWO017  DIM       3      User Defined Field 7 (Cat vg)
PMSWO018  DIM       3      User Defined Field 8 (Cat vh)
PMSWO019  DIM       4      Cordless Telephone Extn Number
.
WDIGFLAG  FORM      1      Update PMSWORFD file flag
.                          0=No
.                          1=Yes
