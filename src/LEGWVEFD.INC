.  **********************************************************************
.  *                                                                    *
.  *     Include Name : LEGWVEFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for                     *
.  *                    VETERAN AFFAIRS CLAIMS LEGACY VISITS            *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : legwvetf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8                                           *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *      V9.03.00  30/04/2004  Ebon Clements    CAR 49209              *
.  *                Ported from 6.11                                    *
.  *                                                                    *
.  **********************************************************************
.
LEGWVET1   IFILE SQL, FIXED=50, KEY="U1-8"
.
. NAME     TYPE   LENGTH  PHYSICAL   START LOC.  DESCRIPTION
. ----     ----   ------  --------   ----------  -----------
DLVADMNO   DIM       8          8          1     ADMISSION NUMBER
LVCLMNO    DIM      20         20          9     CLAIM NUMBER
LGWVAUTH   DIM      12         12         29     AUTHORISATION NUMBER
LGWVDATE   DIM       8          8         41     AUTHORISATION DATE
LVSPARE    DIM       1          1         49     SPARE
.
.End of Record
.
.  redefine form fields from key
.  -----------------------------
.NAME     TYPE      LENGTH      START LOC.   DESCRIPTION
.----     ----      ------      ----------   -----------
LVADMNO    FORM          8               1    ADMISSION NUMBER
LQVADMNO   FORM          8               1    ADMISSION NUMBER
