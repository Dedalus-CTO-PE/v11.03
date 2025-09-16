.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OUTSTBFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Outpatients         *
.  *                    Statistics A&E Booking                          *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : outstbaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 17                                          *
.  *                                                                    *
.  *     Modifications: V5.00 03.05.89 H.Donnard   (IBA)                *
.  *                          Change include heading                    *
.  *                                                                    *
.  **********************************************************************
.
.    IO INC       OUTSTBIO
.
OUTSTBA1    IFILE    SQL, FIXED=47, KEY="U1-6,7-8,9-11,12-17"
FILSTBA1    INIT     "stbaf"
.
.NAME       TYPE   LENGTH   PHYSICAL  START     DESCRIPTION
.----       ----   ------   --------  -----     -----------
OSBSITE      DIM        6         6      1      SITE ID (IDDD)
OSBCATA      DIM        2         2      7      CATAGORY                   
OSBCODE      DIM        3         3      9      USER DEFINED CODE    
OSBDATE      DIM        6         6     12      DATE (CCYYMM)
.
OSBNUMB      FORM       8         5     18      NUMBER OF PEOPLE
OSBSPAR      DIM       24        24     23      ****  SPARE  ****
.
.End of record                        47
.
