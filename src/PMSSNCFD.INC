. V10.06.01 12/03/2015 PHA C-308185 FIM Total Scores for AN-SNAP Auto Classifica
. V10.05.01 21/07/2014 PA C-277093 AN-SNAP Auto Classification                  
. *----------------------------------------------------------------------
. * Include Name  :   PMSSNCFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   AN-SNAP Auto Classification        
. *
. * File Type     :   SQL
. *
. * File Name     :   pmssncaf.dat
. *
. * Index Values  :   KEY20   KEY20                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSSNCA1   IFILE    SQL, FIXED=93, KEY="U1-3,4-5,6-12,13-20"                    
PMSSNCA2   IFILE    SQL, FIXED=93, KEY="U6-12,13-20,1-3,4-5"                    
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMSCCLCD  DIM       3      3        1     AN-SNAP Classification Code        
PMSCVERS  DIM       2      2        4     AN-SNAP Version                    
PMSCICDE  DIM       7      7        6     Impairment Code                    
PMSCDEFF  DIM       8      8        13    Effective Date From                
PMSCDEFT  DIM       8      8        21    Date Effective To                  
PMSCFMSE  DIM       1      1        29    FIM Motor Score Edit               
.                                         0 - No Motor Score                   
.                                         1 - Motor Score Range                
.                                         2 - Total FIM Score                  
PMSCFMSL  FORM      2      2        30    FIM Motor Score Range Low          
PMSCFMSH  FORM      2      2        32    FIM Motor Score Range High         
PMSCFCSE  DIM       1      1        34    FIM Cognitive Score Edit           
.                                         0 - No Cognitive Score               
.                                         1 - Cognitive Score Range            
PMSCFCSL  FORM      2      2        35    FIM Cognitive Score Range Low      
PMSCFCSH  FORM      2      2        37    FIM Cognitive Score Range High     
PMSCAGEL  DIM       1      1        39    Age Range Limit                    
.                                         0 - No Age Range Limit               
.                                         1 - Greater than                     
.                                         2 - Less than or Equal to            
PMSCAGE   FORM      2      2        40    Age                                
PMSCASSO  DIM       1      1        42    Assessment Only (1=Yes)            
PMSCFTSR  DIM       1      1        43    FIM Total Score Range              
.                                         0 - No FIM Total Score               
.                                         1 - FIM Total Score Range            
PMSCFTSL  FORM      3      3        44    FIM Total Score Range Low          
PMSCFTSH  FORM      3      3        47    FIM Total Score Range High         
PMSCSPAR  DIM       43     43       50    Spare                              
.
.End of Record                      93   
.
