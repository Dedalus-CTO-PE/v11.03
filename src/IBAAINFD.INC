. *----------------------------------------------------------------------
. * Include Name  :   IBAAINFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable
. *                   Interface File
. *                   Imported using Invoice Entry (IBAAPS15)
. *
. * File Type     :   TEXT
. *
. * File Name     :   user defined
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBAAINV1   FILE    ASCII,FIXED=300
IBAAINI1   FILE    ASCII,FIXED=300
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBAICRD   DIM       5      5        1     Creditor Code
IBAIREF   DIM       15     15       6     Invoice Reference
IBAIIDT   DIM       8      8        21    Invoice Date (CCYYMMDD)
IBAITER   DIM       2      2        29    Term Code
IBAIPDT   DIM       8      8        31    Payable Date (CCYYMMDD)
IBAICM1   DIM       70     70       39    Remittance Comment 1
IBAICM2   DIM       70     70       109   Remittance Comment 2
IBAIICM   DIM       35     35       179   Comment
IBAILED   DIM       2      2        214   Ledger Code
IBAIACC   DIM       12     12       216   Account Code
IBAIDIS   DIM       5      5        228   Dissection Code
IBAIRES   DIM       4      4        233   Responsibility Code
IBAIAMT   FORM      12.2   15       237   Invoice Amount
IBAIGST   FORM      12.2   15       252   GST Amount
IBAIGSTC  DIM       6      6        267   GST Code
IBAISPA   DIM       27     27       273   Spare Variable
.
.End of Record                      300  
