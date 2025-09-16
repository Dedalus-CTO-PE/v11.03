. 9.09.001 08/10/2007 PV  Created PATBMDFD / PATBMDIO CAR 148954            
. *----------------------------------------------------------------------
. * Include Name  :   PATBMDFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Bed Management Detail Table        
. *
. * File Type     :   SQL
. *
. * File Name     :   patbmdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATBMDA1   IFILE    SQL, FIXED=91, KEY="U1-3,4-6,7-14,15-19,28-30,31-38"        
PATBMDA2   IFILE    SQL, FIXED=91, KEY="U31-38,7-14,15-19,1-3,4-6,28-30"        
PATBMDA3   IFILE    SQL, FIXED=91, KEY="U1-3,4-6,31-38,7-14,15-19,28-30"        
PATBMDA4   IFILE    SQL, FIXED=91, KEY="U1-3,7-14,4-6,28-30,31-38,15-19"        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTBDWARD  DIM       3      3        1     Ward                               
PTBDWBED  DIM       3      3        4     Bed                                
PTBDDATE  DIM       8      8        7     Date (CCYYMMDD)                    
PTBDADTM  DIM       5      5        15    Admission Time                     
PTBDLOSM  DIM       5      5        20    LOS (Minutes)                      
PTBDLOSD  DIM       3      3        25    LOS (Days)                          
PTBDOPPE  DIM       3      3        28    Operating Period (Cat SP)          
PTBDADMN  DIM       8      8        31    Admission Number                   
PTBDSTAT  DIM       1      1        39    Status                             
.                                         1=Booked
.                                         2=Preadmitted
.                                         3=Admitted
.                                         4=Discharged
PTBDOVER  DIM       1      1        40    Overridden 1 - Yes                 
PTBDBRQN  DIM       8      8        41    Linked Adm Bed Request             
PTBDSPAR  DIM       42     42       49    Spare Variable                     
.
.End of Record                      91   
.
