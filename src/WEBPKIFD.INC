. V11.00.01 27/01/2021 PVL C-0898361 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBPKIFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices Participants Key Words 
. *
. * File Type     :   SQL
. *
. * File Name     :   webpkiaf.dat
. *
. * Index Values  :   KEY53   KEY53                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBPKIA1   IFILE    SQL, FIXED=154, KEY="U1-3,4-53"
WEBPKIA2   IFILE    SQL, FIXED=154, KEY="U4-53,1-3"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBPKCODE  DIM       3      3        1     Participant Code                   
WBPKKKWD  DIM       50     50       4     Key Word                           
WBPKSPAR  DIM       100    100      54    Spare                              
.
.End of Record                      154  
.
