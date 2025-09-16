. V6.00.002 07/06/1993 Nez New File
. *----------------------------------------------------------------------
. * Include Name  :   FMSNRBFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Cost Centre Template Total Accounts
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsnrbaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSNRBA1   IFILE    SQL, FIXED=82, KEY="U1-3,4-15"
FMSNRBA2   IFILE    SQL, FIXED=82, KEY="U1-3,16-18,4-15"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMNBCODE  DIM       3      3        1     Cost Centre Template               
FMNBTCOD  DIM       12     12       4     Total Cost Centre                  
FMNBTLEV  DIM       3      3        16    Level                              
FMNBDESC  DIM       40     40       19    Description                        
FMNBPRTC  DIM       3      3        59    Print Code                         
FMNBSPAR  DIM       20     20       62    Spare                              
.
.End of Record                      82   
