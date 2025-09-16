. *********************************************************
. *                                                       *
. * Include Name :  FMSTRNFD                              *
. *                                                       *
. * Function     :  File Def'n Include for Financial Management
. *                 Financial Transaction Table (Accrual)  
. *                                                       *
. * File Type    :  SQL                                   *
. *                                                       *
. * File Name    :  fmstyyyy.dat                          *
. *                 yyyy = Financial Year                 *
. *                                                       *
. * Keys         : KEY10                                  *
. *                                                       *
. * Modifications:                                        *
. *                                                       *
. *                                                       *
. *********************************************************
.
FMSTRNA1  IFILE  SQL, FIXED=141, KEY="U1-5,6-10"                   *By Batch
FMSTRNA2  IFILE  SQL, FIXED=141, KEY="U11-12,13-24,30-37,1-5,6-10" *Ledger/Ac
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMTRBAT   DIM       5      5        1     Batch Number
FMTRUNIQ  DIM       5      5        6     Unique Identifier
FMTRLEDG  DIM       2      2        11    Ledger Number
FMTRACCT  DIM       12     12       13    Account Code
FMTRCRED  DIM       5      5        25    Creditor Code / Debtors Code
FMTRPDAT  DIM       8      8        30    Batch Posting Date
FMTRTDAT  DIM       8      8        38    Transaction Date CCYYMMDD
FMTRTYPE  DIM       2      2        46    Transaction Type
.                                           IN - Creditor Invoices      
.                                           PY - Creditor Payment       
.                                           JA - Journal Debit          
.                                           JC - Journal Credit         
.                                           CS - Cash Reciept           
.                                           CR - Creditors Credit
.                                           RF - Creditor Refund
.                                           RI - Creditor Reinstated Invoice
.                                           CC - Cancelled Cheque
.
FMTRDISS  DIM       5      5        48    Dissection Code
FMTRPPER  DIM       2      2        53    Payment Period
FMTRDOCR  DIM       15     15       55    Document Reference (e.g. INV.NO.)
FMTRAMT   FORM      12.2   8        70    Amount of Transaction
FMTRORD   DIM       8      8        78    Order No/Cheque No
FMTRRESP  DIM       4      4        86    Responsibility Code
FMTRDESC  DIM       30     30       90    Transaction Description
FMTRSPAR  DIM       21     21       120   Spare
.
.End of Record                      141
.
