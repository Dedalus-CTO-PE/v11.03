. *****************************************************************************
. *                                                                           *
. * Include Name  : OUTBB1FD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Outpatients                   *
. *                    Clinic Session Booking Table B                         *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : outbb1af.dat                                              *
. * Audit Name    : outaudb1.dat                                              *
. *                                                                           *
. * Keys          : KEY 8, KEY 16 ,KEY19                                      *
. *                                                                           *
. * Modifications :                                                           *
. *  **** Programmer Note **************                                      *
. *       Any changes to this FD may also need to be made in OUTQUEFD.        *
. *       Please check this before proceeding.                                *
. *                                                                           *
. *****************************************************************************
. *      V11.02.01  08/02/2022  Thanh T          TSK 0905641                  *
. *                 Added  Added Additional HCP Code (1-4)                    *
. *      V10.13.01  02/10/2018  Thanh T          TSK 0859743                  *
. *                 Added OTBBBKOV OTBBBKPR OTBBBKPM OTBBBKBA OTBBRDAT        *
. *****************************************************************************
. *      V10.06.01  16/03/2015  Ebon Clements    CAR 298291                   *
. *                 Changed OTBBADCS from DIM 6 to DIM 10                     *
. *      V10.05.02  07/08/2014  Ania P           CAR 303879                   *
. *                 Added variable OTBBPURC                                   *
. *      V10.05.01  16/07/2014  Ebon Clements    CAR 251384                   *
. *                 Added OTBBTCOD Tier 2 Code (category NC)                  *
. *      V10.04.01  26/02/2014  Steve Armstrong  CAR 208234                   *
. *                 Added OTBBCONT                                            *
. *****************************************************************************
. *      V10.02.02  24/06/2011  Ebon Clements CAR 242246                      *
. *                 Added OTBBNMDS to OTBBCLHR                                *
. *      V10.02.01  23/05/2011  Ebon Clements CAR 239554                      *
. *                 Added OTBBSNGL - Send Generate Letter (Y/N)               *
. *      V10.01.01  15/03/2011  Davin         CAR 239554                      *
. *                 Added OTBBGLDT - Generate Letter Date                     *
. *       V9.05.01  23/03/2006  Ebon Clements CAR 79277                       *
. *                 Added OTBBSCAR - Send correspondence to carer             *
. *       V9.05.B01 02/02/2006  Ebon Clements CAR 75599                       *
. *                 Changed OTBBRFGP and OTBBGPPC to DIM 10.                  *
. *                 Changed file length to 319                                *
. *       V9.02.03  31/01/2003  Lina Vo   Defect 22709                        *
. *                 Add audit file suffix variable FILAUBB1                   *
. *       V9.02.02  26/10/2001  BGA                                           *
. *                 Added OTBBFLUP                                            *
. *       V9.02.01  18/10/2001  J.Tan                                         *
. *                 Added Clinic indicator (category CI)                      *
. *       V5.10.B00 23/04/2001  Dean Cramer                                   *
. *                 Include Special Arrangements variable (category cs)       *
. *       V5.09.B01 01/02/2001  Greg Horvat                                   *
. *                 Removed the save variables as they werent used            *
. *                                                                           *
. *                 03.05.89 H.Donnard   (IBA)                                *
. *                 Change include heading                                    *
. *                 03.06.89 S.Barcham   (IBA)                                *
. *                 Split include                                             *
. *                 06.06.89 E.Phan      (IBA)                                *
. *                 Added 2nd key, OBBPORT, OBBBOOK & OBBCTYP                 *
. *                 07.08.89 K. Peak     (IBA)                                *
. *                 Added User Defined Fields                                 *
. *                 28/11/89 Steve O'Gorman                                   *
. *                 Added OBALADMN                                            *
. *                 22/01/90  E.Phan  SRF 103335                              *
. *                 Reduced size of OBASPARB due to OBALADMN                  *
. *                 03/07/90  Paul Duncan SRF105033                           *
. *                 Added audit variables and key                             *
. *                 06/02/1992    Justin Coates  (Southland changes)          *
. *                 Change comments for OBBBOOK                               *
. *                 22/02/1992    Whirlpool      (Dudley Changes)             *
. *                 Added OTBBADSC,OTBBCITM,OTBBASTM,OTBBDPTM & OTBBOUTC      *
. *                 28/10/1993    Justin Coates  (GP Practice changes)        *
. *                 added OTBBGPPT                                            *
. *                 07/03/1994    Justin Coates  SRF 440719                   *
. *                 added OTBBDOFR                                            *
. *                 13/10/1995   Howellsy         suht                        *
. *                 added otbboper                                            *
. *                 21/04/1997   Howellsy         rha                         *
. *                 added otbbrank,obousr5-8                                  *
. *                 23/11/1998  Steve Armstrong                               *
. *                 Added OTBBCLAL to bring into line with OUTBB1FD           *
. *****************************************************************************
.
.Audit File Definition
.---------------------
.
OUTAUBB1  IFILE     SQL, FIXED=400, KEY="D1-8,9-16,17-18,19-19"
FILAUBB1  INIT      "audb1"
.
OTBBAUDD    DIM      8       8         1       Date of Change
OTBBAUDT    DIM      8       8         9       Time of Change
OTBBAUDP    DIM      2       2        17       Port Doing Change
OTBBAUDR    DIM      1       1        19       Record Type
.                                                 A = Added Record
.                                                 B = Before Change Record
.                                                 C = After Change Record
.                                                 D = Deleted Record
OTBBAUDS    FORM     1       2        20       Record Status
.                                                 1 = Not Printed
.                                                 2 = Printed
OTBBAUDO    DIM      4       4        22       Operator ID of Change
OTBBSITE    DIM      6       6        26       site
.
.
.Data File Definition
.--------------------
.
OUTBB1A1  IFILE     SQL, FIXED=369, KEY="U1-8"
OUTBB1A2  IFILE     SQL, FIXED=369, KEY="U79-86,1-8"
FILBB1A1  INIT      "bb1af"
FILBB1A2  INIT      "bb1af"
.
.NAME     TYPE    LENGTH  PHYSICAL  START  DESCRIPTION
.----     ----    ------  --------  -----  -----------
.DOBAOUTN DIM       8        8         1   Outpatient Number
OBASRCR   DIM       3        3         9   Source of Referral (S)      
OBACOMP   DIM       3        3         12  Compensation Eligibility (CL)
OBACLASS  DIM       3        3         15  Patient Classification (A )
OBAINS    DIM       3        3         18  Insurance Status (U1)
OBAATTN   DIM       3        3         21  Attendance Code (CA)
OBADOCT   DIM       6        6         24  Doctor's Code
OBACOMM   DIM       25       25        30  Comments
OTBBFUND  DIM       6        6         55  Health fund code
OTBBTBLE  DIM       8        8         61  Health fund table
DOTBBPVI  DIM       3        3         69  No. of prev. visits charged
OTBBCLAL  DIM       3        3         72  Clinic Allocation (OX) (Anne Caudle)
OTBBSPAR  DIM       4        4         75  Spare variable
.OBADATE  DIM       8        8         79  Date (CCYYMMDD)
OBACAT    DIM       3        3         87  Patient Category (P )
OBAPRTY   DIM       3        3         90  Priority Code (PR)
OBARSCHD  DIM       3        3         93  Reason for Reschedule (RR)
OBBPORT   DIM       2        2         96  Port No. accessing this record
OBBBOOK   DIM       1        1         98  Non-booked attendee flag
.                                            " " = Booked attendee
.                                            "N" = Non-booked attendee, no slot
.                                            "S" = Non-booked attendee with slot
OBBCTYP   DIM       6        6         99  Clinic type for tracking NBA.s
OBOUSR1   DIM       3        3        105  User Defined Field 1 (O1)
OBOUSR2   DIM       3        3        108  User Defined Field 2 (O2)
OBOUSR3   DIM       3        3        111  User Defined Field 3 (O3)
OBOUSR4   DIM       3        3        114  User Defined Field 4 (O4)
OBALADMN  DIM       8        8        117  Linked Outpatient Visit Number
.                                          from re-appointments module
OTBBDEPT  DIM       3        3        125  Department code (Cat AC)
OTBBTRAN  DIM       3        3        128  Transport Allocation (Cat OB)
OTBBLNGI  DIM       3        3        131  Language of Interpreter (Cat OL)
OTBBTMFS  DIM       8        8        134  Time First Seen
OTBBTMBO  DIM       8        8        142  Time Booked Out
OTBBGPFA  DIM       20       20       150  GPFH Approval Number
OTBBECRA  DIM       20       20       170  ECR Approval Number
OTBBRFGP  DIM       10       10       190  Referring GP
OTBBGPPC  DIM       10       10       200  GP Practice Code
OTBBADCS  DIM       10       10       210  Actual Doctor Seen
OTBBCITM  DIM       5        5        220  Check In Time
OTBBASTM  DIM       5        5        225  Time Actually Seen
OTBBDPTM  DIM       5        5        230  Time of Departure
OTBBOUTC  DIM       3        3        235  Outcome    (CAT OZ)
OTBBSNDL  DIM       1        1        238  Send Letter (Notify GP) (Y/N)
OTBBGPPT  DIM       2        2        239  GP Practice count
OTBBDOFR  DIM       3        3        241  District of Residence (Cat DA)
OTBBOPER  DIM       4        4        244  Operator who made O/P Book/Re-app
OBOUSR5   DIM       3        3        248  User Defined Field 5 (O5)
OBOUSR6   DIM       3        3        251  User Defined Field 6 (O6)
OBOUSR7   DIM       3        3        254  User Defined Field 7 (O7)
OBOUSR8   DIM       3        3        257  User Defined Field 8 (O8)
OTBBRANK  DIM       6        6        260  Patient Rank
OTBBSPCA  DIM       3        3        266  Special Arrangements (Cat SA)
OTBBCIND  DIM       3        3        269  Clinic Indicator (CI) M=MEDICAL
.                                                                N=NON-MEDICAL
OTBBFLUP  DIM       1        1        272  Follow Up App. Made Flag 1=Yes
OTBBSCAR  DIM       1        1        273  Send Correspondence to Carer 
.                                          0=No 1=Yes
OTBBGLDT  DIM       8        8        274  Generate Letter Date (ccyymmdd)
OTBBSNGL  DIM       1        1        282  Send Generate Letter (Y/N)
.                                          0=No, 1=Yes, 2=N/A
OTBBNMDS  DIM       3        3        283  NMDS Code (Category NM)
OTBBCART  DIM       3        3        286  Care Type (Category CC)
OTBBSRVD  DIM       3        3        289  Service Delivery Mode(Cat sd)
OTBBCLHR  DIM       1        1        292  Clinical High Risk
.                                          0=No, 1=Yes
OTBBCONT  DIM       3        3        293  Contract Code (Cat gb)
OTBBTCOD  DIM       3        3        296  Tier 2 Code (category NC)
OTBBPURC  DIM       3        3        299  Health Purchaser (Cat HP)
OTBBBKOV  DIM       3        3        302  Referral Override (Cat ro)
OTBBBKPR  DIM       3        3        305  Referral Period (Cat RF)
OTBBBKPM  DIM       2        2        308  Referral Period Months (1-98)
OTBBBKBA  DIM       1        1        310  Benefit Assignment Authorised
.                                           0 or Blank - No
.                                           1 - Yes
OTBBRDAT  DIM       8        8        311  Date of Referral (CCYYMMDD)
OTBBHCP1  DIM       10       10       319  Additional HCP 1 Code
OTBBHCP2  DIM       10       10       329  Additional HCP 2 Code
OTBBHCP3  DIM       10       10       339  Additional HCP 3 Code
OTBBHCP4  DIM       10       10       349  Additional HCP 4 Code
OTBBSPR1  DIM       10       10       359  Spare
.
.End of Record                        369
.
OTBBPVIS  FORM      3         * redefine for number of visits
.
. Note following fields are defined in OUTBOAFD.INC
.
.OBAOUTNO FORM      8
.OBADATE  DIM       8
