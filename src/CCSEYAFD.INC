. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSEYAFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing
. *                   Casemix Extract Analysis Measures  
. *
. * File Type     :   SQL
. *
. * File Name     :   ccseyaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSEYAA1   IFILE    SQL, FIXED=161, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCEYEID   DIM       4      4        1     Extract ID                         
CCEYBA1   FORM      1      2        5     Bed Days Accom. User Def 1         
CCEYBA2   FORM      1      2        7     Bed Days Accom. User Def 2         
CCEYBA3   FORM      1      2        9     Bed Days Accom. User Def 3         
CCEYBAO   FORM      1      2        11    Bed Days Accom. Other              
CCEYITH   FORM      1      2        13    Income Theatre                     
CCEYIA1   FORM      1      2        15    Income Accom. User Def 1           
CCEYIA2   FORM      1      2        17    Income Accom. User Def 2           
CCEYIA3   FORM      1      2        19    Income Accom. User Def 3           
CCEYIAO   FORM      1      2        21    Income Accom. Other                
CCEYIM1   FORM      1      2        23    Income Misc. User Def 1            
CCEYIM2   FORM      1      2        25    Income Misc. User Def 2            
CCEYIM3   FORM      1      2        27    Income Misc. User Def 3            
CCEYIMO   FORM      1      2        29    Income Misc. Other                 
CCEYETH1  FORM      1      2        31    Exp Theatre Cost Comp 1            
CCEYEA11  FORM      1      2        33    Exp Accom. 1 Cost Comp 1           
CCEYEA21  FORM      1      2        35    Exp Accom. 2 Cost Comp 1           
CCEYEA31  FORM      1      2        37    Exp Accom. 3 Cost Comp 1           
CCEYEAO1  FORM      1      2        39    Exp Accom. Other Cost Comp 1       
CCEYEM11  FORM      1      2        41    Exp Misc. 1 Cost Comp 1            
CCEYEM21  FORM      1      2        43    Exp Misc. 2 Cost Comp 1            
CCEYEM31  FORM      1      2        45    Exp Misc. 3 Cost Comp 1            
CCEYEMO1  FORM      1      2        47    Exp Misc. Other Cost Comp 1        
CCEYETH2  FORM      1      2        49    Exp Theatre Cost Comp 2            
CCEYEA12  FORM      1      2        51    Exp Accom. 1 Cost Comp 2           
CCEYEA22  FORM      1      2        53    Exp Accom. 2 Cost Comp 2           
CCEYEA32  FORM      1      2        55    Exp Accom. 3 Cost Comp 2           
CCEYEAO2  FORM      1      2        57    Exp Accom. Other Cost Comp 2       
CCEYEM12  FORM      1      2        59    Exp Misc. 1 Cost Comp 2            
CCEYEM22  FORM      1      2        61    Exp Misc. 2 Cost Comp 2            
CCEYEM32  FORM      1      2        63    Exp Misc. 3 Cost Comp 2            
CCEYEMO2  FORM      1      2        65    Exp Misc. Other Cost Comp 2        
CCEYETH3  FORM      1      2        67    Exp Theatre Cost Comp 3            
CCEYEA13  FORM      1      2        69    Exp Accom. 1 Cost Comp 3           
CCEYEA23  FORM      1      2        71    Exp Accom. 2 Cost Comp 3           
CCEYEA33  FORM      1      2        73    Exp Accom. 3 Cost Comp 3           
CCEYEAO3  FORM      1      2        75    Exp Accom. Other Cost Comp 3       
CCEYEM13  FORM      1      2        77    Exp Misc. 1 Cost Comp 3            
CCEYEM23  FORM      1      2        79    Exp Misc. 2 Cost Comp 3            
CCEYEM33  FORM      1      2        81    Exp Misc. 3 Cost Comp 3            
CCEYEMO3  FORM      1      2        83    Exp Misc. Other Cost Comp 3        
CCEYETH4  FORM      1      2        85    Exp Theatre Cost Comp 4            
CCEYEA14  FORM      1      2        87    Exp Accom. 1 Cost Comp 4           
CCEYEA24  FORM      1      2        89    Exp Accom. 2 Cost Comp 4           
CCEYEA34  FORM      1      2        91    Exp Accom. 3 Cost Comp 4           
CCEYEAO4  FORM      1      2        93    Exp Accom. Other Cost Comp 4       
CCEYEM14  FORM      1      2        95    Exp Misc. 1 Cost Comp 4            
CCEYEM24  FORM      1      2        97    Exp Misc. 2 Cost Comp 4            
CCEYEM34  FORM      1      2        99    Exp Misc. 3 Cost Comp 4            
CCEYEMO4  FORM      1      2        101   Exp Misc. Other Cost Comp 4        
CCEYETH5  FORM      1      2        103   Exp Theatre Cost Comp 5            
CCEYEA15  FORM      1      2        105   Exp Accom. 1 Cost Comp 5           
CCEYEA25  FORM      1      2        107   Exp Accom. 2 Cost Comp 5           
CCEYEA35  FORM      1      2        109   Exp Accom. 3 Cost Comp 5           
CCEYEAO5  FORM      1      2        111   Exp Accom. Other Cost Comp 5       
CCEYEM15  FORM      1      2        113   Exp Misc. 1 Cost Comp 5            
CCEYEM25  FORM      1      2        115   Exp Misc. 2 Cost Comp 5            
CCEYEM35  FORM      1      2        117   Exp Misc. 3 Cost Comp 5            
CCEYEMO5  FORM      1      2        119   Exp Misc. Other Cost Comp 5        
CCEYSPA   DIM       40     40       121   Spare                              
.
.End of Record                      161  
.
