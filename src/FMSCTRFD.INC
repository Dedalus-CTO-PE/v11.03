. *********************************************************
. *                                                       *
. * Include Name :  FMSCTRFD                              *
. *                                                       *
. * Function     :  File Def'n Include For Financial Management
. *                 Financial Transaction Table (Cash)     *
. *                                                       *
. * File Type    :  SQL                                   *
. *                                                       *
. * File Name    :  fmsryyyy.dat                          *
. *                 yyyy = Financial Year                 *
. *                                                       *
. * Keys         :  KEY10  KEY32                          *
. *                                                       *
. * Modifications:                                        *
. *                                                       *
. *                                                       *
. *********************************************************
.
FMSCTRA1  IFILE  SQL, FIXED=141, KEY="U1-5,6-10"                   *By Batch
FMSCTRA2  IFILE  SQL, FIXED=141, KEY="U11-12,13-24,30-37,1-5,6-10" *Ledg/Acct
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMCTBAT   DIM       5      5        1     Batch Number
FMCTUNIQ  DIM       5      5        6     Unique Identifier
FMCTLEDG  DIM       2      2        11    Ledger Number
FMCTACCT  DIM       12     12       13    Account Code
FMCTCRED  DIM       5      5        25    Creditor Code / Debtors Code
FMCTPDAT  DIM       8      8        30    Batch Posting Date
FMCTTDAT  DIM       8      8        38    Transaction Date CCYYMMDD
FMCTTYPE  DIM       2      2        46    Transaction Type
.                                           PY - Creditor Payment       
.                                           JA - Journal Debit          
.                                           JC - Journal Credit         
.                                           CS - Cash Reciept           
.                                           CC - Cancelled Cheque
.
FMCTDISS  DIM       5      5        48    Dissection Code
FMCTPPER  DIM       2      2        53    Payment Period
FMCTDOCR  DIM       15     15       55    Document Reference (e.g. INV.NO.)
FMCTAMT   FORM      12.2   8        70    Amount of Transaction
FMCTORD   DIM       8      8        78    Order No/Cheque No
FMCTRESP  DIM       4      4        86    Responsibility Code
FMCTDESC  DIM       30     30       90    Transaction Description
FMCTSPAR  DIM       21     21       120   Spare
.
.End of Record                      141
