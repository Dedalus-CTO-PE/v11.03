.  **********************************************************************
.  *                                                                    *
.  *     Include Name : LEGWMAFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    MOTOR ACCIDENT BOARD CLAIMS DETAILS             *
.  *                    LEGACY VISITS                                   *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : legwmabf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8                                           *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *      V9.03.00  30/04/2004  Ebon Clements    CAR 49209              *
.  *                Ported from 6.11                                    *
.  *                                                                    *
.  **********************************************************************
.
LEGWMAB1   IFILE SQL, FIXED=405, KEY="U1-8"
.
. NAME     TYPE   LENGTH   PHYSICAL   START LOC.  DESCRIPTION
. ----     ----   ------   --------   ----------  -----------
DLMADMNO   DIM       8          8           1     ADMISSION NUMBER
LMREFNO    DIM      20         20           9     M.A.B. REFERENCE NUMBER
LMPOLIC    DIM      20         20          29     POLICE STAT. ACCT REPORTED TO
LMACDAT    DIM       8          8          49     DATE OF ACCIDENT (CCYYMMDD)
LMSNAME    DIM      30         30          57     SOLICITOR NAME
LMSTELE    DIM      12         12          87     SOLICITOR TELEPHONE
LMCREGO    DIM      36         36          99     CAR REGO NUMBERS INVOLVED
LMACLOC    DIM      40         40         135     ACCIDENT LOCATION
LPTAROLE   DIM       3          3         175     ROLE OF PAT. IN ACC (CAT RA)
LENGAGED   DIM      20         20         178     WHILE ENG IN-FREE FORMAT ENTRY
LPINJURE   DIM      30         30         198     PATIENT INJURED WHEN
LMDTRANS   DIM      10         10         228     MODE OF TRANSPORT
LMECHSEV   DIM      30         30         238     MECHANISM OF SEVERIST INJURY
LREGNSEV   DIM      20         20         268     REGION OF SEVERIST INJURY
LOTHDET1   DIM      30         30         288     OTHER DRIVER DETAILS LINE 1
LOTHDET2   DIM      30         30         318       "     "      "     LINE 2
LOTHDET3   DIM      30         30         348       "     "      "     LINE 3
LTWMTIST   DIM      5          5          378     TAC Items start time (hh:mm)
LMSPARE    DIM      22         22         383     SPARE
.
.End of Record                            405
.
. redefine form fields from key
. -----------------------------
.NAME     TYPE    LENGTH     START LOC.   DESCRIPTION
.----     ----    ------     ----------   -----------
LMADMNO    FORM        8             1     ADMISSION NUMBER
