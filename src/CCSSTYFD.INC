. V9.03.001 18/11/2003 LV  Add Second index                                  
. VF.01.001 08/05/2000 SB
. *----------------------------------------------------------------------
. * Include Name  :   CCSSTYFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Casemix Type                       
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsstyaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSSTYA1   IFILE    SQL, FIXED=65, KEY="U1-3"                                   
CCSSTYA2   IFILE    SQL, FIXED=65, KEY="U4-38,1-3"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCSTSTY   DIM       3      3        1     Casemix Type (JR ZF DE)            
CCSTDES   DIM       35     35       4     Description                        
CCSTLEN   FORM      3      3        39    Field Lenth                        
CCSTJR    DIM       1      1        42    Justify Right 0=No                 
CCSTZF    DIM       1      1        43    Zero Fill     0=No                 
CCSTDE    DIM       1      1        44    Digit Entry 0=No                   
CCSTSPA   DIM       20     20       45                                       
.
.End of Record                      65   
.
