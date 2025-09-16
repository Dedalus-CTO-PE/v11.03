. V11.01.01 12/05/2021 JP C-0900650 Created table                               
. *----------------------------------------------------------------------
. * Include Name  :   PMSLRDFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Leave Register Details     
. *
. * File Type     :   SQL
. *
. * File Name     :   pmslrdaf.dat
. *
. * Index Values  :   KEY27   KEY28   KEY28   KEY28                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSLRDA1   IFILE    SQL, FIXED=820, KEY="U1-8,9-16,17-24,32-34"
PMSLRDA2   IFILE    SQL, FIXED=820, KEY="U1-8,9-16,17-24,31-31,32-34"
PMSLRDA3   IFILE    SQL, FIXED=820, KEY="U31-31,1-8,9-16,17-24,32-34"
PMSLRDA4   IFILE    SQL, FIXED=820, KEY="U9-16,17-24,31-31,1-8,32-34"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMLRVISN  DIM       8      8        1     Visit number                       
PMLRDATE  DIM       8      8        9     Leave Date CCYYMMDD                
PMLRTIME  DIM       8      8        17    Leave Time hh:mm:ss                
PMLRWARD  DIM       3      3        25    Ward (patwr1af)                    
PMLRLBED  DIM       3      3        28    Bed                                
PMLRRECS  DIM       1      1        31    Record Status L=On Leave           
.                                         B=Before update                      
.                                         R=Returned                           
.                                         A=Absconded                          
.                                         D=Deleted                            
.                                         O=Discharged on leave                
PMLRCOUN  DIM       3      3        32    Record counter                     
PMLRACTV  DIM       1      1        35    Active 1=Inactive                  
PMLRLRCN  DIM       3      3        36    Leave record counter for visucmaf  
PMLRTLEV  DIM       3      3        39    Type of leave Cat TL               
PMLREXRD  DIM       8      8        42    Expected return date CCYYMMDD      
PMLREXRT  DIM       8      8        50    Expected return time hh:mm:ss      
PMLRDEST  DIM       100    100      58    Destination                        
PMLRRISK  DIM       3      3        158   Risk Assessment (Cat vd)           
PMLRLARR  DIM       3      3        161   Leave Arrangements (Cat ve)        
PMLRUDC1  DIM       3      3        164   User Defined Code 1 (Cat r1)       
PMLRUDC2  DIM       3      3        167   User Defined Code 2 (Cat r2)       
PMLRUDC3  DIM       3      3        170   User Defined Code 3 (Cat r3)       
PMLRUDC4  DIM       3      3        173   User Defined Code 4 (Cat r4)       
PMLRMEDG  DIM       1      1        176   Medications given/ 0=No 1=Yes 2=N/A
PMLRBAGS  DIM       1      1        177   Bag search 0=No 1=Yes 2=N/A        
PMLRBALS  DIM       1      1        178   BAL Screening 0=No 1=Yes 2=N/A     
PMLRUDSS  DIM       1      1        179   UDS Screening 0=No 1=Yes 2=N/A     
PMLRUDY1  DIM       1      1        180   UDF yes/no 1                       
PMLRUDY2  DIM       1      1        181   UDF yes/no 2                       
PMLRUDY3  DIM       1      1        182   UDF yes/no 3                       
PMLRVAL1  DIM       10     10       183   Value 1                            
PMLRVAL2  DIM       10     10       193   Value 2                            
PMLRVAL3  DIM       10     10       203   Value 3                            
PMLRCARN  DIM       100    100      213   Carer Name                         
PMLRCARC  DIM       20     20       313   Carer contact number               
PMLRCART  DIM       3      3        333   Carer contact type (Cat tc)        
PMLRCCNT  DIM       3      3        336   Carer contact counter from pmscexaf
PMLRCCON  DIM       1      1        339   Carer consent 0=No 1=Yes           
PMLRTXT1  DIM       100    100      340   Text 1                             
PMLRTXT2  DIM       100    100      440   Text 2                             
PMLRTXT3  DIM       100    100      540   Text 3                             
PMLRREMN  DIM       2      2        640   Reminder number sent (mltolnaf)    
PMLRWEBC  DIM       10     10       642   Web user created (websecaf)        
PMLRCDAT  DIM       8      8        652   Created date                       
PMLRCTIM  DIM       8      8        660   Created time                       
PMLRWEBD  DIM       10     10       668   web user id delected (websecaf)    
PMLRDATD  DIM       8      8        678   Date deleted                       
PMLRTIMD  DIM       8      8        686   Time deleted                       
PMLRWEBU  DIM       10     10       694   web user updated (websecaf)        
PMLRDATU  DIM       8      8        704   Date updated                       
PMLRTIMU  DIM       8      8        712   Time updated                       
PMLRSPAR  DIM       100    100      720   Spare                              
.
.End of Record                      820  
.
