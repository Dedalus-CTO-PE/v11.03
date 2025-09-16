. *----------------------------------------------------------------------
. * Include Name  :   MLTOLNTD.INC
. *
. * Function      :   Overdue Leave Notifications CGI Variables
. *
. * V11.01.01 27/05/2021  Ebon Clements     TSK 0900650
. *                       Changed MLOLN004 to a DIM 4
. * V11.01.00 13/05/2021  Ebon Clements     TSK 0900650
. *                       Created Include
. *----------------------------------------------------------------------
.Name     Type      Length  Description
.----     ----      ------  -----------
MLOLN001  DIM       3       Hospital Id (pathspaf)
MLOLN002  DIM       3       Ward (patwr1af)
MLOLN003  DIM       3       Type of Leave (Cat TL)
MLOLN004  DIM       4       Overdue Minutes (1 to 9999)
MLOLN005  DIM       1       Greater than Overdue Minutes Value
MLOLN006  DIM       3       SMS to Send (patletrf)
MLOLN007  DIM       2       Reminder Number
MLOLN008  DIM       1       Send to Patient and Carer
MLOLN009  DIM       1       Send to Ward Staff
MLOLN010  DIM       20      Ward Staff Mobile Number
MLOLN011  DIM       1       Send to Supervisor
MLOLN012  DIM       20      Supervisor Mobile Number
MLOLN013  DIM       1       Send to Manager
MLOLN014  DIM       20      Manager Mobile Number
MLOLN015  DIM       1       Send to Other
MLOLN016  DIM       20      Other Mobile Number
MLOLN017  DIM       1       Record Inactive
