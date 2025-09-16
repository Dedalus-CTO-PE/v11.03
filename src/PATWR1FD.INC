.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATWR1FD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Ward/Bed Details                                *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patwr1af.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 6, KEY 9, KEY 14                            *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *           V10.03.01 22/11/2011  Ebon Clements    CAR 255738        *
.  *                     Added index 8                                  *
.  *           V10.02.02 11/07/2011  Peter McMullen   CAR 239549        *
.  *                     Move and increase size  of WEXTN               *
.  *           V10.02.01 20/04/2011  Peter McMullen   CAR 239549        *
.  *                     Added PTWDSDES short description               *
.  *                     Added index PATWRA17 (hosp,desc,ward,bed)      *
.  *           V10.00.01 21/05/2010  Steve Armstrong  CAR 222489        *
.  *                     Added PTWDDOST, PTWDDOET and PTWDSPAR          *
.  *                     19/05/2010  Jill Parkinson  CAR                *
.  *                    Added PTWDNDBD - Number of dynamic beds available
.  *           V9.12.01 09/09/2009  Davin         CAR 204945            *
.  *                    Added PTWDCFCD (Cancer Facility Code)           *
.  *           V9.09.01 13/12/2007  Mike Laming   CAR 156741            *
.  *                    Added PTWDDFVS (Default Visitors) PTWDDFPH      *
.  *                    (Default Phone Calls)                           *
.  *           V9.04.02 07/12/2004  Ebon Clements CAR 55750             *
.  *                    Added PTWDCOMM - Ward / Bed Comments            *
.  *           V9.04.01 17/08/20034 Lina Vo CAR 52746                   *
.  *                    Added 5th & 6th Index with Hospital ID          *
.  * ------------------------------------------------------------------ *
.  *           V9.03.01 18/08/2003  Sylvek Litewka  CAR 41826           *
.  *                    Added new variables from FVDW to UPID           *
.  * ------------------------------------------------------------------ *
.  *                    V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                    V5.01 01.06.89 K.Peak      (IBA)                *
.  *                          Change Admission to 8 characters          *
.  *                    V5.02 05/11/92 Steve O'Gorman                   *
.  *                          Added New Variables from HOSN to RESV     *
.  *                    V5.03 31/05/95  ROD                             *
.  *                          Added PTWDLOCN - medical record location  *
.  *                 V9.01.01 16/05/2001 J.Tan                          *
.  *                          Added Nursing station number              *
.  **********************************************************************
.
.Data File Definition
.--------------------
PATWR1A1   IFILE SQL, FIXED=300, KEY="U1-3,4-6"
PATWR1A2   IFILE SQL, FIXED=300, KEY="U27-34,1-3,4-6"
PATWR1A3   IFILE SQL, FIXED=300, KEY="U4-6,1-3"
PATWR1A4   IFILE SQL, FIXED=300, KEY="U66-73,1-3,4-6"
PATWR1A5   IFILE SQL, FIXED=300, KEY="U76-78,1-3,4-6"
PATWR1A6   IFILE SQL, FIXED=300, KEY="U76-78,4-6,1-3"
PATWR1A7   IFILE SQL, FIXED=300, KEY="U4-6,76-78,7-26,1-3"
PATWR1A8   IFILE SQL, FIXED=300, KEY="U1-3,217-226,4-6"
.
. NAME     TYPE   LENGTH   PHYSICAL   START LOC.   DESCRIPTION
. ----     ----   ------   --------   ----------   -----------
WWARD      DIM       3          3           1      WARD NUMBER
WBED       DIM       3          3           4      WARD BED NUMBER
WBDESC     DIM      20         20           7      WARD BED DESCRIPTION
DWADMNO    DIM       8          8          27      CURRENT PATIENT ADMISSION NO.
WSPARE4    DIM       4          4          35      Previously, extension number 
WBLINE     FORM      2          2          39      No LINES B/WN BEDS (WRD ONLY)
WRTYPE     DIM       3          3          41      ROOM TYPE (BDS ONLY) (CAT RT)
WEFRBT     DIM       3          3          44      E.F.R. (BEDS ONLY) (CAT BT)
WNBEDS     FORM      3          3          47      No OF BEDS IN WARD (WRD ONLY)
WHCSSUB    FORM      3          3          50      HCS WARD SUBSCRIPT (WRD ONLY)
WSERV      DIM       3          3          53      WARD SERVICE CODE (WARD ONLY)
WPLUR      FORM      1          2          56      PLURALITY NUMBER
WINPUT     FORM      1          2          58      WARD ONLY INPUT (WRD INDIC)
.                                                  0 = ward / bed
.                                                  1 = ward only
.                                                  2 = ward / bed + ward only
WOCCBED    FORM      3          3          60      NO.OF BEDS IN WARD(OCC STATS)
WCLASS     DIM       3          3          63      WARD CLASSIFICATION (CAT CG)
DWSTBY     DIM       8          8          66      CURRENT STBY ADMISS NUMBER
WACTIVE    FORM      1          2          74      ACTIVE INDICATOR
.                                                  0 = Active, 1 = Not Active
PTWDHOSN   DIM       3          3          76      Hospital ID (pathspaf)     
PTWDDNIN   FORM      1          2          79      Day/Night Indicator
.                                                    0 = Day Only
.                                                    1 = Day & Night
.                                                    2 = Night Only
.
PTWDIAGE   DIM       3          3          81      Intended Age Group Cat IA
PTWDICRE   DIM       3          3          84          "   Care Intensity Cat IC
PTWDSEX    DIM       1          1          87          "   Sex of Patient M/F/E
PTWDLOCN   DIM       4          4          88      Medical Record Location code
PTWDGLDG   DIM      14         14          92      G/L and Cost Centre code
PTWDNSTA   DIM       3          3         106      Nursing Station Number
PTWDDOSA   DIM       1          1         109      DOAS Ward 0=No 1=Yes
PTWDFVDW   DIM       1          1         110      Five Day Ward
.                                                    0 = No
.                                                    1 = Yes
PTWDBDST   DIM       1          1         111      Bed Status - Open/Closed
.                                                    0 = Open
.                                                    1 = Closed
PTWDRBSC   DIM       3          3         112      Reason Bed Stat Changed CatBU
PTWDHKST   DIM       3          3         115      House Keeping Status (Cat BV)
PTWDIFST   DIM       3          3         118      Infection Status (Cat BW)
PTWDCRDT   DIM       8          8         121      Date Record Created CCYYMMDD
PTWDCRTM   DIM       8          8         129      Time Record Created HH:MM:SS
PTWDCRID   DIM      10         10         137      WEB User ID - Creator
PTWDUPDT   DIM       8          8         147      Date Record Updated CCYYMMDD
PTWDUPTM   DIM       8          8         155      Time Record Updated HH:MM:SS
PTWDUPID   DIM      10         10         163      WEB User ID - Updated
PTWDCOMM   DIM      30         30         173      Ward / Bed Comments 
PTWDDFVS   DIM       1          1         203      Default Visitors (1=Yes)
PTWDDFPH   DIM       1          1         204      Default Phone Calls (1=Yes)
PTWDCFCD   DIM       6          6         205      Cancer Facility Code
PTWDNDBD   DIM       2          2         211      Number of dynamic beds
PTWDDOST   DIM       2          2         213      First Display Time for I/P
.                                                    Scheduling / Day Oncology
PTWDDOET   DIM       2          2         215      Last Display Time for I/P
.                                                    Scheduling / Day Oncology
PTWDSDES   DIM      10         10         217      Short ward name/description
WEXTN      DIM      20         20         227      Extension/contact number 
PTWDSPAR   DIM      53         53         247      Spare Variable
.
.End of Record                            300
.
SWWARD      DIM      3          3           1      WARD NUMBER
SWBED       DIM      3          3           4      WARD BED NUMBER
SWADMNO     FORM     8          6          25      CURRENT PATIENT ADMISSION NO.
.
. redefine form fields from key
. -----------------------------
.NAME      TYPE      LENGTH      START LOC.   DESCRIPTION
.----      ----      ------      ----------   -----------
WADMNO     FORM          8            27      CURRENT PATIENT ADMISSION NO.
WSTBY      FORM          8            66      CURRENT STBY ADMISS NUMBER
