.******************************************************************************
. *****************************************************************************
. *                                                                           *
. * Include Name  : OUTSDIFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Outpatients                        *
. *                 Clinic Type/Directorate Link                              *
. *                                                                           *
. * File Type     : SQL       (*** must have this line for audcreate ***)     *
. *                                                                           *
. * File Name     : outsdiaf.dat                                              *
. * Audit File    : outaudds.dat                                              *
. *                                                                           *
. * Keys          : KEY19 , KEY20 , KEY23                                     *
. *                                                                           *
. * Author        : Matt Surridge      10/11/1995                             *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Audit File Definition (*** must be .Audit for audcreate script ***)
.---------------------
OUTAUDDS  IFILE      SQL, FIXED=67, KEY="D1-8,9-16,17-18,19-19"
.
.Name     Type      Length  Phys.  Start  Description
.-------  ----      ------  -----  -----  --------------------------------------
OTDSAUDD  DIM        8          8       1       Audit Date
OTDSAUDT  DIM        8          8       9       Audit Time
OTDSAUDP  DIM        2          2       17      Port
OTDSAUDR  DIM        1          1       19      Record Type
.                                               A = Added
.                                               B = Before Change
.                                               C = After Change
.                                               D = Deleted
OTDSAUDS  FORM       1          2       20      Record Staus 1 = Printed
.                                                            0 = Not
OTDSAUDO  DIM        4          4       22      Operator
.
.Data File Definition (*** must be .Data for audcreate script ***)
.--------------------
OUTSDIA1  IFILE      SQL, FIXED=42, KEY="U1-6,7-12,13-20"
OUTSDIA2  IFILE      SQL, FIXED=42, KEY="U1-6,29-31,13-20,7-12"
.
.Name     Type      Length  Phys.  Start  Description
.-------  ----      ------  -----  -----  --------------------------------------
OTDSSITE  DIM        6          6      1   Site Code
OTDSCODE  DIM        6          6      7   Clinic Type Code
OTDSEFDT  DIM        8          8     13   Effective Date
OTDSEDDT  DIM        8          8     21   End Date
OTDSDCOD  DIM        3          3     29   Directorate Code (CG)
OTDSSPAR  DIM        10        10     32   Spare
.
.End of Record                        42 
