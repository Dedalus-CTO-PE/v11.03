. V9.04.001 15/04/2005 PV  CAR 59696 Changed SISCOMM from DIM 5 to DIM 6     
. V6.00.003 06/01/1994
. *----------------------------------------------------------------------
. * Include Name  :   SINSUAFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Product Group File                 
. *
. * File Type     :   SQL
. *
. * File Name     :   sinsuaaf.dat
. * Audit Name    :   sinaudsa.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
SINAUDSA   IFILE    SQL, FIXED=152, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SISAAUDD  DIM       8      8        1     Date of Change
SISAAUDT  DIM       8      8        9     Time of Change
SISAAUDP  DIM       2      2        17    Port
SISAAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
SISAAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
SISAAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
SINSUAA1   IFILE    SQL, FIXED=127, KEY="U1-5"                                  
SINSUAA2   IFILE    SQL, FIXED=127, KEY="U6-35,1-5"                             
SINSUAA3   IFILE    SQL, FIXED=127, KEY="U36-41,1-5"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SISACODE  DIM       5      5        1     Product Code                       
SISADESC  DIM       30     30       6     DESCRIPTION                        
SISACOMM  DIM       6      6        36    COMMODITY GROUP                    
SISAGLI   DIM       12     12       42    General Ledger Subjective          
SISAUR1   DIM       15     15       54    User Def Ref 1                     
SISAUR2   DIM       15     15       69    User Def Ref 2                     
SISAUD1   DIM       8      8        84    User Def Date 1                    
SISAUD2   DIM       8      8        92    User Def Date 2                    
SISAUC1   DIM       3      3        100   User Def Code 1                    
SISAUC2   DIM       3      3        103   User Def Code 2                    
SISAUY1   DIM       1      1        106   User Def Y/N 1                     
SISAUY2   DIM       1      1        107   User Def Y/N 2                     
SISASPA   DIM       19     19       108   Spare                              
.
.End of Record                      127  
.
