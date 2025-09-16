.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATWSSFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Ward Specialties Statistics Summary             *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patwssaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 12                                          *
.  *                                                                    *
.  *     Modifications: V5.00 19/08/89 Graeme Williams                  *
.  *                          Include written                           *
.  *                                                                    *
.  **********************************************************************
.
PATWSSA1   IFILE SQL, FIXED=64, KEY="U1-6,7-9,10-12"
.
. NAME     TYPE  LENGTH  PHYSICAL  START LOC.   DESCRIPTION
. ----     ----  ------  --------  ----------   -----------
WSSDATE    DIM      6         6          1      PERIOD    (CCYYMM)
WSSWARD    DIM      3         3          7      WARD CODE
WSSSPEC    DIM      3         3         10      PRIMARY DOCTOR TYPE  (DT)
WSSADMN    FORM     6         4         13      NUMBER OF ADMISSIONS
WSSTRIN    FORM     6         4         17      NUMBER OF TRANSFERS IN
WSSDOCS    FORM     6         4         21      NUMBER OF DOCTOR CHANGES
WSSBDAY    FORM     8         5         25      NUMBER OF BED DAYS
WSSDSCH    FORM     6         4         30      NUMBER OF DISCHARGES
WSSTOUT    FORM     6         4         34      NUMBER OF TRANSFERS OUT
WSSSPAR    DIM     26        26         38      SPARE VARIABLE
.
.End of Record
