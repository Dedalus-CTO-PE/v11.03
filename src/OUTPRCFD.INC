. V10.06.01 13/03/2015 EC C-303890 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   OUTPRCFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Procedure and Problem Details      
. *
. * File Type     :   SQL
. *
. * File Name     :   outprcaf.dat
. *
. * Index Values  :   KEY8                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTPRCA1   IFILE    SQL, FIXED=481, KEY="U1-8"                                  
FILPRCA1  INIT      "prcaf"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTPROUTN  DIM       8      8        1     Outpatient Number                  
OTPRCODE  DIM       9      9        9     Procedure Code 1 (outcpcaf)        
OTPRDESC  DIM       70     70       18    Procedure Description 1            
OTPRCOD2  DIM       9      9        88    Procedure Code 2 (outcpcaf)        
OTPRDES2  DIM       70     70       97    Procedure Description 2            
OTPRCOD3  DIM       9      9        167   Procedure Code 3 (outcpcaf)        
OTPRDES3  DIM       70     70       176   Procedure Description 3            
OTPRCOD4  DIM       9      9        246   Procedure Code 4 (outcpcaf)        
OTPRDES4  DIM       70     70       255   Procedure Description 4            
OTPRCOD5  DIM       9      9        325   Procedure Code 5 (outcpcaf)        
OTPRDES5  DIM       70     70       334   Procedure Description 5            
OTPRPRB1  DIM       9      9        404   Problem Code 1 (outcpbaf)          
OTPRPRB2  DIM       9      9        413   Problem Code 2 (outcpbaf)          
OTPRPRB3  DIM       9      9        422   Problem Code 3 (outcpbaf)          
OTPRSPAR  DIM       50     50       431   Spare Variable                     
.
.End of Record                      481  
.
