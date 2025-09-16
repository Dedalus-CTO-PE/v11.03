. V11.02.01 11/03/2022 TT C-0911895 Added new description for SMS Message Type 0
. V10.08.00 02/02/2016 EC C-0294154 Created FD                                  
. *----------------------------------------------------------------------
. * Include Name  :   PMSSMHFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   SMS History                        
. *
. * File Type     :   SQL
. *
. * File Name     :   pmssmhaf.dat
. *
. * Index Values  :   KEY16   KEY24   KEY32   KEY18   KEY64   KEY32          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSSMHA1   IFILE    SQL, FIXED=1168, KEY="U1-16"
PMSSMHA2   IFILE    SQL, FIXED=1168, KEY="U17-24,1-16"
PMSSMHA3   IFILE    SQL, FIXED=1168, KEY="U60-67,68-75,1-16"
PMSSMHA4   IFILE    SQL, FIXED=1168, KEY="U1066-1067,1-16"
PMSSMHA5   IFILE    SQL, FIXED=1168, KEY="U25-26,27-56,60-67,68-75,1-16"
PMSSMHA6   IFILE    SQL, FIXED=1168, KEY="U1073-1088,1-16"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMSMUMID  DIM       16     16       1     Unique Message Id                  
PMSMURNO  DIM       8      8        17    U/R Number                         
PMSMMTYP  DIM       2      2        25    SMS Message Type                   
.                                         " 0" = Booking                       
.                                         " 2" = Outpatient                    
.                                         " 3" = Inpatient                     
.                                         " 9" = Waiting List                  
PMSMRKEY  DIM       30     30       27    Record Key                         
PMSMSCOD  DIM       3      3        57    SMS Message Code                   
PMSMSDAT  DIM       8      8        60    Date Message Send (CCYYMMDD)       
PMSMSTIM  DIM       8      8        68    Time Message Sent (HH:MM:SS)       
PMSMMNUM  DIM       20     20       76    Mobile Phone Number                
PMSMSUID  DIM       10     10       96    Send By (websecaf)                 
PMSMMESA  DIM       160    160      106   Message Part A                     
PMSMMESB  DIM       160    160      266   Message Part B                     
PMSMMESC  DIM       160    160      426   Message part C                     
PMSMMESD  DIM       160    160      586   Message Part D                     
PMSMMESE  DIM       160    160      746   Message Part E                     
PMSMMESF  DIM       160    160      906   Message Part F                     
PMSMSTAT  DIM       2      2        1066  Message Status                     
.                                         0 = Sent                             
.                                         1 = Response Received                
.                                         2 = Error                            
.                                         3 = Re - Sent                        
.                                         4 = Waiting to be sent               
.                                         5 = Error Corrected (Bulk resend)    
PMSMAHOC  DIM       1      1        1068  Ad-Hoc Indicator                   
.                                         "0" = Bulk SMS                       
.                                         "1" = Ad-Hoc                         
PMSMCONT  DIM       1      1        1069  Contact                            
.                                         "0" = Patient                        
.                                         "1" = Contact Type                   
PMSMCTYP  DIM       3      3        1070  Contact Type                       
.                                         Blank for patient                    
.                                         XXX = Contact Type (Cat tc)          
PMSMRMID  DIM       16     16       1073  Re Sent Message Id                 
PMSMSPAR  DIM       79     79       1089  Spare                              
.
.End of Record                      1168 
.
