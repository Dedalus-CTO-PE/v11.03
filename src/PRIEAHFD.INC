. V10.08.01 21/07/2016 SA C-0294177 Created File Definition                     
. *----------------------------------------------------------------------
. * Include Name  :   PRIEAHFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Eclipse IMC Assessment Header      
. *
. * File Type     :   SQL
. *
. * File Name     :   prieahaf.dat
. *
. * Index Values  :   KEY32   KEY56                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRIEAHA1   IFILE    SQL, FIXED=257, KEY="U1-3,4-23,24-29,30-32"                 
PRIEAHA2   IFILE    SQL, FIXED=257, KEY="U187-210,1-3,4-23,24-29,30-32"         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRAHFBID  DIM       3      3        1     Fund Brand ID (Participant Code)   
PRAHARID  DIM       20     20       4     Account Reference ID (Invoice)     
PRAHCLID  DIM       6      6        24    Claim ID                           
PRAHRPTC  DIM       3      3        30    Report counter (right just.)       
PRAHCPFN  DIM       40     40       33    Current Patient First Name         
PRAHCPMN  DIM       10     10       73    Current Patient Medicare Card No.  
PRAHCPRN  DIM       1      1        83    Current Patient Reference Number   
PRAHFSCD  DIM       4      4        84    Fund Status Code                   
PRAHCFAC  DIM       1      1        88    Claim Fund Assessment Code         
PRAHMCFC  DIM       1      1        89    Medicare Card Flag Code            
PRAHMSCD  DIM       4      4        90    Medicare Status Code               
PRAHPSNM  DIM       40     40       94    Patient Family Name                
PRAHPFNM  DIM       40     40       134   Patient First Name                 
PRAHPMCN  DIM       10     10       174   Patient Medicare Card Number       
PRAHPRFN  DIM       1      1        184   Patient Reference Number           
PRAHSTAT  DIM       2      2        185   Process Status Code                
PRAHFTID  DIM       24     24       187   Claim Transaction ID               
PRAHUDTE  DIM       8      8        211   Date Updated (ccyymmdd)            
PRAHUTIM  DIM       8      8        219   Time Updated (hh:mm:ss)            
PRAHSPAR  DIM       30     30       227   Spare Variable                     
.
.End of Record                      257  
.
