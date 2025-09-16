. V10.08.01 21/07/2016 SA C-0294177 Created File Definition                     
. *----------------------------------------------------------------------
. * Include Name  :   PRIESDFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Eclipse IMC Services Details       
. *
. * File Type     :   SQL
. *
. * File Name     :   priesdaf.dat
. *
. * Index Values  :   KEY47                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRIESDA1   IFILE    SQL, FIXED=158, KEY="U1-3,4-23,24-29,30-32,33-37,38-40,41-44,45-47"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRSDFBID  DIM       3      3        1     Fund Brand ID (Participant Code)   
PRSDARID  DIM       20     20       4     Account Reference ID (Invoice)     
PRSDCLID  DIM       6      6        24    Claim ID                           
PRSDRPTC  DIM       3      3        30    Report counter (right justified)   
PRSDITMN  DIM       5      5        33    Item Number                        
PRSDSRVC  DIM       3      3        38    Service counter (right justified)  
PRSDSFEC  DIM       4      4        41    Service Fund Explanation Code      
PRSDSEXC  DIM       3      3        45    Serv. Explanat'n Code Count(Cat rj)
PRSDSFET  DIM       80     80       48    Service Fund Explanation Text      
PRSDSPAR  DIM       30     30       128   Spare Variable                     
.
.End of Record                      158  
.
