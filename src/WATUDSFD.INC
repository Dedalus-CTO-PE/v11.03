. ******************************************************************************
. * Include Name :  WATUDSFD
. * Function     :  File Definition Include for Waiting List 
. *                 Unit/Doctor Summary 
. * File Type    :  SQL
. * File Name    :  watudsaf.dat
. * Keys         :  KEY18
. * Modifications:  16/07/1990  Bill Dew
. *                 Add WTUDPRTY and adjust it as part of the key.
. *                 This field makes pending status so much easier.
. ******************************************************************************
.
WATUDSA1   IFILE SQL, FIXED=60, KEY="U1-6,7-9,10-15,16-18"
.
.NAME      TYPE   LENGTH  PHYSICAL   START     DESCRIPTION
.----      ----   ------  --------   -----     -----------
WTUDDATE    DIM        6         6       1     Period Date (CCYYMM)
WTUDUNIT    DIM        3         3       7     Unit/Clinic Code (Category WU)
WTUDDOCT    DIM        6         6      10     Doctor Code (From PATDO1FD)
WTUDPRTY    DIM        3         3      16     Priority code (cat TP)
WTUDADD     FORM       8         5      19     No. of Additions to Waiting List
WTUDADMT    FORM       8         5      24     No. of Admissions From W/List
WTUDLAST    FORM       8         5      29     No. of Patients on W/List at 
.                                              Start of Period
WTUDIAA     FORM       8         5      34     No. of Immediate Arranged
.                                              Admissions in Period
WTUDBOOK    FORM       8         5      39     No. of Patients Booked or 
.                                              Pre-Admitted
WTUDNUMB    FORM       8         5      44     No. of Patients on waiting list
WTUDSPAR    DIM       11        11      49     Spare Variable            
.
.End of Record                          60
. *****************************************************************************
