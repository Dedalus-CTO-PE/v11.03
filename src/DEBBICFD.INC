. V6.00.001 28/03/1995                                                       
. *----------------------------------------------------------------------
. * Include Name  :   DEBBICFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable
. *                   Billing Item Free Text             
. *
. * File Type     :   SQL
. *
. * File Name     :   debbicaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
DEBBICA1   IFILE    SQL, FIXED=118, KEY="U1-8,9-14,15-17"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBBCDEB   DIM       8      8        1     Debtor                             
DBBCUNI   DIM       6      6        9     Unique Billing ID                  
DBBCLIN   DIM       3      3        15    Line Number                        
DBBCCOM   DIM       50     50       18    Comment                            
DBBCSPA   DIM       50     50       68    Spare                              
.
.End of Record                      118  
.
