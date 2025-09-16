. *----------------------------------------------------------------------
. * Include Name  :   OPRSRGTD.INC
. *
. * Function      :   CGI Variables for OPRSRGFD - oprsrgaf.dat                 
. *
. * Modification  :
. *      V10.08.01 01/06/2016 Peter Vela TSK 0321157
. *                Added OPSRG102, OPSRG103, OPSRG104
. *      V9.04.01  16/03/2005 Lina Vo    CAR 56404
. *                Increase item fields size from dim 6 to dim 15
. *
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
OPSRG001  DIM       10     Unique ID.                         
OPSRG002  DIM       1      Team Number                        
OPSRG003  DIM       8      Time Prep Start (HH:MM:SS)         
OPSRG004  DIM       8      Time of Dressing (HH:MM:SS)        
OPSRG005  DIM       8      Time Surgery Started (HH:MM:SS)    
OPSRG006  DIM       8      Time Surgery Ended (HH:MM:SS)      
OPSRG007  DIM       20     Delay Before Surgery               
OPSRG008  DIM       1      Count Correct                      
.                          0 = No
.                          1 = Yes
OPSRG009  DIM       6      Operator Name for Counter(oprnuraf)
OPSRG010  DIM       3      Blood Loss (category)              
OPSRG011  DIM       3      Wound Condition (category)         
OPSRG012  DIM       3      Wound Closure Method 1 (category)  
OPSRG013  DIM       3      Wound Closure Method 2 (category)  
OPSRG014  DIM       3      Wound Closure Method 3 (category)  
OPSRG015  DIM       15     Item Code 1 (opriteaf)             
OPSRG016  DIM       15     Item Code 2 (opriteaf)             
OPSRG017  DIM       15     Item Code 3 (opriteaf)             
OPSRG018  DIM       4      Diathermy 1 Setting                
OPSRG019  DIM       15     Diathermy 1 Code (opriteaf)        
OPSRG020  DIM       15     Diathermy 1 Number(free or oprieaf)
OPSRG021  DIM       20     Diathermy 1 Plate Site(free format)
OPSRG022  DIM       1      Diathermy 1 Checked                
.                          0 = No
.                          1 = Yes
OPSRG023  DIM       1      Diathermy 1 Plate Removed          
.                          0 = No
.                          1 = Yes
OPSRG024  DIM       4      Diathermy 2 Setting                
OPSRG025  DIM       15     Diathermy 2 Code (opriteaf)        
OPSRG026  DIM       15     Diathermy 2 Number (free format)   
OPSRG027  DIM       20     Diathermy 2 Plate Site(free format)
OPSRG028  DIM       1      Diathermy 2 Checked                
.                          0 = No
.                          1 = Yes
OPSRG029  DIM       1      Diathermy 2 Plate Removed          
.                          0 = No
.                          1 = Yes
OPSRG030  DIM       15     Catheter 1 (opriteaf)              
OPSRG031  DIM       15     Catheter 2 (opriteaf)              
OPSRG032  DIM       15     Drain Tube 1 (opriteaf)            
OPSRG033  DIM       15     Drain Tube 2 (opriteaf)            
OPSRG034  DIM       15     Packing (opriteaf)                 
OPSRG035  DIM       15     Dressing 1 (opriteaf)              
OPSRG036  DIM       15     Dressing 2 (opriteaf)              
OPSRG037  DIM       15     Dressing 3 (opriteaf)              
OPSRG038  DIM       15     Warming Device 1 (opriteaf)        
OPSRG039  DIM       15     Warming Device 2 (opriteaf)        
OPSRG040  DIM       15     Warming Device 3 (opriteaf)        
OPSRG041  DIM       15     Irrigation (opriteaf)              
OPSRG042  DIM       15     Irrigation Solution (opriteaf)     
OPSRG043  FORM      4      Irrigation Amount In               
OPSRG044  FORM      4      Irrigation Amount Out              
OPSRG045  DIM       2      Calf Stimultr                      
OPSRG046  DIM       1      Infection Control Classification   
.                          A or B or C 
OPSRG047  DIM       2      Specimens Microbiology             
OPSRG048  DIM       2      Specimens Anatomical Pathology     
OPSRG049  DIM       37     Other                              
OPSRG050  DIM       3      User Defined Code 1                
OPSRG051  DIM       3      User Defined Code 2                
OPSRG052  DIM       3      User Defined Code 3                
OPSRG053  DIM       3      User Defined Code 4                
OPSRG054  DIM       3      User Defined Code 5                
OPSRG055  DIM       3      User Defined Code 6                
OPSRG056  DIM       3      User Defined Code 7                
OPSRG057  DIM       3      User Defined Code 8                
OPSRG058  DIM       3      User Defined Code 9                
OPSRG059  DIM       3      User Defined Code 10               
OPSRG060  DIM       3      User Defined Code 11               
OPSRG061  DIM       3      User Defined Code 12               
OPSRG062  DIM       3      User Defined Code 13               
OPSRG063  DIM       3      User Defined Code 14               
OPSRG064  DIM       3      User Defined Code 15               
OPSRG065  DIM       3      User Defined Code 16               
OPSRG066  DIM       3      User Defined Code 17               
OPSRG067  DIM       3      User Defined Code 18               
OPSRG068  DIM       3      User Defined Code 19               
OPSRG069  DIM       3      User Defined Code 20               
OPSRG070  DIM       1      User Defined Y/N 1                 
.                          0 = No
.                          1 = Yes
OPSRG071  DIM       1      User Defined Y/N 2               
                           0 = No
