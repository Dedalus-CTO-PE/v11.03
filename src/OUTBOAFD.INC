. *****************************************************************************
. *                                                                           *
. * Include Name  : OUTBOAFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Outpatients                   *
. *                    Clinic Session Booking Table A                         *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : outbokaf.dat                                              *
. * Audit Name    : outaudba.dat                                              *
. *                                                                           *
. * Keys          : KEY 28, KEY 35, KEY 36 , KEY19                            *
. *                                                                           *
. * Modifications :                                                           *
. *  **** Programmer Note **************                                      *
. *       Any changes to this FD may also need to be made in OUTQUEFD.        *
. *       Please check this before proceeding.                                *
. *                                                                           *
. *       V9.02.04  31/01/2003  Lina Vo                                       *
. *                 Added FILAUDBA                                            *
. *       V9.00.03  03/12/2002  Lina Vo                                       *
. *                 Added FILBOKA6                                            *
. *       V9.00.02  23/08/2002  Ebon Clements SRF 17673                       *
. *                 Added comment for OBASTAT 7 - Unavailable slot            *
. *       V9.00.01  14/12/2001  Jill Habasque                                 *
. *                 Added index 6                                             *
. *       V5.09.B01 01/02/2001  Greg Horvat                                   *
. *                 Removed the save variables as they werent used            *
. *                                                                           *
. *                 03.05.89 H.Donnard   (IBA)                                *
. *                 Change include heading                                    *
. *                 03.06.89 S.Barcham   (IBA)                                *
. *                 SPlit include                                             *
. *                 14/09/89 Graeme Williams (I.B.A)                          *
. *                 Made obarsflg into a spare variable                       *
. *                 28/06/90 Paul Duncan                                      *
. *                 added audit variables and key                             *
. *                 10/03/1992    Justin Coates   (Bay of Plenty changes)     *
. *                 Added OBADISCH - discharge status                         *
. *                 28/03/1995    Helen Crick                                 *
. *                 Standardised FD                                           *
. *                 23/10/1995    Justin Coates  (SUHT mods)                  *
. *                 Added OTBARESV for reserved slots                         *
. *                 05/12/1995    Justin Coates  (SUHT mods)                  *
. *                 changed obarsflg to OBAPXRAY                              *
. *                 09/09/1998    J.Tan                                       *
. *                 Added 5th index                                           *
. *****************************************************************************
.
.Audit File
.
OUTAUDBA  IFILE    SQL, FIXED=125, KEY="D1-8,9-16,17-18,19-19"
FILAUDBA  INIT     "audba"
.
OTBAAUDD  DIM       8       8         1       Date of Change
OTBAAUDT  DIM       8       8         9       Time of Change
OTBAAUDP  DIM       2       2        17       Port Doing Change
OTBAAUDR  DIM       1       1        19       Record Type
.                                                 A = Added Record
.                                                 B = Before Change Record
.                                                 C = After Change Record
.                                                 D = Deleted Record
OTBAAUDS  FORM      1       2        20       Record Status
.                                                 1 = Not Printed
.                                                 2 = Printed
OTBAAUDO  DIM       4       4        22       Operator ID of Change
.
.    IO INC       OUTBOAIO
.
.Data File
.
OUTBOKA1  IFILE    SQL, FIXED=100, KEY="U1-6,7-12,13-20,21-25,26-28"
OUTBOKA2  IFILE    SQL, FIXED=100, KEY="U1-6,34-39,59-59,13-20,21-25,26-28,7-12"
OUTBOKA3  IFILE    SQL, FIXED=100, KEY="U40-47,13-20,21-25,26-28,1-6,7-12"
OUTBOKA4  IFILE    SQL, FIXED=100, KEY="U1-6,34-39,7-12,59-59,13-20,21-25,26-28"
OUTBOKA5  IFILE    SQL, FIXED=100, KEY="U1-6,34-39,13-20,21-25,7-12,59-59,26-28"
OUTBOKA6  IFILE    SQL, FIXED=100, KEY="U51-58,13-20,21-25,26-28,1-6,7-12"
FILBOKA1  INIT     "bokaf"
FILBOKA2  INIT     "bokaf"
FILBOKA3  INIT     "bokaf"
FILBOKA4  INIT     "bokaf"
FILBOKA5  INIT     "bokaf"
FILBOKA6  INIT     "bokaf"
.
.
.NAME     TYPE   LENGTH   PHYSICAL  STRT    DESCRIPTION
.----     ----   ------   --------  -----   -----------
OBASITE   DIM       6         6      1      SITE ID 
OBACLIN   DIM       6         6      7      CLINIC ID 
OBADATE   DIM       8         8     13      DATE (CCYYMMDD)
OBASTRT   DIM       5         5     21      START TIME (HH:MM)
DOBASLOT  DIM       3         3     26      SLOT NUMBER
OBATIME   DIM       5         5     29      SLOT TIME  (HH:MM)
OBACTYP   DIM       6         6     34      CLINIC TYPE
OBAURNO   DIM       8         8     40      U/R NUMBER 
OBAVISIT  DIM       3         3     48      VISIT TYPE (N,R,S)(CV)
DOBAOUTN  DIM       8         8     51      OUTPATIENT NUMBER
DOBASTAT  DIM       1         1     59      SLOT STATUS  0 = NOT BOOKED
.                                                        1 = BOOKED
.                                                        2 = NOT USED
.                                                        3 = EXTENDED SLOT
.                                                        4 = ATTENDED
.                                                        5 = NO ATTENDANCE
.                                                        6 = Suspended
.                                                        7 = Unavailable
.                                                        9 = Reserved
OBADAY    FORM      1         2     60      DAY INDICATOR
OBAEXSL   FORM      3         3     62      SLOT No OF PARENT SLOT (Ext Slt)
OBAFINST  DIM       4         4     65      FINAL STATS REPORT MTH/YEAR - IF
.                                           BLANK THEN ONLY INTERIM REPORTS
.                                           GENERATED OR REC NOT PROCESSED
OBALOCK   DIM       2         2     69      LOCKING
OBAPXRAY  FORM      1         2     71      X-Ray Pulling List Indicator
.                                               1 = Appeared on Pulling List
OBABKDTE  DIM       16       16     73      BOOK DATE/TIME(CCYYMMDDHH:MM:SS)
OBAPULL   FORM      1         2     89      PULLING LIST INDICATOR
.                                               1 = Has Appeared on Pulling List
OBASESST  DIM       3         3     91      SESSION STATUS CODE (CS)
OBADISCH  DIM       3         3     94      DISCHARGE STATUS (Cat DO)
DOTBARES  DIM       2         2     97      Number of days to reserve for
OBASPARA  DIM       1         1     99      ****  SPARE  ****
.
.End of Record                     100
.
.  redefine form fields from key
.  -----------------------------
.Name     Type      Length  Description             
.-------  ---       ------  -----------------------------------------------
OBASLOT   FORM      3       SLOT NUMBER
OBAOUTNO  FORM      8       OUTPATIENT NUMBER
OBASTAT   FORM      1       SLOT STATUS 
OTBARESV  FORM      2       number of days to reserve for
