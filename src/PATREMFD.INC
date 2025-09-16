. V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes 
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATREMFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Letter Reminder Details                         *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patremdf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8                                           *
.  *                                                                    *
.  **********************************************************************
.
PATREMD1   IFILE SQL, FIXED=51, KEY="U1-8"
.
. NAME     TYPE   LENGTH   PHYSICAL    START LOC.   DESCRIPTION
. ----     ----   ------   --------    ----------   -----------
DREMADMN   DIM       8           8          1       ADMISSION NUMBER
REMLSTL    DIM       3           3          9       LAST LETTER SENT
REMLDTE    DIM       8           8         12       DATE LAST LETTER SENT
REMPDTE    DIM       8           8         20       DATE LAST PAYMENT
REMHFLG    FORM      1           2         28       HEALTH FUND LETTER FLAG
.                                                   0 = LETTER NOT SENT
.                                                   1 = LETTER SENT
REMSPAR    DIM      21          21         30       SPARE VARIABLE
.
.End of Record                             51
.
.  redefine form fields from key
.  -----------------------------
. NAME     TYPE   LENGTH   START LOC.   DESCRIPTION
. ----     ----   ------   ----------   -----------
REMADMN    FORM       8           1      ADMISSION NUMBER
.
