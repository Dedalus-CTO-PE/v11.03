. VF.09.001 09/02/2001 SB  Added Fees Invoiced Indicator                     
. *----------------------------------------------------------------------
. * Include Name  :   FMSINTFD.INC
. *
. * Function      :   File Def'n Include for Financial Management System        
. *                   Default Interface Parameters       
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsintaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSINTA1   IFILE    SQL, FIXED=141, KEY="U1-3"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMINCODE  DIM       3      3        1     Interface Type Code                
FMINDESC  DIM       35     35       4     Description                        
FMINCASH  DIM       1      1        39    Post to Cash (Y/N)                 
FMINAUTH  DIM       1      1        40    Authorization Req (Y/N)            
FMINTDES  DIM       30     30       41    Default Transaction Description    
FMINREF   DIM       15     15       71    Default Transaction Reference      
FMINDISS  DIM       5      5        86    Default Dissection                 
FMINRESP  DIM       4      4        91    Default Responsibility             
FMINLEDG  DIM       2      2        95    Default Ledger                     
FMINCRAC  DIM       12     12       97    Default Credit Account Cash        
FMINCRAA  DIM       12     12       109   Default Credit Account Accrual     
FMINFEEI  DIM       1      1        121   Fees Invoiced Interface (1=Yes)      
FMINSPAR  DIM       19     19       122   Spare                              
.
.End of Record                      141  
.
