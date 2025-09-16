. V10.09.02 21/12/2016 EC C-0814744 Added index 4                               
. V10.09.01 28/11/2016 DS C-0814744 Added new fields EMEXCONT to EMEXAIN5       
. V10.05.01 14/08/2014 AP C-304641 Increased EMEXAMBL from 6 to 15              
. Vv10.04.01 31/12/2013 DN CAR-294371 Moved EMEXSITE out of spare variable      
. Vv10.03.01 28/08/2012 DN CAR-270231 Added EMEXSITE (to spare variable)        
. Vv9.04.001 24/12/2004 EC  Added EMEXATSR to EMEXEXPL                          
. V9.04.002 27/07/2005 EC  Added Index 2 and 3 CAR 57309                        
. *----------------------------------------------------------------------
. * Include Name  :   EMREXPFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Expected Patients Table            
. *
. * File Type     :   SQL
. *
. * File Name     :   emrexpaf.dat
. *
. * Index Values  :   KEY10   KEY55   KEY18   KEY21                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMREXPA1   IFILE    SQL, FIXED=1216, KEY="U1-10"
EMREXPA2   IFILE    SQL, FIXED=1216, KEY="U19-38,39-63,1-10"
EMREXPA3   IFILE    SQL, FIXED=1216, KEY="U11-18,1-10"
EMREXPA4   IFILE    SQL, FIXED=1216, KEY="U503-505,397-404,1-10"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMEXUNIQ  DIM       10     10       1     Unique Counter (System Generated)  
EMEXURNO  DIM       8      8        11    U/R Number                         
EMEXSNAM  DIM       20     20       19    Surname                            
EMEXGNAM  DIM       25     25       39    Given Names                        
EMEXSEX   DIM       1      1        64    Sex                                
EMEXDOB   DIM       8      8        65    Date of Birth                      
EMEXAGE   DIM       3      3        73    Age                                
EMEXCOMP  DIM       3      3        76    Presenting Complaint (category el) 
EMEXCOM1  DIM       50     50       79    Presenting Complaint 1             
EMEXCOM2  DIM       50     50       129   Presenting Complaint 2             
EMEXCOM3  DIM       50     50       179   Presenting Complaint 3             
EMEXCOM4  DIM       50     50       229   Presenting Complaint 4             
EMEXCOM5  DIM       50     50       279   Presenting Complaint 5             
EMEXCOM6  DIM       50     50       329   Presenting Complaint 6             
EMEXTRAN  DIM       3      3        379   Transport (category EA)            
EMEXAMBL  DIM       15     15       382   Ambulance Case Number              
EMEXEDAT  DIM       8      8        397   Notified Date (CCYYMMDD)           
EMEXETIM  DIM       5      5        405   Notified Time (hh:mm)              
EMEXGPCD  DIM       10     10       410   GP Code                            
EMEXCUID  DIM       10     10       420   Input by Web User (websecaf)       
EMEXCDAT  DIM       8      8        430   Input Date                         
EMEXCTIM  DIM       8      8        438   Input Time                         
EMEXUUID  DIM       10     10       446   Last Update by Web User            
EMEXUDAT  DIM       8      8        456   Last Update Date                   
EMEXUTIM  DIM       8      8        464   Last Update Time                   
EMEXATSR  DIM       3      3        472   Attendance Source (Cat em)         
EMEXACPS  DIM       3      3        475   Accepting Source (Cat ZQ)          
EMEXACPT  DIM       3      3        478   Accepting Source Trauma (Cat ZR)   
EMEXETAD  DIM       8      8        481   ETA Date (CCYYMMDD)                
EMEXETAT  DIM       8      8        489   ETA Time (hh:mm:ss)                
EMEXTRIG  DIM       3      3        497   Triage Code on Route (Cat AA)      
EMEXEXPL  DIM       3      3        500   Expected Location (emrlocaf)       
EMEXSITE  DIM       3      3        503   Emergency Site Code                
EMEXCONT  DIM       1      1        506   Contact Type                       
.                                         1 - Expected Patient                 
.                                         2 - Advice Call                      
.                                         3 - Contact List                     
EMEXDELT  DIM       1      1        507   Removed (0 = yes)                  
EMEXREMV  DIM       3      3        508   Removal Reason (Cat rR)            
EMEXTSRC  DIM       5      5        511   Transfer Source                    
EMEXCALL  DIM       100    100      516   Caller name and contact number     
EMEXAIN1  DIM       100    100      616   Additional Information 1           
EMEXAIN2  DIM       100    100      716   Additional Information 2           
EMEXAIN3  DIM       100    100      816   Additional Information 3           
EMEXAIN4  DIM       100    100      916   Additional Information 4           
EMEXAIN5  DIM       100    100      1016  Additional Information 5           
EMEXSPAR  DIM       100    100      1116  Spare Variable                     
.
.End of Record                      1216 
.
