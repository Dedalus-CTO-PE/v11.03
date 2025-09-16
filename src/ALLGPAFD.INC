. V9.09.002 10/10/2007 JT  Added Record Status                               
. V9.09.001 13/07/2007 EC  Created FD CAR 135536
. *----------------------------------------------------------------------
. * Include Name  :   ALLGPAFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Group Contact Patients             
. *
. * File Type     :   SQL
. *
. * File Name     :   allgpaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLGPAA1   IFILE    SQL, FIXED=133, KEY="U1-8,17-24"                            
ALLGPAA2   IFILE    SQL, FIXED=133, KEY="U17-24,1-8"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALGACONT  DIM       8      8        1     Contact Number                     
ALGAURNO  DIM       8      8        9     U/R                                
ALGAREFN  DIM       8      8        17    Referral Number (allrefaf)         
ALGACURP  DIM       1      1        25    Current Patient 0=No 1=Yes         
ALGAPSTA  DIM       3      3        26    Patient Status (Cat GA)            
ALGAMEAL  DIM       1      1        29    Meals Provided 0=No 1=Yes          
ALGAMOHX  DIM       1      1        30    MOH Extract (blank=No MHINC)
.                                         0=Unsent
.                                         1=Sent
.                                         2=Send Delete required
.                                         3=Send Update required
ALGACDAT  DIM       8      8        31    Date Record Created (CCYYMMDD)     
ALGACTIM  DIM       8      8        39    Time Record Created (HH:MM:SS)     
ALGACUID  DIM       10     10       47    WEB User ID Created (websecaf)     
ALGAUDAT  DIM       8      8        57    Date Record Updated (CCYYMMDD)     
ALGAUTIM  DIM       8      8        65    Time Record Updated (HH:MM:SS)     
ALGAUUID  DIM       10     10       73    WEB User ID Updated (websecaf)     
ALGARCST  DIM       1      1        83    Record Status 1=Deleted            
ALGASPAR  DIM       49     49       84    Spare Variable                     
.
.End of Record                      133  
.
