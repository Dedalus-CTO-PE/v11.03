. V10.02.02 01/08/2011 DS C-240723 Added index 2                                
. V10.02.01 02/06/2011 DS C-240723 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   PMSDRAFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Doctor Arrangements                
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsdraaf.dat
. *
. * Index Values  :   KEY13   KEY21                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSDRAA1   IFILE    SQL, FIXED=112, KEY="U1-10,11-13"                           
PMSDRAA2   IFILE    SQL, FIXED=112, KEY="U1-10,14-21,11-13"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMDRDOCT  DIM       10     10       1     Doctor Code                        
PMDRARRA  DIM       3      3        11    Arrangement Code (cat da)          
PMDRAFDT  DIM       8      8        14    Arrangement From Date (ccyymmdd)   
PMDRATDT  DIM       8      8        22    Arrangement To Date (ccyymmdd)     
PMDRCUID  DIM       10     10       30    WEB User ID Created (websecaf)     
PMDRCDAT  DIM       8      8        40    Date Record Created (ccyymmdd)     
PMDRCTIM  DIM       8      8        48    Time Record Created (hh:mm:ss)     
PMDRUUID  DIM       10     10       56    WEB User ID Updated (websecaf)     
PMDRUDAT  DIM       8      8        66    Date Record Updated (ccyymmdd)     
PMDRUTIM  DIM       8      8        74    Time Record Updated (hh:mm:ss)     
PMDRSPAR  DIM       30     30       82    Spare Variable                     
.
.End of Record                      112  
.
