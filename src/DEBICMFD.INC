. V6.00.001 07/03/1995                                                       
. *----------------------------------------------------------------------
. * Include Name  :   DEBICMFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable
. *                   Sales Item Free Text
. *
. * File Type     :   SQL
. *
. * File Name     :   debicmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
DEBICMA1   IFILE    SQL, FIXED=112, KEY="U1-8,9-11"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBICITM   DIM       8      8        1     Item Code                          
DBICLIN   DIM       3      3        9     Line                               
DBICCOM   DIM       50     50       12    Comment                            
DBICSPA   DIM       50     50       62    Spare                              
.
.End of Record                      112  
.
