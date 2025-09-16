. V6.00.001 10/04/1997 BGA New File                                          
. *----------------------------------------------------------------------
. * Include Name  :   SINCUAFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Corporate Update Audit Table       
. *
. * File Type     :   SQL
. *
. * File Name     :   sincuaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINCUAA1   IFILE    SQL, FIXED=188, KEY="U1-8,9-16,17-18"                       
SINCUAA2   IFILE    SQL, FIXED=188, KEY="U24-30,1-8,9-16,17-18"                 
SINCUAA3   IFILE    SQL, FIXED=188, KEY="U19-23,1-8,9-16,17-18"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SICUDAT   DIM       8      8        1     Date                               
SICUTIM   DIM       8      8        9     Time                               
SICUUNI   DIM       2      2        17    Unique ID                          
SICUSUP   DIM       5      5        19    Supplier                           
SICUCAT   DIM       7      7        24    Catalog                            
SICUSUT   DIM       15     15       31    Supply Unit                        
SICUTYP   FORM      2      2        46    Update Type                        
SICUDES1  DIM       60     60       48    Description 1                      
SICUDES2  DIM       60     60       108   Description 2                      
SICUSPA   DIM       20     20       168   Spare                              
.
.End of Record                      188  
.
