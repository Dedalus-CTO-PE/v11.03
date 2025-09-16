.      .003 03/10/1996                                                       
. *----------------------------------------------------------------------
. * Include Name  :   EOCACCFD.INC
. *
. * Function      :   File Def'n Include for Episodes of Care                   
. *                   ACC Details                        
. *
. * File Type     :   SQL
. *
. * File Name     :   eocaccaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EOCACCA1   IFILE    SQL, FIXED=1031, KEY="U1-20"                                
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ECACACCN  DIM       20     20       1     ACC Number                         
ECACACCA  FORM      1      2        21    ACC Approval                       
ECACDAT1  DIM       8      8        23    Date Field 1 (CCYYMMDD)            
ECACTIM1  DIM       5      5        31    Time Field 1 (HH:MM)               
ECACDAT2  DIM       8      8        36    Date Field 2 (CCYYMMDD)            
ECACTIM2  DIM       5      5        44    Time Field 2 (HH:MM)               
ECACDAT3  DIM       8      8        49    Date Field 3 (CCYYMMDD)            
ECACTIM3  DIM       5      5        57    Time Field 3 (HH:MM)               
ECACDAT4  DIM       8      8        62    Date Field 4 (CCYYMMDD)            
ECACTIM4  DIM       5      5        70    Time Field 4 (HH:MM)               
ECACDAT5  DIM       8      8        75    Date Field 5 (CCYYMMDD)            
ECACTIM5  DIM       5      5        83    Time Field 5 (HH:MM)               
ECACDAT6  DIM       8      8        88    Date Field 6 (CCYYMMDD)            
ECACTIM6  DIM       5      5        96    Time Field 6 (HH:MM)               
ECACDOC1  DIM       6      6        101   Doctor Field 1                     
ECACDOC2  DIM       6      6        107   Doctor Field 2                     
ECACDOC3  DIM       6      6        113   Doctor Field 3                     
ECACDOC4  DIM       6      6        119   Doctor Field 4                     
ECACDOC5  DIM       6      6        125   Doctor Field 5                     
ECACDOC6  DIM       6      6        131   Doctor Field 6                     
ECACDIA1  DIM       9      9        137   Diagnosis Field 1                  
ECACDIA2  DIM       9      9        146   Diagnosis Field 2                  
ECACDIA3  DIM       9      9        155   Diagnosis Field 3                  
ECACDIA4  DIM       60     60       164   Diagnosis Field 4                  
ECACDIA5  DIM       60     60       224   Diagnosis Field 5                  
ECACDIA6  DIM       60     60       284   Diagnosis Field 6                  
ECACYNO1  FORM      1      2        344   1=Yes, 0=no                        
ECACYNO2  FORM      1      2        346   1=Yes,0=No                         
ECACYNO3  FORM      1      2        348   1=Yes,0=No                         
ECACYNO4  FORM      1      2        350   1=Yes,0=No                         
ECACYNO5  FORM      1      2        352   1=Yes,0=no                         
ECACYNO6  FORM      1      2        354   1=Yes,0=No                         
ECACFRE1  DIM       60     60       356   Free Format 1                      
ECACFRE2  DIM       60     60       416   Free Format 2                      
ECACFRE3  DIM       60     60       476   Free Format 3                      
ECACFRE4  DIM       60     60       536   Free Format 4                      
ECACFRE5  DIM       60     60       596   Free Format 5                      
ECACFRE6  DIM       60     60       656   Free Format 6                      
ECACFRE7  DIM       60     60       716   Free Format 7                      
ECACFRE8  DIM       60     60       776   Free Format 8                      
ECACFRE9  DIM       60     60       836   Free Format 9                      
ECACFR10  DIM       60     60       896   Free Format 10                     
ECACCOD1  DIM       3      3        956   Coded Field 1 (Cat I1)             
ECACCOD2  DIM       3      3        959   Coded Field 2 (Cat I2)             
ECACCOD3  DIM       3      3        962   Coded Field 3 (Cat I3)             
ECACCOD4  DIM       3      3        965   Coded Field 4 (Cat I4)             
ECACCOD5  DIM       3      3        968   Coded Field 5 (Cat I5)             
ECACCOD6  DIM       3      3        971   Coded Field 6 (Cat I6)             
ECACCOD7  DIM       3      3        974   Coded Field 7 (Cat I7)             
ECACCOD8  DIM       3      3        977   Coded Field 8 (Cat I8)             
ECACCOD9  DIM       3      3        980   Coded Field 9 (Cat I9)             
ECACNUM1  FORM      8      5        983   Numeric Field 1                    
ECACNUM2  FORM      8      5        988   Numeric Field 2                    
ECACDACC  DIM       8      8        993   Date of Accident (CCYYMMDD)        
ECACSPAR  DIM       30     30       1001  Spare                              
.
.End of Record                      1031 
.
