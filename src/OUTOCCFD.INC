.
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OUTOCCFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Outpatients         *
.  *                    Occasions of Service                            *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : outoccaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 21                                          *
.  *                                                                    *
.  *     Modifications: V5.00 03.05.89 H.Donnard   (IBA)                *
.  *                          Change include heading                    *
.  *                                                                    *
.  **********************************************************************
.
.    IO INC       OUTOCCIO
.
OUTOCCA1    IFILE    SQL, FIXED=47, KEY="U1-6,7-9,10-15,16-21"
FILOCCA1    INIT     "occaf"
.
.NAME       TYPE   LENGTH   PHYSICAL  START     DESCRIPTION
.----       ----   ------   --------  -----     -----------
OCCSITE      DIM        6         6      1      SITE ID (IDDD)
.
OCCGRUP      DIM        3         3      7      CLINIC GROUP CODE (CODE CG)
OCCTYPE      DIM        6         6     10      CLINIC TYPE
OCCDATE      DIM        6         6     16      DATE (CCYYMM)
.
OCCNUMB      FORM       8         5     22      NUMBER OF PEOPLE
OCCSPAR      DIM       20        20     27      ****  SPARE  ****
.
.End of record                        47
.
