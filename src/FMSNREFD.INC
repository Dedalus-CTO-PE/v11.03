. *----------------------------------------------------------------------
. * Include Name  :   FMSNREFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Subjective Template Total Accounts
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsnreaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSNREA1   IFILE    SQL, FIXED=82, KEY="U1-3,4-15"
FMSNREA2   IFILE    SQL, FIXED=82, KEY="U1-3,16-18,4-15"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMNECODE  DIM       3      3        1     Subjective Template                
FMNETCOD  DIM       12     12       4     Total Subjective                   
FMNETLEV  DIM       3      3        16    Level                              
FMNEDESC  DIM       40     40       19    Description                        
FMNEPRTC  DIM       3      3        59    Print Code                         
FMNESPAR  DIM       20     20       62    Spare                              
.
.End of Record                      82   
.
