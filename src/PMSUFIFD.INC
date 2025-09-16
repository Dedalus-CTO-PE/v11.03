. V11.02.01 15/03/2022 TT C-0909503 Added Charge Code Description               
. V10.15.03 03/02/2020 PVL C-0871644 Added Index 2 and 3                        
. V10.15.02 07/01/2020 TT C-0871644 Changed Index 1                             
. V10.15.01 28/11/2019 PVL C-0871644 FD Created                                 
. *----------------------------------------------------------------------
. * Include Name  :   PMSUFIFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   User Group Favourite Charge Items  
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsufiaf.dat
. *
. * Index Values  :   KEY31   KEY31   KEY31                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSUFIA1   IFILE    SQL, FIXED=207, KEY="U14-16,1-3,4-13,17-19,23-25,26-34"
PMSUFIA2   IFILE    SQL, FIXED=207, KEY="U14-16,1-3,17-19,23-25,4-13,26-34"
PMSUFIA3   IFILE    SQL, FIXED=207, KEY="U14-16,4-13,17-19,23-25,1-3,26-34"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMUFUOGR  DIM       3      3        1     User Occupational Group (Cat w0)   
PMUFUSER  DIM       10     10       4     Web User (websecaf) blank for all  
PMUFHOSP  DIM       3      3        14    Hospital ID (pathspaf)             
PMUFFAVG  DIM       3      3        17    Favourite Group (Cat w4)           
PMUFFAVD  DIM       3      3        20    Default Favourite Group (Yes/No)   
PMUFGHED  DIM       3      3        23    Group Heading (Cat w5)             
PMUFCODE  DIM       9      9        26    Charge Code (patmchgf/nzpmchaf)    
PMUFQUAN  DIM       6      6        35    Quantity                           
PMUFCDAT  DIM       8      8        41    Date Created                       
PMUFCTIM  DIM       8      8        49    Time Created                       
PMUFCUSR  DIM       10     10       57    Web User ID Created                
PMUFDESC  DIM       90     90       67    Charge Code Description            
.                                         (nzpmchaf.nzmcdesc)                  
PMUFSPAR  DIM       50     50       157   Spare                              
.
.End of Record                      207  
.
