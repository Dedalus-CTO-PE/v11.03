. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSONCFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      On Cost Code Table                               *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmsoncaf.dat                                     *
. *                                                                       *
. *  Keys            :   KEY3                                             *
. *                                                                       *
. *  Modifications   :                                                    *
. *************************************************************************
.
FMSONCA1  IFILE  SQL, FIXED=48, KEY="U1-3"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMONCODE  DIM       3      3        1     Oncost Code
FMONDESC  DIM       20     20       4     Oncost Description
FMONPERC  FORM      4.2    4        24    Oncost Percentage
FMONSPAR  DIM       20     20       28    Spare
.
.End of Record                      48
.
