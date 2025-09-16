. V5.08.001 02/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSRASFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Split Cost Patient Service Prices  
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsrasaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSRASA1   IFILE    SQL, FIXED=100, KEY="U1-3,4-5,6-13,14-21"                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCRAMID   DIM       3      3        1     Split Cost Model ID                
CCRAHCD   DIM       2      2        4     Hospital                           
CCRADPT   DIM       8      8        6     Department                         
CCRAPCD   DIM       8      8        14    Patient Service                    
CCRAFDR   FORM      12.6   10       22    Fixed Direct Cost per Unit         
CCRAFID   FORM      12.6   10       32    Fixed Indirect Cost per Unit       
CCRAVDR   FORM      12.6   10       42    Variable Direct Cost per Unit      
CCRAVID   FORM      12.6   10       52    Variable Indirect Cost per Unit    
CCRAQTY   FORM      12.2   8        62    Total Quantity for Period          
CCRASPA   DIM       30     30       70    Spare                              
.
.End of Record                      100  
.
