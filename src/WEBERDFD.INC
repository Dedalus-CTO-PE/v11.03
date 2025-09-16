. V11.00.01 11/01/2021 PVL C-0898361 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBERDFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices ERAW Payment Details Ta
. *
. * File Type     :   SQL
. *
. * File Name     :   weberdaf.dat
. *
. * Index Values  :   KEY82   KEY82   KEY102                                 
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBERDA1   IFILE    SQL, FIXED=312, KEY="U1-24,25-54,55-58,59-82"
WEBERDA2   IFILE    SQL, FIXED=312, KEY="U59-82,1-24,25-54,55-58"
WEBERDA3   IFILE    SQL, FIXED=312, KEY="U83-102,1-24,25-54,55-58,59-82"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBEJFTID  DIM       24     24       1     Fund Transaction ID                
WBEJRADV  DIM       30     30       25    Remittance Advice ID               
WBEJPNUM  DIM       4      4        55    Part Number                        
WBEJTRID  DIM       24     24       59    Transaction ID                     
WBEJARID  DIM       20     20       83    Account Reference ID               
WBEJBAMT  DIM       9      9        103   Benefit Amount                     
WBEJCCOD  DIM       3      3        112   Claim Channel Code                 
WBEJLDAT  DIM       8      8        115   Date of Lodgement                  
WBEJPARI  DIM       20     20       123   Previous Account Reference ID      
WBEJPTID  DIM       24     24       143   Previous Transaction ID            
WBEJSTAT  DIM       1      1        167   Status                             
.                                         0 = Received                         
.                                         1 = Locked                           
.                                         2 = Released                         
.                                         3 = Released to Suspense A/C         
WBEJLTYP  DIM       2      2        168   Lock Type (numeric - right justifie
WBEJCLID  DIM       6      6        170   Claim ID                           
WBEJMSID  DIM       36     36       176   Message ID                         
WBEJSPAR  DIM       100    100      212   Spare Variable                     
.
.End of Record                      312  
.
