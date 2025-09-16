.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATPR1FD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Pre-Admission Details                           *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patpr1af.dat                                    *
.  *                    patpx1af.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8                                           *
.  *                                                                    *
.  *     Modifications: V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                    V5.01 16/05/89 Graeme Williams (I.B.A)          *
.  *                          Added PDECDTE to I/O include (was missing)*
.  *                    V5.02 16/08/89 Graeme Williams                  *
.  *                          Added PHCNOTES, expanded PTMASPAR           *
.  *     V5.01.02  21/01/1991 Graeme Williams                           *
.  *               Added the master file extension to the patpramf file *
.  *     V5.01.03  03/12/92   Whirlpool                                 *
.  *               Added the patpr1af & patpx1af file definitions       *
.  *     V5.09.01  26/02/2001  Steve Armstrong                          *
.  *               Added the patpr1af index 2 (for DOB search)          *
.  *                                                                    *
.  **********************************************************************
.
PATPR1A1   IFILE SQL, FIXED=808, KEY="U1-8"
PATPR1A2   IFILE SQL, FIXED=808, KEY="D286-293"
.
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
.      SAME FORMAT AS PATMAST EXCEPT AADMNO IS MOVED TO PURNO
.
PATPX1A1   IFILE SQL, FIXED=850, KEY="U1-8"
.
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
.      SAME FORMAT AS PATMASX EXCEPT AADMNO IS MOVED TO PURNO
.
