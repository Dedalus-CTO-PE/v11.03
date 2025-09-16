. V10.08.01 23/03/2016 DN C-303887 Changed indexes                              
. V10.06.00 05/06/2015 DN C-303887 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   WATNBDFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   NBRS Extract Records               
. *
. * File Type     :   SQL
. *
. * File Name     :   watnbdaf.dat
. *
. * Index Values  :   KEY31   KEY32   KEY33   KEY31                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATNBDA1   IFILE    SQL, FIXED=643, KEY="U1-9,18-19,20-27,46-50,40-44,51-52"    
WATNBDA2   IFILE    SQL, FIXED=643, KEY="U1-9,18-19,20-27,46-50,40-44,45-45,51-52"
WATNBDA3   IFILE    SQL, FIXED=643, KEY="U1-9,18-19,20-27,46-50,40-44,53-54,51-52"
WATNBDA4   IFILE    SQL, FIXED=643, KEY="U40-44,1-9,18-19,20-27,46-50,51-52"    
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTNDLBID  DIM       9      9        1     WL Booking ID wattr1af.WTWMECNT    
WTNDPNHI  DIM       8      8        10    Patient NHI number                 
WTNDBSCD  DIM       2      2        18    NBRS Booking Status Code           
WTNDBSDT  DIM       8      8        20    Booking Status Date (CCYYMMDD)     
WTNDFACI  DIM       4      4        28    Event Facility Code                
WTNDXDAT  DIM       8      8        32    Extract Sent Date (CCYYMMDD)       
WTNDBTCH  DIM       5      5        40    Batch Number                       
WTNDSTAT  DIM       1      1        45    Processing Status                  
.                                         1=Sent                               
.                                         2=Error                              
.                                         3=Accepted                           
.                                         4=Corrected                          
.                                         5=File Failure                       
.                                         6=Accepted with Warning              
WTNDLINE  DIM       5      5        46    Original Input File Line No.       
WTNDERRC  DIM       2      2        51    Error Count Index (00-99)          
WTNDAKRT  DIM       2      2        53    Ack. Record Type (AC, RJ, ER or WN)
WTNDMSGN  DIM       7      7        55    Message Number (AAANNNN)           
WTNDMSGT  DIM       255    255      62    Message Text                       
WTNDUSRS  DIM       10     10       317   User last updated processing status
WTNDUDAT  DIM       8      8        327   Date last updated processing status
WTNDUTIM  DIM       8      8        335   Time last updated processing status
WTNDRDET  DIM       200    200      343   Extract record BE detail text      
WTNDSPAR  DIM       100    100      543   Spare                              
.
.End of Record                      643  
.
