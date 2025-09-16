.
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OUTPREFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Outpatients         *
.  *                    Pre-attendance Booking Details                  *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : outpreaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8                                           *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                                                                    *
.  *     V9.03.01  10/09/2003 Sandra Barcham      43011                 *
.  *               No longer use prefix to open                         *
.  *                                                                    *
.  *                    V5.00 05/06/89 Graeme Williams                  *
.  *                          Wrote Include                             *
.  *                                                                    *
.  **********************************************************************
.
.    IO INCLUDE      :  OUTIOPRE
.
OUTPREA1    IFILE    SQL, FIXED=64, KEY="U1-8"
.FILPREA1    INIT     "preaf"    Removed as prefix should not be used
.
.NAME       TYPE   LENGTH   PHYSICAL STRT     DESCRIPTION
.----       ----   ------   -------- -----     -----------
DOPROUTN     DIM        8        8      1      OUTPATIENT NUMBER
OPRSITE      DIM        6        6      9      OUTPATIENT SITE
OPRCLIN      DIM        6        6     15      CLINID ID
OPRDATE      DIM        8        8     21      BOOKING DATE (CCYYMMDD)
OPRSTRT      DIM        5        5     29      CLINIC START TIME (HH:MM)
DOPRSLOT     DIM        3        3     34      BOOKING SLOT NUMBER
OPRTIME      DIM        5        5     37      BOOKING SLOT TIME (HH:MM)
OPRCTYP      DIM        6        6     42      CLINIC TYPE
OPRSPAR      DIM       16       16     48      ****  SPARE  ****
.
.End of Record                         64
.
.NAME       TYPE     LENGTH     STRT     DESCRIPTION
.----       ----     ------     -----     -----------
OPROUTN     FORM         8         1      OUTPATIENT NUMBER
OPRSLOT     FORM         3         1      BOOKING SLOT NUMBER
