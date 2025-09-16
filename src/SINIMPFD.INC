. *----------------------------------------------------------------------
. * Include Name  :   SINIMPFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Imprest Master Details                 
. *
. * File Type     :   SQL
. *
. * File Name     :   sinimpaf.dat
. * Audit Name    :   sinaudim.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
SINAUDIM   IFILE    SQL, FIXED=141, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIIMAUDD  DIM       8      8        1     Date of Change
SIIMAUDT  DIM       8      8        9     Time of Change
SIIMAUDP  DIM       2      2        17    Port
SIIMAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
SIIMAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
SIIMAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
SINIMPA1   IFILE    SQL, FIXED=115, KEY="U1-5,6-12"                             
SINIMPA2   IFILE    SQL, FIXED=115, KEY="U6-12,1-5"                             
SINIMPA3   IFILE    SQL, FIXED=115, KEY="U1-5,13-16,6-12"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIIMCST   DIM       5      5        1     Cost Centre                        
SIIMCAT   DIM       7      7        6     Catalog                            
SIIMSEQ   DIM       4      4        13    Keyin Sequence                     
SIIMMAX   FORM      12.2   8        17    Maximum Order Qty                  
SIIMREQ   FORM      12.2   8        25    Quantity Requiried                 
SIIMQOH   FORM      12.2   8        33    Quantity On Hand                   
SIIMUR1   DIM       15     15       41    User Def Ref 1                     
SIIMUR2   DIM       15     15       56    User Def Ref 2                     
SIIMUD1   DIM       8      8        71    User Def Date 1                    
SIIMUD2   DIM       8      8        79    User Def Date 2                    
SIIMUC1   DIM       3      3        87    User Def Code 1                    
SIIMUC2   DIM       3      3        90    User Def Code 2                    
SIIMUY1   DIM       1      1        93    User Def Y/N 1                     
SIIMUY2   DIM       1      1        94    User Def Y/N 2                     
SIIMWAR   DIM       5      5        95    Warehouse                          
SIIMSPA   DIM       15     15       100   Spare                              
.
.End of Record                      115  
.
