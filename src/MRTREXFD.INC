. V10.02.01 30/05/2011 ML C-240724 Added Home Hospital ID From/To MRRXHOSF MRRXH
. V9.00.004 27/08/2004 JH  Added hospital                                       
. *----------------------------------------------------------------------
. * Include Name  :   MRTREXFD.INC
. *
. * Function      :   File Def'n Include for Medical Records                    
. *                   Medical Records                    
. *
. * File Type     :   SQL
. *
. * File Name     :   mrtrexaf.dat
. *
. * Index Values  :   KEY4    KEY39                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MRTREXA1   IFILE    SQL, FIXED=276, KEY="U1-4"                                  
MRTREXA2   IFILE    SQL, FIXED=276, KEY="U5-39,1-4"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MRRXEXID  DIM       4      4        1     Extract ID                         
MRRXDESC  DIM       35     35       5     Extract Description                
MRRXDIFR  DIM       8      8        40    Discharge Date From                
MRRXDITO  DIM       8      8        48    Discharge Date To                  
MRRXVIFR  DIM       8      8        56    Visit Date From                    
MRRXVITO  DIM       8      8        64    Visit Date To                      
MRRXUNIT  DIM       3      3        72    Discharge Unit                     
MRRXWARD  DIM       3      3        75    Discharge Ward                     
MRRXDOCT  DIM       6      6        78    Discharge Doctor                   
MRRXDECD  DIM       1      1        84    Include Deceased                   
MRRXNOEX  FORM      5      4        85    Number of Records Extracted        
MRRXPROG  DIM       1      1        89    Extract in                         
MRRXDIA1  DIM       9      9        90    Diagnosis Code 1                   
MRRXDIA2  DIM       9      9        99    Diagnosis Code 2                   
MRRXDIA3  DIM       9      9        108   Diagnosis Code 3                   
MRRXPRO1  DIM       9      9        117   Procedure Code 1                   
MRRXPRO2  DIM       9      9        126   Procedure Code 2                   
MRRXPRO3  DIM       9      9        135   Procedure Code 3                   
MRRXPDRG  DIM       4      4        144   Provisional DRG                    
MRRXDISO  DIM       1      1        148   Discharge Patients Only Indicator  
MRRXURFR  DIM       8      8        149   U/R Number From                    
MRRXURTO  DIM       8      8        157   U/R Number To                      
MRRXDTFR  DIM       3      3        165   Document Type From                 
MRRXDTTO  DIM       3      3        168   Document Type To                   
MRRXHLFR  DIM       4      4        171   MR Home Location From              
MRRXHLTO  DIM       4      4        175   MR Home Location To                
MRRXSMDY  DIM       1      1        179   Sameday                            
MRRXCOFR  DIM       4      4        180   Coder ID From                      
MRRXCOTO  DIM       4      4        184   Coder ID To                        
MRRXSNAG  DIM       3      3        188   Coder Snags (Category VN)          
MRRXCDFR  DIM       8      8        191   Coding Date From                   
MRRXCDTO  DIM       8      8        199   Coding Date To                     
MRRXINCM  DIM       1      1        207   Coding Complete                    
MRRXAAGE  FORM      3      3        208   Age at Admission                   
MRRXGEND  DIM       1      1        211   Gender of Patient                  
MRRXPOST  DIM       8      8        212   Postcode of Patient at Visit Date  
MRRXCOB   DIM       3      3        220   Country of Birth (Cat. C)          
MRRXINVT  DIM       1      1        223   Exclude Visit Type 1               
MRRXIPRI  DIM       1      1        224   Include Primary Disease Coding     
MRRXINV1  DIM       1      1        225   Exclude Visit Type 2               
MRRXINV2  DIM       1      1        226   Exclude Visit Type 3               
MRRXBLFR  DIM       4      4        227   Procedure Block Number From        
MRRXBLTO  DIM       4      4        231   Procedure Block Number To          
MRRXDGFR  DIM       4      4        235   DRG From                           
MRRXDGTO  DIM       4      4        239   DRG To                             
MRRXHOSP  DIM       3      3        243   Research Hospital ID (pathspaf)    
MRRXHOSF  DIM       3      3        246   Home Hospital ID From              
MRRXHOST  DIM       3      3        249   Home Hospital ID To                
MRRXSPAR  DIM       24     24       252   Spare                              
.
.End of Record                      276  
.
