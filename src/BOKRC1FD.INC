. *****************************************************************************
. *                                                                           *
. * Include Name  : BOKRC1FD               Release 5.01                       *
. *                                                                           *
. * Function      : File Def'n Include for Booking                            *
. *                 Booking Table (UK)                                        *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : bokrc1af.dat                                              *
. * Audit File    : bokaurc1.dat                                              *
. *                                                                           *
. * Author        : R Knowles                                                 *
. *                                                                           *
. * Date          : 17/10/90                                                  *
. *                                                                           *
. * Keys          : KEY8   - 1st Index                                        *
. *                 KEY28  - 2nd Index                                        *
. *                 KEY22  - 3rd Index                                        *
. *                 KEY16  - 4rd Index,6th Index                              *
. *                 KEY24  - 5rd Index                                        *
. *                 KEY19  - Audits                                           *
. *                                                                           *
. * Modifications :                                                           *
. *  **** Programmer Note **************                                      *
. *       Any changes to this FD may also need to be made in BOKQUEFD.        *
. *       Please check this before proceeding.                                *
. *                                                                           *
. *                 V10.06.01 11/03/2015   J.Tan    CAR 314106                *
. *                 Changed bkrerfgp to DIM 10                                *
. *                 10/02/2002   Bronko Sosic                                 *
. *                 Added new variable BKREINDC                               *
. *                 25/06/1999   Nicole Harrington                            *
. *                 Added 7th Index                                           *
. *                 21/01/1991   'The Phantom'                                *
. *                 Added BKREEBED, expected bed                              *
. *                 11/07/1991    Justin Coates  (Vic Health Dept Changes)    *
. *                 Added BKRECLSS, BKREATYP, BKREDEPT, BKRETDOC              *
. *                 10/10/1991    Justin Coates                               *
. *                 Added BKRECLMT                                            *
. *                 16/03/1993    Graeme Williams                             *
. *                 Added BKREECRA - ECR approval number                      *
. *                 Increased spare variable                                  *
. *                 18/03/1993    Graeme Williams                             *
. *                 Changed BKRECNT to DBKRECNT                               *
. *                 28/10/1993    Justin Coates  QUOTE 440017  SRF 440204     *
. *                 added BKREGPPT                                            *
. *                 07/03/1994    Justin Coates  SRF 440719                   *
. *                 added BKREDOFR                                            *
. *                 13/10/1995   Howellsy         suht                        *
. *                 added bkreoper                                            *
. *                 31/10/1995    Justin Coates  (SUHT mods)                  *
. *                 added bkreelos                                            *
. *                 18/09/1997  Steve Armstrong                               *
. *                 added BKREBKDT                                            *
. *****************************************************************************
.
.Audit File Definition
.---------------------
BOKAUDR1  IFILE     SQL, FIXED=256, KEY="D1-8,9-16,17-18,19-19"
.
. NAME    TYPE   LENGTH   PHYSICAL   START LOC   DESCRIPTION
. ----    ----   ------   --------   ---------   -----------
BKREAUDD  DIM       8         8           1      Date of change
BKREAUDT  DIM       8         8           9      Time of change
BKREAUDP  DIM       2         2          17      Port doing change
BKREAUDR  DIM       1         1          19      Record type
.                                                    A = Added
.                                                    B = Before change
.                                                    C = After change
.                                                    D = Deleted
BKREAUDS  FORM      1         2          20      Record status
.                                                    1 = Not printed
.                                                    2 = Printed
BKREAUDO  DIM       4         4          22      Operator Id that did change
.
.Data File definition
.--------------------
. 
BOKRC1A1  IFILE     SQL, FIXED=278, KEY="U1-8"
BOKRC1A2  IFILE     SQL, FIXED=278, KEY="U17-36,1-8"
BOKRC1A3  IFILE     SQL, FIXED=278, KEY="U39-44,51-58,1-8"
BOKRC1A4  IFILE     SQL, FIXED=278, KEY="U51-58,1-8"
BOKRC1A5  IFILE     SQL, FIXED=278, KEY="U67-74,75-82,1-8"
BOKRC1A6  IFILE     SQL, FIXED=278, KEY="U9-16,1-8"
BOKRC1A7  IFILE     SQL, FIXED=278, KEY="U115-117,51-58,1-8"
.
.Name     Type      Length  Phys.  Start  Description           
.-------  -----     ------  -----  -----  -------------------------------
DBKREBOO  DIM       8         8        1  Booking/Admission No.
BKREURNO  DIM       8         8        9  U/R Number
BKRESNAM  DIM       20       20       17  Surname
BKRELOCK  DIM       2         2       37  Lock variable
BKREADOC  DIM       6         6       39  Attending Doctor
BKRESDOC  DIM       6         6       45  Referring Doctor
BKREEDAT  DIM       8         8       51  Expected due date (CCYYMMDD)
BKREATIM  DIM       8         8       59  Expected assessment time
BKREPDAT  DIM       8         8       67  Pre-assessment date
BKREPTIM  DIM       8         8       75  Pre-assessment time
BKREADAT  DIM       8         8       83  Procedure Date (Date booking was)
.                                                         made for)
BKRETYPE  DIM       3         3       91  Booking type (Cat "BK")
BKRECANC  DIM       3         3       94  Cancellation reason (Cat "BC")
BKRESTAT  FORM      1         2       97  Booking status
.                                           0 = Booked
.                                           1 = Pre-admitted
.                                           2 = Cancelled
.                                           3 = Admitted
.                                           4 = Discharged
BKREOMEM  DIM       1         1       99  Benefit fund member (Y/N/U)
BKREPREV  DIM       1         1      100  Previous inpatient (Y/N/U)
BKREACCM  DIM       3         3      101  Preferred accommodation (Cat BP)
BKREPROC  DIM       9         9      104  Waiting list procedure code
DBKRECNT  DIM       2         2      113  Waiting list procedure count
BKREWARD  DIM       3         3      115  Expected ward
BKREADMN  FORM      8         5      118  Maternity admission number
BKREPREA  DIM       1         1      123  Deposit paid (Y/N) Matern only
BKREEBED  DIM       3         3      124  Expected bed
BKRECLSS  DIM       3         3      127  Patient Cat./Adm Class. (Cat P)
BKREATYP  DIM       3         3      130  Adm Type/Pat. Class (Cat A)
BKREDEPT  DIM       3         3      133  Department (Cat AC)
BKRETDOC  DIM       6         6      136  Associated Doctor    
BKRECLMT  DIM       3         3      142  Claim type (Cat CL)  
BKRERFGP  DIM       10        10     145  Referring GP
BKREGPPC  DIM       6         6      155  GP Practice code
BKREGPFA  DIM       20        20     161  GPFH Approval Number
BKRERESI  DIM       3         3      181  Resident Status (Cat T)
BKREEATY  DIM       3         3      184  Elective Admission Type  (Cat CC)
BKREECRA  DIM       20        20     187  ECR Approval Number
BKREGPPT  DIM       2         2      207  GP Practice count
BKREDOFR  DIM       3         3      209  District of Residence (Cat DA)
BKREOPER  DIM       4         4      212  Operator who made I/P Booking
DBKREELO  DIM       3         3      216  Expected Length of Stay (Days)
BKREBKDT  DIM       8         8      219  System Date (Date the booking was
.                                                      actually made)
BKREINDC  DIM       1         1      227  Pre-admission movement indicator
BKRESPAR  DIM       50        50     228  Spare
.End of record                       278
.
. Redefine form field keys
. ------------------------
BKREBOOK  FORM      8
BKRECNT   FORM      2
BKREELOS  FORM      3
.
