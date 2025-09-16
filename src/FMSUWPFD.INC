. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSUWPFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Ledger Account Comments Table                    *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmsuwpaf.dat                                     *
. *                                                                       *
. *  Keys            :   KEY17                                            *
. *                                                                       *
. *  Modifications   :                                                    *
. *************************************************************************
.
FMSUWPA1   IFILE SQL, FIXED=108, KEY="U1-2,3-14,15-17"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMUWLEDG  DIM       2      2        1     Ledger Number
FMUWACCT  DIM       12     12       3     Account
FMUWLNO   DIM       3      3        15    Line Number
FMUWLINE  DIM       70     70       18    Line
FMUWSPAR  DIM       20     20       88    Spare
.
.End of Record                      108
.
