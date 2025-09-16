. V10.14.01 28/03/2019 SA C-0864951 Created File Definition                     
. *----------------------------------------------------------------------
. * Include Name  :   PMSCHIFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Concession Card History File       
. *
. * File Type     :   SQL
. *
. * File Name     :   pmschiaf.dat
. *
. * Index Values  :   KEY27                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSCHIA1   IFILE    SQL, FIXED=134, KEY="U1-8,9-16,17-24,25-27"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMHIURNO  DIM       8      8        1     U/R Number                         
PMHIDATE  DIM       8      8        9     Action Date (ccyymmdd)             
PMHITIME  DIM       8      8        17    Action Time (hh:mm:ss)             
PMHICTYP  DIM       3      3        25    Card Type (Cat ct)                 
PMHICNUM  DIM       20     20       28    Concession Card Number             
PMHICEXP  DIM       8      8        48    Card Expiry Date (ccyymmdd)        
PMHICCOL  DIM       3      3        56    Card Colour (Cat DX)               
PMHIATYP  DIM       1      1        59    Action Type                        
.                                         A = Add                              
.                                         U = Update                           
.                                         D = Deleted                          
PMHIREAS  DIM       3      3        60    Action Reason (Cat aR)             
PMHIPEXP  DIM       8      8        63    Previous Expiry Date (ccyymmdd)    
PMHIPCOL  DIM       3      3        71    Previous Card Colour (Cat DX)      
PMHIAUID  DIM       10     10       74    Action User ID (websecaf)          
PMHISPAR  DIM       50     50       84    Spare Variable                     
.
.End of Record                      134  
.
