. VF.01.001 09/03/2000 SB  Added GST Fields                                  
. *----------------------------------------------------------------------
. * Include Name  :   SINSVAFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Service Code Table            
. *
. * File Type     :   SQL
. *
. * File Name     :   sinsvaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINSVAA1   IFILE    SQL, FIXED=193, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIVACOD   DIM       4      4        1     Service Code                       
SIVADES   DIM       30     30       5     Description                        
SIVACST   DIM       5      5        35    Cost Centre                        
SIVAPRD   DIM       5      5        40    Product Group                      
SIVAPN    DIM       30     30       45    Part Number                        
SIVASUT   DIM       15     15       75    Supply Unit                        
SIVALED   FORM      4      3        90    Lead Time                          
SIVAQTY   FORM      12.2   8        93    Order Quantity                     
SIVAAMT   FORM      12.4   9        101   Unit Cost (Including GST)          
SIVAGSTA  FORM      12.4   9        110   Unit GST Cost                      
SIVAGST   DIM       6      6        119   GST Code                           
SIVAUR1   DIM       15     15       125   User Def Ref 1                     
SIVAUR2   DIM       15     15       140   User Def Ref 2                     
SIVAUD1   DIM       8      8        155   User Def Date 1                    
SIVAUD2   DIM       8      8        163   User Def Date 2                    
SIVAUY1   DIM       1      1        171   User Def Y/N 1                     
SIVAUY2   DIM       1      1        172   User Def Y/N 2                     
SIVASPA   DIM       20     20       173   Spare                              
.
.End of Record                      193  
.
