. V11.00.01 31/08/2020 PVL C-0895969 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBSESFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices OECW Services Header   
. *
. * File Type     :   SQL
. *
. * File Name     :   websesaf.dat
. *
. * Index Values  :   KEY37   KEY61   KEY73                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBSESA1   IFILE    SQL, FIXED=256, KEY="U1-20,21-23,24-34,35-37"
WEBSESA2   IFILE    SQL, FIXED=256, KEY="U96-119,1-20,21-23,24-34,35-37"
WEBSESA3   IFILE    SQL, FIXED=256, KEY="U120-155,1-20,21-23,24-34,35-37"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBSSARID  DIM       20     20       1     Account Reference ID               
WBSSRPTC  DIM       3      3        21    Report counter (right just.)       
WBSSSCOD  DIM       11     11       24    Service Code                       
WBSSSRVC  DIM       3      3        35    Service counter (right justified)  
WBSSSCTC  DIM       1      1        38    Service Code Type Code             
WBSSSVID  DIM       4      4        39    Service ID                         
WBSSCAMT  DIM       9      9        43    Charge Amount                      
WBSSSDTE  DIM       8      8        52    Service Date                       
WBSSFBAM  DIM       9      9        60    Fund Benefit Amount                
WBSSITEM  DIM       5      5        69    Item Number                        
WBSSMBAM  DIM       9      9        74    Medicare Benefit Amount            
WBSSMEXC  DIM       3      3        83    Medicare Explanation Code          
WBSSSFAC  DIM       1      1        86    Service Fund Assessment Code       
WBSSSFEE  DIM       9      9        87    Schedule Fee                       
WBSSTRID  DIM       24     24       96    Transaction ID                     
WBSSMSID  DIM       36     36       120   Message ID                         
WBSSSPAR  DIM       100    100      156   Spare Variable                     
.
.End of Record                      256  
.
