. *****************************************************************************
. *                                                                           *
. * Include Name  : MEHAXIFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Mental Health                      *
. *                 Discharge Details                                         *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : mehaxiaf.dat                                              *
. * Audit File    : mehaudax.dat                                              *
. *                                                                           *
. * Keys          : KEY10, KEY19                                              *
. *                                                                           *
. * I/O Include   : MEHAXIIO.INC                                              *
. *                                                                           *
. * Author        : Justin Coates 12/08/1991                                  *
. *                                                                           *
. * Modifications :                                                           *
. *       V10.04.00 20/02/2014  Steve Armstrong  CAR 263127                   *
. *                 Added MHAXSTAT.                                           *
. *****************************************************************************
. *                 20/02/2008  J.Tan          CAR 156964                     *
. *                 New type of code for Axis III                             *
. *                 14/10/2004  Guomin Fu      CAR 44068                      *
. *                 Changed MHAXDESC from DIM30 to DIM70                      *
. *****************************************************************************
.
.Audit File Definition
.---------------------
MEHAUDAX  IFILE     SQL, FIXED=116, KEY="D1-8,9-16,17-18,19-19"
.
.Name     Type      Length  Physical  Start  Description
.----     ----      ------  --------  -----  -----------
MHAXAUDD  DIM       8              8      1  Date of Change
MHAXAUDT  DIM       8              8      9  Time of Change
MHAXAUDP  DIM       2              2     17  Port doing change
MHAXAUDR  DIM       1              1     19  Record Type
.                                              A = Added Record
.                                              B = Before Change Record
.                                              C = After Change Record
.                                              D = Deleted Record
MHAXAUDS  FORM      1              2     20  Recorded Status
.                                              1 = Not Printed
.                                              2 = Printed
MHAXAUDO  DIM       4              4     22  Operator Id
.
.Data File Definition
.--------------------
MEHAXIA1  IFILE     SQL, FIXED=91, KEY="U1-1,2-10"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  -----------
DMHAXTYP  DIM       1           1      1  Type of Code
.                                           1 = Axis I
.                                           2 = Axis II
.                                           3 = Axis III
MHAXCODE  DIM       9           9      2  Code
MHAXDESC  DIM       70         70     11  Description
MHAXSTAT  DIM        1          1     81  Status
.                                           Blank or 0 = Active
.                                           1 = Inactive
MHAXSPAR  DIM        9          9     82  Spare variable
.End of Record                        91
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length  Start  Description
. ----    ----      ------  -----  -----------
MHAXTYPE  FORM      1           1  Type of code
.
