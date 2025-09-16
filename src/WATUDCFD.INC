. ******************************************************************************
. * Include Name :  WATUDCFD
. * Function     :  File Definition Include for Waiting List
. *                 Unit/Doctor Codes 
. * File Type    :  SQL
. * File Name    :  watudcaf.dat
. * Keys         :  KEY21
. * Modifications:  V5.01.01  17/07/90 Bill Dew
. *                           Add WTUCPRTY priority code to key
. *                 V5.01.02  20/11/90 i chung          SRF 106963
. *                           Change WTUCCCOD's description
. *
. ******************************************************************************
.
WATUDCA1   IFILE SQL, FIXED=40, KEY="U1-6,7-9,10-15,16-18,19-21"
.
.NAME      TYPE   LENGTH  PHYSICAL   START     DESCRIPTION
.----      ----   ------  --------   -----     -----------
WTUCDATE    DIM        6         6       1     Period Date (CCYYMM)
WTUCUNIT    DIM        3         3       7     Unit/Clinic Code (Category WU) 
WTUCDOCT    DIM        6         6      10     Doctor Code (from PATDO1FD)
WTUCPRTY    DIM        3         3      16     Priority code (Category TP)
WTUCCCOD    DIM        3         3      19     Removal Reason code (Category WR)
WTUCNUMB    FORM       8         5      22     No. in Period (for Removal)
WTUCSPAR    DIM       13        13      27     Spare Variable             
.
.End of Record                          40
