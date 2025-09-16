. *****************************************************************************
. *                                                                           *
. * Include Name  : OUTMA1FD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Outpatients                   *
. *                 Clinic Master Table A                                     *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : outma1af.dat                                              *
. *                                                                           *
. * Keys          : KEY 18, KEY 22, KEY 24                                    *
. *                                                                           *
. * Modifications :                                                           *
. *  **** Programmer Note **************                                      *
. *       Any changes to this FD may also need to be made in OUTQUEFD.        *
. *       Please check this before proceeding.                                *
. *                                                                           *
. *****************************************************************************
. *      V11.02.01  08/02/2022  Thanh T        TSK 00905641                   *
. *                 Added  Added Additional HCP Code (1-4)                    *
. *****************************************************************************
. *      V11.00.01  30/04/2020  Ebon Clements  TSK 0876663                    *
. *                 Added OTMAAOPN to OTMAAOWA                                *
. *      V10.13.01  24/07/2018  Peter Vela     TSK 0833256                    *
. *                 Added new option to OTMACENC                              *
. *                 2=Yes plus DNA                                            *
. *      V10.11.01  10/11/2017  Davin          TSK 0846915                    *
. *                 Added fields OTMAHCLI & OTMAHCAI                          *
. *      V10.05.01  16/07/2014  Ebon Clements  CAR 251384                     *
. *                 Added OTMATCOD Tier 2 Code (category NC)                  *
. *      V10.04.01  18/12/2013  Ania P         CAR 294350                     *
. *                 Moved OTMAMREF out of SPARE                               *
. *      V10.03.01  18/02/2013  Ebon Clements  CAR 277862                     *
. *                 Added OTMAMREF as part of spare                           *
. *      V10.02.04  15/07/2011  Peter McMullen CAR 246597                     *
. *                 Added OTMAXPUL  (exclude from pulling list)               *
. *      V10.02.03  23/06/2011  Ebon Clements CAR 242246                      *
. *                 Added OTMACTEL to OTMAMLTD                                *
. *      V10.02.02  16/06/2011  Ebon Clements CAR 239534                      *
. *                 Added OTMACPAG - Using Check in Page                      *
. *      V10.02.01  03/06/2011  Ebon Clements CAR 239525                      *
. *                 Added OTMACPMI - Using Confirm PMI                        *
. *      V10.01.01  15/03/2011  Davin         CAR 239554                      *
. *                 Added OTMADPSL - No. of Days Prior to Send Letter         *
. *       V9.08.01  06/10/2006  Ebon Clements CAR 121109                      *
. *                 Renamed SPARE OTMASPAR and added to IO                    *
. *       V9.07.01  18/08/2006  Ebon Clements CAR 110245                      *
. *                 Added OTMACTRN - Collect transport details                *
. *       V9.05.01  22/03/2006  Ebon Clements CAR 79277                       *
. *                 Added OTMACCAR - Collect Carer details                    *
. *       V9.05.B01 12/01/2006  Ebon Clements CAR 76341                       *
. *                 Added OTMAADEP and OTMACENC                               *
. *       V9.04.04  08/06/2005  Peter Vela    CAR 58732                       *
. *                 Added OTMALDNA Non Attendance Letter                      *
. *       V9.04.03  26/05/2005  Ebon Clements CAR 62018                       *
. *                 Added Apply CMBS template to booking                       *
. *       V9.04.02  31/01/2005  J.Tan        CAR 56702                        *
. *                 Added Provider number,Default CMBS item template,         *
. *                 Room number, Ledger and Cost centre                       *
. *       V9.04.01  27/01/2005  Davin        CAR 56663                        *
. *                 Added OTMAUMCI - Using Medclaims                          *
. *       V9.03.01  24/09/2003 Ebon Clements CAR 41801                        *
. *                 Added OTMALSER Series booking letter                      *
. *       V5.10.B00 23/04/2001  Dean Cramer                                   *
. *                 Added OTMADTCO Date Clinic Created                        *
. *                       OTMADTCC Date Clinic Closeda                        *
. *                       OTMAINS1 Instruction 1                              *
. *                       OTMAINS2 Instruction 2                              *
. *                       OTMAINS3 Instruction 3                              *
. *       V5.09.B02 05/02/2001  Bronko Sosic                                  *
. *                 Added OTMALOCN Location of clinic                         *
. *       V5.09.B01 01/02/2001  Greg Horvat                                   *
. *                 Removed the save variables as they werent used            *
. *                                                                           *
. *                 V5.00 03.05.89 H.Donnard   (IBA)                          *
. *                 Change include heading                                    *
. *                 03.06.89 S.Barcham   (IBA)                                *
. *                 Split include                                             *
. *                 30/07/1991    Justin Coates  Quote 6994 SRF 109232        *
. *                 Added OTMAAVIS, OTMASTVT, OTMASUPX                        *
. *                 02/07/1992    Justin Coates  SRF 115565                   *
. *                 Added OTMAIXTA                                            *
. *                 27/11/1992   Steve Armstrong Quote 7390  SRF 113265       *
. *                 Added OTMADEFD                                            *
. *                 04/01/1993   Graeme Williams             SRF 119697       *
. *                 Added OTMAUATR (Using Attendance Register ? (HK Change))  *
. *                 27/04/1993   Peter Eddey                                  *
. *                 Added OTMAWDCL (Ward clinic )                             *
. *                 Added OTMAWARD (Ward code if a ward clinic )              *
. *                 18/05/1993   Graeme Williams                              *
. *                 Added OTMALTYP (Location Type)                            *
. *                 25/10/1993   Justin Coates    (Dudley A&E changes)        *
. *                 Added OTMADFSL and OTMADFGN                               *
. *                 20/10/1995   Justin Coates    (SUHT mods)                 *
. *                 Added OTMASOVB to OTMANCON                                *
. *****************************************************************************
.
.    IO INC       OUTMA1IO
.
OUTMA1A1  IFILE     SQL, FIXED=678, KEY="U1-6,7-12,19-19,20-24"
OUTMA1A2  IFILE     SQL, FIXED=678, KEY="U1-6,13-18,7-12,19-19,20-24"
OUTMA1A3  IFILE     SQL, FIXED=678, KEY="U1-6,134-137,7-12,19-19,20-24"
FILMA1A1  INIT      "ma1af"
FILMA1A2  INIT      "ma1af"
FILMA1A3  INIT      "ma1af"
.
.NAME     TYPE   LENGTH  PHYSICAL  START  DESCRIPTION
.----     ----   ------  --------  -----  -----------
OMASITE   DIM       6         6        1  SITE ID
OMACLIN   DIM       6         6        7  CLINIC ID
OMATYP    DIM       6         6       13  CLINIC TYPE
DOMADAY   DIM       1         1       19  DAY INDICATOR 1 = MONDAY
.                                                       2 = TUESDAY
.                                                       3 = WEDNESDAY
.                                                       4 = THURDAY
.                                                       5 = FRIDAY
.                                                       6 = SATURDAY
.                                                       7 = SUNDAY
.
OMASTART  DIM       5         5       20  START TIME            (HH:MM)
OMAFIN    DIM       5         5       25  FINISH BOOKING TIME   (HH:MM)
OMAEND    DIM       5         5       30  END SESSION TIME      (HH:MM)
.
OMACIND   DIM       3         3       35  CLINIC INDICATOR (CI) M=MEDICAL
.                                                               N=NON-MEDICAL
OMAREG    DIM       1         1       38  REGISTRAR'S CLINIC(Y/N)
OMAKDOC   DIM       1         1       39  KEYIN DOCTOR (Y/N)
OMACOM1   DIM       40        40      40  COMMENTS LINE 1 
OMACOM2   DIM       40        40      80  COMMENTS LINE 2 
OMADURN   FORM      3         3      120  SLOT DURATION (MINS)
OMANEWSL  FORM      1         2      123  # OF SLOTS FOR A NEW PATIENT
OMASPCSL  FORM      1         2      125  # OF SLOTS FOR A SPECIAL PATIENT
OMASTAT   FORM      1         2      127  STATUS   0 = ACTIVE   
.                                                  1 = NON ACTIVE
OMAFREQM  DIM       5         5      129  SESSION FREQUENCY  (MONTHLY)
DOMASEQ   DIM       4         4      134  REPORT SEQUENCE
OMALOCK   DIM       2         2      138  PORT NO. FOR LOCKING
OMAFREQF  FORM      1         2      140  SESSION FREQUENCY FLAG
.                                               0 = MONTHLY
.                                               1 = YEARLY
OMAFREQY  DIM       52        52     142  SESSION FREQUENCY  (YEARLY)
OMADATE   DIM       8         8      194  LAST SESSION DATE OPENED
OTMAAVIS  DIM       1         1      202  Allocate visit type when booking ?
.                                           'Y' = Yes; otherwise No
OTMASTVT  DIM       1         1      203  Slot times visit type controlled ?
.                                           'Y' = Yes; otherwise No
OTMASUPX  DIM       1         1      204  Suppress extended slots on displays ?
.                                           'Y' = Yes; otherwise No
OTMARUSE  DIM       1         1      205  Using RUS Automated Extract
.                                           0=No, 1=Yes
OTMADCMB  DIM       1         1      206  Display Comments at Booking Time
.                                           0=No, 1=Yes
OTMAIXTA  DIM       1         1      207  Input EXTRA screen when Attending ?
.                                           'Y' = Yes; otherwise No
OTMADEFD  DIM       6         6      208  Default Doctor Code
OTMAUATR  DIM       1         1      214  Using Attendance Register (Y/N) ?
.                                           0=No, 1=Yes
OTMADDNA  FORM      2         2      215  Disch. pat. after x no. of days
OTMANDRP  FORM      2         2      217  No. of days for reappointment 
OTMALPTR  FORM      3         3      219  Letter to pat. on reappointment 
OTMALGPD  FORM      3         3      222  Letter to GP on discharge
OTMALPTD  FORM      3         3      225  Letter to pat. on discharge
OTMABKLT  FORM      3         3      228  Standard Booking Letter
OTMARALT  FORM      3         3      231  Standard Reappointment Letter
OTMARSLT  FORM      3         3      234  Standard Reschedule Letter (Patient)
OTMACLSE  DIM       6         6      237  Clinic Session
OTMAHOSP  DIM       3         3      243  Hospital code
OTMACLOC  DIM       30        30     246  Clinic Location
OTMAWDCL  DIM       1         1      276  Ward Clinic ? Y = yes , N = no
OTMAWARD  DIM       3         3      277  Ward code if a ward clinic
OTMALTYP  DIM       3         3      280  Location Type (Category CT)
OTMADFSL  DIM       1         1      283  Default value for send letter 
OTMADFGN  DIM       1         1      284  Generate case notes on attendance(Y/N)
OTMAGRPS  DIM       1         1      285  Group Session (Y/N) ?
.                                             0=No, 1=Yes
DOTMASOV  DIM       1         1      286  Security Level to Overbook
DOTMANOO  DIM       2         2      287  Number of overbookings allowed
DOTMASLF  DIM       1         1      289  Security Level to Forcebook
DOTMASLR  DIM       1         1      290  Security Level to use Reserved slots 
OTMASBKL  DIM       2         2      291  Booking Label Screen ID
OTMASAPL  DIM       2         2      293  Appointment Label Screen ID
OTMASPMM  DIM       2         2      295  PMI Mailing Label Screen ID
OTMASGPM  DIM       2         2      297  G.P. Mailing Label Screen ID
DOTMALPP  DIM       3         3      299  Letter to Patient on Cancellation
DOTMASRL  DIM       3         3      302  Standard Reschedule Letter (Hospital)
DOTMANCO  DIM       1         1      305  Non-Consultant Clinic (Y/N) ?
.                                             0=No, 1=Yes
OTMALOCN  DIM       4         4      306  Location of Clinic
OTMADTCO  DIM       8         8      310  Date Clinic Created
OTMADTCC  DIM       8         8      318  Date Clinic Closed
OTMAINS1  DIM      40        40      326  Instruction 1
OTMAINS2  DIM      40        40      366  Instruction 2
OTMAINS3  DIM      40        40      406  Instruction 3
OTMALSER  DIM       3         3      446  Series booking letter
OTMAUMCI  DIM       1         1      449  Using Medclaims (Y/N) ?
.                                             0=No, 1=Yes
OTMAPROV  DIM      10        10      450  Provider Number
OTMAMBST  DIM       4         4      460  Default CMBS item Template ID
OTMAROOM  DIM       3         3      464  Room Number
OTMALEDG  DIM       2         2      467  Ledger
OTMACCTR  DIM      12        12      469  Cost centre
OTMAMPRC  DIM       6         6      481  Medical Practice Code
OTMAMBSA  DIM       1         1      487  Apply CMBS template to booking
.                                         0=No, 1=Yes
OTMALDNA  DIM       3         3      488  Non Attendance Letter
OTMAADEP  DIM       3         3      491  Allied Health Department
OTMACENC  DIM       1         1      494  Collect Encounter Details
.                                         0=No, 1=Yes, 2=Yes plus DNA
OTMACCAR  DIM       1         1      495  Collect Carer Details
.                                         0=No, 1=Yes
OTMACTRN  DIM       1         1      496  Collect Transport Details
.                                         0=No, 1=Yes
OTMADPSL  DIM       3         3      497  No. of Days Prior to Send Letter
OTMACPMI  DIM       1         1      500  Using Confirm PMI
.                                         0=No, 1=Yes
OTMACPAG  DIM       1         1      501  Using Check in Page
.                                         0=No, 1=Yes
OTMACTEL  DIM       20        20     502  Clinic Telephone Number
OTMANMDS  DIM       3         3      522  NMDS Code (Category NM)
OTMACART  DIM       3         3      525  Care Type (Category CC)
OTMASRVD  DIM       3         3      528  Service Delivery Mode (Category sd)
OTMACLHR  DIM       1         1      531  Clinical High Risk
.                                         0=No, 1=Yes
OTMAMLTD  DIM       1         1      532  Multidisciplinary Clinic
.                                         0=No, 1=Yes
OTMAXPUL  DIM       1         1      533  Exclude from Pulling List  
.                                         0=No, 1=Yes
OTMAMREF  DIM       1         1      534  Mandatory Waiting/Active Referral
.                                         0=No, 1=Yes
OTMATCOD  DIM       3         3      535  Tier 2 Code (category NC)
OTMAHCLI  DIM       20        20     538  HERO Clinic Identifier
.                                         (SERVICE_PROVIDER_ID)
OTMAHCAI  DIM       20        20     558  HERO Campus Identifier
.                                         (SERVICE_EVENT_ATTRIBUTE_TYPE_CODE -
.                                         04 -
.                                         Service Location ID)
OTMAAOPN  DIM       1         1      578  Auto Open Clinic
.                                         Blank or 0 = No, 1 = Yes
OTMAAOFR  DIM       1         1      579  Auto Open Frequency
.                                         1 = Weekly, 2 = 2 Weekly, 4 = 4 Weekly
OTMAAOWM  DIM       5         5      580  Auto Open Week of Month
.                                         Blank or 0 = No, 1 = Yes            
.                                         Position 1 to 5 = Week 1 to 5
OTMAAOWA  DIM       3         3      585  Auto Open Number of Weeks in Advance
OTMAHCP1  DIM       10        10     588  Additional HCP 1 Code
OTMAHCP2  DIM       10        10     598  Additional HCP 1 Code
OTMAHCP3  DIM       10        10     608  Additional HCP 1 Code
OTMAHCP4  DIM       10        10     618  Additional HCP 1 Code
OTMASPAR  DIM       50        50     628  Spare characters
.
.End of Record                       678
.
.     The following field is stored in the spare variable
.
.
.  redefine form fields from key
.  -----------------------------
OMADAY    FORM      1         DAY INDICATOR 1 = MONDAY
.                                               2 = TUESDAY
.                                               3 = WEDNESDAY
.                                               4 = THURDAY
.                                               5 = FRIDAY
.                                               6 = SATURDAY
.                                               7 = SUNDAY
OMASEQ    FORM      4         REPORT SEQUENCE
OTMASOVB  FORM      1         Security Level to Overbook
OTMANOOB  FORM      2         Number of overbookings allowed
OTMASLFB  FORM      1         Security Level to Forcebook
OTMASLRV  FORM      1         Security Level to use Reserved slots 
OTMALPPC  FORM      3         Letter to Patient on Cancellation
OTMASRLH  FORM      3         Standard Reschedule Letter (Hospital)
OTMANCOC  FORM      1         Non-Consultant Clinic
.
