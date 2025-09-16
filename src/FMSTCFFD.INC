. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSTCFFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Total Calculation Table                          *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmstcfaf.dat                                     *
. *                                                                       *
. *  Keys            :   KEY33                                            *
. *                                                                       *
. *  Modifications   :                                                    *
. *              06.02.92  Neeriem Dye                                    *
. *                        Added FMTCPRT                                  *
. *                        srf 112961                                     *
. *************************************************************************
.
FMSTCFA1  IFILE  SQL, FIXED=57, KEY="U1-2,3-14,15-19,20-21,22-33" *by Total
FMSTCFA2  IFILE  SQL, FIXED=57, KEY="U20-21,22-33,1-2,3-14,15-19" *by Sub Acc
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMTCTLED  DIM       2      2        1     Total Ledger
FMTCTACC  DIM       12     12       3     Total Account
FMTCASEQ  DIM       5      5        15    Account Sequence
FMTCSLED  DIM       2      2        20    Sub Ledger
FMTCSACC  DIM       12     12       22    Sub Account
.
FMTCPOST  FORM      1      2        34    Posting Account 0=No 1=Yes
FMTCADDT  DIM       1      1        36    Stats Add to Type (0 for financial)
.                                          0=Add,1=Sub,2=Div,3=Mult
FMTCPRT   DIM       3      3        37    Print Code (Heading accounts only)
.
FMTCSPAR  DIM       17     17       40    Spare
.
.End of Record                      57
.
