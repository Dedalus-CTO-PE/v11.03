. V10.12.01 28/02/2018 KBE C-0851092 Add Hospital Code for MultiHospital clients
. V10.08.01 29/03/2016 SA C-0308881 Created new table                           
. *----------------------------------------------------------------------
. * Include Name  :   OPRRCIFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Recovery Closed Incidents          
. *
. * File Type     :   SQL
. *
. * File Name     :   oprrciaf.dat
. *
. * Index Values  :   KEY22   KEY22                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRRCIA1   IFILE    SQL, FIXED=121, KEY="U1-3,4-11,12-19,91-93"
OPRRCIA2   IFILE    SQL, FIXED=121, KEY="U4-11,1-3,12-19,91-93"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPRCLOCN  DIM       3      3        1     Location (Cat YD)                  
OPRCSDAT  DIM       8      8        4     Recovery Close Start Date          
.                                         (ccyymmdd)                           
OPRCSTIM  DIM       8      8        12    Recovery Close Start Time          
.                                         (hh:mm:ss)                           
OPRCEDAT  DIM       8      8        20    Recovery Close End Date (ccyymmdd) 
OPRCETIM  DIM       8      8        28    Recovery Close End Time (hh:mm:ss) 
OPRCREAS  DIM       3      3        36    Recovery Close Reason (Cat Cr)     
OPRCCSUI  DIM       10     10       39    User Who Entered Recovery Closed   
.                                         Start (websecaf)                     
OPRCCDAT  DIM       8      8        49    Date Record Created (ccyymmdd)     
OPRCCTIM  DIM       8      8        57    Time Record Created (hh:mm:ss)     
OPRCCEUI  DIM       10     10       65    User Who Entered Recovery Closed   
.                                         End (websecaf)                       
OPRCCEDT  DIM       8      8        75    Date Recovery Close End Entered    
.                                         (ccyymmdd)                           
OPRCCETM  DIM       8      8        83    Time Recovery Close End Entered    
.                                         (hh:mm:ss)                           
OPRCHOSP  DIM       3      3        91    Hospital Code (pathspaf)           
OPRCSPAR  DIM       27     27       94    Spare Variable                     
.
.End of Record                      121  
.
