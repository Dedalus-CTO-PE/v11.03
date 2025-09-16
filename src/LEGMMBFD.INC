.  **********************************************************************
.  *                                                                    *
.  *     Include Name : LEGMMBFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for LEGACY              *
.  *                    PATIENT MEDICAL RECORDS MBS DETAILS             *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : legmmbsf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 19, KEY 10                                  *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *          V9.03.00  04/05/2004  Sylvek Litewka  CAR 49209           *
.  *                    created FD.                                     *
.  *                                                                    *
.  **********************************************************************
.
LEGMMBS2   IFILE SQL, FIXED=44, KEY="U1-9,10-17,18-19"
LEGMMBS1   IFILE SQL, FIXED=44, KEY="U10-17,18-19"
.
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
LMMCODE     DIM       9          9         1      MBS CODE
DLMMADMN    DIM       8          8        10      ADMISSION NUMBER
DLMMRECN    DIM       2          2        18      RECORD NUMBER FOR ADMISSION
LMMDATE     DIM       8          8        20      OPERATION DATE  (CCYYMMDD)
LMMSTIM     DIM       5          5        28      OPERATION START TIME
LMMETIM     DIM       5          5        33      OPERATION END TIME
LMMSPARE    DIM       6          6        38      SPARE
.
.End of Record
.
LSMMCODE    DIM          9
.
.  redefine form fields from key
.  -----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
LMMADMN    FORM          8            10      ADMISSION NUMBER
LQMMADMN   FORM          8            10      ADMISSION NUMBER
LMMRECN    FORM          2            18      RECORD NUMBER FOR ADMISSION
