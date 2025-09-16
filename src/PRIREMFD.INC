. 9.02 .001 10/10/2001 dc  created
. 9.02 .002 22/11/2001 dc  added variable                                    
. *----------------------------------------------------------------------
. * Include Name  :   PRIREMFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Reminder Accounts Select Criteria  
. *
. * File Type     :   SQL
. *
. * File Name     :   priremaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRIREMA1   IFILE    SQL, FIXED=141, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRRMSEID  DIM       4      4        1     Selection ID.                      
PRRMSEDC  DIM       35     35       5     Selection Description              
PRRMDBFR  DIM       9      9        40    Debtor Number From                 
PRRMDBTO  DIM       9      9        49    Debtor Number To                   
PRRMMPFR  DIM       6      6        58    Medical Practice From              
PRRMMPTO  DIM       6      6        64    Medical Practice To                
PRRMINFR  DIM       9      9        70    Invoice Number From                
PRRMINTO  DIM       9      9        79    Invoice Number To                  
PRRMIDFR  DIM       8      8        88    Invoice Date From                  
PRRMIDTO  DIM       8      8        96    Invoice Date To                    
PRRMCCFR  DIM       3      3        104   Claim Code From (category CL)      
PRRMCCTO  DIM       3      3        107   Claim Code To (category CL)        
PRRMMBAL  FORM      8.2    6        110   Minimum Balance Owing for Reminder 
PRRMMSCD  DIM       3      3        116   Invoice Message Code               
PRRMSCAN  DIM       1      1        119   Scan Flag                          
PRRMSPAR  DIM       21     21       120   Spare Variable                     
.
.End of Record                      141  
.
