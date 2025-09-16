. V10.10.01 15/03/2017 SA C-0815431 Added OTARCMID and reduced SPARE            
. V10.05.01 03/09/2014 AP C-304549 Added Index 4                                
. V10.04.01 19/12/2013 AP C-294343 Moved OTARINTR and OTARLNG1 out of SPARE     
. V10.03.02 23/01/2013 EC C-262292 Added OTARINTR and OTARLNG1 to spare         
. V10.03.01 15/12/2011 EC C-255521 Added OTARFSRC                               
. V10.02.01 12/07/2011 PM C-248483 Change comments only on OTARRDEP, OTARADEP   
. V10.02.00 03/05/2011 ML C-240720 Create OP Appointment Request Table          
. *----------------------------------------------------------------------
. * Include Name  :   OUTARTFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Outpat. Appointment Request Table  
. *
. * File Type     :   SQL
. *
. * File Name     :   outartaf.dat
. *
. * Index Values  :   KEY32   KEY33   KEY41   KEY42                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTARTA1   IFILE    SQL, FIXED=320, KEY="U1-8,9-16,17-24,25-32"
OUTARTA2   IFILE    SQL, FIXED=320, KEY="U144-144,17-24,25-32,1-8,9-16"
OUTARTA3   IFILE    SQL, FIXED=320, KEY="U39-46,144-144,17-24,25-32,1-8,9-16"
OUTARTA4   IFILE    SQL, FIXED=320, KEY="U47-49,50-55,144-144,17-24,25-32,1-8,9-16"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTARURNO  DIM       8      8        1     UR Number                          
OTARREFN  DIM       8      8        9     Linked A/H Referral Number         
OTARRQDT  DIM       8      8        17    Request Date    (ccyymmdd)         
OTARRQTM  DIM       8      8        25    Request Time    (hh:mm:ss)         
OTARRDEP  DIM       3      3        33    Requesting Department      (Cat.CG)
OTARADEP  DIM       3      3        36    Appointment with Department(Cat.CG)
OTARPRDT  DIM       8      8        39    Preferred Date  (ccyymmdd)         
OTARPRHS  DIM       3      3        47    Preferred Hospital                 
OTARPRSI  DIM       6      6        50    Preferred Site                     
OTARCLTY  DIM       6      6        56    Clinic Type                        
OTARCLID  DIM       6      6        62    Clinic Id                          
OTARVIST  DIM       3      3        68    Visit Type                 (Cat.CV)
OTARTRRQ  DIM       3      3        71    Transport Required         (Cat.OB)
OTARPCOM  DIM       50     50       74    Presenting Complaint               
OTARFINC  DIM       3      3        124   Financial Class            (Cat.CL)
OTARPRIO  DIM       3      3        127   Priority                   (Cat.PR)
OTARSORF  DIM       3      3        130   Source of Referral (Cat ??)        
.                                         OSTCATG.OUTSITAF using OTARPRSI      
OTARSARR  DIM       3      3        133   Special Arrangements       (Cat.SA)
OTAROOBN  DIM       8      8        136   Original O/P Booking Number        
OTARSTAT  DIM       1      1        144   Status   0 - Requested             
.                                                  1 - Pending Reschedule      
.                                                  2 - Booked                  
.                                                  3 - Cancelled               
OTARRREQ  DIM       3      3        145   Reason for Request         (Cat.VU)
OTARRCAN  DIM       3      3        148   Reason for Cancellation    (Cat.CB)
OTARCADT  DIM       8      8        151   Date Request Cancelled (ccyymmdd)  
OTARCATM  DIM       8      8        159   Time Request Cancelled (hh:mm:ss)  
OTARCAUS  DIM       10     10       167   User who Cancelled Request         
OTARBKNO  DIM       8      8        177   Booking Number                     
OTARBKSI  DIM       6      6        185   Clinic Site of Booking             
OTARBKCL  DIM       6      6        191   Clinic Id of Booking               
OTARBKDT  DIM       8      8        197   Date of Booking        (ccyymmdd)  
OTARCLST  DIM       5      5        205   Clinic Start Time      (hh:mm)     
OTARCLSN  DIM       3      3        210   Clinic Slot Number                 
OTARCLTM  DIM       5      5        213   Clinic Slot Time                   
OTARBKID  DIM       10     10       218   User who created Booking           
OTARCDAT  DIM       8      8        228   Create (Request) Date  (ccyymmdd)  
OTARCTIM  DIM       8      8        236   Create (Request) Time  (hh:mm:ss)  
OTARCUID  DIM       10     10       244   User who created Request           
OTARCPDT  DIM       8      8        254   Date Request Completed (ccyymmdd)  
OTARCPTM  DIM       8      8        262   Time Request Completed (hh:mm:ss)  
OTARCPID  DIM       10     10       270   User who Completed Request         
OTARFSRC  DIM       3      3        280   Funding Source (Cat cx)            
OTARINTR  DIM       1      1        283   Interpreter Required? (0=NO,1=YES) 
OTARLNG1  DIM       3      3        284   Preferred Language 1 (Cat LA)      
OTARCMID  DIM       10     10       287   Comment Unique ID                  
OTARSPAR  DIM       23     23       297   Spare                              
.
.End of Record                      320  
.
