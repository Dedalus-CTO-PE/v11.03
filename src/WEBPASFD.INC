. V9.00.001 21/12/2001                                                       
. *----------------------------------------------------------------------
. * Include Name  :   WEBPASFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   Web Password History Table         
. *
. * File Type     :   SQL
. *
. * File Name     :   webpasaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBPASA1   IFILE    SQL, FIXED=141, KEY="U1-10"                                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBPAUID   DIM       10     10       1     Web User ID                        
WBPAPAS1  DIM       10     10       11    Password 1                         
WBPAPAS2  DIM       10     10       21    Password 2                         
WBPAPAS3  DIM       10     10       31    Password 3                         
WBPAPAS4  DIM       10     10       41    Password 4                         
WBPAPAS5  DIM       10     10       51    Password 5                         
WBPASPAR  DIM       80     80       61    Spare                              
.
.End of Record                      141  
.
