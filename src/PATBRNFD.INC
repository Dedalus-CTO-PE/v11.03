.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATBRNFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    New Born                                        *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patbrnsf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 6                                           *
.  *                                                                    *
.  *     Modifications: V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                                                                    *
.  **********************************************************************
.
PATBRNS1   IFILE SQL, FIXED=30, KEY="U1-6"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
BRDATE     DIM       6           6        1       DATE  (CCYYMM)
BRADMN     FORM      8           5        7       NUMBER OF ADMISSIONS
BRSPARE    DIM      18          18       12       SPARE VARIABLE
.
.End of Record
.
.
