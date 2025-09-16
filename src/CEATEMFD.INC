. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEATEMFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Theatre Implant Code Mapping       
. *
. * File Type     :   SQL
. *
. * File Name     :   ceatemaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEATEMA1   IFILE    SQL, FIXED=42, KEY="U1-6,7-9,10-16"                         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CETEIMP   DIM       6      6        1     Implant Code                       
CETESPC   DIM       3      3        7     Service Provider                   
CETEPSC   DIM       7      7        10    Patient Service                    
CETEQTY   FORM      6.2    5        17    Quantity                           
CETESPA   DIM       20     20       22                                       
.
.End of Record                      42   
.
