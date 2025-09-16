. ******************************************************************************
. * Include Name :  WATRTDFD
. * Function     :  File Definition Include for Waiting List                   
. *                 Referral & Transfer Destination
. * File Type    :  SQL
. * File Name    :  watrtdaf.dat              
. * Modifications:  
. ******************************************************************************
.
WATRTDA1  IFILE     SQL, FIXED=50, KEY="U1-8,9-17,18-19"
.
.NAME     TYPE   LENGTH  PHYSICAL   START     DESCRIPTION
.----     ----   ------  --------   -----     -----------
WTRTURNO  DIM       8       8         1       U/R Number
WTRTPROC  DIM       9       9         9       Procedure Code
WTRTPCNT  DIM       2       2        18       Procedure Count
WTRTREFR  DIM       5       5        20       Referring hospital
WTRTTDES  DIM       5       5        25       Transfer destination
WTRTSPAR  DIM       20      20       30       Spare
.
.End of Record                       50
.
