.
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OUTLOCFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Outpatients         *
.  *                    Location                                        *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : outlocaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 24                                          *
.  *                                                                    *
.  *     Modifications: V5.00 03.05.89 H.Donnard   (IBA)                *
.  *                          Change include heading                    *
.  *                                                                    *
.  **********************************************************************
.
.    IO INC       OUTLOCIO
.
OUTLOCA1    IFILE    SQL, FIXED=47, KEY="U1-6,7-9,10-15,16-18,19-24"
FILLOCA1    INIT     "locaf"
.
.NAME       TYPE   LENGTH   PHYSICAL  START     DESCRIPTION
.----       ----   ------   --------  -----     -----------
LOASITE      DIM        6         6      1      SITE ID (IDDD)
LOAGRUP      DIM        3         3      7      GROUP CODE (CG) 
LOATYPE      DIM        6         6     10      CLINIC TYPE
LOACACH      DIM        3         3     16      CATCHMENT AREA BASED ON POSTCODE
LOADATE      DIM        6         6     19      DATE (CCYYMM)
.
LOANUMB      FORM       8         5     25      NUMBER OF PEOPLE
LOASPAR      DIM       17        17     30      ****  SPARE  ****
.
.End of record                        47
.
