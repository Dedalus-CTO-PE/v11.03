.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATIRNFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Invoice Ranges                                  *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patirnge.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 3                                           *
.  *                                                                    *
.  *     Modifications: V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                                                                    *
.  **********************************************************************
.
PATIRNG1   IFILE SQL, FIXED=64, KEY="U1-3"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
IRANGE     DIM       3         3          1       INVOICE RANGE CODE
IRDESC     DIM      40        40          4       INVOICE RANGE DESCRIPTION
IRNEXT     FORM      8         5         44       NEXT INVOICE NUMBER IN RANGE
IRMAXI     FORM      8         5         49       MAXIMUM INVOICE NO. IN RANGE
IRSPAR     DIM      10        10         54       SPARE VARIABLES
.End of Record
