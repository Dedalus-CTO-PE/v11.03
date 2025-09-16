. V6.00.001 07/01/1992 BGA
. *----------------------------------------------------------------------
. * Include Name  :   APSCNTFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable
. *                   Creditor Notes Table
. *
. * File Type     :   SQL
. *
. * File Name     :   apscntaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSCNTA1   IFILE    SQL, FIXED=109, KEY="U1-5,6-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APCNCRD   DIM       5      5        1     Creditor Code                      
APCNLIN   DIM       3      3        6     Line No                            
APCNDAT   DIM       70     70       9     Data                               
APCNSPA   DIM       30     30       79    Spare                              
.
.End of Record                      109  
.
