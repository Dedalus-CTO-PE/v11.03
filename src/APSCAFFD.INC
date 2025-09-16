. V6.00.006 12/11/1997 SB  Add Sort Key for printing direct debits           
. *----------------------------------------------------------------------
. * Include Name  :   APSCAFFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable
. *                   Cheque Audit
. *
. * File Type     :   SQL
. *
. * File Name     :   apscafaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSCAFA1   IFILE    SQL, FIXED=87, KEY="U1-15,16-20,21-35,36-37"                
APSCAFA2   IFILE    SQL, FIXED=87, KEY="U36-37,1-15,16-20,21-35"                
APSCAFA3   IFILE    SQL, FIXED=87, KEY="U1-15,81-86,16-20,21-35,36-37"          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APCACHQ   DIM       15     15       1     Cheque/Lodgement Reference         
APCACRD   DIM       5      5        16    Creditor                           
APCAINV   DIM       15     15       21    Invoice                            
APCALED   DIM       2      2        36    Ledger                             
APCAAMT   FORM      12.2   8        38    Amount                             
APCADES   DIM       35     35       46    Transaction Description            
APCASORT  DIM       6      6        81    Sort Key                           
.
.End of Record                      87   
.
