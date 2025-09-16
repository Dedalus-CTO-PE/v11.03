. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEASPCFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Service Provider Table             
. *
. * File Type     :   SQL
. *
. * File Name     :   ceaspcaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEASPCA1   IFILE    SQL, FIXED=137, KEY="U1-3"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CESPSPC   DIM       3      3        1     Service Provider Code              
CESPDES   DIM       35     35       4     Description                        
CESPUR1   DIM       30     30       39    User Def Ref 1                     
CESPUR2   DIM       30     30       69    User Def Ref 2                     
CESPUD1   DIM       8      8        99    User Def Date 1                    
CESPUD2   DIM       8      8        107   User Def Date 2                    
CESPUY1   DIM       1      1        115   User Def Y/N 1                     
CESPUY2   DIM       1      1        116   User Def Y/N 2                     
CESPSPA   DIM       20     20       117   Spare                              
.
.End of Record                      137  
.
