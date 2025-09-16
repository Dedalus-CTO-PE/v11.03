.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATHDOFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    HCS Doctor                                      *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : pathdoct.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 3                                           *
.  *                                                                    *
.  *     Modifications: V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                                                                    *
.  **********************************************************************
.
PATHDOC1   IFILE SQL, FIXED=21, KEY="U1-3"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
DHDCODE    DIM       3           3         1      HCS DOCTOR CODE
HDNAME     DIM      14          14         4      HCS DOCTOR NAME
HDSERV     DIM       3           3        18      HCS DOCTOR SERVICE CODE
.
.End of Record
.
.  redefine form fields from key
.  -----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
HDCODE     FORM         3             1      HCS DOCTOR CODE
