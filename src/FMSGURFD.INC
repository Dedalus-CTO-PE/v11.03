. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSGURFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      General User Reporting Table                     *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmsguraf.dat                                     *
. *                                                                       *
. *  Keys            :   KEY7                                             *
. *                                                                       *
. *  Modifications   :                                                    *
. *************************************************************************
.
FMSGURA1  IFILE  SQL, FIXED=122, KEY="U1-4,5-7" 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMGUUID   DIM       4      4        1     User Id
FMGUSEQ   DIM       3      3        5     Sequence Id
FMGUDES   DIM       35     35       8     Description
FMGUSTA   FORM      1      2        43    Report Status 0 run at any time
.                                                       1 after period locked
FMGUTYP   FORM      1      2        45    Report Type   0 Internal FMS
.                                                       1 External Unix/SQL
FMGUREP   DIM       3      3        47    Report Code
FMGULED   DIM       2      2        50    Unix Command
FMGUCMD   DIM       50     50       52    Unix Command
.
FMGUSPA   DIM       20     20       102   Spare
.
.End of Record                      122
