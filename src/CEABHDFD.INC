. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEABHDFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Batch Control Records              
. *
. * File Type     :   SQL
. *
. * File Name     :   ceabhdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEABHDA1   IFILE    SQL, FIXED=131, KEY="U1-5"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CEBHBAT   DIM       5      5        1     Batch Number                       
CEBHDAT   DIM       8      8        6     Date Created                       
CEBHUID   DIM       4      4        14    User ID                            
CEBHTYP   FORM      1      2        18    Input Type 1=Manual,2=Import,3=Auto
CEBHHCD   DIM       2      2        20    Default Hospital                   
CEBHSPC   DIM       3      3        22    Default Service Provider           
CEBHTOT   FORM      12.2   8        25    Control Total Qty                  
CEBHUR1   DIM       30     30       33    User Def Ref 1                     
CEBHUR2   DIM       30     30       63    User Def Ref 2                     
CEBHUD1   DIM       8      8        93    User Def Date 1                    
CEBHUD2   DIM       8      8        101   User Def Date 2                    
CEBHUY1   DIM       1      1        109   User Def Y/N 1                     
CEBHUY2   DIM       1      1        110   User Def Y/N 2                     
CEBHSPA   DIM       20     20       111   Spare                              
.
.End of Record                      131  
.
