.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OUTUSEFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Outpatients         *
.  *                    Used Sessions                                   *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : outuseaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 25                                          *
.  *                                                                    *
.  *     Modifications: V5.00 03.05.89 H.Donnard   (IBA)                *
.  *                          Change include heading                    *
.  *                                                                    *
.  **********************************************************************
.
.    IO INC       OUTUSEIO
.
OUTUSEA1    IFILE    SQL, FIXED=50, KEY="U1-6,7-12,13-20,21-25"
FILUSEA1    INIT     "useaf"
.
.NAME       TYPE   LENGTH   PHYSICAL  START     DESCRIPTION
.----       ----   ------   --------  -----     -----------
OUSSITE      DIM        6         6      1      SITE CODE
OUSCLIN      DIM        6         6      7      CLINIC CODE
OUSDATE      DIM        8         8     13      DATE (CCYYMMDD)        
OUSSTRT      DIM        5         5     21      SESSION START TIME (HH:MM)
.
OUSACST      DIM        5         5     26      ACTUAL SESSION START TME (HH:MM)
OUSACEND     DIM        5         5     31      ACTUAL SESSION END TIME (HH:MM)
OUSDLY       DIM        3         3     36      DELAY CODE (CD)
OUSSPARE     DIM       11        11     39      ****  SPARE  ****
.
.End of record                        50
.
