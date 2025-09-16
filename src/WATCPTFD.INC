. *****************************************************************************
. *                                                                           *
. * Include Name  : WATCPTFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Waiting List                       *
. *                 Consultant/Procedure Time                                 *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : watcptaf.dat                                              *
. * Audit File    : wataudcp.dat                                              *
. *                                                                           *
. * Keys          : KEY15                                                     *
. *                                                                           *
. * Author        : Justin Coates      27/10/1995                             *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Audit File Definition 
.---------------------
WATAUDCP  IFILE     SQL, FIXED=75, KEY="D1-8,9-16,17-18,19-19"
.
.Name     Type      Length  Physical  Start  Description
.----     ----      ------  --------  -----  -----------
WTCPAUDD  DIM       8              8      1  Date of Change
WTCPAUDT  DIM       8              8      9  Time of Change
WTCPAUDP  DIM       2              2     17  Port doing change
WTCPAUDR  DIM       1              1     19  Record Type
.                                              A = Added Record
.                                              B = Before Change Record
.                                              C = After Change Record
.                                              D = Deleted Record
WTCPAUDS  FORM      1              2     20  Recorded Status
.                                              1 = Not Printed
.                                              2 = Printed
WTCPAUDO  DIM       4              4     22  Operator Id
.
.Data File Definition
.--------------------
WATCPTA1  IFILE     SQL, FIXED=50, KEY="U1-6,7-15"
.
.Name     Type      Length  Phys.  Start  Description
.-------  ----      ------  -----  -----  --------------------------------------
WTCPDOCT  DIM       6           6      1  Doctor Code
WTCPPROC  DIM       9           9      7  Procedure Code
WTCPSTAY  FORM      3           3     16  Expected Length of Stay (days)
WTCPTIME  FORM      5           4     19  Expected Procedure Time (mins)
WTCPSPAR  DIM       27         27     23  Spare variable
.End of Record                        50
.
