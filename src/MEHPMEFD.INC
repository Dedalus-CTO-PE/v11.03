. V9.10.001 18/09/2008 ML  New Table                                         
. *----------------------------------------------------------------------
. * Include Name  :   MEHPMEFD.INC
. *
. * Function      :   File Def'n Include for Mental Health                      
. *                   PRIMHD Error Messages table        
. *
. * File Type     :   SQL
. *
. * File Name     :   mehpmeaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MEHPMEA1   IFILE    SQL, FIXED=300, KEY="U1-9"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MHPEERCD  DIM       9      9        1     Error Message Code                 
MHPETYPE  DIM       1      1        10    Error Type ( E=Error W=Warning )   
MHPEREFR  DIM       25     25       11    Error Reference                    
MHPEEMSG  DIM       250    250      36    Error Response Message             
MHPESPAR  DIM       14     14       286   Spare                              
.
.End of Record                      300  
.
