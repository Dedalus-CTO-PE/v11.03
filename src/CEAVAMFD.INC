. VF.01.001 09/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEAVAMFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   VMO Doctor Mapping                 
. *
. * File Type     :   SQL
. *
. * File Name     :   ceavamaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEAVAMA1   IFILE    SQL, FIXED=42, KEY="U1-6,7-9,10-16"                         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CEVADOC   DIM       6      6        1     Doctor Code                        
CEVASPC   DIM       3      3        7     Service Provider                   
CEVAPSC   DIM       7      7        10    Patient Service                    
CEVAQTY   FORM      6.2    5        17    Quantity                           
CEVASPA   DIM       20     20       22    Spare                              
.
.End of Record                      42   
.
