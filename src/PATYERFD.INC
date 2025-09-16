.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATYERFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Year Starting Day Details                       *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patyears.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 2                                           *
.  *                                                                    *
.  *     Modifications: V10.03.02 27/02/2012 PMc CAR 259857             *
.  *                          Move vars  to JULCALEN.INC                *
.  *                    V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                    V5.01 21/08/90 J.Tan        SRF 106155          *
.  *                          Change record length                      *
.  *                                                                    *
.  **********************************************************************
.
PATYEAR1   IFILE SQL, FIXED=27, KEY="U1-4"
.
. NAME     TYPE   LENGTH   PHYSICAL   START LOC.   DESCRIPTION
. ----     ----   ------   --------   ----------   -----------
DFSTYEAR   DIM        4         4            1     YEAR NUMBER
.FSTDAY     FORM       1         2            5     STARTING WEEKDAY AS 1/1/YEAR
.                                                   1 = MONDAY
.                                                   2 = TUESDAY
.                                                   3 = WEDNESDAY
.                                                   4 = THURSDAY
.                                                   5 = FRIDAY
.                                                   6 = SATURDAY
.                                                   7 = SUNDAY
FSTSPAR    DIM       20         20           7     SPARE
.
.End of Record
.
. redefine form fields from key
. -----------------------------
.NAME     TYPE    LENGTH   START LOC.    DESCRIPTION
.----     ----    ------   ----------    -----------
FSTYEAR   FORM        4           1      YEAR NUMBER
.
.         The following variables are used by the include for working
.         out the day of week for a given date. (DATECONV).
.
.  moved to JULCALEN.INC
.FSTJULDY  FORM      3
.WEEKDAY   FORM      1
