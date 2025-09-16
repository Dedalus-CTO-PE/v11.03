. V6.00.002 21/10/1992 Nez Added Cancel Flag                                 
. *----------------------------------------------------------------------
. * Include Name  :   SINCODFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Category/Codes Table               
. *
. * File Type     :   SQL
. *
. * File Name     :   sincodaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINCODA1   IFILE    SQL, FIXED=50, KEY="U1-3,4-6"                               
SINCODA2   IFILE    SQL, FIXED=50, KEY="U4-6,1-3"                               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SICDCATA  DIM       3      3        1     Category                           
SICDCODE  DIM       3      3        4     Code                               
SICDDESC  DIM       30     30       7     Description                        
SICDOTHR  DIM       10     10       37    Other                              
SICDCANC  DIM       1      1        47    Cancelled Flag (1=yes)             
SICDFILL  DIM       2      2        48    ** SPARE **                        
.
.End of Record                      50   
.
