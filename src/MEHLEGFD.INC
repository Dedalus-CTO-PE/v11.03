. *****************************************************************************
. *                                                                           *
. * Include Name  : MEHLEGFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Mental Health                      *
. *                 Legal Status History                                      *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : mehlegaf.dat                                              *
. *                                                                           *
. * Keys          : KEY16                                                     *
. *                                                                           *
. * I/O Include   : MEHLEGIO.INC                                              *
. *                                                                           *
. * Author        : Justin Coates 12/08/1991                                  *
. *                                                                           *
. * Modifications : 01/07/92  ROD                                             *
. *                           Added 2nd Index                                 *
. *               : 31/01/96  Matt                                            *
. *                           Added Sent Flag                                 *
. *               : 07/11/96  Howellsy                                        *
. *                           Added Time of Change                            *
. *               : 24/05/1997  Steve Armstrong                               *
. *                             Added MHLEREVW & MHLEFLAG                     *
. *               : 20/02/2008  J.Tan        CAR 156964                       * . *                             Added MHLEEMPC - Employer Organisation code   *
. *                             Added MHLEOTYP - Employer Organisation type   *
. *                                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
MEHLEGA1  IFILE     SQL, FIXED=45, KEY="U1-8,9-16,17-21"
MEHLEGA2  IFILE     SQL, FIXED=45, KEY="U9-16,17-21,1-8"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  -----------
DMHLEADM  DIM       8           8      1  Admission Number
MHLEDATE  DIM       8           8      9  Date of legal status change
MHLETIME  DIM       5           5     17  Time of legal status change (HH:MM)
MHLESTAT  DIM       3           3     22  New legal status code (Cat LS)
MHLESENT  DIM       1           1     25  Sent Flag (For EDI)
.                                         Y = Yes
.                                         N = No
MHLEREVW  DIM       3           3     26  New Legal Review Status (Cat LR)
MHLEFLAG  DIM       1           1     29  Status change flag
.                                         "L" or Blank = Legal status changed
.                                         "R" = Review Status changed
.                                         "B" = Both Legal & Review status
.                                               changed
.                                         "N" = Neither Legal or Review status
.                                               changed
MHLEEMPC  DIM       6           6     30  Employer Organistation Code 
.                                         (External Organisation - pateoraf)
MHLEEMPT  DIM       1           1     36  Employer Organisation Type
MHLESPAR  DIM       8           8     37  Spare variable
.End of Record                        45
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length  Start  Description
. ----    ----      ------  -----  -----------
MHLEADMN  FORM      8           1  Admission Number
.
