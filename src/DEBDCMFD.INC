. V6.00.001 07/03/1995                                                       
. *----------------------------------------------------------------------
. * Include Name  :   DEBDCMFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable
. *                   Debtor Comments                   
. *
. * File Type     :   SQL
. *
. * File Name     :   debdcmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
DEBDCMA1   IFILE    SQL, FIXED=132, KEY="U1-8,9-11"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBDCDEB   DIM       8      8        1     Debtors Code                       
DBDCLIN   DIM       3      3        9     Line Number                        
DBDCCOM   DIM       70     70       12    Comment Line                       
DBDCSPA   DIM       50     50       82                                       
.
.End of Record                      132  
.
