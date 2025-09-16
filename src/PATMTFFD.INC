. V10.01.02 15/12/2010 PV  Added USER ID / Allocation Indicator  CAR 233048
. V10.01.01 03/12/2010 JT
. *----------------------------------------------------------------------
. * Include Name  :   PATMTFFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Mapping Theatre Fees               
. *
. * File Type     :   SQL
. *
. * File Name     :   patmtfaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATMTFA1   IFILE    SQL, FIXED=66, KEY="U1-3,4-9"                               
PATMTFA2   IFILE    SQL, FIXED=66, KEY="U4-9,1-3"                               
PATMTFA3   IFILE    SQL, FIXED=66, KEY="U10-15,1-3,4-9"                         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTMTCLAM  DIM       3      3        1     Claim Code                         
PTMTHFND  DIM       6      6        4     Health Fund                        
PTMTCNTR  DIM       6      6        10    Contract ID                        
PTMTUSID  DIM       10     10       16    User ID / Allocation Indicator     
PTMTSPAR  DIM       40     40       26    Spare variable                     
.
.End of Record                      66   
.
