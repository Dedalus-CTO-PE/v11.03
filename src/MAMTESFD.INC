.  **********************************************************************
.  *                                                                    *
.  *     Include Name : MAMTESFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Outpatients         *
.  *                    Mammography Test Results                        *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : mamtestf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 18, KEY 26                                  *
.  *                                                                    *
.  *     Modifications: V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                                                                    *
.  *                    V5.01.01 11/07/89  S. O'Gorman                  *
.  *                             Converted for N.Z.                     *
.  *                                                                    *
.  **********************************************************************
.
MAMTEST1   IFILE     SQL, FIXED=70, KEY="U1-8,9-16,17-18"
MAMTEST2   IFILE     SQL, FIXED=70, KEY="U19-26,1-8,9-16,17-18"
.
. NAME     TYPE  LENGTH  PHYSICAL  START LOC.   DESCRIPTION
. ----     ----  ------  --------  ----------   -----------
MMURNO     DIM      8         8          1      PATIENT U.R NO.
DMMIDNO    DIM      8         8          9      MAMMOGRAPHIC ID NO
DMMTCNT    DIM      2         2         17      TEST RESULT COUNT
MMDATE     DIM      8         8         19      DATE OF TEST RESULTS
MMINTR     DIM      3         3         27      INT. RIGHT BREAST (CAT "BI")
MMINTL     DIM      3         3         30      INT. LEFT BREAST (CAT "BI")
MMFOLLOW   FORM     3         3         33      FOLLOWUP PERIOD (months)
MMUSER1    DIM      3         3         36      USER DEFINED 1 
MMUSER2    DIM      3         3         39      USER DEFINED 2
MMUSER3    DIM      3         3         42      USER DEFINED 3
MMUSER4    DIM      3         3         45      USER DEFINED 4
MMUSER5    DIM      3         3         48      USER DEFINED 5
MMUSER6    DIM      3         3         51      USER DEFINED 6
MMUSER7    DIM      3         3         54      USER DEFINED 7
MMUSER8    DIM      3         3         57      USER DEFINED 8
MMFILLER   DIM      10        10        60      FILLER
.
.End of Record                        70
.
.
.  redefine form fields from key
.  -----------------------------
.
.NAME     TYPE   LENGTH    START LOC.  DESCRIPTION
.----     ----   ------    ----------  -----------
MMIDNO    FORM       8            9    MAMMOGRAPHIC ID NO
MMTCNT    FORM       2           17    TEST RESULT COUNT
.
.

