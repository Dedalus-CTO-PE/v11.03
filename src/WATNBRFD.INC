. ******************************************************************************
. * Include Name :  WATNBRFD
. * Function     :  File Definition Include for Change,Delete & Erase Records   
. * File Type    :  SQL
. * File Name    :  watnbraf.dat
. * Keys         :  KEY36 
. * Modifications:
. *       V9.00.B01 25/05/2001  Greg Horvat
. *                 Recalculated the the start position of each variable cause
. *                 someone couldnt count & increased the spare variable by 2
. *                 characters
. *       V5.08.01  15/06/2000  Tonii
. *                 Removed fields WTNBDTCG,WTNBDTBM,WTNBDTBT & WTNBATHS 
. ******************************************************************************
.
WATNBRA1  IFILE    SQL, FIXED=189, KEY="U37-37,1-8,9-17,18-19,20-27,28-35"
WATNBRA2  IFILE    SQL, FIXED=189, KEY="U1-8,9-17,18-19,20-27,28-35"
.
.NAME     TYPE      LENGTH  PHYS   START  DESCRIPTION
.----     ----      ------  ----   -----  -----------
WTNBURNO  DIM       8       8         1   U/R Number
WTNBCODE  DIM       9       9         9   Procedure Code
WTNBCNT   DIM       2       2        18   Procedure Count
WTNBEDAT  DIM       8       8        20   Effective Date (ccyymmdd)
WTNBETIM  DIM       8       8        28   Effective Time (hh:mm:ss)
WTNBRTYP  DIM       1       1        36   Record Type(C-Change D-Delete E-Erase)
WTNBRSFL  DIM       1       1        37   Record sent flag (Y or N)
WTNBBNUM  DIM       8       8        38   Booking number (WMBOOK - wattr1af)
WTNBUDF1  DIM       3       3        46   UDF 1 (WMUDEF1 - wattr1af)
WTNBUDF2  DIM       3       3        49   UDF 2 (WMUDEF2 - wattr1af)
WTNBUDF3  DIM       3       3        52   UDF 3 (WMUDEF3 - wattr1af)
WTNBUDF4  DIM       3       3        55   UDF 4 (WMUDEF4 - wattr1af)
WTNBUDF5  DIM       3       3        58   UDF 5 (WMUDEF5 - wattr1af)
WTNBUDF6  DIM       3       3        61   UDF 6 (WMUDEF6 - wattr1af)
WTNBUDF7  DIM       3       3        64   UDF 7 (WMUDEF7 - wattr1af)
WTNBUDF8  DIM       3       3        67   UDF 8 (WMUDEF8 - wattr1af)
WTNBDRSA  DIM       8       8        70   Date of ref for FSA(WTWMDRSA-wattr1af)
WTNBDOSA  DIM       8       8        78   Date of FSA(WTWMDOSA-wattr1af)
WTNBPHSP  DIM       3       3        86   Purchaser (WTWNPHSP - wattr1af)
WTNBTRAG  DIM       4       4        89   Treatment Agency (PTMIAGNC-patmi1af)
WTNBPCHS  DIM       3       3        93   Health Specialty (WMPCAT-wattr1af)
.                                         If WMSTAT = 4 use ATYPE-patmi1af
.                                         Else use WMPCAT-wattr1af 
WTNBBPRO  DIM       2       2        96   Booked procedure (WTWPHDPE - watproaf)
WTNBDTEC  DIM       8       8        98   Date of exit cat (DDATE - patdschf)
WTNBSPFL  DIM       3       3       106   Stage/Planned flag (WMPTY - wattr1af)
WTNBSPAR  DIM      80      80       109
.
.End of record                      189
.
