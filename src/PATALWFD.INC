. V5.07.001 18/08/1998 Glenn 507 Changes
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATALWFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Allowance Codes                                 *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patallw.dat                                     *
.  *                                                                    *
.  *          V9.04.01  03/08/05 J.Tan    CAR 62750                     *
.  *                    Removed redefined amount variables              *
.  *                                                                    *
.  **********************************************************************
.
PATALLW1   IFILE SQL, FIXED=41, KEY="U1-2"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
ALWCODE     DIM      2           2         1      ALLOWANCE NUMBER
ALWDESC     DIM      20         20         3      ALLOWANCE DESCRIPTION
ALWAMT      FORM    12.2         8        23      ALLOWANCE AMOUNT
PTAWSPAR    DIM      10         10        31      ALLOWANCE AMOUNT
.
.End of Record                            41
.
.    SPARE VARIABLES
.
SALWCODE     DIM         2        
SALWDESC     DIM         20      
SALWAMT      FORM       12.2    
.
