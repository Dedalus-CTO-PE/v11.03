. VF.01.001 18/02/2000 SB  File Created                                      
. *----------------------------------------------------------------------
. * Include Name  :   DEBDKIFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable               
. *                   Debtors Keyword Index              
. *
. * File Type     :   SQL
. *
. * File Name     :   debdkiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
DEBDKIA1   IFILE    SQL, FIXED=34, KEY="U1-8,9-23"                              
DEBDKIA2   IFILE    SQL, FIXED=34, KEY="U9-23,1-8"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBDKDEB   DIM       8      8        1     Debtors Code                       
DBDKKWD   DIM       15     15       9     Keyword                            
DBDKSPA   DIM       10     10       24    Spare                              
.
.End of Record                      34   
.
