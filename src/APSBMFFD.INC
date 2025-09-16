. *----------------------------------------------------------------------
. * Include Name  :   APSBMFFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable
. *                   Batch Header Records               
. *
. * File Type     :   SQL
. *
. * File Name     :   apsbmfaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSBMFA1   IFILE    SQL, FIXED=82, KEY="U1-5"                                   
APSBMFA2   IFILE    SQL, FIXED=82, KEY="U25-26,1-5"                             
APSBMFA3   IFILE    SQL, FIXED=82, KEY="U47-54,1-5"                             
APSBMFA4   IFILE    SQL, FIXED=82, KEY="U25-26,39-46,1-5"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APBMBCH   DIM       5      5        1     Batch Number                       
APBMLED   DIM       2      2        6     Ledger                             
APBMDIS   DIM       5      5        8     Dissection                         
APBMRES   DIM       4      4        13    Responsibility                     
APBMTOT   FORM      12.2   8        17    Batch Total                        
APBMTYP   DIM       2      2        25    Batch Type                         
APBMOPR   DIM       4      4        27    Operator Passcode                  
APBMDAT   DIM       8      8        31    Date Entered                       
APBMADT   DIM       8      8        39    Accounting Period Date             
APBMUDT   DIM       8      8        47    Date Updated (Not Updated=SP or 0) 
APBMCHQ   DIM       15     15       55    Cheque Account                     
APBMSPA   DIM       12     12       70    Spare                              
.
.End of Record                      82   
.
