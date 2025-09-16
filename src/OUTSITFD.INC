. *****************************************************************************
. *                                                                           *
. * Include Name  : OUTSITFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Outpatients                   *
. *                    Site Code                                              *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : outsitaf.dat                                              *
. *                                                                           *
. * Keys          : KEY 6, KEY 36                                             *
. *                                                                           *
. * Modifications :                                                           *
. * V11.00.01  03/03/2020  Tracey Nguyen       TSK 0823386                    *
. *            Added OTSTACTV, OTSTSPAR and increased length from 64 to 120   *
. *---------------------------------------------------------------------------*
. *       V9.03.00  30/09/2003  Ebon Clements  CAR 43674                      *
. *                 Added index 3                                             *
. *       V9.02.00  15/11/2002  Lina Vo                                       *
. *                 Made FILSITA1 & FILSITA2 obsolete. This file is not site  *
. *                 specific and should be opened with full name outsitaf.    *
. *       V5.09.B01 01/02/2001  Greg Horvat                                   *
. *                 Removed the save variables as they werent used            *
. *                                                                           *
. *                 03.05.89 H.Donnard   (IBA)                                *
. *                 Change include heading                                    *
. *                 06.06.89 E.Phan      (IBA)                                *
. *                 Added OSTCHRG.                                            *
. *                 30/06/89 DIG                                              *
. *                 Added OSTCATG                                             *
. *                 14/09/89 Graeme Williams (I.B.A)                          *
. *                 Added OSTMAXD                                             *
. *                 04/04/1992    Justin Coates  (Southland changes)          *
. *                 Added OTSTXBOK and OTSTXATT                               *
. *****************************************************************************
.
.    IO INC       OUTSITIO
.
OUTSITA1  IFILE     SQL, FIXED=120, KEY="U1-6"
OUTSITA2  IFILE     SQL, FIXED=120, KEY="U7-36,1-6"
OUTSITA3  IFILE     SQL, FIXED=120, KEY="U45-47,1-6"
.
.NAME     TYPE    LENGTH  PHYSICAL  START  DESCRIPTION
.----     ----    ------  --------  -----  -----------
OSTSITE   DIM       6         6         1  Site Code   (TO COMMON IDDD)
OSTDESC   DIM       30        30        7  Site Code Description
OSTPASS   DIM       8         8        37  Password   
OSTFILE   DIM       3         3        45  File Prefix (TO COMMON UID)
OSTSYST   DIM       3         3        48  Outpatient Department (CAT O )
.                                          Site type is TCFORM6 in codes
.                                          file with following values :
.                                          1 = Outpatients
.                                          2 = Radiology
.                                          3 = Mammography
OSTIRNG   DIM       3         3        51  Invoice Range to be used
OSTCHRG   DIM       1         1        54  Charging used for this site ?
.                                            "C" = Yes
.                                            " " = No
OSTCATG   DIM       2         2        55  Source of Referral Category
DOSTMAXD  DIM       3         3        57  Max. Days for booking search
OTSTXBOK  DIM       2         2        60  Screen Id for extra Booking screen
OTSTXATT  DIM       2         2        62  Screen Id for extra Attendee screen
OTSTACTV  DIM       1         1        64  Active (0=Active 1=Inactive)
OTSTSPAR  DIM       55        55       65  Spare variable
.
.End of record                        120
.
OSTMAXD   FORM      3
