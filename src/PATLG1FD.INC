.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATLG1FD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    LGA Post Codes                                  *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patlg1af.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8                                           *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                                                                    *
.  **********************************************************************
.
PATLG1A1   IFILE SQL, FIXED=30, KEY="U1-8,9-12"
.
.NAME       TYPE   LENGTH   PHYSICAL  START     DESCRIPTION
.----       ----   ------   --------  -----     -----------
PTLGPOST    DIM       8           8      1      Post code
PTLGLGAC    DIM       4           4      9      LGA code
PTLGSPRE    DIM      17          17     13      spare variable
.
.End of Record
.
.
