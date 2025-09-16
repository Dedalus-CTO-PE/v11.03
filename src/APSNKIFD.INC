. V6.00.001 17/09/1998 SB                                                    
. V6.00.002 17/09/1998 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   APSNKIFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable
. *                   Non-Specific Creditor Keyword Table 
. *
. * File Type     :   SQL
. *
. * File Name     :   apsnkiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSNKIA1   IFILE    SQL, FIXED=34, KEY="U1-5,6-8,9-23"                          
APSNKIA2   IFILE    SQL, FIXED=34, KEY="U9-23,1-5,6-8"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APNKBATC  DIM       5      5        1     Batch Number                       
APNKUNIQ  DIM       3      3        6     Non-Specific Creditor Id           
APNKKWD   DIM       15     15       9     Key Word                           
APNKSPA   DIM       10     10       24    Spare                              
.
.End of Record                      34   
.
