.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATFCMFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Health Fund Comments                            *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patfcmmf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8                                           * 
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                                                                    *
.  **********************************************************************
.
PATFCMM1  IFILE    SQL, FIXED=99, KEY="U1-6,7-8"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
FUNDCOD    DIM     6          6          1         Health Fund
DFCOUNT    DIM     2          2          7         Count
FTEXT      DIM     70         70         9         Text
FSPARES    DIM     20         20         79        Sppare
.
.End of Record                           99
.
. Redefines form fields from key  
. ------------------------------
. NAME     TYPE    LENGTH  START     DESCRIPTION
. ----     ----    ------  -----     -----------
FCOUNT     FORM      2       7         Count
.
.
