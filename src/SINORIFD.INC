. V6.00.004 06/01/1994                                                       
. *----------------------------------------------------------------------
. * Include Name  :   SINORIFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Originator Details                 
. *
. * File Type     :   SQL
. *
. * File Name     :   sinoriaf.dat
. * Audit Name    :   sinaudor.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
SINAUDOR   IFILE    SQL, FIXED=160, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIORAUDD  DIM       8      8        1     Date of Change
SIORAUDT  DIM       8      8        9     Time of Change
SIORAUDP  DIM       2      2        17    Port
SIORAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
SIORAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
SIORAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
SINORIA1   IFILE    SQL, FIXED=134, KEY="U1-3"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIORORIG  DIM       3      3        1     ORIGINATOR CODE                    
SIORNAME  DIM       20     20       4     DESCRIPTION                        
SIORHOSP  DIM       20     20       24    HOSPITAL (INTERNAL) CONTACT        
SIORDEL   FORM      1      2        44    DELIVERY POINT                     
SIORMESS  DIM       3      3        46    MESSAGE CODE                       
SIOREXT   DIM       10     10       49    EXTENSION                          
SIORCON   DIM       3      3        59    Confirmation Code                  
SIORUR1   DIM       15     15       62    User Def Ref 1                     
SIORUR2   DIM       15     15       77    User Def Ref 2                     
SIORUD1   DIM       8      8        92    User Def Date 1                    
SIORUD2   DIM       8      8        100   User Def Date 2                    
SIORUC1   DIM       3      3        108   User Def Code 1                    
SIORUC2   DIM       3      3        111   User Def Code 2                    
SIORUY1   DIM       1      1        114   User Def Y/N 1                     
SIORUY2   DIM       1      1        115   User Def Y/N 2                     
SIORSPA   DIM       18     18       116   Spare                              
.
.End of Record                      134  
.
