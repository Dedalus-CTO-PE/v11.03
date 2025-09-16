. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSHCAFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Balances Extraction Table (For Load/Transfer)     *
. *                                                                       *
. *  File Type       :   ASCII                                            *
. *                                                                       *
. *  File Name       :   xxyyyyzz.txt                                     *
. *                                                                       *
. *  Modifications   :                                                    *
. *************************************************************************
.
FMSHCAA1  FILE      ASCII,FIXED=127
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMHCLEDG  DIM       2      2        1     Ledger
FMHCACCT  DIM       12     12       3     Account
.
FMHCTYPE  DIM       1      1        15    Statistical type (1=yes)
FMHCCCBR  FORM      12.5   10       16    Curr Yr Per Summary Cash Br Fwd 
FMHCCCPE  FORM      12.5   10       26    Curr Yr Per Summary Cash For Per
FMHCCABR  FORM      12.5   10       36    Curr Yr Per Summary Accrual Br Fwd
FMHCCAPE  FORM      12.5   10       46    Curr Yr Per Summary Accrual For Per
FMHCLCBR  FORM      12.5   10       56    Last Yr Per Summary Cash Br Fwd 
FMHCLCPE  FORM      12.5   10       66    Last Yr Per Summary Cash For Per
FMHCLABR  FORM      12.5   10       76    Last Yr Per Summary Accrual Br Fwd
FMHCLAPE  FORM      12.5   10       86    Last Yr Per Summary Accrual For Per
.
FMHCCBUD  FORM      12.2   8        96    Current Yr Budget For Period
FMHCLBUD  FORM      12.2   8        104   Last Yr Budget For Period
.
FMHCSPAR  DIM       15     15       112   Spare Variable
.
.End of Record                      127
