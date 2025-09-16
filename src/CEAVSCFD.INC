. VF.01.001 09/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEAVSCFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Vic. Cost Study Service Categories 
. *
. * File Type     :   SQL
. *
. * File Name     :   ceavscaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEAVSCA1   IFILE    SQL, FIXED=138, KEY="U1-2"                                  
CEAVSCA2   IFILE    SQL, FIXED=138, KEY="U38-39,1-2"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CEVSCAT   DIM       2      2        1     Service Category                   
CEVSDES   DIM       35     35       3     Description                        
CEVSSEQ   DIM       2      2        38    Output Sequence                    
CEVSUR1   DIM       30     30       40    User Def Ref 1                     
CEVSUR2   DIM       30     30       70    User Def Ref 2                     
CEVSUD1   DIM       8      8        100   User Def Date 1                    
CEVSUD2   DIM       8      8        108   User Def Date 2                    
CEVSUY1   DIM       1      1        116   User Def Y/N 1                     
CEVSUY2   DIM       1      1        117   User Def Y/N 2                     
CEVSSPA   DIM       20     20       118   Spare                              
.
.End of Record                      138  
.
