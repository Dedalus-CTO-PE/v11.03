. V5.07.001 27/08/1998 Glenn  507 Changes
. **********************************************************************
. *                                                                    *
. *     Include Name : PATADWFD.INC                                    *
. *                                                                    *
. *     Function     : File Definition include for Ward Audit File     *
. *                                                                    *
. *                                                                    *
. *     File Type    : ASCII                                           *
. *                                                                    *
. *     File Name    : patwaud.txt                                     *
. *                                                                    *
. *     Modifications:                                                 *
. *     V5.03.01  05/10/1995  MATT                                     *
. *               Redefined PATWAUD as SFILE                           *
. **********************************************************************
. *                                                                    *
. *     Modifications: V5.00 31.03.89 J.Clark     (IBA)                *
. *                          Change include heading                    *
. *                    V5.01 04.06.89 K.Peak      (IBA)                *
. *                          Change U/R & Admission to 8 characters    *
. *                    V9.02 21/08/2001 J.Tan                          *
. *                          Added Nursing station number              *
. *                                                                    *
. **********************************************************************
.
 IFGE     $$VER,7
PATWAUD     SFILE   ASCII, FIXED=256
 XIF
 IFEQ     $$VER,6
PATWAUD     FILE    ASCII, FIXED=256
 XIF
.
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
.SECTOR     FORM         5         1      NEXT AVAILABLE SECTOR
.
.End of Record
.
.    SECTOR          :
.
.NAME       TYPE    LENGTH         START     DESCRIPTION
.----       ----    ------         -----     -----------
.ADD        DIM          2             1      AUDIT DAY
.AMM        DIM          2             3      AUDIT MONTH
.ACC        DIM          2             5      audit century
.AYY        DIM          2             7      AUDIT YEAR
.TIMEIS     DIM          8             9      AUDIT TIME  (HH:MM:SS)
.ACTION     DIM          1            17      ACTION
.                                             A == ADDED
.                                             B == BEFORE CHANGE
.                                             C == CHANGED TO
.OPERCODE   DIM          4            18      OPERATOR CODE
.
.SWWARD      DIM          3             1     WARD NUMBER
.SWBED       DIM          3             4     WARD BED NUMBER
SWBDESC     DIM         20             7     WARD BED DESCRIPTION
.SWADMNO     FORM         8            27     CURRENT PATIENT ADMISSION NO.
SWEXTN      DIM          4            35     EXTENSION NUMBER
SWBLINE     FORM         2            39     No LINES BETWEEN BEDS (WARD ONLY)
SWRTYPE     DIM          3            41     ROOM TYPE (BEDS ONLY)
SWEFRBT     DIM          3            44     E.F.R. (BEDS ONLY)
SWNBEDS     FORM         3            47     NUMBER OF BEDS IN WARD (WARD ONLY)
SWHCSSUB    FORM         3            50     HCS WARD SUBSCRIPT (WARD ONLY)
SWSERV      DIM          3            53     WARD SERVICE CODE (WARD ONLY)
SWPLUR      FORM         1            56     PLURALITY NUMBER
SWINPUT     FORM         1            57     WARD ONLY INPUT (WARD INDICATOR)
.                                            0 = NO, 1 = YES
SWOCCBED    FORM         3            58     NO.OF BEDS IN WARD(OCCUPANCY STATS)
SWCLASS     DIM          3            61     WARD CLASSIFICATION
.
.---- heron added by nez 25/2/92 ----
.
SDWSTBY     DIM          8            64     CURRENT STBY ADMISS NUMBER
SWACTIVE    FORM         1            72     ACTIVE INDICATOR
.                                                  0 = Active, 1 = Not Active
SPTWDHOS    DIM          3            73     Hospital/Unit Number Cat HU
SPTWDDNI    FORM         1            76     Day/Night Indicator
.                                                   0 = Day Only
.                                                   1 = Day & Night
.                                                   2 = Night Only
.
SPTWDIAG    DIM          3            78     Intended Age Group Cat IA
SPTWDICR    DIM          3            81         "   Care Intensity Cat IC
SPTWDSEX    DIM          1            84         "   Sex of Patient M/F/E
SPTWDLOC    DIM          4            85     Medical record location code
SPTWDGLD    DIM         14            89     G/L and cost centre code
SPTWDNST    DIM          3           103     Nursing station number
.
.End                                 106
