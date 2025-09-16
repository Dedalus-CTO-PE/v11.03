. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSJWPFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Journal Comment Details                          *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmsjwpaf.dat                                     *
. *                                                                       *
. *  Keys            :   KEY10                                            *
. *                                                                       *
. *  Modifications   :                                                    *
. *************************************************************************
.
FMSJWPA1   IFILE SQL, FIXED=101, KEY="U1-1,2-7,8-10"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMJWJTY   DIM       1      1        1     Journal Type General/Std/Periodic
FMJWJID   DIM       6      6        2     Journal ID
FMJWLNO   DIM       3      3        8     Line Number
FMJWLINE  DIM       70     70       11    Line
.
FMJWSPAR  DIM       20     20       81    Spare
.
.End of Record                      101
