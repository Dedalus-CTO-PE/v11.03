.*----------------------------------------------------------------------
.* Include Name  :   PMSSMHTD.INC
.*
.* Function      :   CGI variables for PMSSMHFD - pmssmhaf.dat
.*
.*----------------------------------------------------------------------
. Modifications :
.
. V10.08.00  25/07/2016  Ebon Clements      TSK 0294154
.            Created include
.*----------------------------------------------------------------------
.Name     Type      Length  Description
.----     ----      ------  -----------
PMSMH001  DIM       16      1     Unique Message Id
PMSMH002  DIM       8       17    U/R Number
PMSMH003  DIM       2       25    SMS Message Type
PMSMH004  DIM       30      27    Record Key
PMSMH005  DIM       3       57    SMS Message Code
PMSMH006  DIM       8       60    Date Message Send (CCYYMMDD)
PMSMH007  DIM       8       68    Time Message Sent (HH:MM:SS)
PMSMH008  DIM       20      76    Mobile Phone Number
PMSMH009  DIM       10      96    Send By (websecaf)
PMSMH010  DIM       160     106   Message Part A
PMSMH011  DIM       160     266   Message Part B
PMSMH012  DIM       160     426   Message part C
PMSMH013  DIM       160     586   Message Part D
PMSMH014  DIM       160     746   Message Part E
PMSMH015  DIM       160     906   Message Part F
PMSMH016  DIM       2       1066  Message Status
PMSMH017  DIM       1       1068  Ad-Hoc Indicator
PMSMH018  DIM       1       1069  Contact
PMSMH019  DIM       3       1070  Contact Type
PMSMH020  DIM       16      1073  Re Sent Message Id
