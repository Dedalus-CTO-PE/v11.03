. VF.01.001 18/02/2000 SB  Added GST Code                                    
. *----------------------------------------------------------------------
. * Include Name  :   DEBITMFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable               
. *                   Sales Items                        
. *
. * File Type     :   SQL
. *
. * File Name     :   debitmaf.dat
. * Audit Name    :   debaudit.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
DEBAUDIT   IFILE    SQL, FIXED=278, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBITAUDD  DIM       8      8        1     Date of Change
DBITAUDT  DIM       8      8        9     Time of Change
DBITAUDP  DIM       2      2        17    Port
DBITAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
DBITAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
DBITAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
DEBITMA1   IFILE    SQL, FIXED=253, KEY="U1-8"                                  
DEBITMA2   IFILE    SQL, FIXED=253, KEY="U9-43,1-8"                             
DEBITMA3   IFILE    SQL, FIXED=253, KEY="U78-85,1-8"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBITITM   DIM       8      8        1     Item                               
DBITDES   DIM       35     35       9     Description                        
DBITIDE   DIM       30     30       44    Invoice Short Description          
DBITUNT   DIM       4      4        74    Units                              
DBITPTY   DIM       8      8        78    Product Type                       
DBITPRI   FORM      12.4   9        86    Selling Price                      
DBITMOD   FORM      1      2        95    Price Mod During Input 0=No 1=Yes  
DBITACT   FORM      1      2        97    Active 0=No 1=Yes                  
DBITLED   DIM       2      2        99    Ledger                             
DBITIAC   DIM       12     12       101   Income Account                     
DBITCAC   DIM       12     12       113   Debtors Control Account
DBITTRT   FORM      4.2    4        125   Tax Rate (No Longer Used)          
DBITTAC   DIM       12     12       129   Tax Account (GST Control)          
DBITTCA   DIM       12     12       141   Tax Control Account (Debtors Control)
DBITUR1   DIM       25     25       153   User Def Ref 1                     
DBITUR2   DIM       25     25       178   User Def Ref 2                     
DBITUD1   DIM       8      8        203   User Def Date 1                    
DBITUD2   DIM       8      8        211   User Def Date 2                    
DBITUY1   DIM       1      1        219   User Def Y/N 1                     
DBITUY2   DIM       1      1        220   User Def Y/N 2                     
DBITUC1   DIM       3      3        221   User Def Code 1                    
DBITUC2   DIM       3      3        224   User Def Code 2                    
DBITUC3   DIM       3      3        227   User Def Code 3                    
DBITUC4   DIM       3      3        230   User Def Code 4                    
DBITGST   DIM       6      6        233   GST Code                           
DBITSPA   DIM       14     14       239   Spare                              
.
.End of Record                      253  
.
