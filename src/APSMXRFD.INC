. V6.00.001 07/01/1992 BGA
. *----------------------------------------------------------------------
. * Include Name  :   APSMXRFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable
. *                   Creditors/Suppliers Cross Reference
. *
. * File Type     :   SQL
. *
. * File Name     :   apsmxraf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSMXRA1   IFILE    SQL, FIXED=67, KEY="U6-35,1-5"
APSMXRA2   IFILE    SQL, FIXED=67, KEY="U1-5,6-35"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APMXCRD   DIM       5      5        1     Creditor Code                      
APMXREF   DIM       30     30       6     Cross Reference Field              
APMXTYP   DIM       1      1        36    Cross Reference Type
.                                           1 - Creditor Name                
.                                           2 - Supplier Name                
.                                           3 - Added Alias                  
APMXSPA   DIM       30     30       37    Spare                              
.
.End of Record                      67   
.
