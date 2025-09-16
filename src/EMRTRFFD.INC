. V9.09.001 25/10/2007 JT                                                    
. *----------------------------------------------------------------------
. * Include Name  :   EMRTRFFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Emergency Triage Fee               
. *
. * File Type     :   SQL
. *
. * File Name     :   emrtrfaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRTRFA1   IFILE    SQL, FIXED=210, KEY="U1-3,4-6,7-14"                         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMTFTRIG  DIM       3      3        1     Triage Code (Cat AA)               
EMTFATTD  DIM       3      3        4     Attendance Type (Cat ee)           
EMTFEFDA  DIM       8      8        7     Effective Date (ccyymmddd)         
EMTFDESC  DIM       30     30       15    Description                        
EMTFAMNT  FORM      12.2   8        45    Amount                             
EMTFSCOD  DIM       3      3        53    Set Code (Cat PG)                  
EMTFACTV  FORM      1      2        56    Active 1=Yes 0=No                  
EMTFCDAT  DIM       8      8        58    Date Record Created (ccyymmdd)     
EMTFCTIM  DIM       8      8        66    Time Record Created (hh:mm:ss)     
EMTFCUID  DIM       10     10       74    WEB User ID Created (websecaf)     
EMTFUDAT  DIM       8      8        84    Date Record Updated (ccyymmdd)     
EMTFUTIM  DIM       8      8        92    Time Record Updated (hh:mm:ss)     
EMTFUUID  DIM       10     10       100   WEB User ID Updated (websecaf)     
EMTFSPAR  DIM       100    100      110   Spare variable                     
.
.End of Record                      210  
.
