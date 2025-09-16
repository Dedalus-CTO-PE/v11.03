.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATPERFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Doctor Personal Details                         *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patperss.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 12                                          *
.  *                                                                    *
.  *     Modifications: V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                                                                    *
.  **********************************************************************
.
PATPERS1   IFILE SQL, FIXED=88, KEY="U1-6,7-8,9-10,11-12"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
PECODE     DIM       6           6         1      DOCTOR CODE
PETYPE     DIM       2           2         7      Q = QUALIFICATION
.                                                 O = OTHER HOSPITAL
.                                                 I = SPECIAL INTERESTS
.                                                 H = HOLIDAYS
.                                                 C = GENERAL COMMENTS
DPEPAGE    DIM       2           2         9      PAGE NUMBER
DPELINE    DIM       2           2        11      LINE NUMBER 1 - 5 = Q
.                                                  "      "   6 - 9 = O
.                                                  "      "   10-15 = I
.                                                 LINE NUMBER 1 -15 = H
.                                                 LINE NUMBER 1 -15 = C
PEDESC     DIM      75          75        13      DESCRIPTION
.
.End of Record
.
.  redefine form fields from key
.  -----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
PEPAGE     FORM         2             9      PAGE NUMBER
PELINE     FORM         2            11      LINE NUMBER 1 - 5 = Q
