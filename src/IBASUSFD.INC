. *----------------------------------------------------------------------------
. * Include Name  : IBASUSFD.INC
. *
. * Function      : File Def'n Include for Common                     
. *                 System Usage      
. *
. * File Type     : SQL
. *
. * File Name     : ibasusaf.dat
. *
. * Modifications : 
. *----------------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBASUSA1  IFILE     SQL, FIXED=30, KEY="U1-6,7-14"
IBASUSA2  IFILE     SQL, FIXED=30, KEY="U7-14,1-6"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBSUMNTH  DIM       6      6        1     Month                              
IBSUPROG  DIM       8      8        7     Program Name
IBSUNUMB  FORM      6      4        15    Number of times used               
IBSUSPAR  DIM       11     11       19    Spare                              
.
.End of Record                      30   
.
