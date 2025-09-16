. *----------------------------------------------------------------------
. * Include Name  :   WATLHIFD.INC
. *
. * Function      :   File Def'n Include for Waiting List
. *                   Letter History 
. *
. * File Type     :   SQL
. *
. * File Name     :   watlhiaf.dat
. *
. *----------------------------------------------------------------------
.Data File Definition
.--------------------
WATLHIA1   IFILE    SQL, FIXED=67, KEY="U1-8,9-17,18-19,20-27,28-30"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTLHURNO  DIM       8      8        1     Patient U/R Number 
WTLHCODE  DIM       9      9        9     Procedure Code
DWTLHCON  DIM       2      2        18    Procedure Count
WTLHDATE  DIM       8      8        20    Date Letter Sent
DWTLHLNU  DIM       3      3        28    Letter Number
WTLHRPLY  DIM       3      3        31    Patient Reply   Cat "WB"
WTLHACTN  DIM       3      3        34    Action Taken    Cat "WC"
WTLHREPR  DIM       8      8        37    Reply Received (CCYYMMDD) 
WTLHUSER  DIM       10     10       45    User ID (letter sender)    
WTLHSPAR  DIM       12     12       55    Spare                              
.
.End of Record                      67
.
WTLHLNUM  FORM      3
WTLHCONT  FORM      2
.
