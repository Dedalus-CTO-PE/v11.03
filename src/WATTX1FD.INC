. V10.12.01 12/02/2018 JP C-0846170 Added new index                             
. *----------------------------------------------------------------------
. * Include Name  :   WATTX1FD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   Waiting List file extension table  
. *
. * File Type     :   SQL
. *
. * File Name     :   wattx1af.dat
. *
. * Index Values  :   KEY19   KEY27                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATTX1A1   IFILE    SQL, FIXED=289, KEY="U1-8,9-17,18-19"
WATTX1A2   IFILE    SQL, FIXED=289, KEY="U79-86,1-8,9-17,18-19"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTTXURNO  DIM       8      8        1     U/R Number                         
WTTXPCOD  DIM       9      9        9     Procedure Code (watproaf)          
WTTXPCNT  DIM       2      2        18    Procedure Count                    
WTTXPLST  DIM       3      3        20    Patient List. Status (PRS/2) Cat VL
WTTXPOWD  DIM       3      3        23    Post-Op Ward (patwr1af)            
WTTXADMW  DIM       3      3        26    Admitting Ward (Cat ap)            
WTTXPSTY  DIM       1      1        29    Parent Staying (0=NO,1=YES)        
WTTXIDYC  DIM       3      3        30    Intended Day Case (Cat XB)         
WTTXADMF  DIM       3      3        33    Admission Forms (Cat XA)           
WTTXEQR1  DIM       3      3        36    Equipment Required 1 (Cat XE)      
WTTXEQR2  DIM       3      3        39    Equipment Required 2 (Cat XE)      
WTTXPAST  DIM       3      3        42    Pre-Admission Status (Cat XG)      
WTTXCNSN  DIM       1      1        45    Consent? (0=NO,1=YES)              
WTTXNTGP  DIM       1      1        46    Notify Registered GP (0=NO,1=YES)  
WTTXPATM  DIM       8      8        47    Proposed Admission Time (hh:mm:ss) 
WTTXUIDR  DIM       10     10       55    User Id who  rmvd procd. (websecaf)
WTTXLEQR  DIM       3      3        65    Loan Equipment Required (Cat XO)   
WTTXDPRC  DIM       9      9        68    Duplicate Procedure Code (watproaf)
WTTXDPCN  DIM       2      2        77    Duplicate Count                    
WTTXCDTE  DIM       8      8        79    Date Record Created (ccyymmdd)     
WTTXCTIM  DIM       8      8        87    Time Record Created (hh:mm:ss)     
WTTXWEBC  DIM       10     10       95    WEB User Id rec creator (websecaf) 
WTTXLUPD  DIM       8      8        105   Last Update Date (ccyymmdd)        
WTTXLUPT  DIM       8      8        113   Last Update Time (hh:mm:ss)        
WTTXWEBU  DIM       10     10       121   WEB User Id rec. updater (websecaf)
WTTXCTYP  DIM       3      3        131   Claim Type (Cat CL)                
WTTXEQR3  DIM       3      3        134   Equipment Required 3 (Cat XE)      
WTTXPTIM  DIM       8      8        137   Proposed Pre Admiss Time (hh:mm:ss)
WTTXPOTM  DIM       8      8        145   Proposed Operation Time (hh:mm:ss) 
WTTXPANS  DIM       3      3        153   Pre-Anaesthetic Status (Cat XH)    
WTTXPANT  DIM       8      8        156   Pre-Anaesthetic Time (hh:mm:ss)    
WTTX23HR  DIM       1      1        164   Planned 23 hour stay (0=No 1=Yes)  
WTTXANAE  DIM       3      3        165   Anaesthetic Type (Cat OA)          
WTTXBOTY  DIM       3      3        168   Booking Type (Cat BK)              
WTTXTEAM  DIM       5      5        171   Team                               
WTTXFUND  DIM       3      3        176   Funding Source (Cat cx)            
WTTXWARD  DIM       3      3        179   Ward (patwr1af)                    
WTTXPREF  DIM       3      3        182   Preferred Accommodation (Cat BP)   
WTTXNWHC  DIM       3      3        185   No WA Hospital Contact (Cat cw)    
WTTXINTD  DIM       3      3        188   Intended Stay (Cat VI)             
WTTXMAUT  DIM       1      1        191   Medical Authorisation Approved     
.                                         Blank = Blank                        
.                                         0 = No                               
.                                         1 = Yes                              
WTTXEXPD  DIM       8      8        192   Expected Delivery Date (ccyymmdd)  
WTTXTCRS  DIM       3      3        200   Tertiary Care Reason (Cat WH)      
WTTXDISC  DIM       9      9        203   Disaster Code (dismasaf)           
WTTXRTIM  DIM       8      8        212   Removal Time (hh:mm:ss)            
WTTXRCLI  DIM       10     10       220   Referring Clinician                
WTTXRCLP  DIM       10     10       230   Referring Clinician Practice       
WTTXPSAH  DIM       1      1        240   Pt. Suitable For Another Hospital  
.                                         " " or 0 = No, 1=Yes, and 2=Unknown  
WTTXPHOS  DIM       3      3        241   Preferred Hospital (pathspaf)      
WTTXPRPB  DIM       3      3        244   Procedure can be perf. by (CAT yh) 
.                                         01 - First Available Surgeon         
.                                         02 - Named Surgeon (Complexity)      
.                                         03 - Named Surgeon (Private)         
.                                         04 - Nurse Practitioner              
.                                         05 - Registrar List                  
WTTXAASC  DIM       4      4        247   Airway Assessment Score (ASA)      
.                                         A single number entry from 1-4       
WTTXUD09  DIM       3      3        251   User Defined 9 (Category X9)       
.                                         NZ NPF Clinician Defined Susp. of Can
.                                         cer                                  
WTTXUD10  DIM       3      3        254   User Defined 10 (Category x1)      
WTTXUD11  DIM       3      3        257   User Defined 11 (Category x2)      
WTTXUD12  DIM       3      3        260   User Defined 12 (Category x3)      
WTTXUD13  DIM       3      3        263   User Defined 13 (Category x4)      
WTTXSPAR  DIM       23     23       266   Spare                              
.
.End of Record                      289  
.
