. V6.00.001 14/10/1993
. *----------------------------------------------------------------------
. * Include Name  :   APSCEAFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable
. *                   Outstanding Purchase Order's Header
. *
. * File Type     :   SQL
. *
. * File Name     :   apsceaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSCEAA1   IFILE    SQL, FIXED=62, KEY="U1-1,2-8"
APSCEAA2   IFILE    SQL, FIXED=62, KEY="U9-13,14-21,1-1,2-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APEAISC   DIM       1      1        1     Inventory System Code              
APEAORD   DIM       7      7        2     Order Number                       
APEACRD   DIM       5      5        9     Supplier/Creditor Code             
APEADAT   DIM       8      8        14    Date Entered                       
APEASPA   DIM       40     40       22    Spare                              
.
.End of Record                      62   
.
