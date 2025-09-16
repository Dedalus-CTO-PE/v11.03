. V10.07.01 06/10/2015 EC C-316633 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   ALLWLNFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Referral Waiting List Links        
. *
. * File Type     :   SQL
. *
. * File Name     :   allwlnaf.dat
. *
. * Index Values  :   KEY19   KEY27                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLWLNA1   IFILE    SQL, FIXED=78, KEY="U1-8,9-17,18-19"                        
ALLWLNA2   IFILE    SQL, FIXED=78, KEY="U20-27,1-8,9-17,18-19"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALWLURNO  DIM       8      8        1     U/R Number                         
ALWLPCOD  DIM       9      9        9     Procedure Code (watproaf)          
ALWLPCNT  DIM       2      2        18    Procedure Count                    
ALWLVISN  DIM       8      8        20    Referral/Visit Number              
ALWLSPAR  DIM       50     50       28    Spare                              
.
.End of Record                      78   
.
