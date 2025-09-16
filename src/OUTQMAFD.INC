.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   OUTQMAFD.INC                                  *
.  *                                                                      *
.  *  Function          :   Queueing Clinic Master Details Message File   *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   outqmaaf.dat                                  *
.  *                                                                      *
.  *  Keys              :                                                 *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *               V10.05.01 16/07/2014  Enon Clements  CAR 251384        *
.  *                         Added OTMATCOD                               *
.  *               V10.03.01 03/01/2012  Davin CAR 252936                 *
.  *                         Created FD                                   *
.  *                                                                      *
.  ************************************************************************
.
.Data File Definition
.--------------------
OUTQMAA1   IFILE SQL, FIXED=655, KEY="U1-20"
.
.Name      Type   Length Physical   Start  Description
.----      ----   ------ --------   -----  -----------
DOTQMMES   DIM      20        20        1  Message Id
.
.          OUTMA1FD variables
.
.OMASITE   DIM       6         6       21  SITE ID
.OMACLIN   DIM       6         6       27  CLINIC ID
.OMATYP    DIM       6         6       33  CLINIC TYPE
.OMADAY    FORM      1         2       39  DAY INDICATOR 1 = MONDAY
.                                                        2 = TUESDAY
.                                                        3 = WEDNESDAY
.                                                        4 = THURDAY
.                                                        5 = FRIDAY
.                                                        6 = SATURDAY
.                                                        7 = SUNDAY
.
.OMASTART  DIM       5         5       41  START TIME            (HH:MM)
.OMAFIN    DIM       5         5       46  FINISH BOOKING TIME   (HH:MM)
.OMAEND    DIM       5         5       51  END SESSION TIME      (HH:MM)
.
.OMACIND   DIM       3         3       56  CLINIC INDICATOR (CI) M=MEDICAL
.                                                                N=NON-MEDICAL
.OMAREG    DIM       1         1       59  REGISTRAR'S CLINIC(Y/N)
.OMAKDOC   DIM       1         1       60  KEYIN DOCTOR (Y/N)
.OMACOM1   DIM       40        40      61  COMMENTS LINE 1
.OMACOM2   DIM       40        40     101  COMMENTS LINE 2
.OMADURN   FORM      3         3      141  SLOT DURATION (MINS)
.OMANEWSL  FORM      1         2      144  # OF SLOTS FOR A NEW PATIENT
.OMASPCSL  FORM      1         2      146  # OF SLOTS FOR A SPECIAL PATIENT
.OMASTAT   FORM      1         2      148  STATUS   0 = ACTIVE
.                                                   1 = NON ACTIVE
.OMAFREQM  DIM       5         5      150  SESSION FREQUENCY  (MONTHLY)
.DOMASEQ   DIM       4         4      155  REPORT SEQUENCE
.OMALOCK   DIM       2         2      159  PORT NO. FOR LOCKING
.OMAFREQF  FORM      1         2      161  SESSION FREQUENCY FLAG
.                                               0 = MONTHLY
.                                               1 = YEARLY
.OMAFREQY  DIM       52        52     163  SESSION FREQUENCY  (YEARLY)
.OMADATE   DIM       8         8      215  LAST SESSION DATE OPENED
.OTMAAVIS  DIM       1         1      223  Allocate visit type when booking ?
.                                           'Y' = Yes; otherwise No
.OTMASTVT  DIM       1         1      224  Slot times visit type controlled ?
.                                           'Y' = Yes; otherwise No
.OTMASUPX  DIM       1         1      225  Suppress extended slots on displays ?
.                                           'Y' = Yes; otherwise No
.OTMARUSE  DIM       1         1      226  Using RUS Automated Extract
.                                           0=No, 1=Yes
.OTMADCMB  DIM       1         1      227  Display Comments at Booking Time
.                                           0=No, 1=Yes
.OTMAIXTA  DIM       1         1      228  Input EXTRA screen when Attending ?
.                                           'Y' = Yes; otherwise No
.OTMADEFD  DIM       6         6      229  Default Doctor Code
.OTMAUATR  DIM       1         1      235  Using Attendance Register (Y/N) ?
.                                           0=No, 1=Yes
.OTMADDNA  FORM      2         2      236  Disch. pat. after x no. of days
.OTMANDRP  FORM      2         2      238  No. of days for reappointment
.OTMALPTR  FORM      3         3      240  Letter to pat. on reappointment
.OTMALGPD  FORM      3         3      243  Letter to GP on discharge
.OTMALPTD  FORM      3         3      246  Letter to pat. on discharge
.OTMABKLT  FORM      3         3      249  Standard Booking Letter
.OTMARALT  FORM      3         3      252  Standard Reappointment Letter
.OTMARSLT  FORM      3         3      255  Standard Reschedule Letter (Patient)
.OTMACLSE  DIM       6         6      258  Clinic Session
.OTMAHOSP  DIM       3         3      264  Hospital code
.OTMACLOC  DIM       30        30     267  Clinic Location
.OTMAWDCL  DIM       1         1      297  Ward Clinic ? Y = yes , N = no
.OTMAWARD  DIM       3         3      298  Ward code if a ward clinic
.OTMALTYP  DIM       3         3      301  Location Type (Category CT)
.OTMADFSL  DIM       1         1      304  Default value for send letter
.OTMADFGN  DIM       1         1      305  Generate case notes on attendanc(Y/N)
.OTMAGRPS  DIM       1         1      306  Group Session (Y/N) ?
.                                             0=No, 1=Yes
.DOTMASOV  DIM       1         1      307  Security Level to Overbook
.DOTMANOO  DIM       2         2      308  Number of overbookings allowed
.DOTMASLF  DIM       1         1      310  Security Level to Forcebook
.DOTMASLR  DIM       1         1      311  Security Level to use Reserved slots
.OTMASBKL  DIM       2         2      312  Booking Label Screen ID
.OTMASAPL  DIM       2         2      314  Appointment Label Screen ID
.OTMASPMM  DIM       2         2      316  PMI Mailing Label Screen ID
.OTMASGPM  DIM       2         2      318  G.P. Mailing Label Screen ID
.DOTMALPP  DIM       3         3      320  Letter to Patient on Cancellation
.DOTMASRL  DIM       3         3      323  Standard Reschedule Letter (Hospital)
.DOTMANCO  DIM       1         1      326  Non-Consultant Clinic (Y/N) ?
.                                             0=No, 1=Yes
.OTMALOCN  DIM       4         4      327  Location of Clinic
.OTMADTCO  DIM       8         8      331  Date Clinic Created
.OTMADTCC  DIM       8         8      339  Date Clinic Closed
.OTMAINS1  DIM      40        40      347  Instruction 1
.OTMAINS2  DIM      40        40      387  Instruction 2
.OTMAINS3  DIM      40        40      427  Instruction 3
.OTMALSER  DIM       3         3      467  Series booking letter
.OTMAUMCI  DIM       1         1      470  Using Medclaims (Y/N) ?
.                                             0=No, 1=Yes
.OTMAPROV  DIM      10        10      471  Provider Number
.OTMAMBST  DIM       4         4      481  Default CMBS item Template ID
.OTMAROOM  DIM       3         3      485  Room Number
.OTMALEDG  DIM       2         2      488  Ledger
.OTMACCTR  DIM      12        12      490  Cost centre
.OTMAMPRC  DIM       6         6      502  Medical Practice Code
.OTMAMBSA  DIM       1         1      508  Apply CMBS template to booking
.                                          0=No, 1=Yes
.OTMALDNA  DIM       3         3      509  Non Attendance Letter
.OTMAADEP  DIM       3         3      512  Allied Health Department
.OTMACENC  DIM       1         1      515  Collect Encounter Details
.                                          0=No, 1=Yes
.OTMACCAR  DIM       1         1      516  Collect Carer Details
.                                          0=No, 1=Yes
.OTMACTRN  DIM       1         1      517  Collect Transport Details
.                                          0=No, 1=Yes
.OTMADPSL  DIM       3         3      518  No. of Days Prior to Send Letter
.OTMACPMI  DIM       1         1      521  Using Confirm PMI
.                                          0=No, 1=Yes
.OTMACPAG  DIM       1         1      522  Using Check in Page
.                                          0=No, 1=Yes
.OTMACTEL  DIM       20        20     523  Clinic Telephone Number
.OTMANMDS  DIM       3         3      543  NMDS Code (Category NM)
.OTMACART  DIM       3         3      546  Care Type (Category CC)
.OTMASRVD  DIM       3         3      549  Service Delivery Mode (Category sd)
.OTMACLHR  DIM       1         1      552  Clinical High Risk
.                                          0=No, 1=Yes
.OTMAMLTD  DIM       1         1      553  Multidisciplinary Clinic
.                                          0=No, 1=Yes
.OTMAXPUL  DIM       1         1      554  Exclude from Pulling List
.                                          0=No, 1=Yes
.OTMATCOD  DIM       3         3      555  Tier 2 Code (category NC)
OTQMSPAR   DIM      97        97      558  Spare
.
.End of Record                        655
.
.Redefine Key Variables
.----------------------
OTQMMESI   FORM      20
