. 
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : IBASPOFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Common              *
.  *                    Spool Details                                   *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : ibaspolf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8, KEY 11, KEY 24                           *
.  *                                                                    *
.  **********************************************************************
.  * Mods     :                                                         *
.  *            C2.09.00  11/10/2000 Charles Handaya                    *
.  *                      Change Date and Time format                   *
.  *                      Increase Extra Space                          *
.  *                      Added third index                             *
.  **********************************************************************
.  *            V5.07     06/10/98  Jim Stathopoulos                    *
.  *                      507 Changes                                   *
.  *                    V5.00 15.08.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                                                                    *
.  **********************************************************************
.
.
IBASPOL1  IFILE      SQL, FIXED=88, KEY="U1-8"
IBASPOL2  IFILE      SQL, FIXED=88, KEY="U60-62,1-8"
IBASPOL3  IFILE      SQL, FIXED=88, KEY="U60-62,9-16,17-24,1-8"
.
. NAME     TYPE      LENGTH  PHYSICAL   START LOC.   DESCRIPTION
. ----     ----      ------  --------   ----------   -----------
CSPNAME   DIM          8          8          1      SPOOL FILE NAME
CSPDATE   DIM          8          8          9      DATE CCYYMMDD
CSPTIME   DIM          8          8         17      TIME HH:MM:SS
CSPDESC   DIM          30         30        25      DESCRIPTION
CSPOPER   DIM          4          4         55      OPERATOR CODE 
CSPLEVE   DIM          1          1         59      SECURITY LEVEL OF PROGRAM
CSPDEPT   DIM          3          3         60      DEPARTMENT CODE
CSPXTRA   DIM          25         25        63      EXTRA SPACE   (FUTURE)
.
.End of record                              88
.
