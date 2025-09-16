. V6.00.001 05/04/1995                                                       
. V6.00.002 05/04/1995                                                       
. *----------------------------------------------------------------------
. * Include Name  :   DEBPLNFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable
. *                   Periodic Billing Notes
. *
. * File Type     :   SQL
. *
. * File Name     :   debplnaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
DEBPLNA1   IFILE    SQL, FIXED=115, KEY="U1-8,9-11,12-14"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBPLDEB   DIM       8      8        1     Debtor                             
DBPLUNI   DIM       3      3        9     Periodic Charge No                 
DBPLLIN   DIM       3      3        12    Line Number                        
DBPLCOM   DIM       50     50       15    Comment                            
DBPLSPA   DIM       50     50       65    Spare                              
.
.End of Record                      115  
.
