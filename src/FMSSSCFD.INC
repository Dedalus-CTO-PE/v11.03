. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSSSCFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Statistical Subjective Calculation Table         *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmssscaf.dat                                     *
. *                                                                       *
. *  Keys            :   KEY31                                            *
. *                                                                       *
. *  Modifications   :                                                    *
. *************************************************************************
.
FMSSSCA1  IFILE  SQL, FIXED=53, KEY="U1-2,3-14,15-19,20-31" * by Total
FMSSSCA2  IFILE  SQL, FIXED=53, KEY="U1-2,20-31,3-14,15-19" * by Sub Acc
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMTSTLED  DIM       2      2        1     Statistical Ledger
FMTSTACC  DIM       12     12       3     Statistical Account
FMTSASEQ  DIM       5      5        15    Sequence
FMTSSACC  DIM       12     12       20    Sub Account
.
FMTSADDT  DIM       1      1        32    Stats Add to Type (0 for financial)
.                                          0=Add,1=Sub,2=Div,3=Mult
FMTSSUBJ  DIM       1      1        33    Account/Subjective Indicator
.                                          0=Account,1=Subjective,2=CC
FMTSSPAR  DIM       19     19       34    Spare
.
.End of Record                      53
.
