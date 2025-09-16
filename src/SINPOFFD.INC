. VF.01.001 10/03/2000 SB  Added GST Field                                   
. *----------------------------------------------------------------------
. * Include Name  :   SINPOFFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Purchase Order Receivals            
. *
. * File Type     :   SQL
. *
. * File Name     :   sinpofaf.dat
. * Audit Name    :   sinaudpf.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
SINAUDPF   IFILE    SQL, FIXED=142, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIPFAUDD  DIM       8      8        1     Date of Change
SIPFAUDT  DIM       8      8        9     Time of Change
SIPFAUDP  DIM       2      2        17    Port
SIPFAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
SIPFAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
SIPFAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
SINPOFA1   IFILE    SQL, FIXED=117, KEY="U1-7,8-10,11-12"                       
SINPOFA2   IFILE    SQL, FIXED=117, KEY="U1-7,11-12,8-10"                       
SINPOFA3   IFILE    SQL, FIXED=117, KEY="D93-98"                                
SINPOFA4   IFILE    SQL, FIXED=117, KEY="U13-20,1-7,8-10,11-12"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIPFPON   DIM       7      7        1     Purchase Order Number              
SIPFITM   DIM       3      3        8     Item Number                        
SIPFREC   DIM       2      2        11    Receival Number                    
SIPFDAT   DIM       8      8        13    Delivery Date                      
SIPFDEL   DIM       15     15       21    Delivery Docket                    
SIPFQTY   FORM      12.2   8        36    Receival Quantity                  
SIPFCST   FORM      12.4   9        44    Cost per Unit (Including GST)      
SIPFGST   FORM      12.4   9        53    GST per Unit                       
SIPFSUT   DIM       15     15       62    Supply Unit                        
SIPFNDD   DIM       8      8        77    Next Delivery Date                 
SIPFDUP   DIM       8      8        85    Date Updated (Blank if Not Updated)
SIPFUDT   DIM       6      6        93    Usage Period CCYYMM                
SIPFEDD   DIM       8      8        99    Expected Delivery Date             
SIPFSPA   DIM       10     10       107   Spare                              
.
.End of Record                      117  
.
