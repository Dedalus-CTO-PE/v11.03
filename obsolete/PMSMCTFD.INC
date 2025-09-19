. V10.08.01 10/05/2016 SA C-0294177 Created FD                                  
. *----------------------------------------------------------------------
. * Include Name  :   PMSMCTFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Medicare Claimant Table            
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsmctaf.dat
. *
. * Index Values  :   KEY8                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSMCTA1   IFILE    SQL, FIXED=306, KEY="U1-8"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMMCINVN  DIM       8      8        1     Invoice Number                     
PMMCSNAM  DIM       40     40       9     Claimant Family Name               
PMMCFNAM  DIM       40     40       49    Claimant First Name                
PMMCCDOB  DIM       8      8        89    Claimaint Date of Birth            
PMMCMNUM  DIM       10     10       97    Claimant Medicare Card Number      
PMMCRNUM  DIM       1      1        107   Claimant Medicare Reference Number 
PMMCADD1  DIM       35     35       108   Claimant Address Line 1            
PMMCADD2  DIM       35     35       143   Claimant Address Line 2            
PMMCADD3  DIM       35     35       178   Claimant Address Line 3 (Locality) 
PMMCADD4  DIM       35     35       213   Claimant Address Line 4            
PMMCPCOD  DIM       8      8        248   Claimant Address Postcode          
PMMCSPAR  DIM       50     50       256   Spare Variable                     
.
.End of Record                      306  
.
