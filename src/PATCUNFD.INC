.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATCUNFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Clinic Unit Number                              *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patcunof.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 9                                           *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                                                                    *
.  **********************************************************************
.                                                                       *
PATCUNO1  IFILE  SQL, FIXED=25, KEY="U1-6,7-9"
.
.Name     Type   Length   Physical   Start   Description
.----     ----   ------   --------   -----   -----------
CUNDOCT   DIM       6         6          1   DOCTOR CODE 
CUNWARD   DIM       3         3          7   WARD CODE 
CUNNUMB   DIM       3         3         10   CLINIC UNIT NUMBER
CUNSPAR   DIM       12        12        13   SPARE VARIABLE
.
.End of Record                          25
.
