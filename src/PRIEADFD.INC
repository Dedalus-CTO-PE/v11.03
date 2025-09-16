. V10.08.01 21/07/2016 SA C-0294177 Created File Definition                     
. *----------------------------------------------------------------------
. * Include Name  :   PRIEADFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Eclipse IMC Assessment Details     
. *
. * File Type     :   SQL
. *
. * File Name     :   prieadaf.dat
. *
. * Index Values  :   KEY39                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRIEADA1   IFILE    SQL, FIXED=150, KEY="U1-3,4-23,24-29,30-32,33-36,37-39"     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PREDFBID  DIM       3      3        1     Fund Brand ID (Participant Code)   
PREDARID  DIM       20     20       4     Account Reference ID (Invoice)     
PREDCLID  DIM       6      6        24    Claim ID                           
PREDRPTC  DIM       3      3        30    Report counter (right justified)   
PREDCFEC  DIM       4      4        33    Claim Fund Explanation Code        
PREDEXPC  DIM       3      3        37    Explanation Code Counter (Cat rj)  
PREDCFET  DIM       80     80       40    Claim Fund Explanation Text        
PREDSPAR  DIM       30     30       120   Spare Variable                     
.
.End of Record                      150  
.
