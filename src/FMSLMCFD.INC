. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSLMCFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Ledger Financial Calender Control Table          *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmslmcaf.dat                                     *
. *                                                                       *
. *  Keys            :   KEY6                                             *
. *                                                                       *
. *  Modifications   :                                                    *
. *************************************************************************
.
FMSLMCA1   IFILE SQL, FIXED=456, KEY="U1-2,3-6"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMLCLEDG  DIM       2      2        1     Ledger Number
FMLCYEAR  DIM       4      4        3     Accounting Yr CCYY
.
FMLC01FR  DIM       8      8        7     Period 1 From Date CCYYMMDD
FMLC01TO  DIM       8      8        15    Period 1 To Date CCYYMMDD
FMLC01DE  DIM       15     15       23    Period 1 Description
FMLC01IN  FORM      1      2        38    Period 1 Lock
.
FMLC02FR  DIM       8      8        40    Period 2 From Date CCYYMMDD
FMLC02TO  DIM       8      8        48    Period 2 To Date CCYYMMDD
FMLC02DE  DIM       15     15       56    Period 2 Description
FMLC02IN  FORM      1      2        71    Period 2 Lock
.
FMLC03FR  DIM       8      8        73    Period 3 From Date CCYYMMDD
FMLC03TO  DIM       8      8        81    Period 3 To Date CCYYMMDD
FMLC03DE  DIM       15     15       89    Period 3 Description
FMLC03IN  FORM      1      2        104   Period 3 Lock
.
FMLC04FR  DIM       8      8        106   Period 4 From Date CCYYMMDD
FMLC04TO  DIM       8      8        114   Period 4 To Date CCYYMMDD
FMLC04DE  DIM       15     15       122   Period 4 Description
FMLC04IN  FORM      1      2        137   Period 4 Lock
.
FMLC05FR  DIM       8      8        139   Period 5 From Date CCYYMMDD
FMLC05TO  DIM       8      8        147   Period 5 To Date CCYYMMDD
FMLC05DE  DIM       15     15       155   Period 5 Description
FMLC05IN  FORM      1      2        170   Period 5 Lock
.
FMLC06FR  DIM       8      8        172   Period 6 From Date CCYYMMDD
FMLC06TO  DIM       8      8        180   Period 6 To Date CCYYMMDD
FMLC06DE  DIM       15     15       188   Period 6 Description
FMLC06IN  FORM      1      2        203   Period 6 Lock
.
FMLC07FR  DIM       8      8        205   Period 7 From Date CCYYMMDD
FMLC07TO  DIM       8      8        213   Period 7 To Date CCYYMMDD
FMLC07DE  DIM       15     15       221   Period 7 Description
FMLC07IN  FORM      1      2        236   Period 7 Lock
.
FMLC08FR  DIM       8      8        238   Period 8 From Date CCYYMMDD
FMLC08TO  DIM       8      8        246   Period 8 To Date CCYYMMDD
FMLC08DE  DIM       15     15       254   Period 8 Description
FMLC08IN  FORM      1      2        269   Period 8 Lock
.
FMLC09FR  DIM       8      8        271   Period 9 From Date CCYYMMDD
FMLC09TO  DIM       8      8        279   Period 9 To Date CCYYMMDD
FMLC09DE  DIM       15     15       287   Period 9 Description
FMLC09IN  FORM      1      2        302   Period 9 Lock
.
FMLC10FR  DIM       8      8        304   Period 10 From Date CCYYMMDD
FMLC10TO  DIM       8      8        312   Period 10 To Date CCYYMMDD
FMLC10DE  DIM       15     15       320   Period 10 Description
FMLC10IN  FORM      1      2        335   Period 10 Lock
.
FMLC11FR  DIM       8      8        337   Period 11 From Date CCYYMMDD
FMLC11TO  DIM       8      8        345   Period 11 To Date CCYYMMDD
FMLC11DE  DIM       15     15       353   Period 11 Description
FMLC11IN  FORM      1      2        368   Period 11 Lock
.
FMLC12FR  DIM       8      8        370   Period 12 From Date CCYYMMDD
FMLC12TO  DIM       8      8        378   Period 12 To Date CCYYMMDD
FMLC12DE  DIM       15     15       386   Period 12 Description
FMLC12IN  FORM      1      2        401   Period 12 Lock
.
FMLC13FR  DIM       8      8        403   Period 13 From Date CCYYMMDD
FMLC13TO  DIM       8      8        411   Period 13 To Date CCYYMMDD
FMLC13DE  DIM       15     15       419   Period 13 Description
FMLC13IN  FORM      1      2        434   Period 13 Lock
.
FMLCYLC   FORM      1      2        436   Financial Year Closed 0=No 1=Yes
.                                         Opening balances transfered
.                                         so the year must be closed.
FMLCBUDG  DIM       4      4        438   Current Year Accrual Budget Code
FMLCCBUD  DIM       4      4        442   Current Year Cash Budget Code
FMLCSPAR  DIM       10     10       446   Spare
.
.End of Record                      456
