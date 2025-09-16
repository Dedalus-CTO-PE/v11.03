. 9.08 .001 20/03/2007 JH  Created                                           
. *----------------------------------------------------------------------
. * Include Name  :   ALLMEDFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Allied Health Medication Table     
. *
. * File Type     :   SQL
. *
. * File Name     :   allmedaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLMEDA1   IFILE    SQL, FIXED=170, KEY="U1-20"                                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALMECODE  DIM       20     20       1     Medication Code                    
ALMEDESC  DIM       60     60       21    Description                        
ALMEACTV  DIM       1      1        81    0=Active 1=Inactive                
ALMEUNIT  DIM       3      3        82    Unit (Cat UN)                      
ALMEGENR  DIM       1      1        85    Generic name 0=No 1=Yes            
ALMEMEDR  DIM       3      3        86    Medication Route (Cat MR)          
ALMEIVAD  DIM       1      1        89    IV Additive 0=No 1=Yes             
ALMEINVC  DIM       7      7        90    Inventory Code                     
ALMEMEDT  DIM       3      3        97    Medication Type (Cat MZ)           
ALMESPAR  DIM       70     70       100   Spare                              
.
.End of Record                      170  
.
