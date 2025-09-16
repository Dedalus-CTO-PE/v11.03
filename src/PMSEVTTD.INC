. *----------------------------------------------------------------------
. * Include Name  :   PMSEVTTD.INC
. *
. * Function      :   CGI variables for PMSEVTFD - pmsevtaf.dat                 
. *----------------------------------------------------------------------
.
.  Modifications Done :
.
.  V9.00.02   10/10/2002  Sylvek Litewka
.             Added PMSEV024 (Hospital/Unit Number).
.
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
PMSEV001  DIM       8      Visit Number                       
PMSEV002  DIM       3      Event Type (Cat EV)                
PMSEV003  DIM       8      Admission/Attendance Date (ccyymmdd
PMSEV004  DIM       8      Admission/Attendance Time (hh:mm:ss
PMSEV005  DIM       10     Attending Consultant (pmshcpaf)    
PMSEV006  DIM       60     Presenting Problem                 
PMSEV007  DIM       3      Unit (Cat AC)                      
PMSEV008  DIM       20     Staff Phone Number                 
PMSEV009  DIM       3      Patient Location (Cat LO)          
PMSEV010  DIM       3      Patient Ward (patwr1af)            
PMSEV011  DIM       3      Patient Bed (patwr1af)             
PMSEV012  DIM       8      Discharge/Depart Date (ccyymmdd)   
PMSEV013  DIM       8      Discharge/Depart Time (hh:mm:ss)   
PMSEV014  DIM       6      Site (outsitaf)                    
PMSEV015  DIM       6      Clinic Type (outctyaf)             
PMSEV016  DIM       6      Clinic Id (outcliaf)               
PMSEV017  DIM       3      Claim Code (Cat CL)                
PMSEV018  DIM       3      Appointment Type (Cat CV)          
PMSEV019  DIM       1      Attendance Status                  
PMSEV020  DIM       3      Admit Type (Cat A)                 
PMSEV021  DIM       3      Booking Type (Cat S)               
PMSEV022  DIM       10     Referred By (pmshcpaf)             
PMSEV023  DIM       3      Discharge/Depart Status (Cat DD)   
PMSEV024  DIM       3      Hospital/Unit Number
