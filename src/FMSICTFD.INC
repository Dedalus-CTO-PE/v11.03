. V6.00.001 07/06/1994 BGA New File for St. Vincents
. *----------------------------------------------------------------------
. * Include Name  :   FMSICTFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Interface Cost Centre Translation
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsictaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSICTA1   IFILE    SQL, FIXED=63, KEY="U1-3,4-4,5-6,7-18"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMICICD   DIM       3      3        1     Interface Code                     
FMICTTY   DIM       1      1        4     Trans Type 1=Acct,2=C/C,3=Subj     
FMICTFL   DIM       2      2        5     Translate from Ledger              
FMICTFA   DIM       12     12       7     Translate From                     
FMICTTL   DIM       2      2        19    Translate To Ledger                
FMICTTA   DIM       12     12       21    Translate to                       
FMICSPA   DIM       30     30       33    Spare                              
.
.End of Record                      63   
