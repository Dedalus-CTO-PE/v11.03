. *----------------------------------------------------------------------
. * Include Name  :   FMSNRDFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Subjective Reporting Templates
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsnrdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSNRDA1   IFILE    SQL, FIXED=66, KEY="U1-3"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMNDCODE  DIM       3      3        1     Subjective Template                
FMNDLEDG  DIM       2      2        4     Ledger                             
FMNDDESC  DIM       40     40       6     Description                        
FMNDSPAR  DIM       20     20       46    Spare                              
.
.End of Record                      66   
.
