. V11.03.01 28/02/2023 JT C-0847250 Removed Medical practice and HF table       
. V11.03.01 17/01/2023 TTI C-0847250 New Table for Private Practice Reassigned D
. *----------------------------------------------------------------------
. * Include Name  :   PRIRASFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Private Practice Reassigned Debt   
. *
. * File Type     :   SQL
. *
. * File Name     :   prirasaf.dat
. *
. * Index Values  :   KEY10                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRIRASA1   IFILE    SQL, FIXED=186, KEY="U1-8,9-10"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRRAINVN  DIM       8      8        1     Invoice Number                     
PRRACNTN  DIM       2      2        9     Count                              
PRRAOUST  FORM      12.2   8        11    Outstanding Amount                 
PRRARMOV  DIM       3      3        19    Reason For Debt Movement (cat dm)  
PRRAPPOR  FORM      12.2   8        22    Patient Portion                    
PRRADELE  DIM       1      1        30    Deleted (Y/N)                      
PRRADBAG  DIM       3      3        31    Debt Collection Agency (cat dc)    
PRRACDAT  DIM       8      8        34    Date Record Created (CCYYMMDD)     
PRRACTIM  DIM       8      8        42    Time Record Created (HH:MM:SS)     
PRRACUID  DIM       10     10       50    Web User ID Created (websecaf)     
PRRAUDAT  DIM       8      8        60    Date Record Updated (CCYYMMDD)     
PRRAUTIM  DIM       8      8        68    Time Record Updated (HH:MM:SS)     
PRRAUUID  DIM       10     10       76    Web User ID Updated (websecaf)     
PRRASPAR  DIM       100    100      86    Spare                              
.
.End of Record                      186  
.
