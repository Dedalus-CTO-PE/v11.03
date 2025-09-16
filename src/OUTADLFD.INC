. 9.02 .002 26/11/2001 dc  Added Spare                                       
. *----------------------------------------------------------------------
. * Include Name  :   OUTADLFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Adhoc Letter Selection Criteria    
. *
. * File Type     :   SQL
. *
. * File Name     :   outadlaf.dat
. *
. * Modifications :
. *      V9.02.03  18/11/2002 Lina Vo
. *                Added site specific variable FILADLA1
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTADLA1   IFILE    SQL, FIXED=171, KEY="U1-4"                                  
FILADLA1   INIT     "adlaf"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTALSEID  DIM       4      4        1     Selection ID.                      
OTALSEDC  DIM       35     35       5     Selection Description              
OTALBDFR  DIM       8      8        40    Booking Date Fron (ccyymmdd)       
OTALBDTO  DIM       8      8        48    Booking Date To (ccyymmdd)         
OTALBKTY  DIM       1      1        56    Booking Type Code                  
OTALSIFR  DIM       6      6        57    Site Code From                     
OTALSITO  DIM       6      6        63    Site Code To                       
OTALCLFR  DIM       6      6        69    Clinic Code From                   
OTALCLTO  DIM       6      6        75    Clinic Code To                     
OTALSTFR  DIM       5      5        81    Session Time From (HH:MM)          
OTALSTTO  DIM       5      5        86    Session Time To (HH:MM)            
OTALURFR  DIM       8      8        91    U/R Number From                    
OTALURTO  DIM       8      8        99    U/R Number To                      
OTALDPYN  DIM       1      1        107   Deceased Patients - Yes or No?     
OTALVTFR  DIM       3      3        108   Visit Type From (category CV)      
OTALVTTO  DIM       3      3        111   Visit Type To (category CV)        
OTALMDFR  DIM       8      8        114   Booking Made Date From (ccyymmdd)  
OTALMDTO  DIM       8      8        122   Booking Made Date To (ccyymmdd)    
OTALCTFR  DIM       6      6        130   Clinic Type From                   
OTALCTTO  DIM       6      6        136   Clinic Type To                     
OTALOCFR  DIM       3      3        142   Outcome Code From (category OZ)    
OTALOCTO  DIM       3      3        145   Outcome Code To (category OZ)      
OTALLTYP  DIM       3      3        148   Letter Type                        
OTALSPAR  DIM       20     20       151   Spare Variable                     
.
.End of Record                      171  
.
