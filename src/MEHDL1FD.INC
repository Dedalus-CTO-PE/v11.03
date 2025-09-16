. *****************************************************************************
. *                                                                           *
. * Include Name  : MEHDL1FD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Mental Health                      *
. *                 Discharge to Leave Details                                *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : mehdl1af.dat                                              *
. * Audit File    : mehaudl1.dat                                              *
. *                                                                           *
. * Keys          : KEY24, KEY19                                              *
. *                                                                           *
. * I/O Include   : MEHDLVIO.INC                                              *
. *                                                                           *
. * Author        : Justin Coates 12/08/1991                                  *
. *                                                                           *
. * Modifications :                                                           *
. *                 V9.09.01 20/02/08 J.Tan    CAR 156964                     *
. *                 Added new field for 'name of person escorting the patient'* 
. *                 V5.01.04 12/01/94 I.Rutt                                  *
. *                 Changed address fields to original length                 * 
. *****************************************************************************
.
.Audit File Definition
.---------------------
MEHAUDL1  IFILE     SQL, FIXED=278, KEY="D1-8,9-16,17-18,19-19"
.
.Name     Type      Length  Physical  Start  Description
.----     ----      ------  --------  -----  -----------
MHDLAUDD  DIM       8              8      1  Date of Change
MHDLAUDT  DIM       8              8      9  Time of Change
MHDLAUDP  DIM       2              2     17  Port doing change
MHDLAUDR  DIM       1              1     19  Record Type
.                                              A = Added Record
.                                              B = Before Change Record
.                                              C = After Change Record
.                                              D = Deleted Record
MHDLAUDS  FORM      1              2     20  Recorded Status
.                                              1 = Not Printed
.                                              2 = Printed
MHDLAUDO  DIM       4              4     22  Operator Id
.
.Data File Definition
.--------------------
MEHDL1A1  IFILE     SQL, FIXED=253, KEY="U1-8,9-16,17-24"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  -----------
DMHDLADM  DIM       8           8      1  Admission Number
MHDLDATE  DIM       8           8      9  Date of Leave (ccyymmdd)
MHDLTIME  DIM       8           8     17  Time of Leave (hh:mm:ss)
MHDLADD1  DIM       35         35     25  Address going to (line 1)
MHDLADD2  DIM       35         35     60  Address going to (line 2)
MHDLSUBR  DIM       35         35     95  Address going to (line 3)
MHDLADD4  DIM       35         35    130  Address going to (line 4)
MHDLPOST  DIM       8           8    165  Post code going to
MHDLSPR1  DIM       4           4    173  Spare variable for postcode expansion
MHDLACTY  DIM       3           3    177  Accommodation type (Cat AY)
MHDLREFT  DIM       3           3    180  Referred to       (Cat RE)
MHDLSTAY  DIM       3           3    183  Staying with      (Cat SW)
MHDLLDOM  FORM      1           2    186  Letter to DOM nurse ?
.                                           1 = Yes ; 2 = No
MHDLLGP   FORM      1           2    188  Letter to G.P. ?
.                                           1 = Yes ; 2 = No
MHDLTRST  FORM      1           2    190  Notice to Trustee ?
.                                           1 = Yes ; 2 = No
MHDLDOHN  FORM      1           2    192  DOH informed of Notifiable disease ?
.                                           1 = Yes ; 2 = No
MHDLOUTP  FORM      1           2    194  Outpatient appointment ?
.                                           1 = Yes ; 2 = No
MHDLCSRG  FORM      1           2    196  Community service register ?
.                                           1 = Yes ; 2 = No
MHDLCSDT  DIM       8           8    198  Date on Community service register
MHDLCFUT  DIM       3           3    206  Comm. service follow up type (Cat FU)
MHDLCFUD  DIM       8           8    209  Comm. service follow up date
MHDLUSR1  DIM       3           3    217  User defined field 1 (Cat W5)
MHDLUSR2  DIM       3           3    220  User defined field 2 (Cat W6)
MHDLUSR3  DIM       3           3    223  User defined field 3 (Cat W7)
MHDLUSR4  DIM       3           3    226  User defined field 4 (Cat W8)
MHDLUSR5  DIM       3           3    229  User defined field 5 (Cat W9)
MHDLXCOR  DIM       20         20    232  Name of Person Escorting the patient
MHDLSPAR  DIM       1           1    252  Spare variable
.End of Record                       253
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length  Start  Description
. ----    ----      ------  -----  -----------
MHDLADMN  FORM      8           1  Admission Number
.
