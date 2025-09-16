. V6.00.002 21/09/1993 Nez Added bank control 2
. *----------------------------------------------------------------------
. * Include Name  :   FMSCSAFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Selected Control Accounts
. *
. * File Type     :   SQL
. *
. * File Name     :   fmscsaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSCSAA1   IFILE    SQL, FIXED=119, KEY="U1-2,3-14"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMCSLED   DIM       2      2        1     Ledger                             
FMCSACC   DIM       12     12       3     Account                            
FMCSBNK   DIM       12     12       15    Bank Control                       
FMCSCRD   DIM       12     12       27    Creditors Control                  
FMCSDIS   DIM       12     12       39    Discount Control                   
FMCSDEB   DIM       12     12       51    Debtors Control                    
FMCSPAY   DIM       12     12       63    Payments in Suspense               
FMCSCGST  DIM       12     12       75    Cash GST                           
FMCSAGST  DIM       12     12       87    Accrual GST                        
FMCSBNK2  DIM       12     12       99    Bank Account 2                     
FMCSSPA   DIM       8      8        111   Spare                              
.
.End of Record                      119  
