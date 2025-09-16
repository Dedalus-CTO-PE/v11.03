. *********************************************************
. * Include Name :  WATUNSFD
. * Function     :  File Definition Include for Waiting List 
. *                 Unit Summary 
. * File Type    :  SQL
. * File Name    :  watunsaf.dat
. * Keys         :  KEY18
. * Modifications:  12/07/1990 Bill Dew 
. *                 Add independant counters for Day Cases and inpatients.
. *********************************************************
.
WATUNSA1   IFILE SQL, FIXED=60, KEY="U1-6,7-9,10-15,16-18"
.
.NAME      TYPE   LENGTH  PHYSICAL   START     DESCRIPTION
.----      ----   ------  --------   -----     -----------
WTUNDATE    DIM        6         6       1     Period Date (CCYYMM)
WTUNUNIT    DIM        3         3       7     Unit/Clinic Code (Category WU)
WTUNDOCT    DIM        6         6      10     Doctor Code (From PATDO1FD)
WTUNPRTY    DIM        3         3      16     Priority Code (Category TP)
WTUNRNG1    FORM       8         5      19     No. of Patients Waiting Booking
.                                              (<Range 1)
WTUNRNG2    FORM       8         5      24     No. of Patients Waiting
.                                              (Range 1 < Range 2)
WTUNRNG3    FORM       8         5      29     No. of Patients Waiting   
.                                              (Range 2 < Range 3)
WTUNRNG4    FORM       8         5      34     No. of Patients Waiting   
.                                              (Range 3 < Range 4)
WTUNRNG5    FORM       8         5      39     No. of Patients Waiting   
.                                              (Range 4 < Range 5)
WTUNRNG6    FORM       8         5      44     No. of Patients Waiting   
.                                              (> Range 5)
WTUNDYCS    FORM       8         5      49     No. of DaY CaSe patients
WTUNINPT    FORM       8         5      54     No. of INPaTients
WTUNSPAR    DIM        1         1      59     Spare Variable            
.
.End of Record                          60
