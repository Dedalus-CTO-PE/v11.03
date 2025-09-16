. 6.000.001 09/05/1994 IMX Initial Creation of Include
. 6.000.001 10/05/94 IMX Initial Create of Imprest Tempfile
. VF.01.001 14/07/2000 CH  Added Restock ID                                  
. *----------------------------------------------------------------------
. * Include Name  :   SINIMXFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Imprest Picking Temporary Table           
. *
. * File Type     :   SQL
. *
. * File Name     :   sinimxaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINIMXA1   IFILE    SQL, FIXED=120, KEY="U1-2,3-5"                              
SINIMXA2   IFILE    SQL, FIXED=120, KEY="U11-17,6-10"                           
SINIMXA3   IFILE    SQL, FIXED=120, KEY="U6-10,18-21,11-17"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIIXPOR   DIM       2      2        1     Port Number                        
SIIXUNI   DIM       3      3        3     Unique ID                          
SIIXCST   DIM       5      5        6     Cost Centre                        
SIIXCAT   DIM       7      7        11    Catalog                            
SIIXSEQ   DIM       4      4        18    Keyin Sequence                     
SIIXMAX   FORM      12.2   8        22    Maximum Order Qty                  
SIIXREQ   FORM      12.2   8        30    Quantity Requiried                 
SIIXQOH   FORM      12.2   8        38    Quantity On Hand                   
SIIXUR1   DIM       15     15       46    User Def Ref 1                     
SIIXUR2   DIM       15     15       61    User Def Ref 2                     
SIIXUD1   DIM       8      8        76    User Def Date 1                    
SIIXUD2   DIM       8      8        84    User Def Date 2                    
SIIXUC1   DIM       3      3        92    User Def Code 1                    
SIIXUC2   DIM       3      3        95    User Def Code 2                    
SIIXUY1   DIM       1      1        98    User Def Y/N 1                     
SIIXUY2   DIM       1      1        99    User Def Y/N 2                     
SIIXWAR   DIM       5      5        100   Warehouse                          
SIIXRESI  DIM       10     10       105   Restock ID                         
SIIXSPA   DIM       5      5        115   Spare                              
.
.End of Record                      120  
.
