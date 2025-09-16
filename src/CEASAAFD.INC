. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEASAAFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Service Provider Analysis          
. *
. * File Type     :   SQL
. *
. * File Name     :   ceasaaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEASAAA1   IFILE    SQL, FIXED=106, KEY="U1-3,4-7,8-9"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CESASPC   DIM       3      3        1     Service Provider                   
CESAYEAR  DIM       4      4        4     Year                               
CESAPER   DIM       2      2        8     Period                             
CESACST1  FORM      12.2   8        10    Standard Cost 1                    
CESACST2  FORM      12.2   8        18    Standard Cost 2                    
CESACST3  FORM      12.2   8        26    Standard Cost 3                    
CESACST4  FORM      12.2   8        34    Standard Cost 4                    
CESACST5  FORM      12.2   8        42    Standard Cost 5                    
CESAGLA   FORM      12.2   8        50    GL Actual Cost                     
CESAGLB   FORM      12.2   8        58    GL Budget Cost                     
CESASPA   DIM       40     40       66                                       
.
.End of Record                      106  
.
