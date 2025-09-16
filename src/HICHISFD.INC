. V9.04.001 18/04/2005 EC  Created FD                                        
. V9.04.001 19/04/2005 EC  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   HICHISFD.INC
. *
. * Function      :   File Def'n Include for HIC CLAIMS                         
. *                   HIC batch History Audit            
. *
. * File Type     :   SQL
. *
. * File Name     :   hichisaf.dat
. *
. * Mods          :   V9.04.00 J.Tan
. *                   Mods description of status
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HICHISA1   IFILE    SQL, FIXED=132, KEY="U1-5,24-33,6-13,14-23,34-41,42-49"     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HCHSBTCH  DIM       5      5        1     Batch Number (1 Alpha 4 Numeric)   
HCHSPMCI  DIM       8      8        6     MCI (3 Alpha 5 Numeric)            
HCHSPYEE  DIM       10     10       14    Payee Provider Number              
HCHSPSRV  DIM       10     10       24    Service Provider Number            
HCHSTDAT  DIM       8      8        34    Transaction Date (ccyymmdd)        
HCHSTTIM  DIM       8      8        42    Transaction Time (hh:mm:ss)        
HCHSTUID  DIM       10     10       50    Operator Id (websecaf)             
HCHSSTAT  DIM       2      2        60    Status (Right justified)           
.                                         0 - Batched
.                                         1 = Extracted
.                                         2 - Sent
.                                         3 - Acknowledged
.                                         4 - Nack
.                                         5 - Received - Ok
.                                         6 - Received - Batch Error
.                                         7 - EFT Payment Received
.                                         8 - Actioned
.                                         9 - Deposit Verified
.                                        10 - Closed
.                                        11 - Hard copy to Medicare
.                                        12 - Change Header
HCHSSPAR  DIM       70     70       62    Spare                              
.
.End of Record                      132  
.
