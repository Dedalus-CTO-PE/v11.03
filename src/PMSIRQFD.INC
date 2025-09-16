. V11.03.01 12/09/2023 PV C-0935874 Added Type 07 and Code 07 in comments 
. V10.04.01 26/02/2014 EC C-291879 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   PMSIRQFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   DHS Medicare Request Details       
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsirqaf.dat
. *
. * Index Values  :   KEY68                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSIRQA1   IFILE    SQL, FIXED=936, KEY="U1-2,3-52,53-60,61-68"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMIQRTYP  DIM       2      2        1     Request Type                       
.                                         "01" - IHI lookup                    
.                                         "02" - HPI-I lookup - HCP            
.                                         "03" - HPI-O lookup - Hospital       
.                                         "04" - HPI-O lookup - Practice       
.                                         "05" - HPI-O lookup - Hospital Unit  
.                                         "06" - HPI-O lookup - OP Site, clinic
.                                                date, start, schedule number  
.                                                and schedule date             
.                                         "07" - IHI Lookup
.                                         "08" - Clear IHI
.                                         "09" - Clear IHI then IHI Lookup
PMIQCODE  DIM       50     50       3     Request Code                       
.                                         "01" - U/R                           
.                                         "02" - HCP                           
.                                         "03" - Hospital                      
.                                         "04" - Practice                      
.                                         "05" - Hospital ,Unit and HPIO       
.                                         "06" - OP Site, clinic               
.                                                date, start, schedule number  
.                                                and schedule date             
.                                         "07" - Unique Transaction ID 
.                                         "08" - Unique Transaction ID
.                                         "09" - Unique Transaction ID
PMIQRDAT  DIM       8      8        53    Request Date (CCYYMMDD)            
PMIQRTIM  DIM       8      8        61    Request Time (HH:MM:SS)_           
PMIQRUID  DIM       10     10       69    Request User Id (websecaf)         
PMIQSURN  DIM       40     40       79    Patient Surname                    
PMIQFNAM  DIM       40     40       119   Patient First Name                 
PMIQSNAM  DIM       40     40       159   Patient Second Name                
PMIQBDAT  DIM       8      8        199   Date of Birth (CCYYMMDD)           
PMIQPSEX  DIM       1      1        207   Patients Sex                       
PMIQMEDI  DIM       10     10       208   Medicare Number                    
PMIQMCCD  DIM       2      2        218   Medicare Code                      
PMIQMEDV  DIM       8      8        220   Medicare Valid To Date (CCYYMMDD)  
PMIQDVAN  DIM       20     20       228   DVA Number                         
PMIQIDEN  DIM       20     20       248   DHS Identifier                     
PMIQADD1  DIM       60     60       268   Address Line 1                     
PMIQADD2  DIM       60     60       328   Address Line 2                     
PMIQADD3  DIM       60     60       388   Address Line 3                     
PMIQADD4  DIM       60     60       448   Address Line 4                     
PMIQPOST  DIM       8      8        508   Post Code                          
PMIQSAD1  DIM       60     60       516   Surgery Address Line 1             
PMIQSAD2  DIM       60     60       576   Surgery Address Line 2             
PMIQSAD3  DIM       60     60       636   Surgery Address Line 3             
PMIQSAD4  DIM       60     60       696   Surgery Address Line 4             
PMIQSPST  DIM       8      8        756   Surgery Post Code                  
PMIQPTYP  DIM       1      1        764   Provider Type                      
PMIQNAME  DIM       50     50       765   Organisation Name                  
PMIQSTYP  DIM       1      1        815   Service Type                       
PMIQUNIT  DIM       20     20       816   Organisation Unit                  
PMIQSPAR  DIM       100    100      836   Spare                              
.
.End of Record                      936  
.
