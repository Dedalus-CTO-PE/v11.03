. V6.00.006 06/01/1994                                                       
. *----------------------------------------------------------------------
. * Include Name  :   SINCCAFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Cost Centre Master Details             
. *
. * File Type     :   SQL
. *
. * File Name     :   sinccaaf.dat
. * Audit Name    :   sinaudca.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
SINAUDCA   IFILE    SQL, FIXED=380, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SICAAUDD  DIM       8      8        1     Date of Change
SICAAUDT  DIM       8      8        9     Time of Change
SICAAUDP  DIM       2      2        17    Port
SICAAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
SICAAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
SICAAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
SINCCAA1   IFILE    SQL, FIXED=354, KEY="U1-5"                                  
SINCCAA2   IFILE    SQL, FIXED=354, KEY="U6-45,1-5"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SICACODE  DIM       5      5        1     COST CENTRE CODE                   
SICADESC  DIM       40     40       6     DESCRIPTION                        
SICATELE  DIM       12     12       46    TELEPHONE NUMBER                   
SICACONT  DIM       35     35       58    CONTACT                            
SICAGL    DIM       14     14       93    G/L NUMBER                         
SICAIMPD  DIM       7      7        107   IMPREST DAYS (SMTWTFS)             
SICADAD1  DIM       30     30       114   Delivery Address Line 1            
SICADAD2  DIM       30     30       144   Delivery Address Line 2            
SICADAD3  DIM       30     30       174   Delivery Address Line 3            
SICALOC   FORM      1      2        204   Suspended 0=No, 1=Yes
SICAMES   DIM       60     60       206   Message                            
SICAUR1   DIM       15     15       266   User Def Ref 1                     
SICAUR2   DIM       15     15       281   User Def Ref 2                     
SICAUD1   DIM       8      8        296   User Def Date 1                    
SICAUD2   DIM       8      8        304   User Def Date 2                    
SICAUC1   DIM       3      3        312   User Def Code 1 (ca1)              
SICAUC2   DIM       3      3        315   User Def Code 2 (ca2)              
SICAUY1   DIM       1      1        318   User Def Y/N 1                     
SICAUY2   DIM       1      1        319   User Def Y/N 2                     
SICARID   DIM       8      8        320   Last Purchase Requisition ID       
SICAPACC  DIM       12     12       328   Postin Account                     
SICASPA   DIM       14     14       340   Spare                              
.
.End of Record                      354  
.
