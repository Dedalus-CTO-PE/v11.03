.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   WEBEMRVR.INC                                  *
.  *                                                                      *
.  *  Function          :   Var Definitions for WEBEMR system             *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *      V10.13.01 08/08/2018  Peter Vela       Task 0852438             *
.  *                Commented out MHFUND                                  *
.  *      V10.02.01 26/09/2011  Steve Armstrong  CAR 249584               *
.  *                Removed DDATE and DURNO definitions                   *
.  ************************************************************************
.  *      V5.07.00  14/10/1999  Nicole Harrington                         *
.  *                Ported from 6.06 - 5.07                               *
.  ************************************************************************
.  *      V6.06.00  25/02/1999  Nicole Harrington                         *
.  *                Modified EMRVARS for EMR system                       *
.  *                                                                      *
.  ************************************************************************
.
.         Temporary File Definition
.         -------------------------
.
.         Filename : emr01axx.dat          (xx = port id)
.
CURTEMP1  IFILE SQL, FIXED=61, KEY="U1-1,2-9,10-14,15-22"
.
.NAME     TYPE    LENGTH     PHYSICAL     START     DESCRIPTION
.----     ----    ------     --------     -----     -----------
XEMRTRIG  DIM       1           1           1       Triage
XEMRDATE  DIM       8           8           2       Arrival Date
XEMRTIME  DIM       5           5          10       Arrival Time
DXEMRADM  DIM       8           8          15       Admission No.
XEMRURNO  DIM       8           8          23       U/R Number
XEMRCOMP  DIM      18          18          31       Complaint
XEMRLOCN  DIM       3           3          49       Location
XEMRDOCT  DIM       6           6          52       Doctor
XEMRTCOD  DIM       3           3          58       Triage code
.
.End of Record                             61
.
. Redefine form fields from key
. -----------------------------
XEMRADMN  FORM      8
.
.
.         Filename : emr01bxx.dat          (xx = port id)
.
INCTEMP1  IFILE SQL, FIXED=61, KEY="U1-1,2-9,10-14,15-22"
.
.NAME     TYPE    LENGTH     PHYSICAL     START     DESCRIPTION
.----     ----    ------     --------     -----     -----------
ZEMRTRIG  DIM       1           1           1       Triage
ZEMRDATE  DIM       8           8           2       Arrival Date
ZEMRTIME  DIM       5           5          10       Arrival Time
DZEMRADM  DIM       8           8          15       Admission No.
ZEMRURNO  DIM       8           8          23       U/R Number
ZEMRCOMP  DIM      18          18          31       Complaint
ZEMRLOCN  DIM       3           3          49       Location
ZEMRDOCT  DIM       6           6          52       Doctor
ZEMRTCOD  DIM       3           3          58       Triage code
.
.End of Record                             61
.
. Redefine form fields from key
. -----------------------------
ZEMRADMN  FORM      8
.
.
.         Procedures Temp files
.
.         PROWORK1 is the working file
.         PROWORK2 is the temp file
.
PROWORK1  IFILE SQL, FIXED=11, KEY="U1-9"         * emr01dxx.dat  (xx = port id)
PROWORK2  IFILE SQL, FIXED=11, KEY="U1-9"         * emr01fxx.dat  (xx = port id)
.
.NAME     TYPE    LENGTH     PHYSICAL     START     DESCRIPTION
.----     ----    ------     --------     -----     -----------
XEMRPROC  DIM       9           9           1       Procedure Code
XEMRSEND  DIM       1           1          10       Send flag
.                                                     "Y" or "N"
.
.End of Record                             11
.
.
.         Diagnosis Temp files
.
.         DGNWORK1 is the working file
.         DGNWORK2 is the temp file
.
DGNWORK1  IFILE SQL, FIXED=12, KEY="U1-9"         * emr01gxx.dat  (xx = port id)
DGNWORK2  IFILE SQL, FIXED=12, KEY="U1-9"         * emr01hxx.dat  (xx = port id)
.
.NAME     TYPE    LENGTH     PHYSICAL     START     DESCRIPTION
.----     ----    ------     --------     -----     -----------
XEMRDIAG  DIM       9           9           1       Procedure Code
XEMRPRIM  DIM       1           1          10       Primary Diagnosis
.                                                     "Y" or "N"
.XEMRSEND DIM       1           1          11       Send flag
.                                                     "Y" or "N"
.
.End of Record                             12
.
.
TEMP2     FILE      ASCII, FIXED=256
TEMPFILE  FILE      ASCII, FIXED=256             * word processor temp file
WORKFILE  FILE      ASCII, FIXED=256             * clinical notes temp file
.
.
. Workers Compensation Temporary variables
.
XWCADMNO  DIM       8                            * Admission Number
XWCENAME  DIM       30                           * Employer Name
XWCEADD1  DIM       35                           * Employer Address Line 1
XWCEADD2  DIM       35                           * Employer Address Line 2
XWCEADD3  DIM       35                           * Employer Address Line 3
XWCEADD4  DIM       35                           * Employer Address Line 4
XWCEPOST  DIM       8                            * Employer Postcode
XWCETELE  DIM       20                           * Employer Telephone
XWCACDAT  DIM       8                            * Date of Accident (CCYYMMDD)
XWCACCPT  DIM       1                            * Accepted By Insurance Co.
.                                                    N = No
.                                                    Y = Yes
XWCICODE  DIM       6                            * Insurance Company Code
XWCCLMNO  DIM       20                           * Insurance Claim Nunmber 
XWCCOMN1  DIM       40                           * Comments Line 1
XWCCOMN2  DIM       40                           * Comments Line 2
.
.
. T.A.C. Temproary Variables
.
XMADMNO   DIM       8                          * Admission Number
XMREFNO   DIM       20                         * T.A.C. Reference Number
XMPOLIC   DIM       20                         * Police Stat. Accd. reported to
XMACDAT   DIM       8                          * Date of Accident (CCYYMMDD)
XMSNAME   DIM       30                         * Solicitor Name
XMSTELE   DIM       12                         * Solicitor Telephone
XMCREGO   DIM       36                         * Car Rego Numbers Involved
XMACLOC   DIM       40                         * Accident Location
XMDPIND   DIM       1                          * D= Driver, P= Passenger
XMENGAG   DIM       20                         * While Eng In-Free Format Entry
XMPINJR   DIM       30                         * Patient Injured When
XMMDTRN   DIM       10                         * Mode Of Transport
XMMECHS   DIM       30                         * Mechanism Of Severist Injury
XMREGNS   DIM       20                         * Region Of Severist Injury
XMOTHD1   DIM       30                         * Other Driver Details Line 1
XMOTHD2   DIM       30                         *   "     "      "     Line 2
XMOTHD3   DIM       30                         *   "     "      "     Line 3
.
.
. Veterans Affairs Temporary variables
.
XVADMNO   DIM       8                            * Admission Number
XVCLMNO   DIM       20                           * Claim Number
.
.
. P.R.A. Temporary variables
.
XPKNAME   DIM       20
XPKADD1   DIM       35
XPKADD2   DIM       35
XPKSUBR   DIM       35
XPKADD4   DIM       35
XPKPOST   DIM       8
XPKTELEP  DIM       20
XPKTELEB  DIM       20
XPKRELP   DIM       10
.
. ***************************************************************************
. *                  ----  Variable Definitions  ----                       *
. *                                                                         *
. ***************************************************************************
.
ACCEPT    FORM      1
ACTION    DIM       1
AEALERT   FORM      1
ADD       DIM       2
AMM       DIM       2
AYY       DIM       2
ACC       DIM       2
ATTRLINE  DIM       80
ATTRLIN1  DIM       80
.
CHECK     FORM      3
CHECKA    FORM      3
CHG       FORM      1
CKACTIVE  FORM      1
CKLINKED  FORM      1
CMDLINE   DIM       80
COUNT     FORM      1
COUNTR    FORM      2
CPAGENO3  FORM      3
CURDATE   DIM       8
DETCADES  DIM       20
DETCODES  DIM       20
DFLTANSR  FORM      1                  * default answer for Primary Diagnosis
.                                             1 = Yes
.                                             2 = No
DIM1A     DIM       1
DIM3      DIM       3
DIM4      DIM       4
DIM5      DIM       5
DIM6      DIM       6
DIM8      DIM       8
DIM12     DIM       12
DIM13     DIM       13
DIM20     DIM       20
DIM24     DIM       24      * display var for diagnosis description
DIM30     DIM       30
DIM40     DIM       40
DIM50     DIM       50
DIM70     DIM       70
DISTIME   DIM       5
DOAFLAG1  FORM      1
DOAFLAG2  FORM      1
DOAFLAG3  FORM      1
DOAFLAG4  FORM      1
DOATOTAL  FORM      1
DOCCODE   DIM       6
EMICFLAG  FORM      1       * 1 = Using ICD10; 0 = Using ICD9 (paticddf)
FIELD     FORM      2
FLASHSET  FORM      1
FOLLOWUP  FORM      1
FORM3     FORM      3
FORM6     FORM      6
.
HELPRNT   FORM      3
HEMR5COD  DIM       6
HEPMR5    FORM      1
HINPCLM   FORM      1
INSTYPE   FORM      1
.
LINEPOSN  FORM      2
LNO       FORM      2
.
MANFLAG1  FORM      1             * mandatory fields flag screen 1
.                                      0 = all fields complete
.                                      1 = fields incomplete
MANFLAG2  FORM      1             * mandatory fields flag screen 2
.                                      0 = all fields complete
.                                      1 = fields incomplete
MANFLAG3  FORM      1             * mandatory fields flag screen 3
.                                      0 = all fields complete
.                                      1 = fields incomplete
MANFLAG4  FORM      1             * mandatory fields flag screen 4
.                                      0 = all fields complete
.                                      1 = fields incomplete
MANFLAG5  FORM      1             * mandatory fields flag screen 5
.                                      0 = all fields complete
.                                      1 = fields incomplete
MASTFLG   FORM      1             * display master details flag
.                                     0 = yes
.                                     1 = no
.MHFUND    DIM       6
MODE      DIM       1
.
NEWBED    DIM       3
NEWFLAG   FORM      1             * new patient flag
.                                   0 = new patient
.                                   1 = existing patient
.                                   2 = zero U/R patient
NEWWARD   DIM       3
NUMHOUR   FORM      2
NUMMIN    FORM      3
NXTFLAG1  FORM      1             * page position flag for current patients
.                                   0 = no next page
.                                   1 = next page
.
OCACLIN   DIM       6  
OCADESC   DIM       30
OLDBED    DIM       3
OLDWARD   DIM       3
OPERCODE  DIM       4
OPTNLINE  DIM       80
OPTNLIN1  DIM       80
.
PRIMCNT   FORM      2
PROCCODE  DIM       9
PROCVERT  FORM      2
.
SAVKEY8   DIM       8
SAVLAST   DIM       9
SAVPURNO  DIM       8
SECURITY  FORM      1
SURSYST   FORM      1
SVERT     FORM      2
.
TCNAME    DIM       8
TEMPFIL1  DIM       8             * current patients
TEMPFIL2  DIM       8             * incomplete patients
TEMPFIL3  DIM       8             * procedures work file
TEMPFIL4  DIM       8             * procedures temp file
TEMPFIL5  DIM       8             * diagnoses work file
TEMPFIL6  DIM       8             * diagnoses temp file
TFSCDESC  DIM       30
TMPDTCAT  DIM       2
TMPDTCOD  DIM       3
TMPDTACT  DIM       1                    * detente temporary action
TMPDVIST  DIM       1                    * detente temporary visit type
TMPDVISN  DIM       8                    * detente temporary visit number
TMPDDATE  DIM       8                    * detente temporary visit date
TODAY     DIM       8
TOTAL     FORM      4
TWNAME    DIM       8
.
URFLAG    FORM      1
.
WAITTIME  FORM      4
WDATE     DIM       8
WINFLG    FORM      1
.
.
. -----  CONSTANTS    ----
.
ATCHAR    INIT      "@"
CATEA     INIT      "ea"
CATEB     INIT      "eb"
CATEC     INIT      "ec"
CATED     INIT      "ed"
CATEE     INIT      "ee"
CATEF     INIT      "ef"
CATEG     INIT      "eg"
CATEH     INIT      "eh"
CATEI     INIT      "ei"
CATEJ     INIT      "ej"
CATEK     INIT      "ek"
CATEL     INIT      "el"
CATEM     INIT      "em"
CATEN     INIT      "en"
CATEO     INIT      "eo"
CATEP     INIT      "ep"
CATEQ     INIT      "eq"
CATER     INIT      "er"
CATES     INIT      "es"
CATET     INIT      "et"
CATEU     INIT      "eu"
CATEV     INIT      "ev"
CATEW     INIT      "ew"
CODEA     INIT      "A "
CODEAA    INIT      "AA"
CODEAE    INIT      "AE"
CODEAI    INIT      "AI"
CODEAP    INIT      "AP"
CODEAR    INIT      "AR"
CODEA1    INIT      "A1"
CODEA2    INIT      "A2"
CODEA3    INIT      "A3"
CODEA4    INIT      "A4"
CODEA5    INIT      "A5"
CODEA6    INIT      "A6"
CODEA7    INIT      "A7"
CODEA8    INIT      "A8"
CODEBC    INIT      "BC"
CODECL    INIT      "CL"
CODEEA    INIT      "EA"
CODEED    INIT      "ED"
CODEEP    INIT      "EP"
CODEES    INIT      "ES"
CODEEW    INIT      "EW"
CODES     INIT      "S "
CODEU1    INIT      "U1"
DASH24    INIT      "------------------------"
DASH25    INIT      "-------------------------"
DASH26    INIT      "--------------------------"
DASH27    INIT      "---------------------------"
DAYMIN    FORM      "1440"
DDRV      INIT      "Driver   "
DPAS      INIT      "Passenger"
ERASE     INIT      "iserase "
FNAME1    INIT      "emr01a"      * current patients temp file
FNAME2    INIT      "emr01b"      * incomplete patients temp file
FNAME3    INIT      "emr01c"      * clinical notes work file
FNAME4    INIT      "emr01d"      * procedures working file
FNAME5    INIT      "emr01e"      * clinical notes temp file
FNAME6    INIT      "emr01f"      * procedures temp file
FNAME7    INIT      "emr01g"      * diagnoses work file
FNAME8    INIT      "emr01h"      * diagnoses temp file
HYPHEN    INIT      "-"
ISBUILD   INIT      "isbuild "
ITEM45    INIT      "   45"
ITEM47    INIT      "   47"
ITEM49    INIT      "   49"
ITEM51    INIT      "   51"
ITEM53    INIT      "   53"
ITEM55    INIT      "   55"
ITEM57    INIT      "   57"
ITEM59    INIT      "   59"
ITEM61    INIT      "   61"
ITEM63    INIT      "   63"
ITEM65    INIT      "   65"
ITEM67    INIT      "   67"
ITEM69    INIT      "   69"
ITEM71    INIT      "   71"
ITEM73    INIT      "   73"
ITEM75    INIT      "   75"
ITEM77    INIT      "   77"
ITEM79    INIT      "   79"
ITEM81    INIT      "   81"
ITEM83    INIT      "   83"
ITEM85    INIT      "   85"
ITEM87    INIT      "   87"
ITEM89    INIT      "   89"
ITEM91    INIT      "   91"
ITEM93    INIT      "   93"
ITEM95    INIT      "   95"
ITEM97    INIT      "   97"
ITEM99    INIT      "   99"
ITEM101   INIT      "  101"
ITEM103   INIT      "  103"
ITEM166   INIT      "  166"
ITEM167   INIT      "  167"
ITEM168   INIT      "  168"
ITEM169   INIT      "  169"
ITEM170   INIT      "  170"
ITEM171   INIT      "  171"
ITEM172   INIT      "  172"
ITEM173   INIT      "  173"
ITEM174   INIT      "  174"
ITEM175   INIT      "  175"
NINE4     INIT      "9999"
PIPE      INIT      "|"
RECTYPEA  INIT      "A"
SCRN03    INIT      "03"
SCRN04    INIT      "04"
SCRN05    INIT      "05"
SCRN06    INIT      "06"
SCRN07    INIT      "07"
SP50      INIT      "                                                  "
WPFILEP   INIT      "PATCMA"
WPFILE1   FILE      ASCII, FIXED=70
X100      INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX":
                    "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
X27       INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXX"
ZED24     INIT      "zzzzzzzzzzzzzzzzzzzzzzzz"
.Z20       INIT      "zzzzzzzzzzzzzzzzzzzz"
ZERO4     INIT      "0000"
