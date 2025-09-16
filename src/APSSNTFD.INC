. V6.00.001 07/01/1992 BGA
. *----------------------------------------------------------------------
. * Include Name  :   APSSNTFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable
. *                   Supplier Notes
. *
. * File Type     :   SQL
. *
. * File Name     :   apssntaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSSNTA1   IFILE    SQL, FIXED=109, KEY="U1-5,6-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APSNCRD   DIM       5      5        1     Creditor Code                      
APSNLIN   DIM       3      3        6     Line No                            
APSNDAT   DIM       70     70       9     Data                               
APSNSPA   DIM       30     30       79    Spare                              
.
.End of Record                      109  
.
