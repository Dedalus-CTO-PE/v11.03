. V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes 
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATNZRFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    New Zealand Rates Table                         *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patnzraf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 9                                           *
.  *                                                                    *
.  **********************************************************************
.
PATNZRA1   IFILE SQL, FIXED=80, KEY="U1-3,4-6,7-9"
.
. NAME     TYPE   LENGTH   PHYSICAL   START LOC.   DESCRIPTION
. ----     ----   ------   --------   ----------   -----------
NZRRESI     DIM      3           3          1      RESIDENT STATUS
NZRCOMP     DIM      3           3          4      COMPENSATION ELIGIBILITY
NZRTYPE     DIM      3           3          7      ATTENDING DOCTOR TYPE
NZRCPRDY    FORM  12.2           8         10      CHARGE PER DAY
NZRCPDES    DIM     20          20         18      RATE CHARGE PER DAY DESCRIP
NZRCERDY    FORM  12.2           8         38      EXTRAS PER DAY
NZRCEDES    DIM     20          20         46      EXTRA CHARGE PER DAY DESCRIP
NZRCSPAR    DIM     14          14         66      SPARE VARIABLE
.
.End of Record
NZRCPDAY    FORM   5.2   
NZRCEDAY    FORM   5.2  
