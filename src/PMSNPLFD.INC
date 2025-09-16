. V11.03.01 11/09/2023 PVL C-0935874 Created Include.                           
. *----------------------------------------------------------------------
. * Include Name  :   PMSNPLFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   NIHC IHI Polling Table             
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsnplaf.dat
. *
. * Index Values  :   KEY28   KEY52   KEY29   KEY31   KEY29   KEY31          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSNPLA1   IFILE    SQL, FIXED=771, KEY="U25-32,603-610,611-618,33-36"
PMSNPLA2   IFILE    SQL, FIXED=771, KEY="U1-24,603-610,611-618,25-32,33-36"
PMSNPLA3   IFILE    SQL, FIXED=771, KEY="U102-102,25-32,603-610,611-618,33-36"
PMSNPLA4   IFILE    SQL, FIXED=771, KEY="U37-39,25-32,603-610,611-618,33-36"
PMSNPLA5   IFILE    SQL, FIXED=771, KEY="U102-102,603-610,611-618,25-32,33-36"
PMSNPLA6   IFILE    SQL, FIXED=771, KEY="U37-39,603-610,611-618,25-32,33-36"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMNPUNIQ  DIM       24     24       1     Message Unique ID                  
PMNPURNO  DIM       8      8        25    UR Number                          
PMNPCNTR  DIM       4      4        33    Counter (Right Justified)          
PMNPHOSP  DIM       3      3        37    Hospital ID (pathspaf)             
PMNPRTYP  DIM       2      2        40    Request Type                       
.                                         "07" - IHI lookup                    
.                                         "08" - Clear IHI                     
.                                         "09" - Clear IHI then IHI Lookup     
PMNPRCOD  DIM       50     50       42    Request Code                       
.                                         "07" - Unique Transaction ID         
.                                         "08" - Unique Transaction ID         
.                                         "09" - Unique Transaction ID         
PMNPRUID  DIM       10     10       92    Request By Web User ID (websecaf)  
PMNPRSTA  DIM       1      1        102   Request Status                     
.                                         0 - Waiting                          
.                                         1 - Request Sent                     
.                                         2 - Reponse Process / Received       
.                                         3 - Error
PMNPEROR  DIM       500    500      103   Error Description                  
PMNPRDAT  DIM       8      8        603   Request Date (CCYYMMDD)            
PMNPRTIM  DIM       8      8        611   Request Time (hh:mm:ss)            
PMNPCDAT  DIM       8      8        619   Created Date (CCYYMMDD)            
PMNPCTIM  DIM       8      8        627   Created Time (hh:mm:ss)            
PMNPCUID  DIM       10     10       635   Created By Web User ID (websecaf)  
PMNPUDAT  DIM       8      8        645   Updated Date (CCYYMMDD)            
PMNPUTIM  DIM       8      8        653   Updated Time (hh:mm:ss)            
PMNPUUID  DIM       10     10       661   Update By Web User Id (websecaf)   
PMNPSPAR  DIM       100    100      671   Spare Variable                     
.
.End of Record                      771  
.
