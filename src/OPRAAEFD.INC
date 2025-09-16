. V10.00.01 01/07/2010 SS  new file                                             
. *----------------------------------------------------------------------
. * Include Name  :   OPRAAEFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Recovery Anaesthetic Adverse Event 
. *
. * File Type     :   SQL
. *
. * File Name     :   opraaeaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRAAE11   IFILE    SQL, FIXED=753, KEY="U1-8,9-13,14-19,20-22,23-30"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPAADATE  DIM       8      8        1     Session Date (CCYYMMDD)            
OPAATIME  DIM       5      5        9     Start Time (HH:MM)                 
OPAACLIN  DIM       6      6        14    Clinic/Surgeon                     
OPAACASE  DIM       3      3        20    Case Number                        
OPAAADMN  DIM       8      8        23    Admission Number                   
OPAAGEUR  DIM       1      1        31    Unresponsive > 30 mins             
OPAAGEAC  DIM       1      1        32    Agitated/confused/hallucinations   
OPAAGEP1  DIM       1      1        33    PONV                               
OPAAGEP2  DIM       1      1        34    PONV that fails PACU protocol      
OPAAPMRA  DIM       1      1        35    Reviewed by an anaesthetist        
OPAAPMP1  DIM       2      2        36    Pain Score >= 8 on waking          
OPAAPMP2  DIM       2      2        38    Pain Score >= 8 after 45 min       
OPAARFPS  DIM       1      1        40    Persistent sat < 95%               
OPAARFTA  DIM       1      1        41    Tachypnea                          
OPAARFBR  DIM       1      1        42    Bradypnea                          
OPAARFRD  DIM       1      1        43    Respiratory distress               
OPAARFLA  DIM       1      1        44    Larngospasm                        
OPAARFBO  DIM       1      1        45    Bronchospasm                       
OPAARFAS  DIM       1      1        46    Aspiration                         
OPAARFVB  DIM       1      1        47    Ventilated/Bagged                  
OPAARFRE  DIM       1      1        48    Reintubated                        
OPAARFRC  DIM       1      1        49    Respiratory or cardiac arrest      
OPAACCIA  DIM       1      1        50    Intervention of anaesthetist       
OPAACCCP  DIM       1      1        51    Chest pain                         
OPAACCEC  DIM       1      1        52    ECG Ischaemia                      
OPAACCNA  DIM       1      1        53    New arrhythmia                     
OPAACCHP  DIM       1      1        54    Hypotension                        
OPAACCHR  DIM       1      1        55    Hypertension                       
OPAACCBR  DIM       1      1        56    Bradycardia                        
OPAACCTA  DIM       1      1        57    Tachycardia                        
OPAABTB1  DIM       1      1        58    Body Temp > 39C                    
OPAABTB2  DIM       1      1        59    Body Temp < 35.5C                  
OPAABTB3  DIM       1      1        60    Body Temp < 35C and intervention   
OPAAORDE  DIM       1      1        61    Death                              
OPAAORDT  DIM       1      1        62    Drug Error                         
OPAAORAN  DIM       1      1        63    Anaphylaxis                        
OPAAORSE  DIM       1      1        64    Seizures                           
OPAAORUN  DIM       1      1        65    Unplanned transfer to ICU          
OPAAORIR  DIM       1      1        66    Inadequate reveral of neuromusclar 
OPAAORNB  DIM       1      1        67    Inadequate reversal of neuromuscula
OPAAORST  DIM       1      1        68    Stay in PACU > 2hrs                
OPAADIIN  DIM       1      1        69    Difficult Intubation               
OPAAADVE  DIM       1      1        70    Adverse Event?                     
OPAADIDT  DIM       300    300      71    Difficult Intubation Details       
OPAAOTFD  DIM       50     50       371   Review by an anaes. detail         
OPAAOTF1  DIM       50     50       421   Review by an anaes. detail 2       
OPAAOTF2  DIM       50     50       471   Review by an anaes. detail 3       
OPAAOTF3  DIM       50     50       521   Review by an anaes. detail 4       
OPAAOTF4  DIM       50     50       571   Review by an anaes. detail 5       
OPAAOTF5  DIM       50     50       621   Review by an anaes. detail 6       
OPAARFDE  DIM       1      1        671   Depression                         
OPAASPAR  DIM       81     81       672   Spare                              
.
.End of Record                      753  
.
