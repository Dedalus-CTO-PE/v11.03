. V10.13.01 15/08/2018 EC C-0859742 Created FD                                  
. *----------------------------------------------------------------------
. * Include Name  :   PMSCLTFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Eclipe Other Claimant Details      
. *
. * File Type     :   SQL
. *
. * File Name     :   pmscltaf.dat
. *
. * Index Values  :   KEY9                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSCLTA1   IFILE    SQL, FIXED=424, KEY="U1-1,2-9"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMCLWMOD  DIM       1      1        1     WebPAS Module                      
.                                         "1" = Emergency                      
.                                         "2" = Private Practice               
PMCLINUM  DIM       8      8        2     Invoice Number                     
PMCLSNAM  DIM       40     40       10    Claimant Family Name               
PMCLGNAM  DIM       40     40       50    Claimant First Name                
PMCLCDOB  DIM       8      8        90    Claimant Date of Birth (CCYYMMDD)  
PMCLMCNO  DIM       10     10       98    Claimant Medicare Number           
PMCLCMRF  DIM       2      2        108   Claimant Medicare Reference Number 
PMCLADD1  DIM       35     35       110   Claimant Address Line 1            
PMCLADD2  DIM       35     35       145   Claimant Address Line 2            
PMCLADD3  DIM       35     35       180   Claimant Address Line 3 (Locality) 
PMCLADD4  DIM       35     35       215   Claimant Address Line 4            
PMCLPOST  DIM       8      8        250   Claimant Address Postcode          
PMCLBNAM  DIM       30     30       258   Bank Account Name                  
PMCLBACN  DIM       30     30       288   Bank Account Number                
PMCLBBSB  DIM       6      6        318   BSB Code                           
PMCLSPAR  DIM       100    100      324   Spare                              
.
.End of Record                      424  
.
