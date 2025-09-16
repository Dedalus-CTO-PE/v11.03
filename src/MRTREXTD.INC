. *----------------------------------------------------------------------
. * Include Name  :   MRTREXTD.INC
. *
. * Function      :   CGI Variables for MRTREXFD - mrtrexaf                     
. *                                                      
. * Mods              V10.02.01 08/07/2011  Ebon Clements  CAR 240724
. *                            Mods for MRT hospital/location - Added hospital 
. *                            to location key
. *               :   V9.04.01 Jill Habasque CAR 53046
. *                            Added hospital ID                          
. *                   V9.02.02 Raghunandan Surve
. *                            Added Block Number and DRG range (42-45)
. *                   V9.02.01 Ebon Clements
. *                            Added exclude visit types MRTRE040 and MRTRE041
. *                   V5.10.00 Ebon Clements
. *                            Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
MRTRE001  DIM       4      Extract ID                         
MRTRE002  DIM       35     Extract Description                
MRTRE003  DIM       8      Discharge Date From                
MRTRE004  DIM       8      Discharge Date To                  
MRTRE005  DIM       8      Visit Date From                    
MRTRE006  DIM       8      Visit Date To                      
MRTRE007  DIM       3      Discharge Unit                     
MRTRE008  DIM       3      Discharge Ward                     
MRTRE009  DIM       6      Discharge Doctor                   
MRTRE010  DIM       1      Include Deceased                   
MRTRE011  FORM      5      Number of Records Extracted        
MRTRE012  DIM       1      Extract in Progress Indicator      
MRTRE013  DIM       9      Diagnosis Code 1                   
MRTRE014  DIM       9      Diagnosis Code 2                   
MRTRE015  DIM       9      Diagnosis Code 3                   
MRTRE016  DIM       9      Procedure Code 1                   
MRTRE017  DIM       9      Procedure Code 2                   
MRTRE018  DIM       9      Procedure Code 3                   
MRTRE019  DIM       4      Provisional DRG                    
MRTRE020  DIM       1      Discharge Patients Only Indicator  
MRTRE021  DIM       8      U/R Number From                    
MRTRE022  DIM       8      U/R Number To                      
MRTRE023  DIM       3      Document Type From                 
MRTRE024  DIM       3      Document Type To                   
MRTRE025  DIM       4      Home Location From                 
MRTRE026  DIM       4      Home Location To                   
MRTRE027  DIM       1      Sameday                            
MRTRE028  DIM       4      Coder ID From                      
MRTRE029  DIM       4      Coder ID To                        
MRTRE030  DIM       3      Coder Snags (Cat. VN)
MRTRE031  DIM       8      Coding Date From                   
MRTRE032  DIM       8      Coding Date To                     
MRTRE033  DIM       1      Coding Complete                    
MRTRE034  FORM      3      Age at Admission                   
MRTRE035  DIM       1      Gender of Patient                  
MRTRE036  DIM       8      Postcode of Patient at Visit Date  
MRTRE037  DIM       3      Country of Birth (Cat. C)          
MRTRE038  DIM       1      Exclude this Visit Type       
MRTRE039  DIM       1      Primary Disease coding only        
MRTRE040  DIM       1      Exclude this Visit Type       
MRTRE041  DIM       1      Exclude this Visit Type       
MRTRE042  DIM       4      Procedure Block Number From       
MRTRE043  DIM       4      Procedure Block Number To
MRTRE044  DIM       4      DRG From
MRTRE045  DIM       4      DRG To
MRTRE046  DIM       3      Hospital Code
MRTRE047  DIM       3      MR Home Hospital ID From
MRTRE048  DIM       3      MR Home Hospital ID To

