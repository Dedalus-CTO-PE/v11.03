. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSPPYFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing
. *                   PowerPlay Export Definition Table   
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsppyaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSPPYA1   IFILE    SQL, FIXED=432, KEY="U1-8"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCPPPID   DIM       8      8        1     PowerPlay Export ID                
CCPPDES   DIM       35     35       9     Description                        
CCPPEID   DIM       4      4        44    Extract ID                         
CCPPTIM   DIM       1      1        48    Time Analysis                      
CCPPARE   DIM       1      1        49    Area Analysis                      
CCPPCT1   DIM       3      3        50    Casemix Type 1                     
CCPPCT2   DIM       3      3        53    Casemix Type 2                     
CCPPCT3   DIM       3      3        56    Casemix Type 3                     
CCPPDN1   DIM       35     35       59    Dimension Name 1                   
CCPPDN2   DIM       35     35       94    Dimension Name 2                   
CCPPDN3   DIM       35     35       129   Dimension Name 3                   
CCPPDN4   DIM       35     35       164   Dimension Name 4                   
CCPPDN5   DIM       35     35       199   Dimension Name 5                   
CCPPEPS   FORM      1      2        234   Export Episodes 0=No 1=Yes         
CCPPNE    FORM      1      2        236   Number of Episodes                 
CCPPBD    FORM      1      2        238   Bed Days                           
CCPPC1    FORM      1      2        240   Cost (1) (Income)                  
CCPPC2    FORM      1      2        242   Cost (2)                           
CCPPACC   FORM      1      2        244   Accommodation                      
CCPPTHE   FORM      1      2        246   Theatre                            
CCPPOTH   FORM      1      2        248   Other                              
CCPPALOS  FORM      1      2        250   Av. Length of Stay                 
CCPPAC1   FORM      1      2        252   Av. Cost (1) per Patient           
CCPPAC2   FORM      1      2        254   Av. Cost (2) per Patient           
CCPPAACC  FORM      1      2        256   Av. Accom. per Patient             
CCPPATHE  FORM      1      2        258   Av. Theatre per Patient            
CCPPAOTH  FORM      1      2        260   Av. Other per Patient              
CCPPBC1   FORM      1      2        262   Av. Cost (1) per Bed Day           
CCPPBC2   FORM      1      2        264   Av. Cost (2) per Bed Day           
CCPPBACC  FORM      1      2        266   Av. Accom. per Bed Day             
CCPPBTHE  FORM      1      2        268   Av. Theatre per Bed Day            
CCPPBOTH  FORM      1      2        270   Av. Other per Bed Day              
CCPPSPA1  DIM       80     80       272   Spare 1                            
CCPPSPA2  DIM       80     80       352   Spare 2                            
.
.End of Record                      432  
.
