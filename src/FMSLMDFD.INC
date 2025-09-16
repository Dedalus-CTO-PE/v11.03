. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSLMDFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Ledger Comments Table                            *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmslmdaf.dat                                     *
. *                                                                       *
. *  Keys            :   KEY11                                            *
. *                                                                       *
. *  Modifications   :                                                    *
. *************************************************************************
.
FMSLMDA1   IFILE SQL, FIXED=102, KEY="U1-2,3-6,7-8,9-11"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMLDLEDG  DIM       2      2        1     Ledger Number
FMLDYEAR  DIM       4      4        3     Financial Year
FMLDPERD  DIM       2      2        7     Period
FMLDLNO   DIM       3      3        9     Line Number
FMLDLINE  DIM       70     70       12    Line
FMLDSPAR  DIM       20     20       82    Spare
.
.End of Record                      102
