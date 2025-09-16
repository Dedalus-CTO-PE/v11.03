. V6.00.002 26/04/1995                                                       
. *----------------------------------------------------------------------
. * Include Name  :   DEBTDCFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable
. *                   Temporary Comments Table for Credits     
. *
. * File Type     :   SQL
. *
. * File Name     :   debtdcaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
DEBTDCA1   IFILE    SQL, FIXED=85, KEY="U1-8,9-11,12-14"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBTDDEB   DIM       8      8        1     Debtor                             
DBTDDLN   DIM       3      3        9     Document Line Number               
DBTDLIN   DIM       3      3        12    Line Number                        
DBTDCOM   DIM       50     50       15    Comment                            
DBTDSPA   DIM       20     20       65    Spare                              
.
.End of Record                      85   
.
