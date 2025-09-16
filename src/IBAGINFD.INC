. V11.03.01 23/08/2023 JT Added IBGIEREF - DIM 30
. C2.09.001 10/11/2000 SB Copyied from FMSGINFD
. *----------------------------------------------------------------------
. * Include Name  :   IBAGINFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Interface File
. *
. * File Type     :   TEXT
. *
. * File Name     :   user defined
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBAGINA1   FILE    ASCII,FIXED=120
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBGILEDG  DIM       2      2        1     Ledger
IBGIACCT  DIM       12     12       3     Account
IBGIDATE  DIM       8      8        15    Date (Optional) (CCYYMMDD)
IBGISIGN  DIM       1      1        23    Sign (- for Credit)
IBGIVALU  FORM      12.2   15       24    Value
IBGIDESC  DIM       30     30       39    Transaction Description (Optional)
IBGIREF   DIM       15     15       69    Reference (Optional)
IBGIDISS  DIM       5      5        84    Dissection (Optional)
IBGIRESP  DIM       4      4        89    Responsibility (Optional)
IBGICRAC  DIM       12     12       93    Credit Account - Cash (Optional)
IBGICRAA  DIM       12     12       105   Credit Account - Accrual (Optional)
IBGIBASC  DIM       3      3        117   BAS Code
.
.End of Record                      120  
.______________________________________________________________________________
.
. Fees Invoice Report (IBABIL19) with 'Show Desc.on G/L Extract' option 
. will have Reference DIM 30
.
.IBAGINA1   FILE    ASCII,FIXED=135
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.IBGILEDG  DIM       2      2        1     Ledger
.IBGIACCT  DIM       12     12       3     Account
.IBGIDATE  DIM       8      8        15    Date (Optional) (CCYYMMDD)
.IBGISIGN  DIM       1      1        23    Sign (- for Credit)
.IBGIVALU  FORM      12.2   15       24    Value
.IBGIDESC  DIM       30     30       39    Transaction Description (Optional)
IBGIEREF  DIM       30     30       69    Reference (Optional)
.IBGIDISS  DIM       5      5        99    Dissection (Optional)
.IBGIRESP  DIM       4      4       104    Responsibility (Optional)
.IBGICRAC  DIM       12     12      108    Credit Account - Cash (Optional)
.IBGICRAA  DIM       12     12      120    Credit Account - Accrual (Optional)
.IBGIBASC  DIM       3      3       132    BAS Code
.
.End of Record                     135
.
