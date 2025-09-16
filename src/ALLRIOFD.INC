. V10.14.01 30/04/2019 SA C-0868837 Created File Definition                     
. *----------------------------------------------------------------------
. * Include Name  :   ALLRIOFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Referral In Outcome History        
. *
. * File Type     :   SQL
. *
. * File Name     :   allrioaf.dat
. *
. * Index Values  :   KEY27                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLRIOA1   IFILE    SQL, FIXED=58, KEY="U1-8,9-16,17-24,25-27"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALRIVISN  DIM       8      8        1     Visit Number                       
ALRIDATE  DIM       8      8        9     Date of Change (ccyymmdd)          
ALRITIME  DIM       8      8        17    Time of Change (hh:mm:ss)          
ALRIOUTC  DIM       3      3        25    Referral In Outcome                
ALRISPAR  DIM       30     30       28    Spare Variable                     
.
.End of Record                      58   
.
