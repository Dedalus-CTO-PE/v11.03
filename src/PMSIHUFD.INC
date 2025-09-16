. V10.04.01 31/01/2014 EC C-291879 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   PMSIHUFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Hospital/Unit HPI-O Details        
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsihuaf.dat
. *
. * Index Values  :   KEY26                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSIHUA1   IFILE    SQL, FIXED=180, KEY="U1-3,4-6,7-26"                         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMIUHOSP  DIM       3      3        1     Hospitl (pathspaf)                 
PMIUUNIT  DIM       3      3        4     Unit (Cat AC)                      
PMIUHPIO  DIM       20     20       7     HPI-O Number                       
PMIUACTV  DIM       1      1        27    Active                             
.                                         0 = Active                           
.                                         1 = Inactive                         
PMIUCDAT  DIM       8      8        28    Created Date (CCYYMMDD)            
PMIUCTIM  DIM       8      8        36    Created Time (HH:MM:SS)            
PMIUCUID  DIM       10     10       44    Created By (websecaf)              
PMIUUDAT  DIM       8      8        54    Updated Date (CCYYMMDD)            
PMIUUTIM  DIM       8      8        62    Updated Time (HH:MM:SS)            
PMIUUUID  DIM       10     10       70    Updated By (websecaf)              
PMIUSPAR  DIM       100    100      80    Spare                              
.
.End of Record                      180  
.
