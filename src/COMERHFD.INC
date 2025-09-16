. V10.12.01 08/01/2018 EC C-0845295 Created FD                                  
. *----------------------------------------------------------------------
. * Include Name  :   COMERHFD.INC
. *
. * Function      :   File Def'n Include for Common                             
. *                   eReferral Pending Header Table     
. *
. * File Type     :   SQL
. *
. * File Name     :   comerhaf.dat
. *
. * Index Values  :   KEY20   KEY33   KEY38   KEY33   KEY28   KEY40   KEY33  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
COMERHA1   IFILE    SQL, FIXED=337, KEY="U1-20"
COMERHA2   IFILE    SQL, FIXED=337, KEY="U39-46,74-76,37-38,1-20"
COMERHA3   IFILE    SQL, FIXED=337, KEY="U47-54,39-46,37-38,1-20"
COMERHA4   IFILE    SQL, FIXED=337, KEY="U74-76,39-46,37-38,1-20"
COMERHA5   IFILE    SQL, FIXED=337, KEY="U55-62,1-20"
COMERHA6   IFILE    SQL, FIXED=337, KEY="U180-199,1-20"
COMERHA7   IFILE    SQL, FIXED=337, KEY="U21-28,74-76,37-38,1-20"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CMRHUNIQ  DIM       20     20       1     Unique Id                          
CMRHDATE  DIM       8      8        21    Date Created CCYYMMDD              
CMRHTIME  DIM       8      8        29    Time hh:mm:ss                      
CMRHSTAT  DIM       2      2        37    Status                             
.                                         " 1" - Pending                       
.                                         " 2" - Processed                     
.                                         " 3" - Processing                    
.                                         " 4" - Process Cancelled             
.                                         " 5" - Ignore                        
.                                         " 6" - Cancelled                     
.                                         " 7" - Added as Booked               
.                                         " 8" - Added as Referral             
.                                         " 9" - Added to Waiting List         
CMRHEDAT  DIM       8      8        39    Expected Referral/Adm Date CCYYMMDD
CMRHURNO  DIM       8      8        47    UR Number                          
CMRHVISN  DIM       8      8        55    Visit Number                       
CMRHPCOD  DIM       9      9        63    Procedure Code                     
CMRHPCNT  DIM       2      2        72    Procedure Count                    
CMRHHOSP  DIM       3      3        74    Hospital (pathspaf)                
CMRHBTYP  DIM       3      3        77    Booking Type (cat BK)              
CMRHADOC  DIM       100    100      80    Admitting Doctor                   
CMRHEREF  DIM       20     20       180   eReferral ID                       
CMRHLHRD  DIM       8      8        200   Last History Received Date CCYYMMDD
CMRHLHDT  DIM       3      3        208   Last History Document Type (Cat wi)
CMRHUDAT  DIM       8      8        211   Update Date (CCYYMMDD)             
CMRHUTIM  DIM       8      8        219   Update Time (HH:MM:SS)             
CMRHUUID  DIM       10     10       227   WEB User ID Updated (websecaf)     
CMRHSPAR  DIM       100    100      237   Spare                              
.
.End of Record                      337  
.
