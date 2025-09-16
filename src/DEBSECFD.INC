. V6.00.001 07/03/1995                                                       
. *----------------------------------------------------------------------
. * Include Name  :   DEBSECFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable
. *                   Departmental Security              
. *
. * File Type     :   SQL
. *
. * File Name     :   debsecaf.dat
. * Audit Name    :   debaudse.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
DEBAUDSE   IFILE    SQL, FIXED=89, KEY="D1-8,9-16,17-18,19-19"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBSEAUDD  DIM       8      8        1     Date of Change
DBSEAUDT  DIM       8      8        9     Time of Change
DBSEAUDP  DIM       2      2        17    Port
DBSEAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
DBSEAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
DBSEAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
DEBSECA1   IFILE    SQL, FIXED=63, KEY="U1-4,5-12"                              
DEBSECA2   IFILE    SQL, FIXED=63, KEY="U5-12,1-4"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBSEUSR   DIM       4      4        1     User ID
DBSEDEP   DIM       8      8        5     Department
DBSESPA   DIM       50     50       13    Spare
.
.End of Record                      63
.
