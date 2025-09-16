. *----------------------------------------------------------------------
. * Include Name  :   FMSNRAFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Cost Centre Reporting Templates
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsnraaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSNRAA1   IFILE    SQL, FIXED=66, KEY="U1-3"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMNACODE  DIM       3      3        1     Cost Centre Template Code          
FMNALEDG  DIM       2      2        4     Ledger                             
FMNADESC  DIM       40     40       6     Description                        
FMNASPAR  DIM       20     20       46    Spare                              
.
.End of Record                      66   
