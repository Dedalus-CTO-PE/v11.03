. *****************************************************************************
. *                                                                           *
. * Include Name  : LEGSITFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Outpatients                   *
. *                    Site Code                                              *
. *                 Legacy Visits                                             *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : legsitaf.dat                                              *
. *                                                                           *
. * Keys          : KEY 6  KEY 36                                             *
. *                                                                           *
. * Modifications :                                                           *
. *       V9.03.00  06/05/2004  Ebon Clements    CAR 49209                    *
. *                 Ported from 6.11                                          *
. *                                                                           *
. *****************************************************************************
.
LEGSITA1  IFILE     SQL, FIXED=64, KEY="U1-6"
LEGSITA2  IFILE     SQL, FIXED=64, KEY="U7-36,1-6"
.
.NAME     TYPE    LENGTH  PHYSICAL  START  DESCRIPTION
.----     ----    ------  --------  -----  -----------
LOSTSITE  DIM       6         6         1  Site Code   (TO COMMON IDDD)
LOSTDESC  DIM       30        30        7  Site Code Description
LOSTPASS  DIM       8         8        37  Password   
LOSTFILE  DIM       3         3        45  File Prefix (TO COMMON UID)
LOSTSYST  DIM       3         3        48  Outpatient Department (CAT O )
.                                          Site type is TCFORM6 in codes
.                                          file with following values :
.                                          1 = Outpatients
.                                          2 = Radiology
.                                          3 = Mammography
LOSTIRNG  DIM       3         3        51  Invoice Range to be used
LOSTCHRG  DIM       1         1        54  Charging used for this site ?
.                                            "C" = Yes
.                                            " " = No
LOSTCATG  DIM       2         2        55  Source of Referral Category
DLOSTMAX  DIM       3         3        57  Max. Days for booking search
LOTSTXBO  DIM       2         2        60  Screen Id for extra Booking screen
LOTSTXAT  DIM       2         2        62  Screen Id for extra Attendee screen
.End of record                         64
.
.Redifined forms for key
.-----------------------
LOSTMAXD   FORM      3
.
LSOSTSIT  DIM       6
LSOSTDES  DIM       30
+
.

