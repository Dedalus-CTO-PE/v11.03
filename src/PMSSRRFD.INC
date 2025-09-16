. V10.08.01 23/05/2016 DN C-0294154 Added 'Message Mapped'. Reduced spare       
. V10.07.00 13/01/2016 DN C-294154 Created file                                 
. *----------------------------------------------------------------------
. * Include Name  :   PMSSRRFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   SMS Responses Received             
. *
. * File Type     :   SQL
. *
. * File Name     :   pmssrraf.dat
. *
. * Index Values  :   KEY18   KEY26   KEY34                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSSRRA1   IFILE    SQL, FIXED=1107, KEY="U1-16,17-18"                          
PMSSRRA2   IFILE    SQL, FIXED=1107, KEY="U39-46,1-16,17-18"                    
PMSSRRA3   IFILE    SQL, FIXED=1107, KEY="U79-86,87-94,1-16,17-18"              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMRRUMID  DIM       16     16       1     Unique Message ID                  
PMRRUCNT  DIM       2      2        17    Count (for multiple responses)     
PMRRMNUM  DIM       20     20       19    Mobile Phone Number                
PMRRURNO  DIM       8      8        39    UR Number                          
PMRRMTYP  DIM       2      2        47    SMS Message Type                   
PMRRRKEY  DIM       30     30       49    Record Key                         
PMRRRDTE  DIM       8      8        79    Received Date (ccyymmdd)           
PMRRRTIM  DIM       8      8        87    Received Time (hh:mm:ss)           
PMRRRESA  DIM       160    160      95    Response Part A                    
PMRRRESB  DIM       160    160      255   Response Part B                    
PMRRRESC  DIM       160    160      415   Response Part C                    
PMRRRESD  DIM       160    160      575   Response Part D                    
PMRRRESE  DIM       160    160      735   Response Part E                    
PMRRRESF  DIM       160    160      895   Response Part F                    
PMRRSTAT  DIM       2      2        1055  Response Status                    
.                                         0 = A Message                        
.                                         1 = Awaiting Delivery                
.                                         2 = Successful Delivery              
.                                         3 = Delivery Failure                 
.                                         4 = Error Processed                  
PMRRMAPD  DIM       1      1        1057  Message Mapped                     
.                                         0 = No                               
.                                         1 = Yes                              
PMRRSPAR  DIM       49     49       1058  Spare                              
.
.End of Record                      1107 
.
