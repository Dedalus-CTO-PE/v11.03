.  **********************************************************************
.  *                                                                    *
.  *     Include Name : LEGTRNFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Legacy              *
.  *                    LEGACY PATIENT BED TRANSFER DETAILS             *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : legtranf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 30, KEY 30, KEY 36, KEY 30                  *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *       V9.08.01  18/01/2008  Steve Armstrong   CAR 159429           *
.  *                 Added index 5                                      *
.  *       V9.03.00  03/05/2004  Davin         CAR 49209                *
.  *                 Created FD from 6.11 PATTRNFD                      *
.  *                                                                    *
.  **********************************************************************
.
LEGTRAN1   IFILE SQL, FIXED=219, KEY="U1-3,4-6,7-14,15-22,32-39"
LEGTRAN2   IFILE SQL, FIXED=219, KEY="U32-39,7-14,15-22,1-3,4-6"
LEGTRAN3   IFILE SQL, FIXED=219, KEY="U75-80,7-14,15-22,1-3,4-6,32-39"
LEGTRAN4   IFILE SQL, FIXED=219, KEY="U1-3,7-14,15-22,4-6,32-39"
LEGTRAN5   IFILE SQL, FIXED=219, KEY="U24-31,1-3,4-6,7-14,15-22,32-39"
.
. NAME     TYPE   LENGTH   PHYSICAL   START LOC.   DESCRIPTION
. ----     ----   ------   --------   ----------   -----------
LTWARD     DIM       3           3          1      TRANSFER WARD NUMBER
LTBED      DIM       3           3          4      TRANSFER BED NUMBER
LTDATE     DIM       8           8          7      TRANSFER DATE (CCYYMMDD)
LTTIME     DIM       8           8         15      TRANSFER TIME (HH:MM:SS)
LTMOVE     DIM       1           1         23      MOVEMENT TYPE
.                                                  A - ADMISSION
.                                                  D - DISCHARGE
.                                                  C - CHANGE RECORD
.                                                  L - ON LEAVE
.                                                  R - RETURN FROM LEAVE
LDTURNO   DIM       8            8         24      PATIENT U/R  NUMBER
LDTADMN   DIM       8            8         32      PATIENT ADMISSION  NUMBER
LPTRRATF  FORM      12.2         8         40      PAT PORTION OF DAILY CHARGE
.
.                                                  Daily rate = TRATEF + TRATEH
.                                                               - TDISC - TALLW
.
LPTRRATG  FORM      12.2         8         48      GOVERNMENT  CHARGEABLE
LPTTRDIS  FORM      12.2         8         56      PAT DISC (SUB FROM TRATEF)
LPTTRALL  FORM      12.2         8         64      PAT ALLOW (SUB FROM TRATEF)
LTATYPE   DIM       3            3         72      ADMISSION TYPE (Cat A )
LTADOCT   DIM       6            6         75      ATTENDING DOCTOR
LPTRRATH  FORM      12.2         8         81      H/FND PORTION OF DAILY CHARGE
LPTRXTRA  FORM      12.2         8         89      EXTRA CHGE PER DAY (PUB HOSP)
LPTRADPA  FORM      12.2         8         97      Additional daily rate -Pat.
LPTRADRE  FORM      12.2         8        105      Additional daily rate -Rebate
.
.         The following variables are updated automatically by the
.         I/O include for each write or update
.
LTRCDATE  DIM       8            8        113      DATE THIS RECORD LAST CHANGED
LTRCTIME  DIM       8            8        121      TIME THIS RECORD LAST CHANGED
.
LTRBTYP   DIM       3            3        129      E.F.R. BED TYPE (Cat BT)
LTRBEND   FORM      3            3        132      END DAY IN RNGE FOR THIS RATE
LTCHSTAT  DIM       3            3        135      CHRGEABLE STATUS (Cat U2)
.                                                  (PUBLIC HOSPITAL ONLY)
LPTTREPS  FORM      1            2        138      Manual Step'n - Use Tran Rate
LPTTRRNB  DIM       3            3        140      Reason for Change of Bed (RB)
LPTTRLTY  DIM       3            3        143      Patient leave type (Cat TL)
LPTRLSPA  FORM      12.2         8        146      Patient portion of lumpsum
LPTRLSRE  FORM      12.2         8        154      Rebate portion of lumpsum
LPTTRAEN  FORM      4            3        162      End day for additional rate
LPTTRAUA  DIM       1            1        165      Auto update of admission type
LPTTRLTS  DIM       5            5        166      Leave transfer source code
LPTTRSPA  DIM       48           48       171      Spare variable
.
.End of Record                            219
.
.    SPARE VARIABLES
.
LSTWARD    DIM          3                     TRANSFER WARD NUMBER
LSTBED     DIM          3                     TRANSFER BED NUMBER
LSTDATE    DIM          8                     TRANSFER DATE (CCYYMMDD)
LSTTIME    DIM          8                     TRANSFER TIME (HH:MM)
LSTMOVE    DIM          1                     MOVEMENT TYPE
LSTEXUR    DIM          2                     U/R EXTENSION NUMBER
LSTURNO    FORM         8                     PATIENT U/R  NUMBER
LSTEXAD    DIM          2                     ADMISSION EXTENSION NUMBER
LSTADMN    FORM         8                     PATIENT ADMISSION  NUMBER
LSTRATEF   FORM         12.2                  PATIENT FEE CHARGEABLE
LSTRATEG   FORM         12.2                  GOVERNMENT  CHARGEABLE
LSTDISC    FORM         12.2                  PATIENT DISCOUNT
LSTALLW    FORM         12.2                  PATIENT ALLOWANCE
LSTATYPE   DIM          3                     ADMISSION TYPE
LSTADOCT   DIM          6                     ATTENDING DOCTOR
LSTRATEH   FORM         12.2                  HEALTH FUND PORTION
LSTEXTRA   FORM         12.2                  SPARE FORM 12.2
LSPTRADP   FORM         12.2                  Additional daily rate -Pat.
LSPTRADR   FORM         12.2                  Additional daily rate -Rebate
LSTRBTYP   DIM          3                     E.F.R. BED TYPE FOR THIS BED
LSTRBEND   FORM         3                     END DAY IN RANGE FOR THIS RATE
LSTCHSTA   DIM          3                     CHARGEABLE STATUS
LSPTTREP   FORM         1                     Casemix funded indicator
LSPTTRRN   DIM          3                     REASON FOR NEW BED TYPE
LSPTRLTY   DIM          3                     Patient leave type (Cat TL)
LSPTRLSP   FORM         12.2                  Patient portion of lumpsum
LSPTRLSR   FORM         12.2                  Rebate portion of lumpsum
LSPTTRAE   FORM         4                     End day for additional rate
LSPTTRAU   DIM          1                     Auto update of admission type
LSPTRLTS   DIM          5                     Leave transfer source code
 
