. V6.00.001 07/03/1995                                                       
. *----------------------------------------------------------------------
. * Include Name  :   DEBDEPFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable
. *                   Department Details                 
. *
. * File Type     :   SQL
. *
. * File Name     :   debdepaf.dat
. * Audit Name    :   debaudde.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
DEBAUDDE   IFILE    SQL, FIXED=166, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBDEAUDD  DIM       8      8        1     Date of Change
DBDEAUDT  DIM       8      8        9     Time of Change
DBDEAUDP  DIM       2      2        17    Port
DBDEAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
DBDEAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
DBDEAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
DEBDEPA1   IFILE    SQL, FIXED=140, KEY="U1-8"                                  
DEBDEPA2   IFILE    SQL, FIXED=140, KEY="U9-43,1-8"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBDEDEP   DIM       8      8        1     Department Code                    
DBDEDES   DIM       35     35       9     Description                        
DBDEACT   FORM      1      2        44    Active 0=No 1=Yes                  
DBDEUR1   DIM       25     25       46    User Def Ref 1                     
DBDEUR2   DIM       25     25       71    User Def Ref 2                     
DBDEUD1   DIM       8      8        96    User Def Date 1                    
DBDEUD2   DIM       8      8        104   User Def Date 2                    
DBDEUY1   DIM       1      1        112   User Def Y/N 1                     
DBDEUY2   DIM       1      1        113   User Def Y/N 2                     
DBDEUC1   DIM       3      3        114   User Def Code 1                    
DBDEUC2   DIM       3      3        117   User Def Code 2                    
DBDESPA   DIM       20     20       120   Spare                              
.
.End of Record                      140  
.
