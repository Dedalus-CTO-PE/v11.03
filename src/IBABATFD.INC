. **********************************************************************
. *                                                                    *
. * Include Name :  IBABATFD                                           *
. *                                                                    *
. * Function     :  File Definition Include for                        *
. *                 All Batch Files                                    *
. *                                                                    *
. * File Type    :  ASCII                                              *
. *                                                                    *
. * File Name    :  bchNNNNN.txt (NNNNN = Batch Number)                *
. *                                                                    *
. * Keys         :  KEY5                                               *
. *                                                                    *
. * Modifications:                                                     *
. **********************************************************************
. * C2.09.00  10.11.2000  Sandra Barcham                               *
. *           Add BAS Code                                             *
. **********************************************************************
. * V5.07.00  06.10.1998  Jim Stathopoulos                             *
. *           507 Changes                                              *
. **********************************************************************
.
BATFILE     FILE     ASCII, FIXED=308
.
.           SECTOR  0
.
.Name       Type     Length     Start     Description
.----       ----     ------     -----     -----------
BC0DIM2     DIM          2         1      *** NOT IN USE ***
BC0NXTSC    FORM         5         3      Next Available Sector
BC0NXTSW    FORM         3         8      Next Sector Work
BC0BTCHT    FORM      12.2        11      Batch Total
BC0SUPBC    FORM         1        26      is This a Supply & Inventory Batch
.                                         & Use What Directory
.                                           0 = NO
.                                           1 = DIRECTORY1
.                                           2 = DIRECTORY2
.                                           3 = DIRECTORY3
.                                           4 = DIRECTORY4
.                                           5 = DIRECTORY5
.                                           6 = DIRECTORY6
BC0DIM6     DIM          6        27      *** NOT IN USE ***
BC0SPLTK    FORM      12.2        33      Keyed Split Document Total
BC0SPLTP    FORM      12.2        48      Posted Split Document Total
BC0ONE      FORM         1        63      Always ONE
BC0SPSEC    FORM         5        64      Saved Split Sector
BC0DISC     FORM      12.2        69      Discount Value
.
BC0SPAR1    DIM        122        84      Spare 1
BC0SPAR2    DIM        100       208      Spare 2
.
.End of Sector                   308
.
.           SECTOR  1
.
.Name       Type     Length     Start     Description
.----       ----     ------     -----     -----------
BC1STAT     FORM         1         1      Status
.                                          1 = Batch in Use
.                                          2 = Unbalanced Batch
.                                          3 = Balanced Batch
.                                          4 = In Creditors Update
.                                          5 = Updated in Creditors
.                                          6 = Cash GL Update in Progress
.                                          7 = Accrual GL Update in Progress
.                                          8 = Updated in GL
BC1HEAD     DIM          2         2      Always HD
BC1BATCH    DIM          5         4      Batch Number
BC1KEYT     FORM      12.2         9      Keyed Batch Total
BC1ACCT     FORM      12.2        24      Accumulated Batch Total
BC1NOTR     FORM         3        39      Accumulated No. of Transactions
BC1DATE     DIM          8        42      Date Entered
BC1OPER     DIM          4        50      Operator Id
BC1LEDG     DIM          2        54      Ledger Number
BC1TRAN     DIM          2        56      Transaction Type
.                                          CR = Credit Note     (Creditors)
.                                          IN = Invoice         (Creditors)
.                                          PY = Payments        (Creditors)
.                                          RF = Refunds         (Creditors)
.                                          CC = Cancelled Cheque(Creditors)
.                                          SC = Supply Credits  (Creditors)
.                                          RI = Supply Invoices (Creditors)
.                                          CS = Cash            (Debtors)
.              Not Used Yet ??             DI = Debtors Invoice (Debotrs)
.                                          JA = Journals        (fms)
BC1BDATE    DIM          8        58      Batch Date 
BC1REORG    FORM         1        66      Reorganisation Flag(Old Payroll)
BC1DISS     DIM          5        67      Dissection Code
BC1PAYT     DIM          2        72      Payment Type
BC1RESP     DIM          4        74      Responsibility Code
BC1REST     FORM         1        78      Restart Flag
BC1UTYPE    DIM          1        79      Not Used
.
BC1SPAR1    DIM        108        80      Spare 1
BC1SPAR2    DIM        120       188      Spare 2
.
.End of Record                   308
.
.           SECTOR  TWO ONWARDS
.
.Name       Type     Length     Start     Description
.----       ----     ------     -----     -----------
BCSTAT      FORM         1         1      Status
.                                          0 = Entered
.                                          4 = Being Updated in Creditors
.                                          5 = Updated in Creditors
.                                          6 = Cash Being Updated in GL
.                                          7 = Accrual Being Updated in GL
.                                          8 = Updated in GL
BCTRAN      DIM          2         2      Transaction Type (Ref Sector 1)
BCLEDG      DIM          2         4      Ledger
BCACCT      DIM         12         6      Accrual Posting Account
BCDISS      DIM          5        18      Dissection 
BCPAYT      DIM          2        23      Payment Type D1,D2,W1,W2,M1,M2
BCRED       DIM          5        25      Creditor Code *JR,*ZF
BCREFER     DIM         15        30      Document Reference
BCAMT       FORM      12.2        45      Transaction Amount
BCORD       DIM          8        60      Order/Cheque
BCDATEE     DIM          8        68      Date Entered
BCDATED     DIM          8        76      Date of Document
BCDATCX     DIM          8        84      Expected Receival Date
BCACCTP     DIM         12        92      Account Code for Cash Posting
BCCHEQ      DIM         10       104      Cheque Account Number
BCBATCH     DIM          5       114      Batch Number
BCINVT      FORM      12.2       119      Invoice Total/Quantity Invoiced
BCDISC      FORM      12.2       134      Discount Total
BCRESP      DIM          4       149      Responsibility
BCCOMX      DIM          1       153      Committed Expenditure Item Y/N
BCCOMXA     FORM      12.2       154      Committed Expenditure Amount/
.                                         Invoice Credit Amount
BCTRAND     DIM         35       169      Transaction Description
BCCONT      DIM         12       204      Control Account 
BCDISCC     DIM         12       216      Discount Control Account
.
BCCEORD     DIM          7       228      Committed Exp Order Number
BCCELNE     DIM          3       235      Committed Exp Order Line Number
BCCATA      DIM          6       238      Inventory Catalog Code
BCCHQAC     DIM         15       244      Cheque Account Code
BCCDESC     DIM         35       259      Creditor Name
BCBASC      DIM          3       294      BAS Code
BCCSPAR     DIM         11       297      Spare
.
.End of Record                   308
.
HNREC       FORM         5                SAVED SECTOR NUMBER
.
