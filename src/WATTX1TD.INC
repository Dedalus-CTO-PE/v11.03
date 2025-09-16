. *----------------------------------------------------------------------
. * Include Name  :   WATTX1TD.INC
. *
. * Function      :   CGI variables for WATTX1FD - wattx1af.dat
. *----------------------------------------------------------------------
. Modifications  :
.----------------------------------------------------------------------
. V10.07.01 30/10/2015  Don Nguyen     CAR 320394
.                       Added WATTX052-WATTX056 (User Defined 9-13)
. V10.04.01 08/05/2014  Peter Vela       CAR 279020
.                       Added WATTX050 and WATTX051
. V10.03.01 26/08/2013  Ebon Clements    CAR 275205
.                       Added WATTX048 and WATTX049
. V10.00.0  21.04.2010  Saroeun Soeur CAR 196071
.                       Added WATTX033
. V9.04.01  04.05.2005  Ebon Clements CAR 55594
.                       Added WATTX030 and WATTX031
. V9.02.02  23.01.2002  Ebon Clements 
.                       Added WATTX028 and WATTX029
. V9.02.01  18.12.2001  Ashwin
.                       Add Equipment Required 3
.
.Name     Type      Length Description
.----     ----      ------ -----------
WATTX001  DIM       8      U/R Number                         
WATTX002  DIM       9      Procedure Code (watproaf)          
WATTX003  DIM       2      Procedure Count                    
WATTX004  DIM       3      Patient List. Status (PRS/2) Cat VL
WATTX005  DIM       3      Post-Op Ward (patwr1af)            
WATTX006  DIM       3      Admitting Ward (patwr1af)          
WATTX007  DIM       1      Parent Staying (0=NO,1=YES)        
WATTX008  DIM       3      Intended Day Case (Cat XB)         
WATTX009  DIM       3      Admission Forms (Cat XA)           
WATTX010  DIM       3      Equipment Required 1 (Cat XE)      
WATTX011  DIM       3      Equipment Required 2 (Cat XE)      
WATTX012  DIM       3      Pre-Admission Status (Cat XG)      
WATTX013  DIM       1      Consent? (0=NO,1=YES)              
WATTX014  DIM       1      Notify Registered GP (0=NO,1=YES)  
WATTX015  DIM       8      Proposed Admission Time (hh:mm:ss) 
WATTX016  DIM       10     User Id who  rmvd procd. (websecaf)
WATTX017  DIM       3      Loan Equipment Required (Cat XO)   
WATTX018  DIM       9      Duplicate Procedure Code (watproaf)
WATTX019  DIM       2      Duplicate Count                    
WATTX020  DIM       8      Date Record Created (ccyymmdd)     
WATTX021  DIM       8      Time Record Created (hh:mm:ss)     
WATTX022  DIM       10     WEB User Id rec creator (websecaf) 
WATTX023  DIM       8      Last Update Date (ccyymmdd)        
WATTX024  DIM       8      Last Update Time (hh:mm:ss)        
WATTX025  DIM       10     WEB User Id rec. updater (websecaf)
WATTX026  DIM       3      Claim Type (Cat CL)
WATTX027  DIM       3      Equipment Required 3 (Cat XE)
WATTX028  DIM       8      Proposed Pre Admission Time (hh:mm:ss)
WATTX029  DIM       8      Proposed Operation Time (hh:mm:ss)
WATTX030  DIM       3      Pre-Anaesthetic Status (Cat XG)
WATTX031  DIM       8      Pre-Anaesthetic Time (hh:mm:ss)
WATTX032  DIM       1      Planned 23 hour stay (0=No 1=Yes)
WATTX033  DIM       3      Anaesthetic Type (Cat OA)
WATTX034  DIM       3      Booking Type
WATTX035  DIM       5      Team
WATTX036  DIM       3      Funding Source (Cat cx)
WATTX037  DIM       3      Ward (patwr1af)
WATTX038  DIM       3      Preferred Accommodation (Cat BP)
WATTX039  DIM       3      Non WA hospital Contact (Cat cw)
WATTX040  DIM       3      Intended Stay (Cat VI)
WATTX041  DIM       1      Medical Authorisation (1=yes 0=no blank=unknown)
WATTX042  DIM       8      Expected Delivery Date
WATTX043  DIM       3      Tertiary Care Reason (Cat WH)
WATTX044  DIM       9      Disaster Code
WATTX045  DIM       8      Removal Time
WATTX046  DIM       10     Referring Clinician
WATTX047  DIM       10     Practice
WATTX048  DIM       1      Patient Suitable For Another Hospital
WATTX049  DIM       3      Preferred Hospital (pathspaf)
WATTX050  DIM       3      Procedure can be performed by (CAT yh)
WATTX051  DIM       4      Airway Assessment Score
WATTX052  DIM       3      User Defined 9 (Category X9)
WATTX053  DIM       3      User Defined 10 (Category x1)
WATTX054  DIM       3      User Defined 11 (Category x2)
WATTX055  DIM       3      User Defined 12 (Category x3)
WATTX056  DIM       3      User Defined 13 (Category x4)
.
