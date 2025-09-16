. V10.08.01 21/07/2016 SA C-0291477 Created File Definition                     
. *----------------------------------------------------------------------
. * Include Name  :   PRIESHFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Eclipse IMC Services Header        
. *
. * File Type     :   SQL
. *
. * File Name     :   prieshaf.dat
. *
. * Index Values  :   KEY40                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRIESHA1   IFILE    SQL, FIXED=123, KEY="U1-3,4-23,24-29,30-32,33-37,38-40"     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRSHFBID  DIM       3      3        1     Fund Brand ID (Participant Code)   
PRSHARID  DIM       20     20       4     Account Reference ID (Invoice)     
PRSHCLID  DIM       6      6        24    Claim ID                           
PRSHRPTC  DIM       3      3        30    Report counter (right justified)   
PRSHITMN  DIM       5      5        33    Item Number                        
PRSHSRVC  DIM       3      3        38    Service counter (right justified)  
PRSHCAMT  DIM       9      9        41    Charge Amount                      
PRSHFBAM  DIM       9      9        50    Fund Benefit Amount                
PRSHSDTE  DIM       8      8        59    Service Date                       
PRSHMBAM  DIM       9      9        67    Medicare Benefit Amount            
PRSHMEXC  DIM       3      3        76    Medicare Explanation Code          
PRSHSCHF  DIM       9      9        79    Schedule Fee                       
PRSHSFAC  DIM       1      1        88    Service Fund Assessment Code       
PRSHSVID  DIM       4      4        89    Service ID                         
PRSHSPAR  DIM       30     30       93    Spare Variable                     
.
.End of Record                      123  
.
