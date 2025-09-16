. V6.06.002 18/05/1999 PD  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   WEBLIDFD.INC
. *
. * Function      :   File Def'n Include for WEB               
. *                   Interface Lookup ID Header                   
. *
. * File Type     :   SQL
. *
. * File Name     :   weblidaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBLIDA1   IFILE    SQL, FIXED=89, KEY="U1-8"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBLILKID  DIM       8      8        1     Lookup ID                          
WBLIDESC  DIM       50     50       9     Description                        
WBLISPAR  DIM       30     30       59    Spare                              
.
.End of Record                      89   
.
