.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATICGFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    ICD-9CM Groups                                  *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : paticdgf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 5                                           *
.  *                                                                    *
.  *     Modifications: V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                                                                    *
.  **********************************************************************
.
PATICDG1   IFILE SQL, FIXED=76, KEY="U1-1,2-5"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
GIDCODE    DIM       1           1         1      IDENTIFIER :
.                                                     D  ==  DISEASE CODE
.                                                     O  ==  OPERATION CODE
GGPCODE    DIM       4           4         2      GROUP CODE (LEADING ZEROES)
GDESC      DIM      70          70         6      CODE DESCRIPTION
.
.End of Record
.
SGIDCODE   DIM          1             1      IDENTIFIER :
SGGPCODE   DIM          4             2      GROUP CODE (LEADING ZEROES)
SGDESC     DIM         70             6      CODE DESCRIPTION
.
