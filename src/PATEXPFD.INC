.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATEXPFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Purge Exceptions                                *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patexcpf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8                                           *
.  *                                                                    *
.  *     Modifications: V5.01.01  23/05/91  DIG                         *
.  *                    Changed this include to PATEXPFD so that        *
.  *                    PATEXCFD can be used for the new Management     *
.  *                    Analysis Generation                             *
.  *                                                                    *
.  **********************************************************************
.
PATEXPA1   IFILE SQL, FIXED=59, KEY="U1-8"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
DPTEXVIS    DIM      8           8         1      VISIT NUMBER
PTEXIDAT    DIM      8           8         9      INSERT DATE (CCYYMMDD)
PTEXIOPR    DIM      4           4        17      INSERT OPERATIOR CODE
PTEXIPRT    FORM     2           2        21      INSERT PORT NUMBER
PTEXSTAT    FORM     1           2        23      STATUS   1 - Insert
.                                                          2 - Delete
PTEXDDAT    DIM      8           8        25      DELETE DATE (CCYYMMDD)
PTEXDOPR    DIM      4           4        33      DELETE OPERATOR CODE
PTEXDPRT    FORM     2           2        37      DELETE PORT NUMBER
PTEXSPAR    DIM      20          20       39      SPARE VARIABLE
.End of Record                            59
.
.  redefines form fields from key
.  ------------------------------
.NAME       TYPE   LENGTH   START     DESCRIPTION
.----       ----   ------   -----     -----------
PTEXVIS     FORM     8          1     VISIT NUMBER
.
