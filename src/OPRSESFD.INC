.  ***************************************************************************
.  *  Include Name : OPRSESFD.INC                                            *
.  *                                                                         *
.  *  Function     : File Definition include for Theatre                     *
.  *                 SESSION                                                 *
.  *                                                                         *
.  *  File Type    : SQL                                                     *
.  *                                                                         *
.  *  File Name    : oprsesaf.dat                                            *
.  *  Audit File   : opraudse.dat                                            * 
.  *                                                                         *
.  *  Keys         : KEY19,KEY20                                             *
.  *                                                                         *
.  *  Modifications:                                                         *
.  *       V11.03.01 14/02/2023 Ebon Clements   TSK 0909393                  *
.  *                 Added OPSEHOSP to all indexes (Prior to OPSEDATE)       *
.  *       V10.08.01 30/03/2016 Steve Armstrong TSK 0319867                  *
.  *                            Added OPSEADTS                               *
.  ***************************************************************************
.  *       V10.05.02 04/09/2014 Steve Armstrong CAR 304059                   *
.  *                            Added OPSEDTCM, OPSEUCDT, OPSEDCDT, OPSETCDT,*
.  *                            OPSEUUDT, OPSEDUDT & OPSETUDT                *
.  *       V10.05.01 07/08/2014 Peter Vela      CAR 283302                   *
.  *                            Added OPSECNDT, OPSECNTM, OPSECNID           *
.  ***************************************************************************
.  *       V9.08.01  28/09/2006 Ebon Clements   CAR 119991                   *
.  *                            Added OPSEHOSP - Hospital Id                 *
.  ***************************************************************************
.  *       V9.04.01  02/03/2005 Lina Vo         CAR 56404                    *
.  *                            Added OPSEFIND-Finalisation Date             *
.  *                            Added OPSEFINT-Finalisation Time             *
.  *                 17/07/2003 Sylvek Litewka  CAR 38345                    *
.  *                            Added OPSEDGSI-Day/General Surgery Indicator *
.  *                 28/05/2001 Dean Cramer                                  *
.  *                            Added OPSESPI1,OPSESPI2,OPSENDLK,OPSESTYP    *
.  *                            Increased record size to 420                 *
.  *                 08/01/90 Bill Dew                                       *
.  *                 Addition of audit vars and IO's                         *
.  *                 02/03/90 Graeme Williams                                *
.  *                 Added "Session Co-ordinator" (OPSECORD)                 *
.  *                 23/07/91 ROD     SRF 109233     Quote 6995              *
.  *                          Added OPSEXDOC                                 *
.  *                 09/11/1999 J.Tan   SRF 635141                           *
.  *                 Added actual start and end date to session file         *
.  ***************************************************************************
.
.Audit File Definition
.----------------------
OPRAUDSE  IFILE     SQL, FIXED=568, KEY="D1-8,9-16,17-18,19-19"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPSEAUDD  DIM       8         8       1        Date of change
OPSEAUDT  DIM       8         8       9        Time of change
OPSEAUDP  DIM       2         2       17       Port doing change
OPSEAUDR  DIM       1         1       19       Record type
.                                                 A = Added 
.                                                 B = Before image
.                                                 C = After image
.                                                 D = Deleted
OPSEAUDS  FORM      1         2       20      Record status
.                                                 1 = Not printed
.                                                 2 = Printed
OPSEAUDO  DIM       4         4       22      Operator id that did the change
.
.Data File Definition
.--------------------
OPRSESA1  IFILE     SQL, FIXED=543, KEY="U411-413,1-8,9-13,14-19"
OPRSESA2  IFILE     SQL, FIXED=543, KEY="U14-19,411-413,1-8,9-13"
OPRSESA3  IFILE     SQL, FIXED=543, KEY="U20-20,14-19,411-413,1-8,9-13"
OPRSESA4  IFILE     SQL, FIXED=543, KEY="U411-413,1-8,50-55,9-13,14-19"
OPRSESA5  IFILE     SQL, FIXED=543, KEY="U47-49,411-413,1-8,9-13,50-55,14-19"
OPRSESA6  IFILE     SQL, FIXED=543, KEY="U62-67,411-413,1-8,9-13,14-19"
OPRSESA7  IFILE     SQL, FIXED=543, KEY="U1-8,9-13,14-19,411-413"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPSEDATE  DIM       8        8        1        Session Date (CCYYMMDD)
OPSETIME  DIM       5        5        9        Start Time (HH:MM)
OPSECLIN  DIM       6        6        14       Clinic/Surgeon
DOPSESUS  DIM       1        1        20       Booking session suspended ?
.                                              1 = yes   2 = No
OPSEDAY   FORM      1        2        21       Day Indicator same as OPRSEMFD
OPSEBOOK  DIM       8        8        23       Booking Date (CCYYMMDD)
OPSEENDT  DIM       5        5        31       Expected End of session (HH:MM)
OPSEDURA  FORM      4        3        36       Expected Duration (min)
OPSEBRKT  FORM      3        3        39       Time for Breaks   (min)
OPSEPREP  FORM      2        2        42       Preparation time/patient (min)
OPSETPER  DIM       3        3        44       Time Period (cat SP)
OPSETYPE  DIM       3        3        47       Specialty (Category ST)
OPSETHET  DIM       6        6        50       Default Operating Room Code
OPSECORD  DIM       6        6        56       Session co-ordinator
OPSEANAE  DIM       6        6        62       Anaesthetist
OPSESTAT  FORM      1        2        68       Session Status
.                                                   0 = Cancelled
.                                                   1 = Active - Booked
.                                                   2 = Active - Extra session
OPSETIMB  FORM      4        3        70       Total time currently booked
.
OPSEACTS  DIM       5        5        73       Actual Start Time   (HH:MM)
OPSEACTE  DIM       5        5        78       Actual End Time     (HH:MM)
OPSEACTD  FORM      4        3        83       Actual Duration     (mins)
OPSEOVER  DIM       3        3        86       Overtime Code       (Category OO)
OPSEDELA  DIM       3        3        89       Delay Code          (Category OD)
OPSECANC  DIM       3        3        92       Cancellation Reason (Category OC)
.
.          Default team details
.
OPSETYD1  DIM       3        3        95       Doctor Type # 1 (Category OP)
OPSETYD2  DIM       3        3        98                   # 2 (Category OP)
OPSETYD3  DIM       3        3        101                  # 3 (Category OP)
OPSETYD4  DIM       3        3        104                  # 4 (Category OP)
OPSETYD5  DIM       3        3        107                  # 5 (Category OP)
OPSETYD6  DIM       3        3        110                  # 6 (Category OP)
OPSETYD7  DIM       3        3        113                  # 7 (Category OP)
OPSETYD8  DIM       3        3        116                  # 8 (Category OP)
.
OPSEDCC1  DIM       6        6        119      Doctor Code # 1
OPSEDCC2  DIM       6        6        125                  # 2
OPSEDCC3  DIM       6        6        131                  # 3
OPSEDCC4  DIM       6        6        137                  # 4
OPSEDCC5  DIM       6        6        143                  # 5
OPSEDCC6  DIM       6        6        149                  # 6
OPSEDCC7  DIM       6        6        155                  # 7
OPSEDCC8  DIM       6        6        161                  # 8
.
OPSELVD1  DIM       3        3        167      Supervision Level # 1 (Cat OS)
OPSELVD2  DIM       3        3        170                        # 2 (Cat OS)
OPSELVD3  DIM       3        3        173                        # 3 (Cat OS)
OPSELVD4  DIM       3        3        176                        # 4 (Cat OS)
OPSELVD5  DIM       3        3        179                        # 5 (Cat OS)
OPSELVD6  DIM       3        3        182                        # 6 (Cat OS)
OPSELVD7  DIM       3        3        185                        # 7 (Cat OS)
OPSELVD8  DIM       3        3        188                        # 8 (Cat OS)
.
OPSETYN1  DIM       3        3        191      Nurse Type # 1 (Category ON)
OPSETYN2  DIM       3        3        194                 # 2 (Category ON)
OPSETYN3  DIM       3        3        197                 # 3 (Category ON)
OPSETYN4  DIM       3        3        200                 # 4 (Category ON)
OPSETYN5  DIM       3        3        203                 # 5 (Category ON)
OPSETYN6  DIM       3        3        206                 # 6 (Category ON)
.
OPSENUC1  DIM       6        6        209      Nurse Code # 1
OPSENUC2  DIM       6        6        215                 # 2
OPSENUC3  DIM       6        6        221                 # 3
OPSENUC4  DIM       6        6        227                 # 4
OPSENUC5  DIM       6        6        233                 # 5
OPSENUC6  DIM       6        6        239                 # 6
.
OPSEUSR1  DIM       3        3        245      User Defined 1 (Category Q6)
OPSEUSR2  DIM       3        3        248                   2 (Category Q7)
OPSEUSR3  DIM       3        3        251                   3 (Category Q8)
OPSEUSR4  DIM       3        3        254                   4 (Category Q9)
.
OPSEXDOC  DIM       6        6        257      Extra doctor for team
OPSEENDD  DIM       8        8        263      Expected End date of session
OPSEACDS  DIM       8        8        271      Actual Start Date   (CCYYMMDD)
OPSEACDE  DIM       8        8        279      Actual End Date     (CCYYMMDD)
OPSESPI1  DIM      50       50        287      Special Instructions 1
OPSESPI2  DIM      50       50        337      Special Instructions 2
OPSENDLK  DIM       2        2        387      Number of Days to Lock Session
OPSESTYP  DIM       3        3        389      Session Type (category TU)
OPSEDGSI  DIM       3        3        392      Day/General Surgery Ind (Cat YD)
OPSEFIND  DIM       8        8        395      Finalisation Date (CCYYMMDD)    
OPSEFINT  DIM       8        8        403      Finalisation Time (HH:MM:SS)    
OPSEHOSP  DIM       3        3        411      Hospital (pathspaf)
OPSECNDT  DIM       8        8        414      Date Cancellation Notified
OPSECNTM  DIM       8        8        422      Time Cancellation Notified
OPSECNID  DIM       10       10       430      User ID who Cancelled the session
.                                              (websecaf.wbseuid)
OPSEDTCM  DIM       1        1        440      Default Team Completed
.                                               0 or Blank = No
.                                               1 = Yes
OPSEUCDT  DIM       10       10       441      User who Completed Default Team
.                                              (websecaf.wbseuid)
OPSEDCDT  DIM       8        8        451      Date Default Team Completed
.                                              (ccyymmdd)
OPSETCDT  DIM       8        8        459      Time Default Team Completed
.                                              (hh:mm:ss)
OPSEUUDT  DIM       10       10       467      User who Updated Default Team
.                                              (websecaf.wbseuid)
OPSEDUDT  DIM       8        8        477      Date Default Team Updated
.                                              (ccyymmdd)
OPSETUDT  DIM       8        8        485      Time Default Team Updated
.                                              (hh:mm:ss)
OPSEADTS  DIM       1        1        493      Adhoc Theatre Session
.                                               0 or Blank = No
.                                               1 = Yes
OPSESPAR  DIM       49       49       494      Spare
.
.End of Record                        543
.
. Redefine FORM fields from key
. -----------------------------
OPSESUSP  FORM      1
