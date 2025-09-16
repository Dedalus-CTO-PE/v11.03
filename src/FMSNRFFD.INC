. V6.00.003 07/06/1993
. *----------------------------------------------------------------------
. * Include Name  :   FMSNRFFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Subjective Template Linkage
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsnrfaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSNRFA1   IFILE    SQL, FIXED=53, KEY="U1-3,4-15,16-20,21-32"
FMSNRFA2   IFILE    SQL, FIXED=53, KEY="U1-3,21-32,4-15"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMNFCODE  DIM       3      3        1     Subjective Template                
FMNFTCOD  DIM       12     12       4     Total Subjective                   
FMNFASEQ  DIM       5      5        16    Sequence                           
FMNFSCOD  DIM       12     12       21    Sub Subjective                     
FMNFSPAR  DIM       20     20       33    Spare                              
.
.End of Record                      53   
.
