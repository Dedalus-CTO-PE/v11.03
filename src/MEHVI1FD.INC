. *****************************************************************************
. *                                                                           *
. * Include Name  : MEHVI1FD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Mental Health                      *
. *                 Visit Table                                               *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : mehvi1af.dat                                              *
. * Audit File    : mehauvi1.dat                                              *
. *                                                                           *
. * Keys          : KEY8, KEY9, KEY16, KEY19                                  *
. *                                                                           *
. * I/O Include   : MEHVISIO.INC                                              *
. *                                                                           *
. * Author        : Justin Coates 12/08/1991                                  *
. *                                                                           *
. * Modifications :                                                           *
. *       V10.03.01 07/11/2011 Mike Laming   CAR 242151                       *
. *                 MHVIMHOR "External MH Clinic Name" moved out of Spare     *
. *       V10.02.01 08/09/2011 J.Tan        CAR 242151                        *
. *                 Added External MH Clinic Name                             *
. *                 23/06/2011 Peter Vela   CAR 239556                        *
. *                 Added some more WA mental health fields                   *
. *                 05/05/2011 Peter Vela   CAR 239556                        *
. *                 Added new WA mental health fields                         *
. *                 09/10/2002 Katie Nelson srf 22727                         *
. *                 Added U/R Number (MHVIURNO) and new Key                   *
. *                 30/04/1992    Justin Case                                 *
. *                 added 3=unknown for mhvimxbe                              *
. *                 07/07/92   ROD                                            *
. *                 Added Type of Admission                                   *
. *                 12/01/94 I.Rutt                                           *
. *                 Changed address fields to original length                 *
. *                 18/11/95  Matt (SUHT mods)                                *
. *                 added mhvimcat and mhvipsps                               *
. *                 06/11/96  Howellsy         MEH                            *
. *                 added mhvilawr,mhviordh,mhvicjar,mhviredd,mhvis76r        *
. *                                                                           *
. *****************************************************************************
.
.Audit File Definition
.---------------------
MEHAUVI1  IFILE     SQL, FIXED=535, KEY="D1-8,9-16,17-18,19-19"
.
.Name     Type      Length  Physical  Start  Description
.----     ----      ------  --------  -----  -----------
MHVIAUDD  DIM       8              8      1  Date of Change
MHVIAUDT  DIM       8              8      9  Time of Change
MHVIAUDP  DIM       2              2     17  Port doing change
MHVIAUDR  DIM       1              1     19  Record Type
.                                              A = Added Record
.                                              B = Before Change Record
.                                              C = After Change Record
.                                              D = Deleted Record
MHVIAUDS  FORM      1              2     20  Recorded Status
.                                              1 = Not Printed
.                                              2 = Printed
MHVIAUDO  DIM       4              4     22  Operator Id
.
.Data File Definition
.--------------------
MEHVI1A1  IFILE     SQL, FIXED=510, KEY="U1-8"
MEHVI1A2  IFILE     SQL, FIXED=510, KEY="U9-9,1-8"
MEHVI1A3  IFILE     SQL, FIXED=510, KEY="U10-17,1-8"
MEHVI1A4  IFILE     SQL, FIXED=510, KEY="U355-362,1-8"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  -----------
DMHVIADM  DIM       8           8      1  Admission Number
DMHVISTA  DIM       1           1      9  Current Visit Status
.                                           0 = Pre-admitted
.                                           1 = In Hospital
.                                           2 = On short term leave
.                                           3 = On trial leave
.                                           4 = On holiday leave
.                                           5 = A. W. O. L.
.                                           6 = Discharged
.                                           7 = Community Health (MH)(Open Case)
.                                           8 = Comm. Health (Closed Case))
MHVILSRV  DIM       8           8     10  Next legal status review date ccyymmdd
MHVITHER  DIM       30         30     18  Therapist
MHVIADD1  DIM       35         35     48  Address admitted from (line 1)
MHVIADD2  DIM       35         35     83  Address admitted from (line 2)
MHVISUBR  DIM       35         35    118  Address admitted from (line 3)
MHVIADD4  DIM       35         35    153  Address admitted from (line 2)
MHVIPOST  DIM       8           8    188  Postcode admitted from
MHVISPR1  DIM       4           4    196  Spare variable for postcode expansion
MHVIACTY  DIM       3           3    200  Accommodation type (Cat AY)
MHVIRFDT  DIM       8           8    203  Referral Date (ccyymmdd)
MHVIFCDT  DIM       8           8    211  First Contact date (ccyymmdd)
MHVIRODT  DIM       8           8    219  Reception order date (ccyymmdd)
MHVIVISI  FORM      1           2    227  Visits Restricted ?
.                                           1 = Yes ; 2 = No
MHVIBENE  DIM       3           3    229  Benefit type (Cat BY)
MHVIBEPD  DIM       30         30    232  Benefit paid to
MHVIMXBE  FORM      1           2    262  Maximised benefit ?
.                                           1 = Yes ; 2 = No ; 3 = unknown
MHVIMXDT  DIM       8           8    264  Maximised date (ccyymmdd)
MHVISUPP  FORM      1           2    272  Supported by a benefit ? 
.                                           1 = Yes ; 2 = No
MHVIUSR1  DIM       3           3    274  User defined field 1 (Cat V1)
MHVIUSR2  DIM       3           3    277  User defined field 2 (Cat V2)
MHVIUSR3  DIM       3           3    280  User defined field 3 (Cat V3)
MHVIUSR4  DIM       3           3    283  User defined field 4 (Cat V4)
MHVIUSR5  DIM       3           3    286  User defined field 5 (Cat V5)
MHVIATYP  DIM       3           3    289  Type of Admission  (Cat TA)
MHVIMCAT  DIM       3           3    292  Mental Category    (Cat MH)
MHVIPSPS  DIM       3           3    295  Psychiatric Patient Status (Cat PT)
MHVILAWR  DIM       30          30   298  Lawyer
MHVIORDH  DIM       3           3    328  Who Holds the Order (Cat OH)
MHVICJAR  DIM       8           8    331  Next CJA Review Date (ccyymmdd)
MHVIREDD  DIM       8           8    339  Expected Date of Reduction (ccyymmdd)
MHVIS76R  DIM       8           8    347  S.76 Review Date (ccyymmdd)
MHVIURNO  DIM       8           8    355  U/R Number
MHVIROTM  DIM       8           8    363  Reception order Time (HH:MM:SS) 
MHVIPDDT  DIM       8           8    371  Planned Discharge Date (ccyymmdd)
MHVIPDTM  DIM       8           8    379  Planned Discharge Time (HH:MM:SS)
MHVICSMN  DIM       10          10   387  Case Manager
MHVIPYCL  DIM       6           6    397  Psych Clinic
MHVITROR  DIM       3           3    403  Transport Order (CAT TO)
MHVIPDGV  DIM       1           1    406  Patient Documentation Given?  
.                                           1 = Yes 0 = No
MHVIACDE  DIM       3           3    407  Accommodation Type 2 (CAT AY)
MHVIRMHA  DIM       1           1    410  Received Under MH Act?
MHVIRMHC  DIM       3           3    411  Clinician Referring Under MH Act 
.                                         (Role) (CAT rm)
MHVIRFTM  DIM       8           8    414  Referral Time (HH:MM:SS)
MHVIAMDT  DIM       8           8    422  Admit MH Act Date (ccyymmdd)
MHVIAMTM  DIM       8           8    430  Admit MH Act Time (HH:MM:SS)
MHVIMHOR  DIM       6           6    438  External MH Clinic Name
MHVISPAR  DIM       66         66    444  Spare variable
.
.End of Record                       510
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length  Start  Description
. ----    ----      ------  -----  -----------
MHVIADMN  FORM      8           1  Admission Number
MHVISTAT  FORM      1           9  Current Visit Status
.
