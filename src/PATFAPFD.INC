. V9.12.002 04/11/2009 JT  Added Occupational Group                             
. V9.12.001 01/10/2009     JP - created for CAR 174079                          
. *----------------------------------------------------------------------
. * Include Name  :   PATFAPFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Future Action Plan Table           
. *
. * File Type     :   SQL
. *
. * File Name     :   patfapaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATFAPA1   IFILE    SQL, FIXED=194, KEY="U1-3,4-6"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTFPCLAI  DIM       3      3        1     Claim Code (Cat CL)                
PTFPACPL  DIM       3      3        4     Action Plan (Cat AK)               
PTFPFAC1  DIM       3      3        7     (Cat FA)Future Action Code 1       
PTFPDFA1  DIM       3      3        10    No of days from initiate date      
PTFPPLT1  DIM       1      1        13    Print Letter 1                     
PTFPPIN1  DIM       1      1        14    Print Invoice 1                    
PTFPOCG1  DIM       3      3        15    Cat w0 - Occupational Group 1      
PTFPFAC2  DIM       3      3        18    (Cat FA)Future Action Code 2       
PTFPDFA2  DIM       3      3        21    No of days from initiate date 2    
PTFPPLT2  DIM       1      1        24    Print Letter 2                     
PTFPPIN2  DIM       1      1        25    Print Invoice 2                    
PTFPOCG2  DIM       3      3        26    Cat w0 - Occupational Group 2      
PTFPFAC3  DIM       3      3        29    (Cat FA)Future Action Code 3       
PTFPDFA3  DIM       3      3        32    No of days from initiate date 3    
PTFPPLT3  DIM       1      1        35    Print Letter 3                     
PTFPPIN3  DIM       1      1        36    Print Invoice 3                    
PTFPOCG3  DIM       3      3        37    Cat w0 - Occupational Group 3      
PTFPFAC4  DIM       3      3        40    (Cat FA)Future Action Code 4       
PTFPDFA4  DIM       3      3        43    No of days from initiate date 4    
PTFPPLT4  DIM       1      1        46    Print Letter 4                     
PTFPPIN4  DIM       1      1        47    Print Invoice 4                    
PTFPOCG4  DIM       3      3        48    Cat w0 - Occupational Group 4      
PTFPFAC5  DIM       3      3        51    (Cat FA)Future Action Code 5       
PTFPDFA5  DIM       3      3        54    No of days from initiate date 5    
PTFPPLT5  DIM       1      1        57    Print Letter 5                     
PTFPPIN5  DIM       1      1        58    Print Invoice 5                    
PTFPOCG5  DIM       3      3        59    Cat w0 - Occupational Group 5      
PTFPFAC6  DIM       3      3        62    (Cat FA)Future Action Code 6       
PTFPDFA6  DIM       3      3        65    No of days from initiate date 6    
PTFPPLT6  DIM       1      1        68    Print Letter 6                     
PTFPPIN6  DIM       1      1        69    Print Invoice 6                    
PTFPOCG6  DIM       3      3        70    Cat w0 - Occupational Group 6      
PTFPFAC7  DIM       3      3        73    (Cat FA)Future Action Code 7       
PTFPDFA7  DIM       3      3        76    No of days from initiate date 7    
PTFPPLT7  DIM       1      1        79    Print Letter 7                     
PTFPPIN7  DIM       1      1        80    Print Invoice 7                    
PTFPOCG7  DIM       3      3        81    Cat w0 - Occupational Group 7      
PTFPFAC8  DIM       3      3        84    (Cat FA)Future Action Code 8       
PTFPDFA8  DIM       3      3        87    No of days from initiate date 8    
PTFPPLT8  DIM       1      1        90    Print Letter 8                     
PTFPPIN8  DIM       1      1        91    Print Invoice 8                    
PTFPOCG8  DIM       3      3        92    Cat w0 - Occupational Group 8      
PTFPFAC9  DIM       3      3        95    (Cat FA)Future Action Code 9       
PTFPDFA9  DIM       3      3        98    No of days from initiate date 9    
PTFPPLT9  DIM       1      1        101   Print Letter 9                     
PTFPPIN9  DIM       1      1        102   Print Invoice 9                    
PTFPOCG9  DIM       3      3        103   Cat w0 - Occupational Group 9      
PTFPFAC0  DIM       3      3        106   (Cat FA)Future Action Code 10      
PTFPDFA0  DIM       3      3        109   No of days from initiate date 10   
PTFPPLT0  DIM       1      1        112   Print Letter 10                    
PTFPPIN0  DIM       1      1        113   Print Invoice 10                   
PTFPOCG0  DIM       3      3        114   Cat w0 - Occupational Group 10     
PTFPSPAR  DIM       77     77       117   SPARE                              
.
.End of Record                      194  
.