.     Extra Variables used just for the I/O include to handle key changes
.
LSSTWARD     DIM        3                     TRANSFER WARD NUMBER
LSSTBED      DIM        3                     TRANSFER BED NUMBER
LSSTDATE     DIM        8                     TRANSFER DATE (CCYYMMDD)
LSSTTIME     DIM        8                     TRANSFER TIME (HH:MM)
LSSTADMN    FORM        8                     PATIENT ADMISSION  NUMBER

.  redefind form fields for key
.  ----------------------------
. NAME     TYPE      LENGTH                  DESCRIPTION
. ----     ----      ------                  -----------
LQTADMN    FORM         8                     PATIENT ADMISSION  NUMBER
LTADMN     FORM         8                     PATIENT ADMISSION  NUMBER
LQTURNO    FORM         8                     U/R NUMBER
LTURNO     FORM         8                     U/R NUMBER
LTRATEF    FORM       6.2                     PAT PORTION OF DAILY CHARGE
LTRATEG    FORM       6.2                     GOVERNMENT  CHARGEABLE
LTDISC     FORM       6.2                     PAT DISC (SUB FROM TRATEF)
LTALLW     FORM       6.2                     PAT ALLOW (SUB FROM TRATEF)
LTRATEH    FORM       6.2                     H/FND PORTION OF DAILY CHARGE
LTEXTRA    FORM       6.2                     EXTRA CHGE PER DAY (PUB HOSP)
LPTRADPT   FORM       6.2                     Additional daily rate -Pat.
LPTRADRB   FORM       6.2                     Additional daily rate -Rebate
LPTRLSPT   FORM       8.2                     Patient portion of lumpsum
LPTRLSRB   FORM       8.2                     Rebate portion of lumpsum
