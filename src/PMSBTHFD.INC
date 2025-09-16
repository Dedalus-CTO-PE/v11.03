. V11.03.01 14/04/2023 EC  Added X=10 to PMBTAPG1 and PMBTAPG2 
. V10.00.02 09/08/2010 JP  Added audit counter                               
. V10.00.01 25/05/2010 JP  Created for CAR 222551                               
. *----------------------------------------------------------------------
. * Include Name  :   PMSBTHFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Pregnancy Birth Details            
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsbthaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSBTHA1   IFILE    SQL, FIXED=438, KEY="U1-10,11-20,21-23"                     
PMSBTHA2   IFILE    SQL, FIXED=438, KEY="U24-31,1-10,11-20,21-23"               
PMSBTHA3   IFILE    SQL, FIXED=438, KEY="U32-39,1-10,11-20,21-23"               
PMSBTHA4   IFILE    SQL, FIXED=438, KEY="U40-47,1-10,11-20,21-23"               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMBTUNIQ  DIM       10     10       1     Pregnancy Unique Id                
PMBTBUNQ  DIM       10     10       11    Birth Unique Id                    
PMBTAUDC  DIM       3      3        21    Audit Counter                      
PMBTADMN  DIM       8      8        24    Admission Number                   
PMBTADMM  DIM       8      8        32    Admission Number (Mother)          
PMBTLURN  DIM       8      8        40    Linked UR (if baby registered)     
PMBTNBFR  DIM       10     10       48    No. of Birth Form                  
PMBTPLUR  DIM       2      2        58    Plurality                          
PMBTADOP  DIM       3      3        60    Adoption (Cat mk)                  
PMBTBBAR  DIM       3      3        63    Born Before Arrival (Cat ml)       
PMBTBDAT  DIM       8      8        66    Birth Date (CCYYMMDD)              
PMBTBTIM  DIM       9      9        74    Birth Time (hh:mm:ss)              
PMBTESTG  DIM       2      2        83    Estimated Gestation at Birth       
PMBTGEND  DIM       1      1        85    Gender                             
PMBTBSTA  DIM       3      3        86    Birth Status/Condition (Cat mp)    
PMBTMDEL  DIM       3      3        89    Method of Delivery (Cat mn)        
PMBTAPG1  DIM       1      1        92    Apgar score at 1 minute            
.                                         X=10
PMBTAPG2  DIM       1      1        93    Apgar Score at 5 minutes           
.                                         X=10
PMBTTRES  DIM       3      3        94    Time to Establish Respiration      
PMBTDRUG  DIM       80     80       97    Resuscitation Drugs (Free Format)  
PMBTBWGH  DIM       5      5        177   Birth Weight (grams)               
PMBTLNGT  DIM       3      3        182   Length (cms)                       
PMBTHEAD  DIM       3      3        185   Head Circumference (cms)           
PMBTMOUL  DIM       3      3        188   Moulding (Cat ms)                  
PMBTCAPU  DIM       3      3        191   Caput (Cat mt)                     
PMBTCORB  DIM       3      3        194   Cord Blood Taken (Cat mv)          
PMBTMECO  DIM       3      3        197   Meconium (Cat mw)                  
PMBTURIN  DIM       3      3        200   Urine (Cat mx)                     
PMBTPAED  DIM       10     10       203   Paediatrician (pmshcpaf)           
PMBTNICU  DIM       3      3        213   NICU Admission Indicator (Cat my)  
PMBTVITK  DIM       1      1        216   Vitamin K 1=yes                    
PMBTHBDT  DIM       8      8        217   Hep B Received Date (CCYYMMDD)     
PMBTHBTM  DIM       8      8        225   Hep B Received Time (hh:mm:ss)     
PMBTBFAT  DIM       3      3        233   Breastfeeding Attempted (Cat mz)   
PMBTIFDD  DIM       3      3        236   Infant Feeding on Discharge (CatNB)
PMBTBEBY  DIM       10     10       239   Baby Examined By (pmshcpaf)        
PMBTLBAT  DIM       10     10       249   Label Attached By (pmshcpaf)       
PMBTLBCH  DIM       10     10       259   Label Checked By (pmshcpaf)        
PMBTGDAT  DIM       8      8        269   Guthrie Hypothyroidism Test Date   
PMBTGTIM  DIM       8      8        277   Guthrie Hypothyroidisn Test Time   
PMBTDWGH  DIM       5      5        285   Discharge Weight (grams)           
PMBTBPRE  DIM       3      3        290   Birth Presentation (Cat NL)        
PMBTCANE  DIM       3      3        293   Cord Around Neck (Cat NQ)          
PMBTCABO  DIM       3      3        296   Cord Around Body (Cat NR)          
PMBTWEBC  DIM       10     10       299   Web User Id Created (websecaf)     
PMBTDATC  DIM       8      8        309   Date Created (CCYYMMDD)            
PMBTTIMC  DIM       8      8        317   Time Created (hh:mm:ss)            
PMBTWEBU  DIM       10     10       325   Web User Updated (websecaf)        
PMBTDATU  DIM       8      8        335   Date Update (CCYYMMDD)             
PMBTTIMU  DIM       8      8        343   Time Updated (hh:mm:ss)            
PMBTRECS  DIM       1      1        351   Record Status 1=Deleted            
PMBTWEBD  DIM       10     10       352   Web User Deleted (websecaf)        
PMBTDATD  DIM       8      8        362   Date Deleted (CCYYMMDD)            
PMBTTIMD  DIM       8      8        370   Time Deleted (hh:mm:ss)            
PMBTREAS  DIM       3      3        378   Reason for Change (Cat FY)         
PMBTSPAR  DIM       57     57       381   Spare                              
.
.End of Record                      438  
.
