. *****************************************************************************
. *                                                                           *
. * Include Name  : LEGMAAFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Outpatients                   *
. *                 Clinic Master Table A                                     *
. *                 Legacy Visits                                             *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : legmasaf.dat                                              *
. *                                                                           *
. * Keys          : KEY 18  KEY 22  KEY 24                                    *
. *                                                                           *
. * Modifications :                                                           *
. *       V9.03.00  05/05/2004  Ebon Clements    CAR 49209                    *
. *                 Ported from 6.11                                          *
. *                                                                           *
. *****************************************************************************
.
LEGMASA1  IFILE     SQL, FIXED=336, KEY="U1-6,7-12,19-19,20-24"
LEGMASA2  IFILE     SQL, FIXED=336, KEY="U1-6,13-18,7-12,19-19,20-24"
LEGMASA3  IFILE     SQL, FIXED=336, KEY="U1-6,134-137,7-12,19-19,20-24"
.
.NAME     TYPE   LENGTH  PHYSICAL  START  DESCRIPTION
.----     ----   ------  --------  -----  -----------
LOMASITE   DIM       6         6        1  SITE ID
LOMACLIN   DIM       6         6        7  CLINIC ID
LOMATYP    DIM       6         6       13  CLINIC TYPE
DLOMADAY   DIM       1         1       19  DAY INDICATOR 1 = MONDAY
.                                                       2 = TUESDAY
.                                                       3 = WEDNESDAY
.                                                       4 = THURDAY
.                                                       5 = FRIDAY
.                                                       6 = SATURDAY
.                                                       7 = SUNDAY
LOMASTAR   DIM       5         5       20  START TIME            (HH:MM)
LOMAFIN    DIM       5         5       25  FINISH BOOKING TIME   (HH:MM)
LOMAEND    DIM       5         5       30  END SESSION TIME      (HH:MM)
LOMACIND   DIM       3         3       35  CLINIC INDICATOR (CI) M=MEDICAL
.                                                               N=NON-MEDICAL
LOMAREG    DIM       1         1       38  REGISTRAR'S CLINIC(Y/N)
LOMAKDOC   DIM       1         1       39  KEYIN DOCTOR (Y/N)
LOMACOM1   DIM       40        40      40  COMMENTS LINE 1 
LOMACOM2   DIM       40        40      80  COMMENTS LINE 2 
LOMADURN   FORM      3         3      120  SLOT DURATION (MINS)
LOMANEWS   FORM      1         2      123  # OF SLOTS FOR A NEW PATIENT
LOMASPCS   FORM      1         2      125  # OF SLOTS FOR A SPECIAL PATIENT
LOMASTAT   FORM      1         2      127  STATUS   0 = ACTIVE   
.                                                  1 = NON ACTIVE
LOMAFREQ   DIM       5         5      129  SESSION FREQUENCY  (MONTHLY)
DLOMASEQ   DIM       4         4      134  REPORT SEQUENCE
LOMALOCK   DIM       2         2      138  PORT NO. FOR LOCKING
LOMAFREF   FORM      1         2      140  SESSION FREQUENCY FLAG
.                                               0 = MONTHLY
.                                               1 = YEARLY
LOMAFREY   DIM       52        52     142  SESSION FREQUENCY  (YEARLY)
LOMADATE   DIM       8         8      194  LAST SESSION DATE OPENED
LOTMAAVI   DIM       1         1      202  Allocate visit type when booking ?
.                                           'Y' = Yes; otherwise No
LOTMASTV   DIM       1         1      203  Slot times visit type controlled ?
.                                           'Y' = Yes; otherwise No
LOTMASUP   DIM       1         1      204  Suppress extended slots on displays ?
.                                           'Y' = Yes; otherwise No
LOTMARUS   DIM       1         1      205  Using RUS Automated Extract
.                                           0=No, 1=Yes
LOTMADCM   DIM       1         1      206  Display Comments at Booking Time
.                                           0=No, 1=Yes
LOTMAIXT   DIM       1         1      207  Input EXTRA screen when Attending ?
.                                           'Y' = Yes; otherwise No
LOTMADEF   DIM       6         6      208  Default Doctor Code
LOTMAUAT   DIM       1         1      214  Using Attendance Register (Y/N) ?
.                                           0=No, 1=Yes
LOTMADDN   FORM      2         2      215  Disch. pat. after x no. of days
LOTMANDR   FORM      2         2      217  No. of days for reappointment 
LOTMALPT   FORM      3         3      219  Letter to pat. on reappointment 
LOTMALGP   FORM      3         3      222  Letter to GP on discharge
LOTMALPD   FORM      3         3      225  Letter to pat. on discharge
LOTMABKL   FORM      3         3      228  Standard Booking Letter
LOTMARAL   FORM      3         3      231  Standard Reappointment Letter
LOTMARSL   FORM      3         3      234  Standard Reschedule Letter (Patient)
LOTMACLS   DIM       6         6      237  Clinic Session
LOTMAHOS   DIM       3         3      243  Hospital code
LOTMACLO   DIM       30        30     246  Clinic Location
LOTMAWDC   DIM       1         1      276  Ward Clinic ? Y = yes , N = no
LOTMAWAR   DIM       3         3      277  Ward code if a ward clinic
LOTMALTY   DIM       3         3      280  Location Type (Category CT)
LOTMADFS   DIM       1         1      283  Default value for send letter 
LOTMADFG   DIM       1         1      284  Generate case notes on attendance(Y/N)
LOTMAGRP   DIM       1         1      285  Group Session (Y/N) ?
.                                             0=No, 1=Yes
DLOTMASO   DIM       1         1      286  Security Level to Overbook
DLOTMANO   DIM       2         2      287  Number of overbookings allowed
DLOTMASF   DIM       1         1      289  Security Level to Forcebook
DLOTMASL   DIM       1         1      290  Security Level to use Reserved slots 
LOTMASBK   DIM       2         2      291  Booking Label Screen ID
LOTMASAP   DIM       2         2      293  Appointment Label Screen ID
LOTMASPM   DIM       2         2      295  PMI Mailing Label Screen ID
LOTMASGP   DIM       2         2      297  G.P. Mailing Label Screen ID
DLOTMALP   DIM       3         3      299  Letter to Patient on Cancellation
DLOTMASR   DIM       3         3      302  Standard Reschedule Letter (Hospital)
DLOTMANC   DIM       1         1      305  Non-Consultant Clinic (Y/N) ?
.                                             0=No, 1=Yes
DLOTMAMU   DIM       1         1      306  Multiple Bookings (Y/N) ?
.                                             0=No, 1=Yes
LOTMASPA   DIM       29        29     307  Spare variable
.
.End of Record                       336
.
. Redefine form fields from key
. -----------------------------
LOMADAY    FORM      1         DAY INDICATOR 1 = MONDAY
.                                           2 = TUESDAY
.                                           3 = WEDNESDAY
.                                           4 = THURDAY
.                                           5 = FRIDAY
.                                           6 = SATURDAY
.                                           7 = SUNDAY
LOMASEQ    FORM      4         REPORT SEQUENCE
LOTMASOV   FORM      1         Security Level to Overbook
LOTMANOO   FORM      2         Number of overbookings allowed
LOTMASLF   FORM      1         Security Level to Forcebook
LOTMASLR   FORM      1         Security Level to use Reserved slots 
LOTMALPP   FORM      3         Letter to Patient on Cancellation
LOTMASRL   FORM      3         Standard Reschedule Letter (Hospital)
LOTMANCO   FORM      1         Non-Consultant Clinic
LOTMAMUL   FORM      1         Multiple Bookings
.
.  Save variables
.
LSOMASIT   DIM       6         SITE ID
LSOMACLI   DIM       6         CLINIC ID
LSOMATYP   DIM       6         CLINIC TYPE
LSOMADAY   FORM      1         DAY INDICATOR
LSOMASTR   DIM       5         START TIME (HH:MM)
LSOMASEQ   FORM      4         REPORT SEQUENCE  
+
.

