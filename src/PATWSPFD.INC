.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATWSPFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Ward Specialities                               *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patwspaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 6                                           *
.  *                                                                    *
.  *     Modifications: V5.00 16/08/89 Graeme Williams                  *
.  *                          Include written                           *
.  *                                                                    *
.  **********************************************************************
.
PATWSPA1   IFILE SQL, FIXED=20, KEY="U1-3,4-6"
.
. NAME     TYPE  LENGTH  PHYSICAL  START LOC.   DESCRIPTION
. ----     ----  ------  --------  ----------   -----------
WSPWARD    DIM      3         3          1      WARD CODE
WSPSPEC    DIM      3         3          4      PRIMARY DOCTOR TYPE  (DT)
WSPNBED    FORM     3         3          7      NUMBER OF BEDS
WSPSPAR    DIM     10        10         10      SPARE VARIABLE
.
.End of Record
