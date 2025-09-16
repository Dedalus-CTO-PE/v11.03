. V6.00.001 13/05/1992 Nez New File
. *----------------------------------------------------------------------
. * Include Name  :   APSCIOFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable
. *                   Consolidated Inventory Orders Table
. *
. * File Type     :   SQL
. *
. * File Name     :   apscioaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSCIOA1   IFILE    SQL, FIXED=62, KEY="U1-1,2-8"
APSCIOA2   IFILE    SQL, FIXED=62, KEY="U9-13,14-21,1-1,2-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APCIISC   DIM       1      1        1     Inventory System Code              
APCIORD   DIM       7      7        2     Order Number                       
APCICRD   DIM       5      5        9     Supplier/Creditor Code             
APCIDAT   DIM       8      8        14    Date Entered                       
APCISPA   DIM       40     40       22    Spare                              
.
.End of Record                      62   
.
