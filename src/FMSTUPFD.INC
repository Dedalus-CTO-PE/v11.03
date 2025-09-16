. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSTUPFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Total Accounts that Require Updating             *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmstupaf.dat                                     *
. *                                                                       *
. *  Keys            :   KEY20                                            *
. *                                                                       *
. *  Modifications   :   Neeriem Dye 19.09.91                             *
. *                      Added second and third key and Account Level     *
. *                                                                       *
. *************************************************************************
.
FMSTUPA1  IFILE  SQL, FIXED=41, KEY="U1-2,3-6,7-8,9-20" 
FMSTUPA2  IFILE  SQL, FIXED=41, KEY="U1-2,24-24,21-23,3-6,7-8,9-20" 
FMSTUPA3  IFILE  SQL, FIXED=41, KEY="U1-2,25-25,21-23,3-6,7-8,9-20" 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMTUPORT  DIM       2      2        1     Port SP2 indicated waiting for 
.                                         overnight update run
FMTUSPEC  DIM       4      4        3     Specific Year or Budget Type
.                                         SP4 Update All
FMTUTLED  DIM       2      2        7     Total Ledger
FMTUTACC  DIM       12     12       9     Total Account
FMTULEV   DIM       3      3        21    Account Level
FMTUACT   DIM       1      1        24    Actual Update Completed (1=yes)
FMTUBUD   DIM       1      1        25    Budget Update Completed (1=yes)
FMTUSPAR  DIM       15     15       26    Spare
.
.End of Record                      41
.
