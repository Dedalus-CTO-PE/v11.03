. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSGRPFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Allocation Group Details                         *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmsgrpaf.dat                                     *
. *                                                                       *
. *  Keys            :   KEY3                                             *
. *                                                                       *
. *  Modifications   :                                                    *
. *************************************************************************
.
FMSGRPA1  IFILE  SQL, FIXED=59, KEY="U1-3" 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMGPCODE  DIM       3      3        1     Allocation Group Code
FMGPDESC  DIM       35     35       4     Description
FMGPSPAR  DIM       20     20       39    Spare
.
.End of Record                      59
