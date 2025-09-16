. *----------------------------------------------------------------------
. * Include Name  :   PMSLETFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Letter Selection File              
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsletaf.dat
. *
. * Modifications :   V9.02.01 30/08/2001 Dean Cramer         
. *                                       Created.
. *           
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSLETA1   IFILE    SQL, FIXED=220, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMLESEID  DIM       4      4        1     Selection ID.                      
PMLESEDC  DIM       35     35       5     Selection Description              
PMLEURFR  DIM       8      8        40    U/R From                           
PMLEURTO  DIM       8      8        48    U/R To                             
PMLESUFR  DIM       20     20       56    Surname From                       
PMLESUTO  DIM       20     20       76    Surname To                         
PMLEADFR  DIM       8      8        96    Admission Date From (ccyymmdd)     
PMLEADTO  DIM       8      8        104   Admission Date To (ccyymmdd)       
PMLEDDFR  DIM       8      8        112   Discharge Date From (ccyymmdd)     
PMLEDDTO  DIM       8      8        120   Discharge Date To (ccyymmdd)       
PMLEATFR  DIM       3      3        128   Admission Type From (category A)   
PMLEATTO  DIM       3      3        131   Admission Type To (category A)     
PMLECLFR  DIM       3      3        134   Claim Code From (category CL)      
PMLECLTO  DIM       3      3        137   Claim Code To (category CL)        
PMLECCFR  DIM       3      3        140   Care Class From (category CC)      
PMLECCTO  DIM       3      3        143   Care Class To (category CC)        
PMLEACFR  DIM       3      3        146   Admission Class From (category P)  
PMLEACTO  DIM       3      3        149   Admission Class To (category P)    
PMLERSFR  DIM       3      3        152   Referral Source From (category S)  
PMLERSTO  DIM       3      3        155   Referral Source To (category S)    
PMLEDSFR  DIM       3      3        158   Discharge Status From (category D) 
PMLEDSTO  DIM       3      3        161   Discharge Status To (category D)   
PMLECBFR  DIM       3      3        164   Country of Birth From (category C) 
PMLECBTO  DIM       3      3        167   Country of Birth To (category C)   
PMLERLFR  DIM       3      3        170   Religion From (category R)         
PMLERLTO  DIM       3      3        173   Religion To (category R)           
PMLEHFFR  DIM       6      6        176   Health Fund From                   
PMLEHFTO  DIM       6      6        182   Health Fund To                     
PMLEDCST  DIM       1      1        188   Deceased Status                    
.                                         0 = No
.                                         1 = Yes
PMLESPAR  DIM       31     31       189   Spare Variable                     
.
.End of Record                      220  
.
