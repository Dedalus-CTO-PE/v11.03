. V10.02.02 01/07/2011 DS C-240723 Removed hospital                             
. V10.02.01 30/05/2011 SA C-240723 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   PMSTEMFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Teams                              
. *
. * File Type     :   SQL
. *
. * File Name     :   pmstemaf.dat
. *
. * Index Values  :   KEY5                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSTEMA1   IFILE    SQL, FIXED=119, KEY="U1-5"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMTMTEAM  DIM       5      5        1     Team Code                          
PMTMDESC  DIM       30     30       6     Team Description                   
PMTMACTV  DIM       1      1        36    Active (0=Active/1=Inactive)       
PMTMCUID  DIM       10     10       37    WEB User ID Created (websecaf)     
PMTMCDAT  DIM       8      8        47    Date Record Created (ccyymmdd)     
PMTMCTIM  DIM       8      8        55    Time Record Created (hh:mm:ss)     
PMTMUUID  DIM       10     10       63    WEB User ID Updated (websecaf)     
PMTMUDAT  DIM       8      8        73    Date Record Updated (ccyymmdd)     
PMTMUTIM  DIM       8      8        81    Time Record Updated (hh:mm:ss)     
PMTMSPAR  DIM       30     30       89    Spare Variable                     
.
.End of Record                      119  
.
