. V9.12.001 03/09/2009 EC  Updated PMEVASTT description CAR 205142
. V9.00.003 28/01/2003 EC  Added Index 5 SRF 33638                           
. V9.00.002 10/10/2002 SB  Added Hospital/Unit Number      
. V9.00.001 03/08/2001 dc  From 5.10 to 9.00 added Index 2.
. *----------------------------------------------------------------------
. * Include Name  :   PMSEVTFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Event file                         
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsevtaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSEVTA1   IFILE    SQL, FIXED=230, KEY="U1-8"                                  
PMSEVTA2   IFILE    SQL, FIXED=230, KEY="U121-123,130-137,1-8"                  
PMSEVTA3   IFILE    SQL, FIXED=230, KEY="U124-126,130-137,1-8"                  
PMSEVTA4   IFILE    SQL, FIXED=230, KEY="U12-19,1-8"                            
PMSEVTA5   IFILE    SQL, FIXED=230, KEY="U124-126,127-129,1-8"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMEVVISN  DIM       8      8        1     Visit Number                       
PMEVEVNT  DIM       3      3        9     Event Type (Cat EV)                
.                                         E - Emergency Event
.                                         O - Outpatient Event
.                                         I - Inpatient Event
PMEVADTE  DIM       8      8        12    Admission/Attendance Date (ccyymmdd
PMEVATIM  DIM       8      8        20    Admission/Attendance Time (hh:mm:ss
PMEVACON  DIM       10     10       28    Attending Consultant (pmshcpaf)    
PMEVPPRB  DIM       60     60       38    Presenting Problem                 
PMEVUNIT  DIM       3      3        98    Unit (Cat AC)                      
PMEVSPHN  DIM       20     20       101   Staff Phone Number                 
PMEVPLOC  DIM       3      3        121   Patient Location (Cat LO)          
PMEVPWRD  DIM       3      3        124   Patient Ward (patwr1af)            
PMEVPBED  DIM       3      3        127   Patient Bed (patwr1af)             
PMEVDDTE  DIM       8      8        130   Discharge/Depart Date (ccyymmdd)   
PMEVDTIM  DIM       8      8        138   Discharge/Depart Time (hh:mm:ss)   
PMEVSITE  DIM       6      6        146   Site (outsitaf)                    
PMEVCTYP  DIM       6      6        152   Clinic Type (outctyaf)             
PMEVCLID  DIM       6      6        158   Clinic Id (outcliaf)               
PMEVCCOD  DIM       3      3        164   Claim Code (Cat CL)                
PMEVATYP  DIM       3      3        167   Appointment Type (Cat CV)          
PMEVASTT  DIM       1      1        170   Attendance Status                  
.                                         0 = Attended
.                                         1 = Not Attended
.                                         2 = Cancelled
PMEVADMT  DIM       3      3        171   Admit Type (Cat A)                 
PMEVBTYP  DIM       3      3        174   Booking Type (Cat S)               
PMEVREFB  DIM       10     10       177   Referred By (pmshcpaf)             
PMEVDSTT  DIM       3      3        187   Discharge/Depart Status (Cat DD)   
PMEVHOSN  DIM       3      3        190   Hospital/Unit Number               
PMEVSPAR  DIM       37     37       193   Spare Variable                     
.
.End of Record                      230  
.
