. V10.06.01 30/04/2015 PV C-312771 Added 8 = Approved to audit type
. V10.04.01 13/02/2014 PV C-218689 Created Include                              
. *----------------------------------------------------------------------
. * Include Name  :   BOKRAUFD.INC
. *
. * Function      :   File Def'n Include for Bookings                           
. *                   Bookings Theatre Requests Audit    
. *
. * File Type     :   SQL
. *
. * File Name     :   bokrauaf.dat
. *
. * Index Values  :   KEY27                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
BOKRAUA1   IFILE    SQL, FIXED=918, KEY="U1-10,12-19,20-27,11-11"               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
BKRUAURQ  DIM       10     10       1     Unique Request ID                  
BKRUAUTY  DIM       1      1        11    Audit Record Type                  
.                                         1 = Add
.                                         2 = Update
.                                         3 = Deleted Request
.                                         4 = Booked/Scheduled
.                                         5 = Cancelled Scheduled Bookings
.                                         6 = Allocated UR
.                                         7 = Clock Start Updated
.                                         8 = Approved
BKRUADAT  DIM       8      8        12    Audit Record Date                  
BKRUATIM  DIM       8      8        20    Audit Record Time                  
BKRUAUSR  DIM       10     10       28    User ID Name (websecaf)            
BKRUURNO  DIM       8      8        38    UR Number                          
BKRUVISN  DIM       8      8        46    Visit Number                       
BKRUBKTY  DIM       3      3        54    Booking Type CAT BK (HDP Eq UNS)   
BKRUREQN  DIM       10     10       57    Unique Booking Request Number      
BKRUSTAT  DIM       1      1        67    Status 0 = unscheduled/requested   
BKRUHOSP  DIM       3      3        68    Hospital (if multihospital)        
BKRUPRIO  DIM       3      3        71    Priority CAT rp                    
BKRUSNAM  DIM       40     40       74    Surname                            
BKRUGNAM  DIM       40     40       114   Given Name                         
BKRUBDAT  DIM       8      8        154   Date of Birth                      
BKRUGEND  DIM       1      1        162   Gender/Sex                         
BKRURDOC  DIM       10     10       163   Requesting Doctor                  
BKRUUNIT  DIM       3      3        173   Unit                               
BKRUCSDT  DIM       8      8        176   Clock Start Date                   
BKRUCSTM  DIM       8      8        184   Clock Start Time                   
BKRUCTCT  DIM       100    100      192   Contact                            
BKRULOCN  DIM       50     50       292   Patient Location                   
BKRUADPT  DIM       3      3        342   Admitting Point CAT ap             
BKRUEPOW  DIM       3      3        345   Expected Post Op Ward              
BKRUSURG  DIM       10     10       348   Surgeon                            
BKRUTHET  DIM       6      6        358   Theatre                            
BKRUANAE  DIM       3      3        364   Anaesthetic Code CAT OA            
BKRUMBS1  DIM       9      9        367   MBS Code 1                         
BKRUMBS2  DIM       9      9        376   MBS Code 2                         
BKRUMBS3  DIM       9      9        385   MBS Code 3                         
BKRUMBD1  DIM       80     80       394   MBS Full Description 1             
BKRUMBD2  DIM       80     80       474   MBS Full Description 2             
BKRUMBD3  DIM       80     80       554   MBS Full Description 3             
BKRUPROR  DIM       40     40       634   Prosthesis Required                
BKRUDURA  DIM       3      3        674   Duration (minutes)                 
BKRUINFC  DIM       3      3        677   Infection Status CAT OK            
BKRUEQU1  DIM       3      3        680   Equipment 1 CAT XE                 
BKRUEQU2  DIM       3      3        683   Equipment 2 CAT XE                 
BKRUEQU3  DIM       3      3        686   Equipment 3 CAT XE                 
BKRUCDAT  DIM       8      8        689   Date Request Created               
BKRUCTIM  DIM       8      8        697   Time Request Created               
BKRUCUSR  DIM       10     10       705   Used who created (websecaf)        
BKRUUDAT  DIM       8      8        715   Date Request Updated               
BKRUUTIM  DIM       8      8        723   Time Request Updated               
BKRUUUSR  DIM       10     10       731   User who Updated (websecaf)        
BKRUCNDT  DIM       8      8        741   Cancellation Date                  
BKRUCNTM  DIM       8      8        749   Cancellation Time                  
BKRUCNUS  DIM       10     10       757   User who Cancelled (websecaf)      
BKRUCNCD  DIM       3      3        767   Cancellation Code CAT BC           
BKRUOPTY  DIM       3      3        770   Operation Type CAT OY              
BKRUTRCD  DIM       3      3        773   Transport Code CAT OR              
BKRUATCD  DIM       3      3        776   Arrival Transport Code CAT SI      
BKRUATYP  DIM       3      3        779   Admission Type CAT P               
BKRUCTYP  DIM       3      3        782   Claim Type CAT CL                  
BKRUELOS  DIM       3      3        785   Expected LOS (days)                
BKRUCTY6  DIM       3      3        788   Category Y6                        
BKRUCTY7  DIM       3      3        791   Category Y7                        
BKRUCTY8  DIM       3      3        794   Category Y8                        
BKRUCTY9  DIM       3      3        797   Category Y9                        
BKRUASRC  DIM       3      3        800   Admission Source CAT S             
BKRUBTYP  DIM       3      3        803   Blood Type CAT BO                  
BKRUELON  DIM       3      3        806   Equipment Loaned CAT XO            
BKRUCSNT  DIM       1      1        809   Consent Obtained (N=No Y=Yes)      
BKRUCCDT  DIM       8      8        810   Consent Change Date (ccyymmdd)     
BKRUSPAR  DIM       100    100      818   Spare                              
.
.End of Record                      918  
.
