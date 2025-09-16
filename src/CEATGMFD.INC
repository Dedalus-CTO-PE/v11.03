. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEATGMFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Theatre Clinic/Surgeon Mapping     
. *
. * File Type     :   SQL
. *
. * File Name     :   ceatgmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEATGMA1   IFILE    SQL, FIXED=42, KEY="U1-6,7-9,10-16"                         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CETGCLI   DIM       6      6        1     Clinic/Surgeon                     
CETGSPC   DIM       3      3        7     Service Provider                   
CETGPSC   DIM       7      7        10    Patient Service                    
CETGQTY   FORM      6.2    5        17    Quantity                           
CETGSPA   DIM       20     20       22    Spare                              
.
.End of Record                      42   
.
