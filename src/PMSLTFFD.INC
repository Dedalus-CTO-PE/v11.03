. V10.05.01 02/09/2014 JT C-298984 Added Patient on a Payment Plan
. V10.00.01 01/04/2010 JT  Added new fields (Health Fund,Insurance,Misc.Charge)
. V9.03.002 27/08/2004 JH  Added hospital id
. *----------------------------------------------------------------------
. * Include Name  :   PMSLTFFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Financial Letter Selection List    
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsltfaf.dat
. *
. * Index Values  :   KEY4                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSLTFA1   IFILE    SQL, FIXED=330, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMLTSEID  DIM       4      4        1     Selection ID.                      
PMLTSEDC  DIM       35     35       5     Selection Description              
PMLTVDFR  DIM       8      8        40    Visit Date From (ccyymmdd)         
PMLTVDTO  DIM       8      8        48    Visit Date To (ccyymmdd)           
PMLTDDFR  DIM       8      8        56    Discharge Date From (ccyymmdd)     
PMLTDDTO  DIM       8      8        64    Discharge Date To (ccyymmdd)       
PMLTSNFR  DIM       20     20       72    Surname From                       
PMLTSNTO  DIM       20     20       92    Surname To                         
PMLTLLFR  DIM       3      3        112   Last Letter Sent Code From         
PMLTLLTO  DIM       3      3        115   Last Letter Sent Code To           
PMLTLDFR  DIM       8      8        118   Last Letter Date From (ccyymmdd)   
PMLTLDTO  DIM       8      8        126   Last Letter Date To (ccyymmdd)     
PMLTFCFR  DIM       3      3        134   Future Action From (category FA)   
PMLTFCTO  DIM       3      3        137   Future Action To (category FA)     
PMLTFDFR  DIM       8      8        140   Future Action Date From (ccyymmdd) 
PMLTFDTO  DIM       8      8        148   Future Action Date To (ccyymmdd)   
PMLTCCFR  DIM       3      3        156   Claim Code From (category CL)      
PMLTCCTO  DIM       3      3        159   Claim Code To (category CL)        
PMLTATFR  DIM       3      3        162   Admission Type From (category A)   
PMLTATTO  DIM       3      3        165   Admission Type To (category A)     
PMLTOAMT  FORM      7.2    6        168   Outstanding Amount Lower Limit     
PMLTIIIN  DIM       1      1        174   Ignore Insurance Invoices          
PMLTPDFR  DIM       8      8        175   Fund Payment Date From (ccyymmdd)  
PMLTPDTO  DIM       8      8        183   Fund Payment Date To (ccyymmdd)    
PMLTDSTT  DIM       1      1        191   Deceased Status                    
PMLTSYST  DIM       1      1        192   System                             
PMLTLCOD  DIM       3      3        193   Letter Code                        
PMLTLDAT  DIM       8      8        196   Date of Letter                     
PMLTRCNT  DIM       5      5        204   Number of Records (Right Justfied) 
PMLTMHOS  DIM       3      3        209   Hospital ID (pathspaf)             
PMLTHFUN  DIM       6      6        212   Health Fund                        
PMLTINSR  DIM       6      6        218   Insurance Code                     
PMLTMISC  DIM       9      9        224   Miscellaneous Charge Code          
PMLTPPLN  DIM       1      1        233   Patient on a Payment Plan          
.                                         0 or blank = Either                  
.                                         1 = Yes (Only print letters for patie
.                                         nts on a                             
.                                         payment plan)                        
.                                         2 = Exclude (Exclude patients on a pa
.                                         yment                                
.                                         plan)                                
PMLTUDAT  DIM       8      8        234   Date Record last updated           
PMLTUTIM  DIM       8      8        242   Time Record last Updated           
PMLTSPAR  DIM       80     80       250   Spare variable                     
.
.End of Record                      330  
.
