. V11.03.01 12/09/2023 PVL C-0935874 Increased length of PMISRSCD PMISRSDE      
. V10.04.01 27/02/2014 EC C-291879 Created FD
. *----------------------------------------------------------------------
. * Include Name  :   PMSIRSFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   DHS Medicare Request Result Details
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsirsaf.dat
. *
. * Index Values  :   KEY68                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSIRSA1   IFILE    SQL, FIXED=1491, KEY="U1-2,3-52,53-60,61-68"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMISRTYP  DIM       2      2        1     Request Type                       
PMISCODE  DIM       50     50       3     Request Code                       
PMISRDAT  DIM       8      8        53    Request Date (CCYYMMDD)            
PMISRTIM  DIM       8      8        61    Request Time (HH:MM:SS)_           
PMISRUID  DIM       10     10       69    Request User Id (websecaf)         
PMISSURN  DIM       40     40       79    Patient Surname                    
PMISFNAM  DIM       40     40       119   Patient First Name                 
PMISSNAM  DIM       40     40       159   Patient Second Name                
PMISBDAT  DIM       8      8        199   Date of Birth (CCYYMMDD)           
PMISPSEX  DIM       1      1        207   Patients Sex                       
PMISMEDI  DIM       10     10       208   Medicare Number                    
PMISMCCD  DIM       2      2        218   Medicare Code                      
PMISMEDV  DIM       8      8        220   Medicare Valid To Date (CCYYMMDD)  
PMISDVAN  DIM       20     20       228   DVA Number                         
PMISIHIN  DIM       20     20       248   IHI Number                         
PMISADD1  DIM       60     60       268   Address Line 1                     
PMISADD2  DIM       60     60       328   Address Line 2                     
PMISADD3  DIM       60     60       388   Address Line 3                     
PMISADD4  DIM       60     60       448   Address Line 4                     
PMISPOST  DIM       8      8        508   Post Code                          
PMISSAD1  DIM       60     60       516   Surgery Address Line 1             
PMISSAD2  DIM       60     60       576   Surgery Address Line 2             
PMISSAD3  DIM       60     60       636   Surgery Address Line 3             
PMISSAD4  DIM       60     60       696   Surgery Address Line 4             
PMISSPST  DIM       8      8        756   Surgery Post Code                  
PMISHPII  DIM       20     20       764   HPI-I                              
PMISPTYP  DIM       1      1        784   Provider Type                      
PMISNAME  DIM       50     50       785   Organisation Name                  
PMISHPIO  DIM       20     20       835   HPI-O                              
PMISSTYP  DIM       1      1        855   Service Type                       
PMISUNIT  DIM       20     20       856   Organisation Unit                  
PMISVSTA  DIM       1      1        876   Verification Status                
.                                         1 = IHI Verified                     
.                                         2 = IHI Manual                       
PMISASTA  DIM       1      1        877   Activation Status                  
.                                         1 = Active                           
.                                         2 = Deceased                         
.                                         3 = Retired                          
.                                         4 = Expired                          
.                                         5 = Resolved                         
PMISRSCD  DIM       3      3        878   Response Status Code               
PMISRSDE  DIM       500    500      881   Response Status Description        
PMISRVER  DIM       10     10       1381  System Version                     
PMISSPAR  DIM       100    100      1391  Spare                              
.
.End of Record                      1491 
.
