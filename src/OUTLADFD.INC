. 9.04 .002 20/06/2005 JH                                                    
. 9.04 .003 20/06/2005                                                       
. *----------------------------------------------------------------------
. * Include Name  :   OUTLADFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Adhoc Letters List for Printing    
. *
. * File Type     :   SQL
. *
. * File Name     :   outladaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTLADA1   IFILE    SQL, FIXED=577, KEY="U1-4,5-5,6-13,405-410,507-512"         
FILLADA1  INIT     "ladaf"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTLASEID  DIM       4      4        1     Selection ID.                      
OTLAPCLS  DIM       1      1        5     Class indicator                    
OTLAOUTN  DIM       8      8        6     Outpatient Number                  
OTLAATTD  DIM       20     20       14    Attendence Description             
OTLAATDT  DIM       20     20       34    Attendence Date                    
OTLAATTM  DIM       8      8        54    Attendence Time                    
OTLABDAT  DIM       20     20       62    Birth Date                         
OTLACTRY  DIM       20     20       82    Country of Birth                   
OTLACTYP  DIM       30     30       102   Clinic Type Description            
OTLACOMP  DIM       20     20       132   Compensation Eligibility (Cat CL)
OTLATDAY  DIM       20     20       152   Today's Date                       
OTLANAME  DIM       50     50       172   Patient's Full Name                
OTLAINSR  DIM       20     20       222   Insurance Status                   
OTLAPCAT  DIM       20     20       242   Patient Category (Cat P)
OTLACLSS  DIM       20     20       262   Patient Classification (Cat A)
OTLAPRTY  DIM       20     20       282   Patient Priority                   
OTLAPSEX  DIM       6      6        302   Patient Sex                        
OTLASREF  DIM       20     20       308   Source of Referral (Cat S)
OTLAURNO  DIM       8      8        328   U/R Number                         
OTLASITE  DIM       30     30       336   Site Description                   
OTLABKDT  DIM       20     20       366   Booking Date                       
OTLABTIM  DIM       8      8        386   Booking Time                       
OTLASLOT  DIM       3      3        394   Slot                               
OTLASTIM  DIM       8      8        397   Slot Time                          
OTLACLID  DIM       6      6        405   Clinic Id                          
OTLACLDX  DIM       30     30       411   Clinic Description                 
OTLADTIT  DIM       9      9        441   Doctor's Title                     
OTLADSNM  DIM       20     20       450   Doctor's Surname                   
OTLADGNM  DIM       25     25       470   Doctor's Given Name                
OTLADOCT  DIM       6      6        495   Doctor Code                        
OTLASITC  DIM       6      6        501   Site Code                          
OTLACLTY  DIM       6      6        507   Clinic Type Code                   
OTLADATE  DIM       8      8        513   Clinic Date                        
OTLASTRT  DIM       5      5        521   Clinic Start Time                  
OTLARSHF  DIM       1      1        526   Reschedule Code                    
OTLADLST  DIM       1      1        527   Delete Status (0=No 1=Yes)         
OTLASPAR  DIM       49     49       528   Spare variable                     
.
.End of Record                      577  
.
