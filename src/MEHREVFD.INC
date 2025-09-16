. *****************************************************************************
. *                                                                           *
. * Include Name  : MEHREVFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Mental Health                      *
. *                 Legal Status Review History                               *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : mehrevaf.dat                                              *
. *                                                                           *
. * Keys          : KEY16                                                     *
. *                                                                           *
. * I/O Include   : MEHREVIO.INC                                              *
. *                                                                           *
. * Author        : Justin Coates 12/08/1991                                  *
. *                                                                           *
. * Modifications :                                                           *
. *               : 07/11/96  Howellsy                                        *
. *                           Added Time of Change                            *
. *****************************************************************************
.
.Data File Definition
.--------------------
MEHREVA1  IFILE     SQL, FIXED=68, KEY="U1-8,9-16,17-21"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  -----------
DMHRVADM  DIM       8           8      1  Admission Number
MHRVDATE  DIM       8           8      9  Date of review
MHRVTIME  DIM       5           5     17  Time of review (HH:MM)
MHRVDECI  FORM      1           2     22  Review decision
.                                           1 = Yes ; 2 = No
MHRVLDAT  DIM       8           8     24  Date of new legal status (Yes only)
MHRVLTIM  DIM       5           5     32  Time of new legal status (Yes only)
MHRVREAS  DIM       3           3     37  Reason for decision (Cat DE) (No only)
MHRVNDAT  DIM       8           8     40  Date of next review
MHRVSPAR  DIM       20         20     48  Spare variable
.End of Record                        68
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length  Start  Description
. ----    ----      ------  -----  -----------
MHRVADMN  FORM      8           1  Admission Number
.
