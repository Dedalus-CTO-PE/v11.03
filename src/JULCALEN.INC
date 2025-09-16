. 
.  THIS INCLUDE CONTAINS THE VARIABLES NEEDED FOR THE CONVERSION OF JULIAN
.  DATE TO CALENDAR DATE (JULCON) AND THE CONVERSION OF CALENDAR DATE TO
.  JULIAN DATE (DMYCON)
.
.  Modifications :
.   V10.03.01 27/02/2012 Peter McMullen
.             move vars FSTDAY, FSTJULDY, WEEKDAY from PATYERFD
.   27/09/91   Graeme Williams
.                             Added JWKCC, JULCC, CC as the JULCON, DMYCON
.                             routines now allow for century
.
.  JULCON VARIABLES
.
.           CALENDAR
JJAN     FORM      "000"
JFEB     FORM      "031"
JMAR     FORM      "059"
JAPR     FORM      "090"
JMAY     FORM      "120"
JJUN     FORM      "151"
JJUL     FORM      "181"
JAUG     FORM      "212"
JSEP     FORM      "243"
JOCT     FORM      "273"
JNOV     FORM      "304"
JDEC     FORM      "334"
.
.     COMMUNICATION AREAS (JULCON)
JWKDAY   DIM       3                   INPUT JULIAN DAY
JWKYER   DIM       2                   INPUT JULIAN YEAR
JWKCC    DIM       2                   INPUT JULIAN CENTURY
DD       FORM      2                   OUTPUT DAY
MM       FORM      2                   OUTPUT MONTH
YY       FORM      2                   OUTPUT YEAR
CC       FORM      2                   OUTPUT CENTURY
.
.     COMMUNICATION AREAS (DMYCON)
JULDAY   FORM      3                   OUTPUT JULIAN DAY
JULYR    FORM      2                   OUTPUT JULIAN YEAR
JULCC    FORM      2                   OUTPUT JULIAN CENTURY
.DD       FORM      2                  INPUT DAY
.MM       FORM      2                  INPUT MONTH
.YY       FORM      2                  INPUT YEAR
.CC       FORM      2                   OUTPUT CENTURY
.
.     WORKING STORAGE
JHOLD    FORM      3
LEAPYR   FORM      1
JULWK    FORM      3
.
.  DAYTOJUL VARIABLES
.
.         IN PARAMETERS
BDAY     FORM 2
BMTH     FORM 2
BYR      FORM 2
.
.         OUT PARAMETERS
JYR      FORM 2
JDAY     FORM 3
.
.         WORK VARIABLES
YEAR     DIM  2
REM      FORM 1
.
.        moved from PATREYFD
FSTDAY     FORM       1         2            5     STARTING WEEKDAY AS 1/1/YEAR
.                                                   1 = MONDAY
.                                                   2 = TUESDAY
.                                                   3 = WEDNESDAY
.                                                   4 = THURSDAY
.                                                   5 = FRIDAY
.                                                   6 = SATURDAY
.                                                   7 = SUNDAY
FSTJULDY  FORM      3 
WEEKDAY   FORM      1 
