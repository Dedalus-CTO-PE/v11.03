. VF.00.001 30/10/1998 SB  Extend Reference to 12                            
. *----------------------------------------------------------------------
. * Include Name  :   DEBFNOFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable               
. *                   Financial Detail Notes            
. *
. * File Type     :   SQL
. *
. * File Name     :   debfnoaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
DEBFNOA1   IFILE    SQL, FIXED=96, KEY="U1-8,9-9,10-21,22-24,25-27"             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBFNDEB   DIM       8      8        1     Debtor                             
DBFNDTY   DIM       1      1        9     Doc. Type                          
DBFNDOC   DIM       12     12       10    Document Reference                 
DBFNDLN   DIM       3      3        22    Document Line Number               
DBFNLIN   DIM       3      3        25    Line Number                        
DBFNCOM   DIM       50     50       28    Comment                            
DBFNSPA   DIM       18     18       78    Spare                              
.
.End of Record                      96   
.