.                          1 = Yes
OPSRG072  DIM       1      User Defined Y/N 3                 
.                          0 = No
.                          1 = Yes
OPSRG073  DIM       1      User Defined Y/N 4                 
.                          0 = No
.                          1 = Yes
OPSRG074  DIM       1      User Defined Y/N 5                 
.                          0 = No
.                          1 = Yes
OPSRG075  DIM       1      User Defined Y/N 6                 
.                          0 = No
.                          1 = Yes
OPSRG076  DIM       1      User Defined Y/N 7                 
.                          0 = No
.                          1 = Yes
OPSRG077  DIM       1      User Defined Y/N 8                 
.                          0 = No
.                          1 = Yes
OPSRG078  DIM       1      User Defined Y/N 9                 
.                          0 = No
.                          1 = Yes
OPSRG079  DIM       1      User Defined Y/N 10                
.                          0 = No
.                          1 = Yes
OPSRG080  DIM       8      User Defined Time Field 1          
OPSRG081  DIM       8      User Defined Time Field 2          
OPSRG082  DIM       8      User Defined Time Field 3          
OPSRG083  DIM       8      User Defined Time Field 4          
OPSRG084  DIM       8      User Defined Time Field 5          
OPSRG085  DIM       8      User Defined Time Field 6          
OPSRG086  DIM       8      User Defined Time Field 7          
OPSRG087  DIM       8      User Defined Time Field 8          
OPSRG088  DIM       8      User Defined Time Field 9          
OPSRG089  DIM       8      User Defined Time Field 10         
OPSRG090  FORM      6      User Defined Form Field 1          
OPSRG091  FORM      6      User Defined Form Field 2          
OPSRG092  FORM      6      User Defined Form Field 3          
OPSRG093  FORM      6      User Defined Form Field 4          
OPSRG094  FORM      6      User Defined Form Field 5          
OPSRG095  FORM      6      User Defined Form Field 6         
OPSRG096  FORM      6      User Defined Form Field 7          
OPSRG097  FORM      6      User Defined Form Field 8          
OPSRG098  FORM      6      User Defined Form Field 9          
OPSRG099  FORM      6      User Defined Form Field 10         
OPSRG100  DIM       10     User ID for Theatre (websecaf)
OPSRG101  DIM       60     Implant Description           
OPSRG102  FORM      3      Number of Operations
OPSRG103  DIM       6      Number of Drain Tube 3 Used
OPSRG104  DIM       15     Drain Tube 3 Code (opriteaf)
