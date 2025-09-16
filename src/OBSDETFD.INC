. V5.08.002 23/10/2000
. V5.08.003 24/10/2000
. V5.08.004 24/10/2000
. V5.08.005 24/10/2000
. V5.08.006 24/10/2000
. V9.03.001 22/01/2004 PV  CAR 10484 - Added PNSC                            
. V9.03.002 22/01/2004 PV  CAR 10485 - Added CVPS
. *----------------------------------------------------------------------
. * Include Name  :   OBSDETFD.INC
. *
. * Function      :   File Def'n Include for Clinical Observations              
. *                   Observation Summary                
. *
. * File Type     :   SQL
. *
. * File Name     :   obsdetaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSDETA1   IFILE    SQL, FIXED=277, KEY="U1-8,9-16,17-24"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBDEVIST  DIM       8      8        1     Visit Number                       
OBDEDATE  DIM       8      8        9     Date (CCYYMMDD)                    
OBDETIME  DIM       8      8        17    Time (HH:MM:SS)                    
OBDETYP   DIM       3      3        25    Observation Type                   
OBDEPULS  FORM      3      3        28    Pulse                              
OBDETEMP  FORM      3.1    4        31    Temperature                        
OBDEBPSY  FORM      3      3        35    Blood Pressure Systolic            
OBDEBPDI  FORM      3      3        38    Blood Pressure Diastolic           
OBDERESP  FORM      3      3        41    Respiration                        
OBDEPOX   FORM      3      3        44    Pulse / Oximeter Sa O2             
OBDEO2F   FORM      3      3        47    Oxygen Flow Litres per Min         
OBDEPFL   FORM      4      3        50    Peak Flow                          
OBDEFOC   DIM       3      3        53    Fluid Out Type (wq)                
OBDEFIC   DIM       3      3        56    Fluid In Type (wr)                 
OBDEFOT   FORM      6      4        59    Fluids Output                      
OBDEFIN   FORM      6      4        63    Fluid Intake                       
OBDEEYEO  DIM       1      1        67    Eyes Open                          
OBDEVERB  DIM       1      1        68    Best Verbal Response               
OBDEMOTO  DIM       1      1        69    Best Motor Response                
OBDEPSL   DIM       1      1        70    Pupil Size Left                    
OBDEPSR   DIM       1      1        71    Pupil Size Right                   
OBDEPRL   DIM       1      1        72    Pupil Reaction Left                
OBDEPRR   DIM       1      1        73    Pupil Reaction Right               
OBDELMLA  DIM       1      1        74    Limb Movement Left Arm             
OBDELMRM  DIM       1      1        75    Limb Movement Right Arm            
OBDELMLL  DIM       1      1        76    Limb Movement Left Leg             
OBDELMRL  DIM       1      1        77    Limb Movement Right Leg            
OBDEACT   DIM       3      3        78    Action Type/Comment (ws)           
OBDEUY1   DIM       1      1        81    User Def Y/N 1                     
OBDEUY2   DIM       1      1        82    User Def Y/N 2                     
OBDEUY3   DIM       1      1        83    User Def Y/N 3                     
OBDEUY4   DIM       1      1        84    User Def Y/N 4                     
OBDEUC1   DIM       3      3        85    User Def Code 1 (wt)               
OBDEUC2   DIM       3      3        88    User Def Code 2 (wu)               
OBDEUN1   FORM      6.2    5        91    User Def Num 1                     
OBDEUN2   FORM      6.2    5        96    User Def Bum 2                     
OBDEUN3   FORM      6.2    5        101   User Def Num 3                     
OBDEUN4   FORM      6.2    5        106   User Def Num 4                     
OBDEUID   DIM       10     10       111   Web User ID                        
OBDEMDAT  DIM       8      8        121   Last Modified Date                 
OBDEMTIM  DIM       8      8        129   Last Modified Time                 
OBDECOM1  DIM       40     40       137   Comment 1                          
OBDECOM2  DIM       40     40       177   Comment 2                          
OBDECOM3  DIM       40     40       217   Comment 3                          
OBDEPNSC  DIM       2      2        257   Pain Score (0-10)                  
OBDECVPS  DIM       1      1        259   CVP (1-8)                          
OBDESPA   DIM       17     17       260   Spare                              
.
.End of Record                      277  
.
