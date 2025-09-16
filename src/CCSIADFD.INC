. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSIADFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing
. *                   Income Details Table                
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsiadaf.dat
. * Audit Name    :   ccsaudia.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
CCSAUDIA   IFILE    SQL, FIXED=419, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCIAAUDD  DIM       8      8        1     Date of Change
CCIAAUDT  DIM       8      8        9     Time of Change
CCIAAUDP  DIM       2      2        17    Port
CCIAAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
CCIAAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
CCIAAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
CCSIADA1   IFILE    SQL, FIXED=393, KEY="U1-2,3-18"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCIAHCD   DIM       2      2        1     Hospital Code                      
CCIAEPS   DIM       16     16       3     Episode                            
CCIABA1   FORM      6.2    5        19    Bed Days at User Def Acc 1         
CCIABA2   FORM      6.2    5        24    Bed Days at User Def Acc 2         
CCIABA3   FORM      6.2    5        29    Bed Days at User Def Acc 3         
CCIALOS   FORM      6.2    5        34    Total Length of Stay               
CCIAITH   FORM      8.2    6        39    Income - Theatre                   
CCIAIA1   FORM      8.2    6        45    Income - Accom. User Def 1         
CCIAIA2   FORM      8.2    6        51    Income - Accom. User Def 2         
CCIAIA3   FORM      8.2    6        57    Income - Accom. User Def 3         
CCIAIAO   FORM      8.2    6        63    Income - Accom. Other              
CCIAIM1   FORM      8.2    6        69    Income - Misc. User Def 1          
CCIAIM2   FORM      8.2    6        75    Income - Misc. User Def 2          
CCIAIM3   FORM      8.2    6        81    Income - Misc. User Def 3          
CCIAIMO   FORM      8.2    6        87    Income - Misc. Other               
CCIAETH1  FORM      8.2    6        93    Exp. Theatre - Cost Comp. 1        
CCIAETH2  FORM      8.2    6        99    Exp. Theatre - Cost Comp. 2        
CCIAETH3  FORM      8.2    6        105   Exp. Theatre - Cost Comp. 3        
CCIAETH4  FORM      8.2    6        111   Exp. Theatre - Cost Comp. 4        
CCIAETH5  FORM      8.2    6        117   Exp. Theatre - Cost Comp. 5        
CCIAEA11  FORM      8.2    6        123   Exp. Acc. 1 - Cost Comp. 1         
CCIAEA12  FORM      8.2    6        129   Exp. Acc. 1 - Cost Comp. 2         
CCIAEA13  FORM      8.2    6        135   Exp. Acc. 1 - Cost Comp. 3         
CCIAEA14  FORM      8.2    6        141   Exp. Acc. 1 - Cost Comp. 4         
CCIAEA15  FORM      8.2    6        147   Exp. Acc. 1 - Cost Comp. 5         
CCIAEA21  FORM      8.2    6        153   Exp. Acc. 2 - Cost Comp. 1         
CCIAEA22  FORM      8.2    6        159   Exp. Acc. 2 - Cost Comp. 2         
CCIAEA23  FORM      8.2    6        165   Exp. Acc. 2 - Cost Comp. 3         
CCIAEA24  FORM      8.2    6        171   Exp. Acc. 2 - Cost Comp. 4         
CCIAEA25  FORM      8.2    6        177   Exp. Acc. 2 - Cost Comp. 5         
CCIAEA31  FORM      8.2    6        183   Exp. Acc. 3 - Cost Comp. 1         
CCIAEA32  FORM      8.2    6        189   Exp. Acc. 3 - Cost Comp. 2         
CCIAEA33  FORM      8.2    6        195   Exp. Acc. 3 - Cost Comp. 3         
CCIAEA34  FORM      8.2    6        201   Exp. Acc. 3 - Cost Comp. 4         
CCIAEA35  FORM      8.2    6        207   Exp. Acc. 3 - Cost Comp. 5         
CCIAEAO1  FORM      8.2    6        213   Exp. Acc. Oth - Cost Comp. 1       
CCIAEAO2  FORM      8.2    6        219   Exp. Acc. Oth - Cost Comp. 2       
CCIAEAO3  FORM      8.2    6        225   Exp. Acc. Oth - Cost Comp. 3       
CCIAEAO4  FORM      8.2    6        231   Exp. Acc. Oth - Cost Comp. 4       
CCIAEAO5  FORM      8.2    6        237   Exp. Acc. Oth - Cost Comp. 5       
CCIAEM11  FORM      8.2    6        243   Exp. Misc. 1 - Cost Comp. 1        
CCIAEM12  FORM      8.2    6        249   Exp. Misc. 1 - Cost Comp. 2        
CCIAEM13  FORM      8.2    6        255   Exp. Misc. 1 - Cost Comp. 3        
CCIAEM14  FORM      8.2    6        261   Exp. Misc. 1 - Cost Comp. 4        
CCIAEM15  FORM      8.2    6        267   Exp. Misc. 1 - Cost Comp. 5        
CCIAEM21  FORM      8.2    6        273   Exp. Misc. 2 - Cost Comp. 1        
CCIAEM22  FORM      8.2    6        279   Exp. Misc. 2 - Cost Comp. 2        
CCIAEM23  FORM      8.2    6        285   Exp. Misc. 2 - Cost Comp. 3        
CCIAEM24  FORM      8.2    6        291   Exp. Misc. 2 - Cost Comp. 4        
CCIAEM25  FORM      8.2    6        297   Exp. Misc. 2 - Cost Comp. 5        
CCIAEM31  FORM      8.2    6        303   Exp. Misc. 3 - Cost Comp. 1        
CCIAEM32  FORM      8.2    6        309   Exp. Misc. 3 - Cost Comp. 2        
CCIAEM33  FORM      8.2    6        315   Exp. Misc. 3 - Cost Comp. 3        
CCIAEM34  FORM      8.2    6        321   Exp. Misc. 3 - Cost Comp. 4        
CCIAEM35  FORM      8.2    6        327   Exp. Misc. 3 - Cost Comp. 5        
CCIAEMO1  FORM      8.2    6        333   Exp. Misc. Oth - Cost Comp. 1      
CCIAEMO2  FORM      8.2    6        339   Exp. Misc. Oth - Cost Comp. 2      
CCIAEMO3  FORM      8.2    6        345   Exp. Misc. Oth - Cost Comp. 3      
CCIAEMO4  FORM      8.2    6        351   Exp. Misc. Oth - Cost Comp. 4      
CCIAEMO5  FORM      8.2    6        357   Exp. Misc. Oth - Cost Comp. 5      
CCIATT1   FORM      4.2    4        363   Theatre Operation Min 1            
CCIATT2   FORM      4.2    4        367   Theatre Operation Min 2            
CCIATT3   FORM      4.2    4        371   Theatre Operation Min 3            
CCIATT4   FORM      4.2    4        375   Theatre Operation Min 4            
CCIASPA   DIM       14     14       379   Spare                              
.
.End of Record                      393  
.
