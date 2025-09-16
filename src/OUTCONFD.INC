.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : OUTCONFD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for Control File              *
.  *                                                                          *
.  *     File Type    : ASCII                                                 *
.  *                                                                          *
.  *     File Name    : controlf.txt                                          *
.  *                                                                          *
.  ****************************************************************************
.  *      V11.03.02 06/10/2023  Nikitha B            0903933                  *
.  *                Added OTCNA11N - Send A11 when Supervisor Attended to     *
.  *                Did Not Attend                                            *
.  *      V11.03.01 11/08/2023  PJ Le Febour         0857539                  *
.  *                Added OTCNTMES - Display Contact Times on Clinic Lists    *
.  *      V11.02.01 03/08/2022  Peter Vela           0887868                  *
.  *                Added OTCNOKIO - Using Outpatient Kiosk                   *
.  *                Added OTCNOKSY - Switch on Outpatient Kiosk Auto sync     *
.  *      V11.01.01 23/06/2021  Sunny            TSK 0893817                  *
.  *                Added OTCNGPSO - Outpat. letter GP & Practice source order*
.  *      V11.00.02 16/11/2020  J.Tan            TSK 0896724                  *
.  *                Added OTCNLCST - Display Ledger/Cost Centre on Clinic Mast*
.  *      V11.00.01 29/06/2020  Thanh T          TSK 0870618                  *
.  *                Added OTCNDTDY - Display Today button on Clinic Lists     *
.  ****************************************************************************
.  *      V10.15.01 02/12/2019  Ebon Clements    TSK 0881012                  *
.  *                Added OTCNFOLL - Follow Up Appointment Date Edit          *
.  ****************************************************************************
.  *      V10.14.01 04/03/2019  Thanh T.         TSK 0869558                  *
.  *                Added OTCNCKAR - Check for Appointment Requests when      *
.  *                making OP Appointments                                    * 
.  ****************************************************************************
.  *      V10.13.01 24/07/2018  Peter Vela       TSK 0833256                  *
.  *                Added OTCNDCCC - Display Colour Coding on Clinic Lists    *
.  *      V10.12.01 14/05/2018  Ania P           TSK 0845045                  *
.  *                Added OTCNDLAS/OUTCN034                                   *
.  *      V10.08.01 14/06/2016  Ebon Clements    TSK 0318672                  *
.  *                Added OTCNCASS - Count OP Program Visits By Ass. Number   *
.  *      V10.06.01 18/08/2015  Peter Vela       CAR 316627                   *
.  *                Added OTCNDSUS - Display Suspended Sessions in Clinic     *
.  *                Lists                                                     * 
.  *      V10.05.02 28/07/2014  Steve Armstrong  CAR 294204                   *
.  *                Added label layout value "15" to HOLABLAY (SJOG Geelong)  *
.  *      V10.05.01 22/07/2014  Ebon Clements     CAR 303362                  *
.  *                Added OTCNHSEC - Using Hospital Security Access in Multi  *
.  *                                 Hospital Outpatients                     *
.  ****************************************************************************
.  *      V10.03.03 05/12/2012  Ebon Clements     CAR 267173                  *
.  *                Added OTCNA03M - Sending HL7 A03 O/P Discharge            *
.  *                Added OTCNA13M - Sending HL7 A13 Cancel O/P Discharge     *
.  *      V10.03.02 24/01/2012  Mike Laming       CAR 200172                  *
.  *                Added OTCNRDWB - Remove DNA Warning on Booking            *
.  *      V10.03.01 18/01/2012  Davin             CAR 252936                  *
.  *                Added OTCNM01M - send HL7 M01 after clinic maintenance    *
.  ****************************************************************************
.  *      V10.02.02 17/05/2011  Ebon Clements     CAR 240720                  *
.  *                Added OTCNUREQ - Using Request O/P Appointments           *
.  *      V10.02.01 04/05/2011  Mike Laming       CAR 240720                  *
.  *                Added OTCNNODY - App'nt Request - purge after "No.of Days"*
.  ****************************************************************************
.  *      V10.00.02 09/06/2010  Mike Laming       CAR 215594                  *
.  *                Added OTCNDACI - Display Diagnosis & Complaint Ind.       *
.  *      V10.00.01 09/06/2010  Mike Laming       CAR 215594                  *
.  *                Added OTCNDACI - Display Diagnosis & Complaint Ind.       *
.  ****************************************************************************
.  *      V9.12.02  21/01/2010  Ebon Clements     CAR 214121                  *
.  *                Added OTCNINTR - Using visit based interpreter required   *
.  *      V9.12.01  03/08/2009  Peter Vela        CAR 202829                  *
.  *                Added OTCNREVC                                            *
.  ****************************************************************************
.  *      V9.11.02  02/03/2009  Ebon Clements     CAR 177234                  *
.  *                Added OTCNA05R and OTCNA08R                               *
.  *      V9.11.01  14/11/2008  Peter Vela        CAR 181690                  *
.  *                Added OTCNMTVS Multi Therapist View Start Display Time    *
.  *                Added OTCNMTVE Multi Therapist View End Display Time      *
.  ****************************************************************************
.  *      V9.04.07  24/11/2005  Davin S           CAR 64087                   *
.  *                Added OTCNA04M,OTCNA08M,OTCNA11M,OTCNA38M                 *
.  *      V9.04.06  18/10/2005  Steve Armstrong   CAR 64087                   *
.  *                Added OTCNA44M (change U/R for visit)                     *
.  *      V9.04.05  06/06/2005  Ebon Clements CAR 61334                       *
.  *                Add OTCNCFMT clinic selection list format                 *
.  *      V9.04.04  29/03/2005  Mike Laming   CAR 58922                       *
.  *                Add OTCNRSST (Reschedule to original Slot Type) to Sec.32 *
.  *      V9.04.03  28/01/2005  Steve Armstrong  CAR 59137                    *
.  *                Mods to change OTCNA04M to OTCNA05M                       *
.  *      V9.04.02  14/01/2005  Ebon Clements    CAR 53290                    *
.  *                Added OTCNRDTH                                            *
.  *      V9.04.01  22/09/2004  Steve Armstrong  CAR 53573                    *
.  *                Added OTCNDGCL                                            *
.  ****************************************************************************
.  *      V9.03.04  29/07/2004  Ebon Clements     CAR 19975                   *
.  *                Added OTCNAUPD - Auto update waiting list outpatient      *
.  *                review date                                               *
.  *      V9.03.03  24/06/2004  Steve Armstrong   CAR 51167                   *
.  *                Added OTCNA04M - PAS-CIS interface (O/P booking message)  *
.  *      V9.03.02  26/05/2004  Ebon Clements CAR 50186                       *
.  *                Added OTCNCSUM - Using clinic summary for appointment     *
.  *                search                                                    *
.  *      V9.03.01  01/07/2003  Ebon Clements CAR 40978                       *
.  *                Added OTCNCREV for converting slots to reviews when       *
.  *                bookings are cancelled or rescheduled                     *
.  *      V9.02.02  16/11/2001  Steve Armstrong                               *
.  *                Added OTCNDGOB                                            *
.  *      V9.02.01  06/07/2001  Mike Laming                                   *
.  *                Add OTCNDGON Write Out Patient New Appointment to Datagate*
.  *                    OTCNDGOR Write O/P Re-Schedule Appointment to Datagate*
.  *                    OTCNDGOC Write O/P Cancel Appointment to Datagate     *
.  *                    OTCNDGOD Write O/P DNA "Did not Attend" to Datagate   *
.  *                    OTCNDGOA Write O/P Confirm Appointment to Datagate    *
.  *                13/08/2001  Tonii                                         *
.  *                Added new layout 14 for St Vincent's                      *
.  *      V5.10.B00 24/04/2001  Dean Cramer                                   *
.  *                Add OTCNLTR Letter to pat. on reappointment               *
.  *                    OTCNLGP Letter to GP on discharge                     *
.  *                    OTCNLTD Letter to pat. on discharge                   *
.  *                    OTCNBKL Standard Booking Letter                       *
.  *                    OTCNRAL Standard Reappointment Letter                 *
.  *                    OTCNRSL Standard Reschedule Letter (Patient)          *
.  *                    OTCNLPP Letter to pat. on cancellation                *
.  *                    OTCNSRL Standard Reschedule Letter (Hospital)         *
.  *                    OTCNSBK Booking Label Screen ID                       *
.  *                    OTCNSAP Appointment Label Screen ID                   *
.  *                    OTCNSPM Mailing Label Screen ID                       *
.  *                    OTCNSGP Mailing Label Screen ID                       *
.  *      V5.08.01  16/04/2000  Davin                                         *
.  *                Added OTCNOTIH & OTCNOTIT for user defined invoice        *
.  *                headers/tails                                             *
.  *      V5.07.01  29/10/1999  Jill Habasque                                 *
.  *                Added OTCNRQDF - default code for cat RQ in EOC01         *
.  *      V5.05.00  13/11/1997  Nick                                          *
.  *                Added OTCNORFL - Keyin Ref. Type in EOC01?                *
.  *      V5.04.02  16/11/1996  Greg Horvat      SRF 617349                   *
.  *                Added a label layout for MBF                              *
.  *      V5.04.01  05/06/1996  Greg Horvat      SRF 615571                   *
.  *                Added a label layout for Joondalup                        *
.  *                                                                          *
.  *      V5.03.08  06/02/1996  Matt           suht                           *
.  *                Added OTCNGLCU - Using Global Clinic Update?              *
.  *      V5.03.07  24/01/1996  Matt           suht                           *
.  *                Added OTCNLTPR - Print Letters from OUT66.                *
.  *                What a good idea!                                         *
.  *      V5.03.06  08/01/1996  Howellsy       suht                           *
.  *                Added OTCNMBFR - Allow bookings from Referral Programs.   *
.  *                16/01/1996  Matt           suht                           *
.  *                Added OTCNCSRF - Cat. For Outpatient Source of Ref.       *
.  *      V5.03.05  04/01/1996  Greg Horvat                                   *
.  *                Commented out the menu program, security key, IBA screen  *
.  *                password & data directory variables                       *
.  *      V5.03.04  20/10/1995    Justin Coates  (SUHT mods)                  *
.  *                Added OTCNURVS,OTCNOVBK,OTCNXTSF,OTCNNCOC,OTCNURDS        *
.  *                      OTCNUBKT,OTCNSRBU                                   *
.  *      V5.03.03  05/06/1995  Max White      SRF 441306 / Quote 440068      *
.  *                Added OTCNCTAR - Clear transport alloc. in reappointments?*
.  *      V5.03.02  04/01/1995  Max White      SRF 440959                     *
.  *                Added OTCNCCON - Use OCACCONS for CMDS Consultant Code.   *
.  *      V5.03.B1  10/04/1995  Paul Howells     SRF 134941                   *
.  *                Added OTCNOPCR - Operator Id for Cancelled/Resch Visits   *
.  *      V5.03.B0  03/04/1995  Paul Howells     SRF 134941                   *
.  *                Added OTCNFAML - Format for Appointment Mailing Labels    *
.  ****************************************************************************
.    RECORD LENGTH   :  250  (INC EOR)
.    FILE ACCESS     :  RANDOM
.
.         Sector 31          
.
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
.....HMENUOUT    DIM          8         1      OUT-PATIENTS MAIN MENU NAME
.....HSECUOUT    DIM          6         9      COMPANY SECURITY CODE
.....HDATAOUT    DIM         20        15      DATA DIRECTORY
.....HSECROUT    DIM          8        35      PASSWD IBAOUT98
.
.        NOTE IN THE AUDITS  1 = NOT REQUIRED 
.
HOAUDA      FORM         1        51      OUT-PATIENTS ATTENDEES
HOAUDB      FORM         1        52      OUT-PATIENTS BOOKINGS
HOAUDC      FORM         1        53      OUT-PATIENTS AUDIT C    
HOAUDD      FORM         1        54      OUT-PATIENTS AUDIT D
HOAUDE      FORM         1        55      OUT-PATIENTS AUDIT E
HOAUDF      FORM         1        56      OUT-PATIENTS AUDIT F
HOAUDG      FORM         1        57      OUT-PATIENTS AUDIT G
HOAUDH      FORM         1        58      OUT-PATIENTS AUDIT H 
HOAUDI      FORM         1        59      OUT-PATIENTS CLINIC ID'S
HOAUDJ      FORM         1        60      OUT-PATIENTS AUDIT J
HOAUDK      FORM         1        61      OUT-PATIENTS AUDIT K
HOAUDL      FORM         1        62      OUT-PATIENTS AUDIT L
HOAUDM      FORM         1        63      OUT-PATIENTS CLINIC MASTER
HOAUDN      FORM         1        64      OUT-PATIENTS NON-ATTENDEES
HOAUDO      FORM         1        65      OUT-PATIENTS AUDIT O
HOAUDP      FORM         1        66      OUT-PATIENTS PUBLIC HOLIDAYS
HOAUDQ      FORM         1        67      OUT-PATIENTS AUDIT Q
HOAUDR      FORM         1        68      OUT-PATIENTS AUDIT R
HOAUDS      FORM         1        69      OUT-PATIENTS SITES
HOAUDT      FORM         1        70      OUT-PATIENTS CLINIC TYPES
HOAUDU      FORM         1        71      OUT-PATIENTS AUDIT U
HOAUDV      FORM         1        72      OUT-PATIENTS AUDIT V
HOAUDW      FORM         1        73      OUT-PATIENTS EXTRA SCREEN DETAILS
HOAUDX      FORM         1        74      OUT-PATIENTS AUDIT X
HOAUDY      FORM         1        75      OUT-PATIENTS AUDIT Y
HOAUDZ      FORM         1        76      OUT-PATIENTS AUDIT Z
.
HODIM1      DIM          3        77      COMP.CODE FOR WORKCARE
HODIM2      DIM          3        80      COMP.CODE FOR MOTOR ACCIDENT BOARD
HODIM3      DIM          3        83      COMP.CODE FOR VETERAN AFFAIRS
HODIM4      DIM          3        86      COMP.CODE FOR CORRECTIVE SERVICES
.
.           LABELS
.
HOLPAGE     FORM         1        89       No OF LABELS ACROSS PAGE (PATIENT)
HOLPRNT     FORM         3        90       "  "    "    TO PRINT
HOLSIZE     FORM         1        93       LABEL SIZE USED IN HOSPTIAL
.                                       1 = SMALL (37 CHAR SEPARATION)
.                                       2 = WIDE  (42 CHAR SEPARATION)
.
.            MR3 FORMS
.
HOPMR3      FORM         1        94       PATIENT MR3 FORM SHEET 
.                                            1 = YES
.                                            2 = NO  (0=NO ALSO )
.
HORVCODE    DIM          3        95       Default code for Revisits
.
HOAAESCD    DIM          3        98       Source code for A&E attendances
.
HOLABLAY    FORM         2       101       Layout for Outpatient Labels   
.                                           1 = Modbury
.                                           2 = St.Andrews Rockhampton
.                                           3 = Wellington
.                                           4 = NZ
.                                           5 = Whakatane
.                                           6 = Hong Kong
.                                           7 = Dudley
.                                           8 = Hawkes Bay
.                                           9 = Taranaki
.                                          10 = Greenslopes
.                                          11 = Joondalup
.                                          12 = MBF
.                                          13 = WGH Consultancies
.                                          14 = St Vincent's
.                                          15 = SJOG Geelong
HOAUSR1     FORM         1       103       Using User defined 1 Code U1
.                                          1 = Yes     2 = No
HOAUSRD1    DIM         12       104       User defined Code U1 description
HOAUSRM1    FORM         1       116       Mandatory field for User defined 1
.
HOSRCM      FORM         1       117       Mandatory field for Source of Refer.
.                                          1 = Yes,    0,2 = No
HOSREAP     DIM          3       118       Source of Referral for re-appoints
.
HSCROPT     FORM         1       121       Booking screen layout
.                                          0 = Modbury, 1 = Wellington
HDIAFLG     FORM         1       122       Type of diagnosis
.                                          0 = Free format, 1 = MBS, 2 = ICD9CM
HLOGRSCH    FORM         1       123       Keep log of rescheduled bookings ?
.                                          0 = No, 1 = Yes
HLOGCANL    FORM         1       124       Keep log of cancelled bookings ?
.                                          0 = No, 1 = Yes
HRSCHCLI    FORM         1       125       Type of rescheduling clinics
.                                          0 = Modbury, 1 = Wellington
HOUSR1      FORM         1       126       Using User defined field 1 (O1)
.                                          0 = No, 1 = Yes
HOUSR2      FORM         1       127       Using User defined field 2 (O2)
.                                          0 = No, 1 = Yes
HOUSR3      FORM         1       128       Using User defined field 3 (O3)
.                                          0 = No, 1 = Yes
HOUSR4      FORM         1       129       Using User defined field 4 (O4)
.                                          0 = No, 1 = Yes
HOUSMAN1    FORM         1       130       User defined field 1 (O1) mandatory
.                                          0 = No, 1 = Yes
HOUSMAN2    FORM         1       131       User defined field 2 (O2) mandatory
.                                          0 = No, 1 = Yes
HOUSMAN3    FORM         1       132       User defined field 3 (O3) mandatory
.                                          0 = No, 1 = Yes
HOUSMAN4    FORM         1       133       User defined field 4 (O4) mandatory
.                                          0 = No, 1 = Yes
HWORDPRO    FORM         1       134       Word Processor Indicator for OUT66
.                                          1 = Using the Word Processor
.                                          2 = Free Format DIM40
HOVIEWCM    FORM         1       135       Display comments in View a Clinic ?
.                                          0 = No, 1 = Yes
HADDLABS    FORM         2       136       No. of Additional Blank Labels 
.                                          to Print.
HOMR3L      FORM         1       138       MR3 Layout
.                                             0 = Modbury
.                                             1 = User Defined
HOMR3COD    DIM          6       139       Stationary Code for User Defined 
.                                          Stationary
.
OTCNLGCS    FORM         1       145       Logging cancelled sessions (Y/N) ?
.                                          0 = No, 1 = Yes
OTCNURCS    FORM         1       146       Using reason for cancelled sessions?
.                                          0 = No, 1 = Yes
OTCNCASE    FORM         1       147       Setting of case notes indicator
.                                          0 = Set case notes indicator
.                                          1 = Don't set case notes indicator
.
HOLABBOK  FORM      1       148   Print Labels/Id Sheets in Bookings
.                                      0 = No, 1 = Yes
OTCNOPSS  FORM      1       149   Open sessions in Clinic Master Maint
.                                      0 = No, 1 = Yes
OTCNOPIS  FORM      1       150   Open sessions when inserting new mast
.                                      0 = No, 1 = Yes
OTCNCS54  FORM      1       151   Printing cancelled clinics in OUT54 ?
.                                      0 = No, 1 = Yes
OTCNIPRC  FORM      1       152   Using Input Procedure codes screen?
.                                      0 = No, 1 = Yes
OTCNAVIS  FORM      1       153   Allocate visit type when booking ?
.                                      0 = No, 1 = Yes
OTCNSTVT  FORM      1       154   Slot times visit controlled ?
.                                      0 = No, 1 = Yes
OTCNSUPX  FORM      1       155   Suppress extended slots on displays ?
.                                      0 = No, 1 = Yes
OTCNIR66  FORM      1       156   Input referral details in OUT66 ?
.                                      0 = No, 1 = Yes
OTCNRUSE  FORM      1       157   Using Automated Outpatient Procudure Extracts
.                                      0 = No, 1 = Yes
OTCNUPVS  FORM      1       158   Using previous number of visits ?
.                                      0 = No, 1 = Yes
OTCNUBRD  FORM      1       159   Using board (health fund) ?
.                                      0 = No, 1 = Yes
OTCNUDPT  FORM      1       160   Using category AC variable ?
.                                      0 = No, 1 = Yes
OTCNDDCI  FORM      1       161   Default department to clinic indicator ?
.                                      0 = No, 1 = Yes
OTCNIATT  FORM      1       162   Invoicing when attending ?
.                                      0 = No, 1 = Yes
OTCNFTYP  FORM      1       163   Type of outpatient charging
.                                      0 = PATNIPA1
.                                      1 = OUTBCHA1
OTCNCFEE  FORM      1       164   Standard charges in fees invoiced report
.                                      0 = Use misc group code
.                                      1 = Use clinic id in accomodation sect.
OTCNMINM  FORM      8       165   Minimum visit no. for manual input (OUT68)
OTCNNBOK  FORM      1       173   Using non-booked attendees in IBAOUT66 ?
.                                    0 = No ; 1 = Yes
.
OTCNULET  FORM      1       174   Using Referral letters ??
.                                    0 = No ; 1 = Yes
OTCNLSRF  DIM       3       175   Code for Letters Source of Referral ? (Cat S)
OTCNDHAB  FORM      1       178   Display History at Booking ?
.                                    0 = No ; 1 = Yes
OTCNLABB  FORM      1       179   Print Labels at time of Booking ?
.                                    0 = No ; 1 = Yes
OTCNDSCH  FORM      1       180   Discharge patient option available ?
.                                    0 = No ; 1 = Yes
OTCNDCRE  FORM      1       181   Display cancellation reason in enquires ?
.                                    0 = No ; 1 = Yes
OTCNNWVW  FORM      1       182   New format for View Clinics ?
.                                    0 = No ; 1 = Yes
OTCNNSID  FORM      1       183   Non Site Dependant ?
.                                    0 = No ; 1 = Yes
OTCNDCMB  FORM      1       184   Display Patient Comments at time of booking
.                                    0 = No ; 1 = Yes
OTCNSQO2  FORM      1       185   Supress "?" on User Defined field "O2" ?
.                                    0 = No ; 1 = Yes
OTCNRBDR  FORM      1       186   Reinput booking details in reappointments
.                                    0 = No ; 1 = Yes
OTCNCSRR  FORM      1       187   Clear source of refferal in reappointments
.                                    0 = No ; 1 = Yes [
OTCNCPCR  FORM      1       188   Clear patient classifaction in reappointment
.                                    0 = No ; 1 = Yes
OTCNCPAR  FORM      1       189   Clear patient category in reappointments
.                                    0 = No ; 1 = Yes
OTCNCPIR  FORM      1       190   Clear priority in reappointments
.                                    0 = No ; 1 = Yes
OTCNCRSR  FORM      1       191   Clear resident status in reappointments
.                                    0 = No ; 1 = Yes
OTCNCCER  FORM      1       192   Clear compensation eligibility in reapps
.                                    0 = No ; 1 = Yes
OTCNCDPR  FORM      1       193   Clear departments in reappointments
.                                    0 = No ; 1 = Yes
OTCNCARR  FORM      1       194   Clear area in reappointments
.                                    0 = No ; 1 = Yes
OTCNCU1R  FORM      1       195   Clear user defined field 1 in reappointments
.                                    0 = No ; 1 = Yes
OTCNCU2R  FORM      1       196   Clear user defined field 2 in reappointments
.                                    0 = No ; 1 = Yes
OTCNCU3R  FORM      1       197   Clear user defined field 3 in reappointments
.                                    0 = No ; 1 = Yes
OTCNCU4R  FORM      1       198   Clear user defined field 4 in reappointments
.                                    0 = No ; 1 = Yes
OTCNCCMR  FORM      1       199   Clear user comments in reappointments
.                                    0 = No ; 1 = Yes
OTCNUDDC  FORM      1       200   Using Default Doctor code OUT03 & OUT66
.                                    0 = No ; 1 = Yes
OTCNRECI  FORM      1       201   Enter Clinic Id in re-appointments ?
.                                    0 = No ; 1 = Yes
OTCNUARF  FORM      1       202   Using Attendance register file ?
.                                    0 = No ; 1 = Yes
OTCNPZIN  FORM      1       203   Print Zero Total Invoices ?
.                                    0 = No ; 1 = Yes
OTCNR49A  FORM      1       204   Report format for IBAOUT49 and OUTPRN66
.                                    0 = Standard, 1 = Dudley
OTCNXDBS  FORM      1       205   Extra details in Daily Booking Schedule(out39)
.                                    0 = No ; 1 = Yes
OTCNAPTL  FORM      2       206   Appointment label format
.                                    0 = Bay of Plenty
.                                    1 = Hong Kong
.                                    2 = Taranaki
OTCNCCIM  FORM      1       208   Change Clinic Id option in OUT03 ?
.                                    0 = No ; 1 = Yes
OTCNALQR  FORM      1       209   Ask (I)nv,(L)abels etc in re-appointments ?
.                                    0 = No ; 1 = Yes
OTCNPCXB  FORM      1       210   Display Warning for Possible Cross Bookings
.                                    0 = No ; 1 = Yes
OTCNDCXB  FORM      2       211   Number of Days to check either side of current
.                                 Date for an Inpatient Booking
OTCNAXCU  FORM      1       213   Print all comments for U/R for Extra screens
.                                    0 = No ; 1 = Yes
OTCNPSTC  FORM      1       214   Using Postage Class in OUT71 (dudley)
.                                    0 = No ; 1 = Yes
OTCNNDAY  FORM      3       215   Number of days cutoff 1st & 2nd class post
.                                    (Dudley)        
OTCNLHIA  FORM      1       218   Keeping a letter history Audit (dudley)
.                                    0 = No ; 1 = Yes
OTCNIVUR  FORM      1       219   To display zero amount of invoices in IBAOUT20
.                                    0 = No ; 1 = Yes
OTCNBKBD  FORM      1       220   Using booking date audit file
.                                    0 = No ; 1 = Yes
OTCNDCST  FORM      1       221   Get Default Clinic Start Time
.                                    0 = No ; 1 = Yes
OTCNRCVT  FORM      1       222   Reschedule Clinic by Visit type also
.                                    0 = No ; 1 = Yes
OTCNACRU  FORM      1       223   Attend, Cancel single, Reschedule single
.                                 Reappoint and Discharge by UR
.                                    0 = No ; 1 = Yes
OTCNGNUR  FORM      1       224   Generate U/R no in IBAOUT33
.                                    0 = No ; 1 = Yes
OTCNSLET  FORM      1       225   Have a print standard letter option in OUT71
.                                    0 = No ; 1 = Yes
OTCNRAPA  FORM      1       226   Using the Re-Appointment File
.                                    0 = No ; 1 = Yes
OTCNUWDA  FORM      1       227   Using Ward attenders in clinic master
.                                    0 = No ; 1 = Yes
OTCNMSIR  FORM      1       228   Using month search in reappointments
.                                    0 = No ; 1 = Yes
OTCNDCLR  FORM      1       229   Default Clini Id in reappointments
.                                    0 = No ; 1 = Yes
OTCNHSPS  FORM      1       230   Using hospital in search criteria 
.                                    0 = No ; 1 = Yes
OTCNPMIR  FORM      1       231   Not Using PMI screens in reappointments
.                                    0 = No ; 1 = Yes
OTCNDBRS  FORM      1       232   Using different booking/reappointment screens
.                                    0 = No ; 1 = Yes
OTCNDACL  DIM       3       233   Default Administrative category (CL)
.
OTCNXTPL  FORM      1       237   Using the Extra session template in IBAOUT03?
.                                    0 = No ; 1 = Yes
OTCNGLVT  FORM      1       238   Select Group Labels by Visit Type ?          
.                                    0 = No ; 1 = Yes
OTCNOCRD  DIM       3       239   Outcome default for reappointments (OZ)      
.
OTCNOCDD  DIM       3       242   Outcome default for discharges  (OZ)         
.
OTCNCSLD  DIM       3       245   Reason for cancelled session default (CB)
.
OTCNAP12  FORM      1       248   12hr Time on Appointment Label ?     (CB)
.                                     0 = No ; 1 = Yes
OTCNCLVE  FORM      1       249   Using Clinic Leave feature? (OUT65)
OTCNDGCL  FORM      1       250   Always send clinic id in O/P messages
.                                     0 = No, 1 = Yes
.
.                           ---
.                           252
.
.********************************************************************** 
. SECTOR 32
.********************************************************************** 
.
.NAME     TYPE    LENGTH   START  DESCRIPTION
.----     ----    ------   -----  -----------
OTCNGPLB  FORM      1         1   Using GP Labels?     (Taranaki)
.                                   0 = No,  1 = Yes
OTCNUBLR  FORM      1         2   Using Block bookings (wellington Q 7855)
.                                   0 = No,  1 = Yes
OTCNRCLI  FORM      1         3   Renaming Clinic Type & Id in Rehab.
.                                   0 = No,  1 = Yes
OTCNCTYP  DIM       12        4   New Definition for "Clinic Type"
.
OTCNCLIN  DIM       12       16   New Definition for "Clinic Id"
.                            
OTCNZEUR  FORM      1        28   Allow zero U/R bookings in out66?
.                                   0 = No,  1 = Yes
. << spare. no longer used >>  Position 29 , Form 1                      
OTCNMVBR  FORM      2        30   Maximum number visits you can block reappoint
.                                                     
OTCNDBTM  FORM      1        32   Select Clinics by Start Time in IBAOUT39 ?   
.                                   0 = No,  1 = Yes
.
OTCNOPC4  FORM      1        33   Using OPCS4 Coding ?
.                                   0 = No,  1 = Yes
.
OTCNWBIL  FORM      1        34   Workcare billing for rehab.       
.                                 (0)=Bill for every visit per day
.                                 (1)=Bill for standard rate per day
.
OTCNVBIL  FORM      1        35   DVA billing for rehab.             
.                                 (0)=Bill for every visit per day
.                                 (1)=Bill for standard rate per day
.
OTCNGSES  FORM      1        36   Using Group Sessions ?             
.                                   0 = No,  1 = Yes
OTCNFAML  FORM      1        37   Format for Appointment Mailing Labels
.                                   0 = Full Given Names
.                                   1 = Initials Only    
OTCNOPCR  FORM      1        38   Display which operator id for Can/Resc visits
.                                   0 = Do Not Display
.                                   1 = Login Description
.                                   2 = User Defined Field
.
OTCNCCON  FORM      1        39   Using OCACCONS for CMDS Consultant Code ?
.                                   0 = No,  1 = Yes
.
OTCNCTAR  FORM      1        40   Clear transport allocation in reappointments ?
.                                   0 = No,  1 = Yes
OTCNURVS  FORM      1        41   Using Reserved Slots ?
.                                   0 = No,  1 = Yes
OTCNOVBK  FORM      1        42   Using Overbooking Rules ?
.                                   0 = No,  1 = Yes
OTCNXTSF  FORM      1        43   Using Extra Staff ?
.                                   0 = No,  1 = Yes
OTCNNCOC  FORM      1        44   Using Non-Consultant Clinics ?
.                                   0 = No,  1 = Yes
OTCNURDS  FORM      1        45   Using Reduced Clinics ?
.                                   0 = No,  1 = Yes
OTCNUBKT  FORM      1        46   Input Tests when make an appointment ?
.                                   0 = No,  1 = Yes
OTCNSRBU  FORM      1        47   See referrals when booking by U/R ?
.                                   0 = No             
.                                   1 = Yes, display hitenter
.                                   2 = Yes, ask question
OTCNMBFR  FORM      1        48   Allow Booking from Referral Program?  
.                                   0 = No,  1 = Yes
.
OTCNCSRF  DIM       2        49   Cat. For Outpatient Source of Referral
.
OTCNLTPR  FORM      1        51   Printing letters from IBAOUT66?
.                                   0 = No,  1 = Yes
OTCNGLCU  FORM      1        52   Using Global Clinic Update?
.                                   0 = No,  1 = Yes
OTCNORFL  FORM      1        53   Keyin Ref. Type in EOC01?    
.                                   0 = No,  1 = Yes
OTCNRQDF  DIM       3        54   Default code for cat RQ in EOC01
OTCNOTIH  DIM       6        57   OUT Invoice Header Code (templated)
OTCNOTIT  DIM       6        63   OUT Invoice Tail Code (templated)
.
OTCNLTR   DIM       3        66   Letter to pat. on reappointment    
OTCNLGP   DIM       3        69   Letter to GP on discharge         
OTCNLTD   DIM       3        72   Letter to pat. on discharge        
OTCNBKL   DIM       3        75   Standard Booking Letter           
OTCNRAL   DIM       3        78   Standard Reappointment Letter     
OTCNRSL   DIM       3        81   Standard Reschedule Letter (Patient)
OTCNLPP   DIM       3        84   Letter to pat. on cancellation   
OTCNSRL   DIM       3        87   Standard Reschedule Letter (Hospital) 
OTCNSBK   DIM       3        90   Booking Label Screen ID           
OTCNSAP   DIM       3        93   Appointment Label Screen ID       
OTCNSPM   DIM       3        96   PMI Mailing Label Screen ID       
OTCNSGP   DIM       3        99   G.P. Mailing Label Screen ID      
OTCNDGON  FORM      1        102  Write Out Patient New Appointment to Datagate
OTCNDGOR  FORM      1        103  Write O/P Re-Schedule Appointment to Datagate
OTCNDGOC  FORM      1        104  Write O/P Cancel Appointment to Datagate
OTCNDGOD  FORM      1        105  Write O/P DNA "Did not Attend" to Datagate
OTCNDGOA  FORM      1        106  Write O/P Confirm Appointment to Datagate
OTCNDGOB  FORM      1        107  Write O/P Change Booking Details to Datagate
OTCNCREV  FORM      1        108  Change slots to review slots when bookings  
.                                 are cancelled or rescheduled. 0 = No, 1 = Yes
OTCNCSUM  DIM       1        109  Use clinic summary search for reshedule    
.                                 0=No 1=Yes
OTCNA05M  FORM      1        110  PAS-CIS Sending A05 (New O/P Booking)
.                                 0=No 1=Yes
OTCNAUPD  DIM       1        111  Auto update w/list outpatient review date
.                                 0=No 1=Yes
OTCNRDTH  DIM       3        112  Canc. code for referral when die (Cat RQ)
.
OTCNRSST  DIM       1        115  Reschedule booking to original Slot Type
.                                 0=No 1=Yes
OTCNCFMT  DIM       1        116  Clinic selection list format            
.                                 0 = Code - description in code order
.                                 1 = Description - code in desc order
.                                 2 = Description in desc order
OTCNA44M  FORM      1        117  Sending A44 for change U/R for O/P visit
.                                    0 = No
.                                    1 = Yes
OTCNA04M  FORM      1        118  Sending A04 (O/P attendance)
.                                    0 = No
.                                    1 = Yes
OTCNA08M  FORM      1        119  Sending A08 (O/P update visit)
.                                    0 = No
.                                    1 = Yes
OTCNA11M  FORM      1        120  Sending A11 (O/P unattend)
.                                    0 = No
.                                    1 = Yes
OTCNA38M  FORM      1        121  Sending A38 (O/P cancel booking)
.                                    0 = No
.                                    1 = Yes
OTCNMTVS  DIM       2        122  Multi Therapist View Start Display Time 
OTCNMTVE  DIM       2        124  Multi Therapist View End Display Time
OTCNA05R  FORM      1        126  Sending A05 (O/P Referral)
.                                    0 = No
.                                    1 = Yes
OTCNA08R  FORM      1        127  Sending A08 (O/P Referral Update)
.                                    0 = No
.                                    1 = Yes
OTCNREVC  DIM       3        128  Review Slot Code when OTCNCREV is set to Yes 
OTCNINTR  DIM       1        131  Using visit based interpreter required
.                                    0 = No
.                                    1 = Yes
OTCNDACI  DIM       1        132  Display Diagnosis & Complaint Ind.
.                                    0 = No  1 = Yes
OTCNNODY  DIM       3        133  App'mt Request - purge after "No.of Days"
OTCNUREQ  DIM       1        136  Using Request O/P Appointment Functionality
.                                    0 = No
.                                    1 = Yes
OTCNM01M  FORM      1        137  Sending HL7 M01 (O/P clinic maintenance)
.                                    0 = No
.                                    1 = Yes
OTCNRDWB  DIM       1        138  Remove DMA Warning on Booking
.                                    0 = No  1 = Yes
OTCNA03M  FORM      1        139  Sending HL7 A03 (O/P Discharge Message)
.                                    0 = No
.                                    1 = Yes
OTCNA13M  FORM      1        140  Sending HL7 A13 (O/P Cancel Discharge Message)
.                                    0 = No
.                                    1 = Yes
OTCNHSEC  DIM       1        141  Using Hospital Security Access in Multi
.                                 Hospital Outpatients 0=No 1=Yes
OTCNDSUS  DIM       1        142  Display Suspended Sessions in Clinic Lists
.
OTCNCASS  DIM       1        143  Count OP Program Visits By Associated Number
.                                    0 = No
.                                    1 = Yes
OTCNDLAS  DIM       1        144  Display Location (Cat CT) on Appointment Searches
OTCNDCCC  DIM       1        145  Display Colour Coding on Clinic Lists
OTCNCKAR  DIM       1        146  Check for Appointment Reqs when making OP Appts
OTCNFOLL  DIM       1        147  Follow Up Appointment Date Edit
.                                    0 = Do not display a Message
.                                    1 = Display a Warning Message
.                                    2 = Display an Error Message
OTCNDTDY  DIM       1        148  Display Today button on Clinic Lists
OTCNLCST  DIM       1        149  Display Ledger/Cost Centre on Clinic Master
.                                   0 = Display with Financial system validation
.                                   1 = Display without validation
.                                   2 = Disp.without val.-Cost centre mandatory
.                                   3 = Do not Display
OTCNGPSO  DIM       1        150  Outpatient Letter GP & Practice source order
.                                  0 = Booking, then Referral, then PMI
.                                  1 = Booking, then PMI, then Referral
OTCNOKIO  DIM       1        151  Using Outpatient Kiosk
.                                  0 = No 
.                                  1 = Yes 
OTCNOKSY  DIM       1        152  Switch in Ouutpatient Kiosk Auto sync
.                                  0 = No
.                                  1 = Yes
.
OTCNTMES  DIM       1        153  Display Contact Times on Clinic Lists 
.                                  0 = No
.                                  1 = Yes Display Times
.                                  2 = Yes Display Times and redirect to Referral
OTCNA11N  FORM      1        154  Send A11-Supervisor Attended to Did Not Attend
.                                    0 = No
.                                    1 = Yes
.
.                           ----
.                            155
.                           ----
.
