. V6.00.001 07/03/1995                                                       
. *----------------------------------------------------------------------
. * Include Name  :   DEBPTYFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable
. *                   Product Types                      
. *
. * File Type     :   SQL
. *
. * File Name     :   debptyaf.dat
. * Audit Name    :   debaudpt.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
DEBAUDPT   IFILE    SQL, FIXED=174, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBPTAUDD  DIM       8      8        1     Date of Change
DBPTAUDT  DIM       8      8        9     Time of Change
DBPTAUDP  DIM       2      2        17    Port
DBPTAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
DBPTAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
DBPTAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
DEBPTYA1   IFILE    SQL, FIXED=148, KEY="U1-8"                                  
DEBPTYA2   IFILE    SQL, FIXED=148, KEY="U46-53,1-8"                            
DEBPTYA3   IFILE    SQL, FIXED=148, KEY="U9-43,1-8"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBPTPTY   DIM       8      8        1     Product Type Code                  
DBPTDES   DIM       35     35       9     Description                        
DBPTACT   FORM      1      2        44    Active 0=No 1=Yes                  
DBPTDEP   DIM       8      8        46    Department Code                    
DBPTUR1   DIM       25     25       54    User Def Ref 1                     
DBPTUR2   DIM       25     25       79    User Def Ref 2                     
DBPTUD1   DIM       8      8        104   User Def Date 1                    
DBPTUD2   DIM       8      8        112   User Def Date 2                    
DBPTUY1   DIM       1      1        120   User Def Y/N 1                     
DBPTUY2   DIM       1      1        121   User Def Y/N 2                     
DBPTUC1   DIM       3      3        122   User Def Code 1                    
DBPTUC2   DIM       3      3        125   User Def Code 2                    
DBPTSPA   DIM       20     20       128   Spare                              
.
.End of Record                      148  
.
