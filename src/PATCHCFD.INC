.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : PATCHCFD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for Patient                   *
.  *                    Code Changes                                          *
.  *                                                                          *
.  *     File Type    : SQL                                                   *
.  *                                                                          *
.  *     File Name    : patchcof.dat                                          *
.  *                                                                          *
.  *     Keys         : KEY 24   KEY 26                                       *
.  *                                                                          *
.  *     Modifications:                                                       *
.  *      V10.12.01 16/03/2018  Jill Parkinson Task 0848131                   *
.  *                Added index 3                                             *
.  *      V10.02.02 08/08/2011  Mike Laming  CAR 241939                       *
.  *                Change KEY 2 to KEY26 (added CHDATE & CHTIME)             *
.  *      V10.02.01 26/07/2011  Mike Laming  CAR 241939                       *
.  *                Added CHEPISNO (Episode No.) & CHCODCMP (Coding complete  *
.  *                for this Episode) - added Key for AdmisNo./EpisodeNo.     *
.  *      V9.09.01  20/11/2007  Peter Vela   CAR 132264                       *
.  *                Added Date, Time, User ID created                         *
.  ****************************************************************************
.
PATCHCO1  IFILE    SQL, FIXED=100, KEY="U6-13,14-21,22-29"
PATCHCO2  IFILE    SQL, FIXED=100, KEY="U6-13,70-71,14-21,22-29"
PATCHCO3  IFILE    SQL, FIXED=100, KEY="U30-37,38-45,6-13,14-21,22-29"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
CHCATG     DIM     2          2          1        Category     (Cat CC)
CHCODE     DIM     3          3          3        Code (Cat CC = Care Type)
DCHADMN    DIM     8          8          6        Admission Number
CHDATE     DIM     8          8          14       Date (Care Type End Date)
CHTIME     DIM     8          8          22       Time (Care Type End Time)
CHCRDATE   DIM     8          8          30       Date Created
CHCRTIME   DIM     8          8          38       Time Created
CHCRUSID   DIM     4          4          46       User ID Created
CHUPDATE   DIM     8          8          50       Date Last Updated
CHUPTIME   DIM     8          8          58       Time Last Updated
CHUPUSID   DIM     4          4          66       User ID Updated
CHEPISNO   DIM     2          2          70       Episode No.
CHCODCMP   DIM     8          8          72       Date Episode Coding Complete
CHSPARE    DIM     20         20         80       Spare
.End of Record                           100
.
. Redefines form fields from key  
. ------------------------------
. NAME     TYPE    LENGTH  START     DESCRIPTION
. ----     ----    ------  -----     -----------
CHADMN     FORM         8      1     Admission Number
.
