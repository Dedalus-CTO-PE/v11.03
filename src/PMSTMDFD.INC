. V10.03.01 12/02/2012 JP C-256376 Added index by hospital/unit                 
. V10.02.01 01/06/2011 DS C-240723 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   PMSTMDFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Doctor Unit/Teams                  
. *
. * File Type     :   SQL
. *
. * File Name     :   pmstmdaf.dat
. *
. * Index Values  :   KEY21   KEY21                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSTMDA1   IFILE    SQL, FIXED=116, KEY="U1-10,11-13,14-16,17-21"               
PMSTMDA2   IFILE    SQL, FIXED=116, KEY="U11-13,14-16,1-10,17-21"               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMTDDOCT  DIM       10     10       1     Doctor/HCP Code                    
PMTDHOSP  DIM       3      3        11    Hospital Code (pathspaf)           
PMTDUNIT  DIM       3      3        14    Unit (Cat AC)                      
PMTDTEAM  DIM       5      5        17    Team Code (pmstemaf)               
PMTDACTV  DIM       1      1        22    Active (0=Active/1=Inactive)       
PMTDHEAD  DIM       1      1        23    Head of Unit (1=yes)               
PMTDPROV  DIM       10     10       24    Provider Number                    
PMTDCUID  DIM       10     10       34    WEB User ID Created (websecaf)     
PMTDCDAT  DIM       8      8        44    Date Record Created (ccyymmdd)     
PMTDCTIM  DIM       8      8        52    Time Record Created (hh:mm:ss)     
PMTDUUID  DIM       10     10       60    WEB User ID Updated (websecaf)     
PMTDUDAT  DIM       8      8        70    Date Record Updated (ccyymmdd)     
PMTDUTIM  DIM       8      8        78    Time Record Updated (hh:mm:ss)     
PMTDSPAR  DIM       30     30       86    Spare Variable                     
.
.End of Record                      116  
.
