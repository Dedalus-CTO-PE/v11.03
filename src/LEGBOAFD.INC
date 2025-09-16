. *****************************************************************************
. *                                                                           *
. * Include Name  : LEGBOAFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Outpatients                   *
. *                    Clinic Session Booking Table A                         *
. *                 Legacy Visits                                             *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : legbokaf.dat                                              *
. *                                                                           *
. * Keys          : KEY 28  KEY 35  KEY 36                                    *
. *                                                                           *
. * Modifications :                                                           *
. *       V9.03.00  03/05/2004  Ebon Clements    CAR 49209                    *
. *                 Ported from 6.11                                          *
. *                                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
LEGBOKA1  IFILE    SQL, FIXED=130, KEY="U1-6,7-12,13-20,21-25,26-28"
LEGBOKA2  IFILE    SQL, FIXED=130, KEY="U1-6,34-39,59-59,13-20,21-25,26-28,7-12"
LEGBOKA3  IFILE    SQL, FIXED=130, KEY="U40-47,13-20,21-25,26-28,1-6,7-12"
LEGBOKA4  IFILE    SQL, FIXED=130, KEY="U1-6,34-39,7-12,59-59,13-20,21-25,26-28"
LEGBOKA5  IFILE    SQL, FIXED=130, KEY="U1-6,34-39,13-20,21-25,7-12,59-59,26-28"
.
.NAME     TYPE   LENGTH   PHYSICAL  STRT    DESCRIPTION
.----     ----   ------   --------  -----   -----------
LOBASITE  DIM       6         6      1      SITE ID 
LOBACLIN  DIM       6         6      7      CLINIC ID 
LOBADATE  DIM       8         8     13      DATE (CCYYMMDD)
LOBASTRT  DIM       5         5     21      START TIME (HH:MM)
DLOBASLO  DIM       3         3     26      SLOT NUMBER
LOBATIME  DIM       5         5     29      SLOT TIME  (HH:MM)
LOBACTYP  DIM       6         6     34      CLINIC TYPE
DLOBAURN  DIM       8         8     40      U/R NUMBER 
LOBAVISI  DIM       3         3     48      VISIT TYE (N,R,S)(CV)
DLOBAOUT  DIM       8         8     51      OUTPATIENT NUMBER
DLOBASTA  DIM       1         1     59      SLOT STATUS  0 = NOT BOOKED
.                                                        1 = BOOKED
.                                                        2 = NOT USED
.                                                        3 = EXTENDED SLOT
.                                                        4 = ATTENDED
.                                                        5 = NO ATTENDANCE
LOBADAY   FORM      1         2     60      DAY INDICATOR
LOBAEXSL  FORM      3         3     62      SLOT No OF PARENT SLOT (Ext Slt)
LOBAFINS  DIM       4         4     65      FINAL STATS REPORT MTH/YEAR - IF
.                                           BLANK THEN ONLY INTERIM REPORTS
.                                           GENERATED OR REC NOT PROCESSED
LOBALOCK  DIM       2         2     69      LOCKING
LOBAPXRA  FORM      1         2     71      X-Ray Pulling List Indicator
.                                               1 = Appeared on Pulling List
LOBABKDT  DIM       16       16     73      BOOK DATE/TIME(CCYYMMDDHH:MM:SS)
LOBAPULL  FORM      1         2     89      PULLING LIST INDICATOR
.                                               1 = Has Appeared on Pulling List
LOBASESS  DIM       3         3     91      SESSION STATUS CODE (CS)
LOBADISC  DIM       3         3     94      DISCHARGE STATUS (Cat DO)
DLOTBARE  DIM       2         2     97      Number of days to reserve for
LOBASPAR  DIM       31        31    99      ****  SPARE  ****
.
.End of Record                     130
.
.  redefine form fields from key
.  -----------------------------
.Name     Type      Length  Description
.-------  ---       ------  -----------
LOBASLOT  FORM      3       SLOT NUMBER
LOBAURNO  FORM      8       U/R NUMBER
LOBAOUTN  FORM      8       OUTPATIENT NUMBER
LOBASTAT  FORM      1       SLOT STATUS 
LOTBARES  FORM      2       number of days to reserve for
.
. save variables
. --------------
LSOBASIT  DIM       6         1      SITE ID 
LSOBACLI  DIM       6         7      CLINIC ID 
LSOBADAT  DIM       8        13      DATE (CCYYMMDD)
LSOBASTR  DIM       5        21      START TIME (HH:MM)
LSOBASLO  FORM      3        26      SLOT NUMBER
LSOBATIM  DIM       5        29      SLOT TIME  (HH:MM)
LSOBACTY  DIM       6        34      CLINIC TYPE
LSOBAURN  DIM       8        40      U/R NUMBER 
LSOBASTA  FORM      1        48      STATUS  0 = NOT BOOKED
+
.

