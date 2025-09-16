. *----------------------------------------------------------------------
. * Include Name  :   SINSCMFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Supplier Contracts Master Table      
. *
. * File Type     :   SQL
. *
. * File Name     :   sinscmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINSCMA1   IFILE    SQL, FIXED=145, KEY="U1-10"                                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SISCCON   DIM       10     10       1     Contract ID                        
SISCDES   DIM       40     40       11    Description                        
SISCSDT   DIM       8      8        51    Start Date                         
SISCFI2   DIM       2      2        59    Filler                             
SISCEDT   DIM       8      8        61    End Date                           
SISCUR1   DIM       15     15       69    User Def Ref 1                     
SISCUR2   DIM       15     15       84    User Def Ref 2                     
SISCUD1   DIM       8      8        99    User Def Date 1                    
SISCUD2   DIM       8      8        107   User Def Date 2                    
SISCUC1   DIM       3      3        115   User Def Code 1                    
SISCUC2   DIM       3      3        118   User Def Code 2                    
SISCUY1   DIM       1      1        121   User Def Y/N 1                     
SISCUY2   DIM       1      1        122   User Def Y/N 2                     
SISCSPA   DIM       22     22       123                                      
.
.End of Record                      145  
.
