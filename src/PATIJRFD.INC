.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATIJRFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Invoices with Journals Entered                  *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patijrnf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8                                           * 
.  *                                                                    *
.  *     Modifications: V5.01.01 18/08/89 J.Tan                         *
.  *                             Added batch number                     *
.  *                    V5.01.02 09/10/90 J.Tan    SRF 106481           *
.  *                             Remove the first index                 *
.  *                                                                    *
.  **********************************************************************
.
PATIJRN1  IFILE    SQL, FIXED=37, KEY="U14-21,1-8"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
IJINVNO    DIM     8          8          1         Invoice Number
IJADMNO    FORM    8          5          9         Admission Number
DIJBATCH   DIM     8          8          14        Batch Number
IJSPARE    DIM     15         15         22        Spare
.
.End of Record                           37
.
. Redefines form fields from key  
. ------------------------------
. NAME     TYPE    LENGTH  START     DESCRIPTION
. ----     ----    ------  -----     -----------
IJBATCH    FORM         8      17    Batch Number
.
