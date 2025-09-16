. *----------------------------------------------------------------------
. * Include Name  :   PMSLRDTD.INC
. *
. * Function      :   Leave register details
. *
. * V11.01.00 18/05/2021  Jill Parkinson    TSK 0900650
. *                       Created Include
. *----------------------------------------------------------------------
.Name     Type      Length  Description
.----     ----      ------  -----------
PMLRD001  DIM       8       Visit Number
PMLRD002  DIM       8       Leave Date
PMLRD003  DIM       8       Leave Time hh:mm:ss
PMLRD004  DIM       3       Ward (patwr1af)
PMLRD005  DIM       3       Bed
PMLRD006  DIM       1       Record Status
PMLRD007  DIM       3       Record counter
PMLRD008  DIM       1       Active 1=Inactive
PMLRD009  DIM       3       Leave record counter for visucmaf
PMLRD010  DIM       3       Type of leave Cat TL
PMLRD011  DIM       8       Expected return date CCYYMMDD
PMLRD012  DIM       8       Expected return time hh:mm:ss
PMLRD013  DIM       100     Destination
PMLRD014  DIM       3       Risk Assessment (Cat vd)
PMLRD015  DIM       3       Leave Arrangements (Cat ve)
PMLRD016  DIM       3       User Defined Code 1 (Cat r1)
PMLRD017  DIM       3       User Defined Code 2 (Cat r2)
PMLRD018  DIM       3       User Defined Code 3 (Cat r3)
PMLRD019  DIM       3       User Defined Code 4 (Cat r4)
PMLRD020  DIM       1       Medications given/ 0=No 1=Yes 2=N/A
PMLRD021  DIM       1       Bag search 0=No 1=Yes 2=N/A
PMLRD022  DIM       1       BAL Screening 0=No 1=Yes 2=N/A
PMLRD023  DIM       1       UDS Screening 0=No 1=Yes 2=N/A
PMLRD024  DIM       1       UDF yes/no 1
PMLRD025  DIM       1       UDF yes/no 2
PMLRD026  DIM       1       UDF yes/no 3
PMLRD027  DIM       10      Value 1
PMLRD028  DIM       10      Value 2
PMLRD029  DIM       10      Value 3
PMLRD030  DIM       100     Carer Name
PMLRD031  DIM       20      Carer contact number
PMLRD032  DIM       3       Carer contact type (Cat tc)
PMLRD033  DIM       3       Carer contact counter from pmscexaf
PMLRD034  DIM       1       Carer consent 0=No 1=Yes
PMLRD035  DIM       100     Text 1
PMLRD036  DIM       100     Text 2
PMLRD037  DIM       100     Text 3
PMLRD038  DIM       1       Reminder number sent (mltolnaf)
.
