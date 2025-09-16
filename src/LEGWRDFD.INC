.  **********************************************************************
.  *                                                                    *
.  *     Include Name : LEGWRDFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    PATIENT WARD DETAILS LEGACY VISITS              *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : legwardf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 6, KEY 14                                   *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *     V9.03.00  30/04/2004 Ebon Clements      CAR 49209             *
.  *               Ported from 6.11                                     *
.  *                                                                    *
.  **********************************************************************
.
LEGWARD4   IFILE SQL, FIXED=113, KEY="U66-73,1-3,4-6"
LEGWARD3   IFILE SQL, FIXED=113, KEY="U4-6,1-3"
LEGWARD2   IFILE SQL, FIXED=113, KEY="U27-34,1-3,4-6"
LEGWARD1   IFILE SQL, FIXED=113, KEY="U1-3,4-6"
.
. NAME     TYPE   LENGTH   PHYSICAL   START LOC.   DESCRIPTION
. ----     ----   ------   --------   ----------   -----------
LWWARD     DIM       3          3           1      WARD NUMBER
LWBED      DIM       3          3           4      WARD BED NUMBER
LWBDESC    DIM      20         20           7      WARD BED DESCRIPTION
DLWADMNO   DIM       8          8          27      CURRENT PATIENT ADMISSION NO.
LWEXTN     DIM       4          4          35      EXTENSION NUMBER
LWBLINE    FORM      2          2          39      No LINES B/WN BEDS (WRD ONLY)
LWRTYPE    DIM       3          3          41      ROOM TYPE (BDS ONLY) (CAT RT)
LWEFRBT    DIM       3          3          44      E.F.R. (BEDS ONLY) (CAT BT)
LWNBEDS    FORM      3          3          47      No OF BEDS IN WARD (WRD ONLY)
LWHCSSUB   FORM      3          3          50      HCS WARD SUBSCRIPT (WRD ONLY)
LWSERV     DIM       3          3          53      WARD SERVICE CODE (WARD ONLY)
LWPLUR     FORM      1          2          56      PLURALITY NUMBER
LWINPUT    FORM      1          2          58      WARD ONLY INPUT (WRD INDIC)
.                                                  0 = NO, 1 = YES
LWOCCBED   FORM      3          3          60      NO.OF BEDS IN WARD(OCC STATS)
LWCLASS    DIM       3          3          63      WARD CLASSIFICATION (CAT CG)
DLWSTBY    DIM       8          8          66      CURRENT STBY ADMISS NUMBER
LWACTIVE   FORM      1          2          74      ACTIVE INDICATOR
.                                                  0 = Active, 1 = Not Active
LGWRABTY   DIM       3          3          76      Alt. Bed Type (Cat BT)
LGWRCCTR   DIM       3          3          79      Cost Centre Code (Cat ??)
LGWRGLDG   DIM      14         14          82      G/L and Cost Centre code
LWSPARE    DIM      17         17          96      SPARE
.
.End of Record
.
LSWWARD    DIM      3                             WARD NUMBER
LSWBED     DIM      3                             WARD BED NUMBER
LSWADMNO   FORM     8                             CURRENT PATIENT ADMISSION NO.
.
. redefine form fields from key
. -----------------------------
.NAME      TYPE      LENGTH      START LOC.   DESCRIPTION
.----      ----      ------      ----------   -----------
LWADMNO    FORM          8            27      CURRENT PATIENT ADMISSION NO.
LWSTBY     FORM          8            66      CURRENT STBY ADMISS NUMBER
