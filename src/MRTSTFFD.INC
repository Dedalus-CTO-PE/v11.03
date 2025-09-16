.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : MRTSTFFD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for Medical Records Tracking  *
.  *                    Staff Register                                        *
.  *                                                                          *
.  *     File Type    : SQL                                                   *
.  *                                                                          *
.  *     File Name    : mrtstfaf.dat                                          *
.  *                                                                          *
.  *     Keys         : KEY 6                                                 * 
.  *                  : KEY 9                                                 *
.  *                  : KEY 26                                                *
.  *                                                                          *
.  *     Modifications:                                                       *
.  *                                                                          *
.  ****************************************************************************
.
MRTSTFA1   IFILE  SQL, FIXED=175, KEY="U1-6"
MRTSTFA2   IFILE  SQL, FIXED=175, KEY="U58-60,1-6"
MRTSTFA3   IFILE  SQL, FIXED=175, KEY="U13-32,1-6"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
.
MRSTCODE    DIM       6         6          1      Staff Code
MRSTTITL    DIM       6         6          7      Title
MRSTSNAM    DIM      20        20         13      Surname
MRSTGNAM    DIM      25        25         33      Given Name
MRSTDEPT    DIM       3         3         58      Position
MRSTCONT    DIM      30        30         61      Contact Point
MRSTIEPH    DIM      12        12         91      Phone No. (Internal Extension)
MRSTBHPH    DIM      12        12        103      Phone No. (External/Other)
MRSTAHPH    DIM      12        12        115      Phone No. (After Hours)
MRSTPAGR    DIM      12        12        127      Phone No. (Pager)
MRSTBCOD    DIM      20        20        139      Bar Code Number 
MRSTSTAT    FORM      1         2        159      Status Indicat. 0 = Active
.                                                                 1 = Non Active
MRSTUSAG    FORM      1         2        161      Usage Indicator 0 = Not Used
.                                                                 1 = Used
MRSTSPAR    DIM      12        12        163      Spare Variable
.
.End of Record                           175
+
