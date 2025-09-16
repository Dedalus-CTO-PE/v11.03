. V10.06.01 11/03/2015 EC C-304779 Added additional delay reasons and comments  
. V10.03.01 11/10/2012 EC C-266929 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   EMRDELFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Emergency Delay Reasons            
. *
. * File Type     :   SQL
. *
. * File Name     :   emrdelaf.dat
. *
. * Index Values  :   KEY29                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRDELA1   IFILE    SQL, FIXED=513, KEY="U1-8,9-16,17-24,25-27,28-29"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMDEVISN  DIM       8      8        1     Visit Number                       
EMDEDATE  DIM       8      8        9     Delay Date (CCYYMMDD)              
EMDETIME  DIM       8      8        17    Delay Time (HH:MM:SS)              
EMDETYPE  DIM       3      3        25    Type of Delay (Category Ya)        
EMDECNTR  DIM       2      2        28    Count                              
EMDEREAS  DIM       3      3        30    Reason for Delay 1 (Category Yb)   
EMDEDELT  DIM       1      1        33    Deleted                            
.                                         0=No, 1=Yes                          
EMDECUID  DIM       10     10       34    WEB User ID Created (websecaf)     
EMDECDAT  DIM       8      8        44    Date Record Created (CCYYMMDD)     
EMDECTIM  DIM       8      8        52    Time Record Created (HH:MM:SS)     
EMDEUUID  DIM       10     10       60    WEB User ID Updated (websecaf)     
EMDEUDAT  DIM       8      8        70    Update Date (CCYYMMDD)             
EMDEUTIM  DIM       8      8        78    Update Time (HH:MM:SS)             
EMDEDR02  DIM       3      3        86    Reason for Delay 2 (Category Yb)   
EMDEDR03  DIM       3      3        89    Reason for Delay 3 (Category Yb)   
EMDEDR04  DIM       3      3        92    Reason for Delay 4 (Category Yb)   
EMDEDR05  DIM       3      3        95    Reason for Delay 5 (Category Yb)   
EMDEDR06  DIM       3      3        98    Reason for Delay 6 (Category Yb)   
EMDEDR07  DIM       3      3        101   Reason for Delay 7 (Category Yb)   
EMDEDR08  DIM       3      3        104   Reason for Delay 8 (Category Yb)   
EMDEDR09  DIM       3      3        107   Reason for Delay 9 (Category Yb)   
EMDEDR10  DIM       3      3        110   Reason for Delay 10 (Category Yb)  
EMDECOMM  DIM       300    300      113   Delay Comments                     
EMDESPAR  DIM       100    100      413   Spare                              
.
.End of Record                      513  
.
