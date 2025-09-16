. V6.06.001 17/06/1999 P.D Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   CORTYPFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Correspondence Download Types                
. *
. * File Type     :   SQL
. *
. * File Name     :   cortypaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CORTYPA1   IFILE    SQL, FIXED=123, KEY="U1-5"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
COTYCTYP  DIM       5      5        1     Correspondence Type                
COTYCDSC  DIM       35     35       6     Description                        
COTYCSEC  DIM       2      2        41    Security Level                     
COTYCSPA  DIM       80     80       43    Spare                              
.
.End of Record                      123  
.
