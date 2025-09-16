. V10.05.01 12/08/2014 SA C-303878 Added NHDMDHB                                
. V9.03.002 11/11/2003 JH  Added index 2                                        
. *----------------------------------------------------------------------
. * Include Name  :   NHIDMCFD.INC
. *
. * Function      :   File Def'n Include for NZ National Health System          
. *                   Domicile Code Masterfile           
. *
. * File Type     :   SQL
. *
. * File Name     :   nhidmcaf.dat
. *
. * Index Values  :   KEY4    KEY54                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NHIDMCA1   IFILE    SQL, FIXED=75, KEY="U1-4"                                   
NHIDMCA2   IFILE    SQL, FIXED=75, KEY="U5-54,1-4"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NHDMDOM   DIM       4      4        1     Domicile Code                      
NHDMDES   DIM       50     50       5     Description                        
NHDMDHB   DIM       3      3        55    District Health Board (Cat dh)     
NHDMSPA   DIM       17     17       58    Spare                              
.
.End of Record                      75   
.
