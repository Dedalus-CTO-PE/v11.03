. V10.02.02 20/07/2011 JT C-239592 Added Free format Name of School             
. V10.02.01 10/05/2011 JT C-239592 Added Insurance details                      
. V10.01.01 06/01/2011 EC  Added PMRSVEXP to PMRSPCOU CAR 236087                
. V9.05.001 21/03/2006 EC  Added PMRSVISN CAR 94905                             
. V9.04.001 04/10/2005 JH  Created                                              
. *----------------------------------------------------------------------
. * Include Name  :   PMSRESFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Residency Details          
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsresaf.dat
. *
. * Index Values  :   KEY8                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSRESA1   IFILE    SQL, FIXED=1175, KEY="U1-8"                                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMRSURNO  DIM       8      8        1     UR Number                          
PMRSCONT  DIM       3      3        9     Country of Residence (Cat C)       
PMRSTEXP  DIM       8      8        12    Temp Residence Expiry Date CCYYMMDD
PMRSGRDT  DIM       8      8        20    Residency Granted Date CCYYMMDD    
PMRSCOMM  DIM       127    127      28    Comments                           
PMRSVISN  DIM       10     10       155   Visa Number                        
PMRSVEXP  DIM       8      8        165   Visa Expiry Date (CCYYMMDD)        
PMRSVTYP  DIM       3      3        173   Visa Type (Cat vt)                 
PMRSPNUM  DIM       20     20       176   Passport Number                    
PMRSPEXP  DIM       8      8        196   Passport Expiry Date (CCYYMMDD)    
PMRSPCOU  DIM       3      3        204   Passport Country of Issue (Cat C)  
PMRSINCD  DIM       6      6        207   Insurance Code                     
PMRSINFM  DIM       20     20       213   Insurance Fund Membership Number   
PMRSINEX  DIM       8      8        233   Insurance Expiry Date (ccyymmdd)   
PMRSSTDN  DIM       20     20       241   Student Number                     
PMRSSCHL  DIM       6      6        261   Name of School (pateoraf)          
PMRSECON  DIM       50     50       267   Employer Name                      
PMRSCAD1  DIM       35     35       317   Employer Address Line 1            
PMRSCAD2  DIM       35     35       352   Employer Address Line 2            
PMRSCAD3  DIM       35     35       387   Employer Address Line 3            
PMRSCAD4  DIM       35     35       422   Employer Address Line 4            
PMRSCPCD  DIM       8      8        457   Employer Postcode                  
PMRSSBIL  DIM       1      1        465   Send Bill to Local Address         
PMRSTINS  DIM       1      1        466   Travel Insurance 0=No, 1=Yes       
PMRSIPOL  DIM       20     20       467   Travel Insurance Policy Number     
PMRSIEXD  DIM       8      8        487   Policy Number Expiry Date CCYYMMDD 
PMRSUCM1  DIM       50     50       495   Comment 1                          
PMRSUCM2  DIM       50     50       545   Comment 2                          
PMRSUCM3  DIM       50     50       595   Comment 3                          
PMRSUCM4  DIM       50     50       645   Comment 4                          
PMRSUCM5  DIM       50     50       695   Comment 5                          
PMRSCCNT  DIM       50     50       745   Employer Contact Name              
PMRSCPHN  DIM       20     20       795   Employer Phone                     
PMRSFSCH  DIM       30     30       815   Free Format Name of School         
PMRSSAD1  DIM       35     35       845   School Address Line 1              
PMRSSAD2  DIM       35     35       880   School Address Line 2              
PMRSSAD3  DIM       35     35       915   School Address Line 3              
PMRSSAD4  DIM       35     35       950   School Address Line 4              
PMRSSPCD  DIM       8      8        985   School Postcode                    
PMRSSCNT  DIM       50     50       993   School Contact Name                
PMRSSPHN  DIM       20     20       1043  School Phone                       
PMRSCUID  DIM       10     10       1063  WEB User ID Created (websecaf)     
PMRSCDAT  DIM       8      8        1073  Date Record Created (CCYYMMDD)     
PMRSCTIM  DIM       8      8        1081  Time Record Created (hh:mm:ss)     
PMRSUUID  DIM       10     10       1089  WEB User ID Updated (websecaf)     
PMRSUDAT  DIM       8      8        1099  Date Record Updated (CCYYMMDD)     
PMRSUTIM  DIM       8      8        1107  Time Record Updated (hh:mm:ss)     
PMRSSPAR  DIM       60     60       1115  Spare Variable                     
.
.End of Record                      1175 
.
