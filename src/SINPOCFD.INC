. VF.01.001 09/03/2000 SB  Added GST Fields                                  
. *----------------------------------------------------------------------
. * Include Name  :   SINPOCFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Purchase Order Line Items          
. *
. * File Type     :   SQL
. *
. * File Name     :   sinpocaf.dat
. * Audit Name    :   sinaudpc.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
SINAUDPC   IFILE    SQL, FIXED=345, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIPCAUDD  DIM       8      8        1     Date of Change
SIPCAUDT  DIM       8      8        9     Time of Change
SIPCAUDP  DIM       2      2        17    Port
SIPCAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
SIPCAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
SIPCAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
SINPOCA1   IFILE    SQL, FIXED=320, KEY="U1-7,8-10"                             
SINPOCA2   IFILE    SQL, FIXED=320, KEY="U11-15,21-26,1-7,8-10"                 
SINPOCA3   IFILE    SQL, FIXED=320, KEY="U32-38,21-26,1-7,8-10"                 
SINPOCA4   IFILE    SQL, FIXED=320, KEY="U16-20,21-26,1-7,8-10"                 
SINPOCA5   IFILE    SQL, FIXED=320, KEY="U11-15,132-139,1-7,8-10"               
SINPOCA6   IFILE    SQL, FIXED=320, KEY="U32-38,132-139,1-7,8-10"               
SINPOCA7   IFILE    SQL, FIXED=320, KEY="D21-26"                                
SINPOCA8   IFILE    SQL, FIXED=320, KEY="D32-38,69-98"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIPCPON   DIM       7      7        1     Purchase Order Number              
SIPCITM   DIM       3      3        8     Item Number                        
SIPCCST   DIM       5      5        11    Cost Centre                        
SIPCPRD   DIM       5      5        16    Product Group                      
SIPCDAT   DIM       6      6        21    Processed to Period CCYYMM         
SIPCWAR   DIM       5      5        27    Warehouse                          
SIPCCAT   DIM       7      7        32    Catalog                            
SIPCPN    DIM       30     30       39    Part Number                        
SIPCPD    DIM       30     30       69    Part Description                   
SIPCCON   DIM       10     10       99    Contract                           
SIPCCDT   DIM       8      8        109   Contract Price Date                
SIPCSUT   DIM       15     15       117   Supply Unit                        
SIPCEDD   DIM       8      8        132   Expected Delivery Date             
SIPCFDD   DIM       8      8        140   Date of First Delivery             
SIPCOQT   FORM      12.2   8        148   Order Quantity (Supply Units)      
SIPCIQT   FORM      12.2   8        156   Invoiced Quantity (Issue Units)    
SIPCRQT   FORM      12.2   8        164   Received Quantity (Issue Units)    
SIPCECT   FORM      12.4   9        172   Exp. Cost Supply Unit (Include GST)
SIPCGSTA  FORM      12.4   9        181   Expected GST (Supply Units)        
SIPCTCR   FORM      12.2   8        190   Total Cost of Received             
SIPCTGS   FORM      12.2   8        198   Total Cost Received GST            
SIPCTIN   FORM      12.2   8        206   Total Cost of Invoiced             
SIPCIGS   FORM      12.2   8        214   Total Cost Invoiced GST            
SIPCOQO   FORM      12.2   8        222   Original Quantity Ordered          
SIPCOOP   FORM      12.4   9        230   Original Cost (Include GST)        
SIPCOGS   FORM      12.4   9        239   Original GST                       
SIPCGST   DIM       6      6        248   GST Code                           
SIPCUR1   DIM       15     15       254   User Def Ref 1                     
SIPCUR2   DIM       15     15       269   User Def Ref 2                     
SIPCUD1   DIM       8      8        284   User Def Date 1                    
SIPCUD2   DIM       8      8        292   User Def Date 2                    
SIPCUY1   DIM       1      1        300   User Def Y/N 1                     
SIPCUY2   DIM       1      1        301   User Def Y/N 2                     
SIPCSPA   DIM       18     18       302   Spare                              
.
.End of Record                      320  
.
