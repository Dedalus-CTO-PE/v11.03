. *----------------------------------------------------------------------
. * Include Name  :   SINSCFFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Supply Contracts Estimates         
. *
. * File Type     :   SQL
. *
. * File Name     :   sinscfaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINSCFA1   IFILE    SQL, FIXED=138, KEY="U1-10,11-15,16-22,23-37"               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SISFCON   DIM       10     10       1     Contract ID                        
SISFSUP   DIM       5      5        11    Supplier                           
SISFCAT   DIM       7      7        16    Catalog                            
SISFSUT   DIM       15     15       23    Supply Unit                        
SISFAQT   FORM      12.2   8        38    Actual Quantity Purchased          
SISFAPC   FORM      12.2   8        46    Actual Purchased Cost              
SISFEQT   FORM      12.2   8        54    Estimated Qty                      
SISFECT   FORM      12.2   8        62    Estimated Cost                     
SISFUR1   DIM       15     15       70    User Def Ref 1                     
SISFUR2   DIM       15     15       85    User Def Ref 2                     
SISFUD1   DIM       8      8        100   User Def Date 1                    
SISFUD2   DIM       8      8        108   User Def Date 2                    
SISFUY1   DIM       1      1        116   User Def Y/N 1                     
SISFUY2   DIM       1      1        117   User Def Y/N 2                     
SISFSPA   DIM       20     20       118   Spare                              
.
.End of Record                      138  
.
