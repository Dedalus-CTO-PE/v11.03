. V6.00.001 09/04/1997 BGA New File                                          
. *----------------------------------------------------------------------
. * Include Name  :   CSMCREFD.INC
. *
. * Function      :   File Def'n Include for Corporate Supply
. *                   Corporate Creditor/Supplier Table  
. *
. * File Type     :   SQL
. *
. * File Name     :   csmcreaf.dat
. * Audit Name    :   csmaudcr.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
CSMAUDCR   IFILE    SQL, FIXED=338, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CSCRAUDD  DIM       8      8        1     Date of Change
CSCRAUDT  DIM       8      8        9     Time of Change
CSCRAUDP  DIM       2      2        17    Port
CSCRAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
CSCRAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
CSCRAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
CSMCREA1   IFILE    SQL, FIXED=312, KEY="U1-5"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CSCRCRD   DIM       5      5        1     Creditor Code                      
CSCRTYP   DIM       3      3        6     Creditor Type                      
CSCRSKY   DIM       6      6        9     Sort Key                           
CSCRCN1   DIM       30     30       15    Creditor Name 1                    
CSCRCN2   DIM       30     30       45    Creditor Name 2                    
CSCRCA1   DIM       25     25       75    Creditor Address Line 1            
CSCRCA2   DIM       25     25       100   Creditor Address Line 2            
CSCRCA3   DIM       25     25       125   Creditor Address Line 3            
CSCRCPC   DIM       6      6        150   Creditor Post Code                 
CSCRCTEL  DIM       15     15       156   Creditor Telephone                 
CSCRCFAX  DIM       15     15       171   Creditor Fax                       
CSCRCON   DIM       30     30       186   Creditor Contact                   
CSCRHOR   FORM      1      2        216   Hold Order Input                   
CSCRHIN   FORM      1      2        218   Hold Invoice Input                 
CSCRHCR   FORM      1      2        220   Hold Credit Note Input             
CSCRHPY   FORM      1      2        222   Hold Payment                       
CSCRUR1   DIM       25     25       224   User Def Ref 1                     
CSCRUR2   DIM       25     25       249   User Def Ref 2                     
CSCRUD1   DIM       8      8        274   User Def Date 1                    
CSCRUD2   DIM       8      8        282   User Def Date 2                    
CSCRUY1   DIM       1      1        290   User Def Y/N 1                     
CSCRUY2   DIM       1      1        291   User Def Y/N 2                     
CSCRSPA   DIM       20     20       292   Spare                              
.
.End of Record                      312  
.
