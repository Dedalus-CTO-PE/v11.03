. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEASTRFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Patient Service Transactions       
. *
. * File Type     :   SQL
. *
. * File Name     :   ceastraf.dat
. * Audit Name    :   ceaaudst.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
CEAAUDST   IFILE    SQL, FIXED=188, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CESTAUDD  DIM       8      8        1     Date of Change
CESTAUDT  DIM       8      8        9     Time of Change
CESTAUDP  DIM       2      2        17    Port
CESTAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
CESTAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
CESTAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
CEASTRA1   IFILE    SQL, FIXED=162, KEY="U1-5,6-9"                              
CEASTRA2   IFILE    SQL, FIXED=162, KEY="U86-93,94-123,1-5,6-9"                 
CEASTRA3   IFILE    SQL, FIXED=162, KEY="U10-11,12-27,1-5,6-9"                  
CEASTRA4   IFILE    SQL, FIXED=162, KEY="U48-50,28-35,1-5,6-9"                  
CEASTRA5   IFILE    SQL, FIXED=162, KEY="U41-47,28-35,1-5,6-9"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CESTBAT   DIM       5      5        1     Control Batch                      
CESTLIN   DIM       4      4        6     Control Line                       
CESTHCD   DIM       2      2        10    Hospital Code                      
CESTEPS   DIM       16     16       12    Episode                            
CESTDAT   DIM       8      8        28    Date                               
CESTTIM   DIM       5      5        36    Time                               
CESTPSC   DIM       7      7        41    Patient Service Code               
CESTSPC   DIM       3      3        48    Service Provider Code              
CESTQTY   FORM      6.2    5        51    Quantity                           
CESTST1   FORM      8.2    6        56    Standard Cost Component 1          
CESTST2   FORM      8.2    6        62    Standard Cost Component 2          
CESTST3   FORM      8.2    6        68    Standard Cost Component 3          
CESTST4   FORM      8.2    6        74    Standard Cost Component 4          
CESTST5   FORM      8.2    6        80    Standard Cost Component 5          
CESTFIL   DIM       8      8        86    Extracted from File                
CESTKEY   DIM       30     30       94    Extract File Key/Manual Comment    
CESTUD1   DIM       8      8        124   User Def Date 1                    
CESTUD2   DIM       8      8        132   User Def Date 2                    
CESTUY1   DIM       1      1        140   User Def Y/N 1                     
CESTUY2   DIM       1      1        141   User Def Y/N 2                     
CESTITM   DIM       10     10       142   Misc Item Code                     
CESTDCD   DIM       6      6        152   Related Doctor Code                
CESTSPA   DIM       4      4        158                                      
.
.End of Record                      162  
.
