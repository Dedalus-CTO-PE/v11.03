. V6.00.001 07/03/1995                                                       
. *----------------------------------------------------------------------
. * Include Name  :   DEBTERFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable
. *                   Term Codes Table                  
. *
. * File Type     :   SQL
. *
. * File Name     :   debteraf.dat
. * Audit Name    :   debaudte.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
DEBAUDTE   IFILE    SQL, FIXED=161, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBTEAUDD  DIM       8      8        1     Date of Change
DBTEAUDT  DIM       8      8        9     Time of Change
DBTEAUDP  DIM       2      2        17    Port
DBTEAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
DBTEAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
DBTEAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
DEBTERA1   IFILE    SQL, FIXED=135, KEY="U1-3"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBTETER   DIM       3      3        1     Terms Code                         
DBTEDES   DIM       35     35       4     Description                        
DBTEACT   FORM      1      2        39    Active 0=No 1=Yes                  
DBTEUR1   DIM       25     25       41    User Def Ref 1                     
DBTEUR2   DIM       25     25       66    User Def Ref 2                     
DBTEUD1   DIM       8      8        91    User Def Date 1                    
DBTEUD2   DIM       8      8        99    User Def Date 2                    
DBTEUY1   DIM       1      1        107   User Def Y/N 1                     
DBTEUY2   DIM       1      1        108   User Def Y/N 2                     
DBTEUC1   DIM       3      3        109   User Def Code 1                    
DBTEUC2   DIM       3      3        112   User Def Code 2                    
DBTESPA   DIM       20     20       115   Spare                              
.
.End of Record                      135  
.
