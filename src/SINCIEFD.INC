. *----------------------------------------------------------------------
. * Include Name  :   SINCIEFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Catalog Warehouse Details          
. *
. * File Type     :   SQL
. *
. * File Name     :   sincieaf.dat
. * Audit Name    :   sinaudie.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
SINAUDIE   IFILE    SQL, FIXED=196, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIIEAUDD  DIM       8      8        1     Date of Change
SIIEAUDT  DIM       8      8        9     Time of Change
SIIEAUDP  DIM       2      2        17    Port
SIIEAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
SIIEAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
SIIEAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
SINCIEA1   IFILE    SQL, FIXED=170, KEY="U1-7,8-12"                             
SINCIEA2   IFILE    SQL, FIXED=170, KEY="U8-12,1-7"                             
SINCIEA3   IFILE    SQL, FIXED=170, KEY="D19-26,1-7"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIIECAT   DIM       7      7        1     Catalog                            
SIIEWAR   DIM       5      5        8     Warehouse                          
SIIESID   DIM       6      6        13    Stock Indicator                    
SIIERAS   DIM       8      8        19    Rack and Shelf                     
SIIESOH   FORM      12.2   8        27    Stock on Hand (Issue Units)        
SIIESOO   FORM      12.2   8        35    Stock on Order (Issue Units)       
SIIEROQ   FORM      12.2   8        43    Re Order Quantity (Issue Units)    
SIIEROL   FORM      12.2   8        51    Re Order Level (Issue Units)       
SIIESTI   FORM      1      2        59    Stock Take Indicator 0=No          
SIIESTD   DIM       8      8        61    Date Last Stocktaken               
SIIESIC   FORM      1      2        69    Suspend ICL 0=No                   
SIIESAB   FORM      1      2        71    Suspend ABC 0=No                   
SIIEABC   DIM       1      1        73    A.B.C. Flag                        
SIIESUS   FORM      1      2        74    Susp. 1-Reqn,2-P/O,3-Both          
SIIEUR1   DIM       15     15       76    User Def Ref 1                     
SIIEUR2   DIM       15     15       91    User Def Ref 2                     
SIIEUC1   DIM       3      3        106   User Def Code 1 (IE1)              
SIIEUC2   DIM       3      3        109   User Def Code 2 (IE2)              
SIIEUD1   DIM       8      8        112   User Def Date 1                    
SIIEUD2   DIM       8      8        120   User Def Date 2                    
SIIEUY1   DIM       1      1        128   User Yes/No 1                      
SIIEUY2   DIM       1      1        129   User Yes/No 2                      
SIIESPA   DIM       40     40       130                                      
.
.End of Record                      170  
.
