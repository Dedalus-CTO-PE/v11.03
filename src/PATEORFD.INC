. V10.05.01 08/09/2014 JT C-274958 Added Organisation type E for Employer      
. V9.11.001 13/01/2009 ML  Added fields PTERSECT, PTERREGN & PTERUTYP
. V9.09.001 31/01/2008 ML  Change fields' prefix to PTER (from PTEO - is ICD10)
. *----------------------------------------------------------------------
. * Include Name  :   PATEORFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   External Organisation Table        
. *
. * File Type     :   SQL
. *
. * File Name     :   pateoraf.dat
. *
. * Index Values  :   KEY7    KEY7                                           
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATEORA1   IFILE    SQL, FIXED=267, KEY="U1-1,2-7"                              
PATEORA2   IFILE    SQL, FIXED=267, KEY="U2-7,1-1"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTERTYPE  DIM       1      1        1     Organisation Type                  
.                                         A - External Agencies                
.                                         B - Public Hospitals                 
.                                         C - Schools                          
.                                         D - Residential                      
.                                         E - Employer                         
.                                         I - Indigenous Organisations         
.                                         J - Justice Department               
.                                         L - Lawyers                          
.                                         O - Police Billing Address           
.                                         P - Private Hospitals                
PTERCODE  DIM       6      6        2     Organisation Code                  
PTERNAME  DIM       30     30       8     Organisation Name (School/WorkPlace
PTERADD1  DIM       35     35       38    Address Line 1                     
PTERADD2  DIM       35     35       73    Address Line 2                     
PTERADD3  DIM       35     35       108   Address Line 3 (Suburb/Town)       
PTERADD4  DIM       35     35       143   Address Line 4                     
PTERPOST  DIM       8      8        178   Postcode                           
PTERTELP  DIM       20     20       186   Telephone Number                   
PTERCONT  DIM       30     30       206   Contact Person                     
PTERSTAT  DIM       1      1        236   Status (0-Active 1-Inactive)       
PTERSECT  DIM       3      3        237   Sector - Cat.EE                    
PTERREGN  DIM       3      3        240   Region - Cat.EF                    
PTERUTYP  DIM       3      3        243   Unit Type - Cat.EI                 
PTERSPAR  DIM       21     21       246   Spare                              
.
.End of Record                      267  
.
