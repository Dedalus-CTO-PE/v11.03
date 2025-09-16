. V6.05.001 22/02/1999                                                       
. *----------------------------------------------------------------------
. * Include Name  :   RESPENFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Clinical Results PIT Results E-mail Notification    
. *
. * File Type     :   SQL
. *
. * File Name     :   respenaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RESPENA1   IFILE    SQL, FIXED=139, KEY="U1-32"                                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
REPEKEY   DIM       32     32       1     Notification Key                   
REPEEML   DIM       50     50       33    E-Mail Address                     
REPEALL   FORM      1      2        83    All Results 0=No 1=Yes             
REPEABN   FORM      1      2        85    Abnormal Results 0=No 1=Yes        
REPEURG   FORM      1      2        87    Urgent Result 0=No 1=Yes           
REPESPA   DIM       50     50       89    Spare                              
.
.End of Record                      139  
.
