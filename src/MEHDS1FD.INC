. *****************************************************************************
. *                                                                           *
. * Include Name  : MEHDS1FD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Mental Health                      *
. *                 Discharge Details                                         *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : mehds1af.dat                                              *
. * Audit File    : mehauds1.dat                                              *
. *                                                                           *
. * Keys          : KEY8, KEY19                                               *
. *                                                                           *
. * I/O Include   : MEHDSCIO.INC                                              *
. *                                                                           *
. * Author        : Justin Coates 12/08/1991                                  *
. *                                                                           *
. * Modifications :                                                           *
. *                 V5.01 12/01/94 I.Rutt                                     *
. *                          Changed address fields to original length        * 
. *****************************************************************************
.
.Audit File Definition
.---------------------
MEHAUDS1  IFILE     SQL, FIXED=261, KEY="D1-8,9-16,17-18,19-19"
.
.Name     Type      Length  Physical  Start  Description
.----     ----      ------  --------  -----  -----------
MHDSAUDD  DIM       8              8      1  Date of Change
MHDSAUDT  DIM       8              8      9  Time of Change
MHDSAUDP  DIM       2              2     17  Port doing change
MHDSAUDR  DIM       1              1     19  Record Type
.                                              A = Added Record
.                                              B = Before Change Record
.                                              C = After Change Record
.                                              D = Deleted Record
MHDSAUDS  FORM      1              2     20  Recorded Status
.                                              1 = Not Printed
.                                              2 = Printed
MHDSAUDO  DIM       4              4     22  Operator Id
.
.Data File Definition
.--------------------
MEHDS1A1  IFILE     SQL, FIXED=236, KEY="U1-8"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  -----------
DMHDSADM  DIM       8           8      1  Admission Number
MHDSADD1  DIM       35         35      9  Address going to (line 1)
MHDSADD2  DIM       35         35     44  Address going to (line 2)
MHDSSUBR  DIM       35         35     79  Address going to (line 3)
MHDSADD4  DIM       35         35    114  Address going to (line 2)
MHDSPOST  DIM       8           8    149  Post code going to
MHDSSPR1  DIM       4           4    157  Spare variable for postcode expansion
MHDSACTY  DIM       3           3    161  Accommodation type (Cat AY)
MHDSREFT  DIM       3           3    164  Referred to       (Cat RE)
MHDSSTAY  DIM       3           3    167  Staying with      (Cat SW)
MHDSLDOM  FORM      1           2    170  Letter to DOM nurse ?
.                                           1 = Yes ; 2 = No
MHDSLGP   FORM      1           2    172  Letter to G.P. ?
.                                           1 = Yes ; 2 = No
MHDSTRST  FORM      1           2    174  Notice to Trustee ?
.                                           1 = Yes ; 2 = No
MHDSDOHN  FORM      1           2    176  DOH informed of Notifiable disease ?
.                                           1 = Yes ; 2 = No
MHDSOUTP  FORM      1           2    178  Outpatient appointment ?
.                                           1 = Yes ; 2 = No
MHDSCSRG  FORM      1           2    180  Community service register ?
.                                           1 = Yes ; 2 = No
MHDSCSDT  DIM       8           8    182  Date on Community service register
MHDSCFUT  DIM       3           3    190  Comm. service follow up type (Cat FU)
MHDSCFUD  DIM       8           8    193  Comm. service follow up date
MHDSUSR1  DIM       3           3    201  User defined field 1 (Cat W5)
MHDSUSR2  DIM       3           3    204  User defined field 2 (Cat W6)
MHDSUSR3  DIM       3           3    207  User defined field 3 (Cat W7)
MHDSUSR4  DIM       3           3    210  User defined field 4 (Cat W8)
MHDSUSR5  DIM       3           3    213  User defined field 5 (Cat W9)
MHDSSPAR  DIM       20         20    216  Spare variable
.End of Record                       236
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length  Start  Description
. ----    ----      ------  -----  -----------
MHDSADMN  FORM      8           1  Admission Number
.
.
