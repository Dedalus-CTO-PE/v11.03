.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATNUMFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Ward Usage                                      *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patnumwr.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 9                                           *
.  *                                                                    *
.  *     Modifications: V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                                                                    *
.  **********************************************************************
.
PATNUMW1   IFILE SQL, FIXED=34, KEY="U1-3,4-9"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
PWARD      DIM       3           3         1      WARD NUMBER
PDATE      DIM       6           6         4      DATE (CCYYMM)
PADMN     FORM       6           4        10      NUMBER OF PATIENT ADMITTED
PTRIN     FORM       6           4        14      NUMBER OF PATIENT TRANSFER IN
PTROUT    FORM       6           4        18      NUMBER OF PATIENT TRANSFER OUT
PDSCH     FORM       6           4        22      NUMBER OF PATIENT DISCHARGED
PLEAV     FORM       6           4        26      NUMBER OF PATIENT ON LEAVE
PRETN     FORM       6           4        30      NUMBER OF PATIENT RETURN
.
.End of Record
.
SPWARD      DIM          3                 WARD NUMBER
SPDATE      DIM          6                 DATE (CCYYMM)
SPADMN     FORM          6                 NUMBER OF PATIENT ADMITTED
SPTRIN     FORM          6                 NUMBER OF PATIENT TRANSFER IN
SPTROUT    FORM          6                 NUMBER OF PATIENT TRANSFER OUT
SPDSCH     FORM          6                 NUMBER OF PATIENT DISCHARGED
SPLEAV     FORM          6                 NUMBER OF PATIENT ON LEAVE
SPRETN     FORM          6                 NUMBER OF PATIENT RETURN
