. V10.04.01 31/01/2014 EC C-291879 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   PMSIHPFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   HCP HPI-I Details                  
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsihpaf.dat
. *
. * Index Values  :   KEY32                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSIHPA1   IFILE    SQL, FIXED=199, KEY="U1-10,11-30,47-47,48-48"               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMIPHCPC  DIM       10     10       1     HCP Code                           
PMIPHPII  DIM       20     20       11    HPI-I Number                       
PMIPADAT  DIM       8      8        31    Date of Assignment (CCYYMMDD)      
PMIPATIM  DIM       8      8        39    Time of Assignment (HH:MM:SS)      
PMIPVSTA  DIM       1      1        47    HPI-I Verification Status          
.                                         1 = HPI-I Verified                   
.                                         2 = HPI-I Manual                     
PMIPASTA  DIM       1      1        48    HPI-I Activation Status            
.                                         1 = Active                           
.                                         2 = Deceased                         
.                                         3 = Retired                          
.                                         4 = Expired                          
.                                         5 = Resolved                         
PMIPCDAT  DIM       8      8        49    Created Date (CCYYMMDD)            
PMIPCTIM  DIM       8      8        57    Created Time (HH:MM:SS)            
PMIPCUID  DIM       8      8        65    Created By (websecaf)              
PMIPUDAT  DIM       8      8        73    Updated Date (CCYYMMDD)            
PMIPUTIM  DIM       8      8        81    Updated Time (HH:MM:SS)            
PMIPUUID  DIM       10     10       89    Updated By (websecaf)              
PMIPSPAR  DIM       100    100      99    Spare                              
.
.End of Record                      199  
.
