. V10.06.01 22/05/2015 PV C-312771 Added A = Approved to Status                 
. V10.04.02 12/03/2014 PV C-218689 Removed indexes 3 and 4. Added variable comme
. V10.04.01 18/02/2014 PV C-218689 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   BOKRQ1FD.INC
. *
. * Function      :   File Def'n Include for Bookings                           
. *                   Theatre Requests                   
. *
. * File Type     :   SQL
. *
. * File Name     :   bokrq1af.dat
. *
. * Index Values  :   KEY10   KEY18   KEY21   KEY19   KEY17                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
BOKRQ1A1   IFILE    SQL, FIXED=881, KEY="U20-29"                                
BOKRQ1A2   IFILE    SQL, FIXED=881, KEY="U1-8,20-29"                            
BOKRQ1A3   IFILE    SQL, FIXED=881, KEY="U652-659,34-36,20-29"                  
BOKRQ1A4   IFILE    SQL, FIXED=881, KEY="U652-659,30-30,20-29"                  
BOKRQ1A5   IFILE    SQL, FIXED=881, KEY="U30-30,321-326,20-29"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
BKRQURNO  DIM       8      8        1     UR Number                          
.                                         (patma1af)                           
BKRQVISN  DIM       8      8        9     Visit Number                       
.                                         (patmi1af)                           
BKRQBKTY  DIM       3      3        17    Booking Type CAT BK (HDP Eq UNS)   
BKRQREQN  DIM       10     10       20    Unique Booking Request Number      
.                                         Next Unique Booking Request Number is
.                                         determined by new parameter OPCNUTRN 
BKRQSTAT  DIM       1      1        30    Status                             
.                                         0 = Unscheduled / Requested          
.                                         A = Approved                         
.                                         1 = Scheduled                        
.                                         (Scheduled + Arrival in Theatre Time 
.                                         =                                    
.                                         Completed) Arrival in Theatre Time is
.                                         determined by new parameter OPCNTRCS 
.                                         2 = Cancelled                        
BKRQHOSP  DIM       3      3        31    Hospital (if multihospital)        
.                                         (websecaf)                           
BKRQPRIO  DIM       3      3        34    Priority CAT rp                    
BKRQSNAM  DIM       40     40       37    Surname                            
.                                         (patma1af)                           
BKRQGNAM  DIM       40     40       77    Given Name                         
.                                         (patma1af)                           
BKRQBDAT  DIM       8      8        117   Date of Birth                      
.                                         (patma1af)                           
BKRQGEND  DIM       1      1        125   Gender/Sex                         
.                                         (patma1af)                           
BKRQRDOC  DIM       10     10       126   Requesting Doctor                  
BKRQUNIT  DIM       3      3        136   Unit                               
BKRQCSDT  DIM       8      8        139   Clock Start Date                   
BKRQCSTM  DIM       8      8        147   Clock Start Time                   
BKRQCTCT  DIM       100    100      155   Contact                            
BKRQLOCN  DIM       50     50       255   Patient Location                   
BKRQADPT  DIM       3      3        305   Admitting Point CAT ap             
.                                         (bokrx1af)                           
BKRQEPOW  DIM       3      3        308   Expected Post Op Ward              
.                                         (bokrx1af)                           
BKRQSURG  DIM       10     10       311   Surgeon                            
BKRQTHET  DIM       6      6        321   Theatre                            
BKRQANAE  DIM       3      3        327   Anaesthetic Code CAT OA            
BKRQMBS1  DIM       9      9        330   MBS Code 1                         
BKRQMBS2  DIM       9      9        339   MBS Code 2                         
BKRQMBS3  DIM       9      9        348   MBS Code 3                         
BKRQMBD1  DIM       80     80       357   MBS Full Description 1             
BKRQMBD2  DIM       80     80       437   MBS Full Description 2             
BKRQMBD3  DIM       80     80       517   MBS Full Description 3             
BKRQPROR  DIM       40     40       597   Prosthesis Required                
BKRQDURA  DIM       3      3        637   Duration (minutes)                 
BKRQINFC  DIM       3      3        640   Infection Status CAT OK            
BKRQEQU1  DIM       3      3        643   Equipment 1 CAT XE                 
BKRQEQU2  DIM       3      3        646   Equipment 2 CAT XE                 
BKRQEQU3  DIM       3      3        649   Equipment 3 CAT XE                 
BKRQCDAT  DIM       8      8        652   Date Request Created               
BKRQCTIM  DIM       8      8        660   Time Request Created               
BKRQCUSR  DIM       10     10       668   Used who created (websecaf)        
BKRQUDAT  DIM       8      8        678   Date Request Updated               
BKRQUTIM  DIM       8      8        686   Time Request Updated               
BKRQUUSR  DIM       10     10       694   User who Updated (websecaf)        
BKRQCNDT  DIM       8      8        704   Cancellation Date                  
BKRQCNTM  DIM       8      8        712   Cancellation Time                  
BKRQCNUS  DIM       10     10       720   User who Cancelled (websecaf)      
BKRQCNCD  DIM       3      3        730   Cancellation Code CAT BC           
BKRQOPTY  DIM       3      3        733   Operation Type CAT OY              
BKRQTRCD  DIM       3      3        736   Transport Code CAR OR              
BKRQATCD  DIM       3      3        739   Arrival Transport Code CAT SI      
BKRQATYP  DIM       3      3        742   Admission Type CAT P               
BKRQCTYP  DIM       3      3        745   Claim Type CAT CL                  
BKRQELOS  DIM       3      3        748   Expected LOS (days)                
BKRQCTY6  DIM       3      3        751   Category Y6                        
BKRQCTY7  DIM       3      3        754   Category Y7                        
BKRQCTY8  DIM       3      3        757   Category Y8                        
BKRQCTY9  DIM       3      3        760   Category Y9                        
BKRQASRC  DIM       3      3        763   Admission Source CAT S             
BKRQBTYP  DIM       3      3        766   Blood Type CAT BO                  
BKRQELON  DIM       3      3        769   Equipment Loaned CAT XO            
BKRQCSNT  DIM       1      1        772   Consent Obtained (N=No Y=Yes)      
BKRQCCDT  DIM       8      8        773   Consent Change Date (ccyymmdd)     
BKRQSPAR  DIM       100    100      781   Spare                              
.
.End of Record                      881  
.
