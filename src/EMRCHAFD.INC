. V10.14.01 15/03/2019 EC C-0868834 Added type 18
. V10.12.01 06/02/2018 EC C-0848319 Added index 2                               
. V10.11.01 15/09/2017 EC C0841602 Added type 17                                
. V10.06.01 03/08/2015 PV C-319976 Added End Triage Date                        
. V10.05.01 09/01/2015 EC C-304779 Added initial assessor update                
. V10.03.01 15/05/2013 PV C-284594 Added Removal or Fist Doctor Seen            
. V10.00.03 02/09/2010 EC  Added update type 11 CAR 202417                      
. V10.00.02 09/06/2010 EC  Added update types 09 and 10 CAR 218982              
. V10.00.01 15/04/2010 EC  Created FD CAR 218982                                
. *----------------------------------------------------------------------
. * Include Name  :   EMRCHAFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Emergency Field Change Audit       
. *
. * File Type     :   SQL
. *
. * File Name     :   emrchaaf.dat
. *
. * Index Values  :   KEY24   KEY24                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRCHAA1   IFILE    SQL, FIXED=250, KEY="U1-8,9-16,17-24"
EMRCHAA2   IFILE    SQL, FIXED=250, KEY="U9-16,17-24,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMCHVISN  DIM       8      8        1     Visit Number                       
EMCHDATE  DIM       8      8        9     Date (CCYYMMDD)                    
EMCHTIME  DIM       8      8        17    Time (HH:MM:SS)                    
EMCHUSID  DIM       10     10       25    Web User ID (websecaf)             
EMCHUPTY  DIM       2      2        35    Update Type                        
.                                         01 - Arrival Date/Time               
.                                         02 - Triage Date/Time                
.                                         03 - Triage Category                 
.                                         04 - First Seen By Nurse Date/Time   
.                                         05 - First Seen By Doctor Date/Time  
.                                         06 - First Seen By MH Prac Date/Time 
.                                         07 - Departure Date/Time             
.                                         08 - Triage Nurse                    
.                                         09 - Removal of Nurse Seen           
.                                         10 - Departure Status                
.                                         11 - Update Research (EMVIUC29)      
.                                         12 - Removal of First Doctor Seen    
.                                         13 - Removal of Last Doctor Allocated
.                                         14 - Update Initial Assessor         
.                                         15 - Update Other Doctor             
.                                         16 - Triage End Date                 
.                                         17 - Ambulance Handover Date/Time    
.                                         18 - Service Type Update
EMCHREAS  DIM       3      3        37    Reason for Change (Cat FW)         
EMCHOVAL  DIM       80     80       40    Original Value                     
EMCHCVAL  DIM       80     80       120   Changed Value                      
EMCHSPAR  DIM       50     50       200   Spare                              
.
.End of Record                      250  
.
