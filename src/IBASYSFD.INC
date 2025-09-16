.
.    IBASYSFD.PBL
.    ------------
.
.    FILE NAME       :  ibasysaf
.    DESCRIPTION     :  SYSTEM TRACKING FILE
.    RECORD LENGTH   :  52  (INC EOR)
.    FILE ACCESS     :  INDEXED
.    INDEX           :  IBASYSA1     1-2,15-28,11-14,3-10  (BY PORT)
.                       IBASYSA2     3-10,15-28,1-2,11-14  (BY PROGRAM)
.                       IBASYSA3     15-28,3-14,1-2        (BY DATE)
.                       IBASYSA4     11-28,1-10            (BY USER)
.
.        PACK      KEY28 WITH SYSPORT,SYSPROG,SYSUSER,SYSIDAT,SYSTIMI
.        PACK      KEY28 WITH SYSPROG,SYSIDAT,SYSTIMI,SYSPORT,SYSUSER
.        PACK      KEY28 WITH SYSIDAT,SYSTIMI,SYSPROG,SYSUSER,SYSPORT
.        PACK      KEY28 WITH SYSUSER,SYSIDAT,SYSTIMI,SYSPORT,SYSPROG
.
.       THIS FILE WILL USE THE CURRENT INFO FROM IBAPORTF
.
.    IO INCLUDE      :  IBAIOSYS
.
. * Function      :   File Definition Include for Common
. *                   System Tracking Details
.
. * File Type     :   SQL
.
. * File Name     :   ibasysaf.dat
.
IBASYSA1    IFILE     SQL, FIXED=52, KEY="U1-2,15-22,23-30,11-14,3-10"
IBASYSA2    IFILE     SQL, FIXED=52, KEY="U3-10,15-22,23-30,1-2,11-14"
IBASYSA3    IFILE     SQL, FIXED=52, KEY="U15-22,23-30,3-10,11-14,1-2"
IBASYSA4    IFILE     SQL, FIXED=52, KEY="U11-14,15-22,23-30,1-2,3-10"
.
.NAME       TYPE     LENGTH  PHYSICAL   START     DESCRIPTION
.----       ----     ------  --------   -----     -----------
SYSPORT      DIM          2       2         1     TERMINAL PORT NUMBER
SYSPROG      DIM          8       8         3     PROGRAM NAME
SYSUSER      DIM          4       4        11     USER CODE
SYSIDAT      DIM          8       8        15     DATE
SYSTIMI      DIM          8       8        23     TIME ENTERED PROGRAM
.
SYSTIMO      DIM          8       8        31      TIME OUT PROGRAM
.
SYSERROR     DIM         11      11        39      ERROR TRACKING
SYSSPARE     DIM          2       2        50      SPARE 
.
.End of Record                             52
.
