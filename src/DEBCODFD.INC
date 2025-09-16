. V6.00.001 07/03/1995                                                       
. *----------------------------------------------------------------------
. * Include Name  :   DEBCODFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable
. *                   Codes Table
. *
. * File Type     :   SQL
. *
. * File Name     :   debcodaf.dat
. * Audit Name    :   debaudcd.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
DEBAUDCD   IFILE    SQL, FIXED=121, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBCDAUDD  DIM       8      8        1     Date of Change
DBCDAUDT  DIM       8      8        9     Time of Change
DBCDAUDP  DIM       2      2        17    Port
DBCDAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
DBCDAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
DBCDAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
DEBCODA1   IFILE    SQL, FIXED=95, KEY="U1-4,5-7"                               
DEBCODA2   IFILE    SQL, FIXED=95, KEY="U5-7,1-4"                               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBCDCAT   DIM       4      4        1     Category (File ID & Number)        
DBCDCOD   DIM       3      3        5     Code                               
DBCDDES   DIM       35     35       8     Description                        
DBCDACT   FORM      1      2        43    Active 0 - Inactive, 1 - Active    
DBCDSPA   DIM       50     50       45                                       
.
.End of Record                      95   
.
