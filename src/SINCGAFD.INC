. V9.04.001 15/04/2005 PV  Changed SIGACOD from DIM 5 to DIM 6               
. V6.00.003 06/01/1994
. *----------------------------------------------------------------------
. * Include Name  :   SINCGAFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Commodity Group Masterfile         
. *
. * File Type     :   SQL
. *
. * File Name     :   sincgaaf.dat
. * Audit Name    :   sinaudga.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
SINAUDGA   IFILE    SQL, FIXED=141, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIGAAUDD  DIM       8      8        1     Date of Change
SIGAAUDT  DIM       8      8        9     Time of Change
SIGAAUDP  DIM       2      2        17    Port
SIGAAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
SIGAAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
SIGAAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
SINCGAA1   IFILE    SQL, FIXED=116, KEY="U1-6"                                  
SINCGAA2   IFILE    SQL, FIXED=116, KEY="U7-46,1-6"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIGACOD   DIM       6      6        1     Commodity Group Code               
SIGADES   DIM       40     40       7     Description                        
SIGAGLI   DIM       12     12       47    General Ledger Subjective          
SIGAUDD1  DIM       8      8        59    User Defined Date 1                
SIGAUDD2  DIM       8      8        67    User Defined Date 2                
SIGAUDY1  DIM       1      1        75    User Defined Yes/No 1              
SIGAUDY2  DIM       1      1        76    User Defined Yes/No 2              
SIGAUDR1  DIM       15     15       77    User Defined Ref 1                 
SIGAUDR2  DIM       15     15       92    User Defined Ref 2                 
SIGASPA   DIM       9      9        107   Spare                              
.
.End of Record                      116  
.
