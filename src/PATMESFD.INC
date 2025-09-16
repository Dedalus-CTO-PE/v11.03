.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATMESFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Invoice Messages                                *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patmesgf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 3                                           *
.  *                                                                    *
.  *     Modifications: V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                                                                    *
.  **********************************************************************
.
PATMESG1   IFILE SQL, FIXED=144, KEY="U1-3"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
PMCODE     DIM       3           3        1       Message Code
PMLINE1    DIM      65          65        4       Message Line 1
PMLINE2    DIM      65          65       69       Message Line 2
PMSPARE    DIM      10          10      134       *** Spare ***
.
.End of Record
.
