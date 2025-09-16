.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OUTDIAFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Outpatients         *
.  *                    Diagnosis Details                               *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : outdiagf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY8                                            * 
.  *                                                                    *
.  *     Modifications:  23/04/2001 Dean Cramer                         *
.  *                     Add variables diagnosis codes and              *
.  *                     descriptions 2 thru 5                          *
.  *                     31/08/89  Graeme Williams                      *
.  *                               Created FD                           *
.  *                                                                    *
.  **********************************************************************
.
OUTDIAG1   IFILE     SQL, FIXED=354, KEY="U1-8"
FILDIAG1   INIT      "diagf"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
.
DOPDIOUT  DIM        8         8          1       Outpatient number
OPDICODE  DIM        9         9          9       Diagnosis code 1 (MBS or ICD9)
OPDIDESC  DIM       50        50         18       Diagnosis description 1
OPDICOD2  DIM        9         9         68       Diagnosis code 2 (MBS or ICD9)
OPDIDES2  DIM       50        50         77       Diagnosis description 2
OPDICOD3  DIM        9         9        127       Diagnosis code 3 (MBS or ICD9)
OPDIDES3  DIM       50        50        136       Diagnosis description 3
OPDICOD4  DIM        9         9        186       Diagnosis code 4 (MBS or ICD9)
OPDIDES4  DIM       50        50        195       Diagnosis description 4
OPDICOD5  DIM        9         9        245       Diagnosis code 5 (MBS or ICD9)
OPDIDES5  DIM       50        50        254       Diagnosis description 5
OPDISPAR  DIM       50        50        304       Spare variable
.
.End of Record                          354
.
.  redefine form fields from key
.  -----------------------------
.NAME      TYPE     LENGTH    DESCRIPTION
.----      ----     ------    -----------
.
OPDIOUTN   FORM        8      Outpatient number
