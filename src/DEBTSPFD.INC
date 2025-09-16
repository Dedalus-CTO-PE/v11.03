. VF.00.001 30/10/1998 SB  Extend Reference to 12                            
. *----------------------------------------------------------------------
. * Include Name  :   DEBTSPFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable               
. *                   Temporary Table for Statement Printing   
. *
. * File Type     :   SQL
. *
. * File Name     :   debtspaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
DEBTSPA1   IFILE    SQL, FIXED=48, KEY="U1-8,9-9,10-21"                         
DEBTSPA2   IFILE    SQL, FIXED=48, KEY="U1-8,22-29,9-9,10-21"                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBTSDEB   DIM       8      8        1     Debtor                             
DBTSDTY   DIM       1      1        9     Document Type                      
DBTSDOC   DIM       12     12       10    Document Reference                 
DBTSDDAT  DIM       8      8        22    Document Date                      
DBTSSPA   DIM       18     18       30    Spare                              
.
.End of Record                      48   
.
