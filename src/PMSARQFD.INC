. V11.00.01 27/07/2020 TT C-0834767 Added Medical Author Approval Status - X    
. V10.09.05 30/11/2016 SA C-0323730 Updated description for PMARUDF1            
. V10.09.04 30/11/2016 SA C-0323730 Added new value 3 for PMARMAPR              
. V10.09.03 30/11/2016 SA C-0323730 Updated descriptions for PMARMAPR values    
. V10.09.02 30/11/2016 SA C-0323730 Added new values 7 & 8 for PMARSTAT         
. V10.09.01 30/11/2016 SA C-0323730 Added PMARAPRR                              
. V10.03.04 13/11/2013 EC C-291974 Added index 5                                
. V10.03.03 22/10/2013 EC C-291974 Changed descripton of PMARUDF1               
. V10.03.02 03/10/2013 EC C-275205 Added transfer source                        
. V10.03.01 28/08/2013 EC C-275205 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   PMSARQFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Admission Request Details          
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsarqaf.dat
. *
. * Index Values  :   KEY10   KEY18   KEY29   KEY30   KEY33                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSARQA1   IFILE    SQL, FIXED=595, KEY="U1-10"
PMSARQA2   IFILE    SQL, FIXED=595, KEY="U11-18,1-10"
PMSARQA3   IFILE    SQL, FIXED=595, KEY="U222-224,27-34,35-42,1-10"
PMSARQA4   IFILE    SQL, FIXED=595, KEY="U222-224,428-428,27-34,35-42,1-10"
PMSARQA5   IFILE    SQL, FIXED=595, KEY="U222-224,54-56,27-34,35-42,428-428,1-10"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMARREQN  DIM       10     10       1     Admission Request Number           
PMARURNO  DIM       8      8        11    U/R Number                         
PMARVISN  DIM       8      8        19    Visit Number                       
PMARREQD  DIM       8      8        27    Request Date (CCYYMMDD)            
PMARREQT  DIM       8      8        35    Request Time (HH:MM:SS)            
PMARRTYP  DIM       1      1        43    Request Type                       
.                                         "1" - Elective WL - EWL              
.                                         "2" - Elective Non WL Surgical - ENS 
.                                         "3" - Elective Non WL Medical - ENM  
PMARRESC  DIM       10     10       44    Responsible Clinicial (pmshcpaf)   
PMARUNIT  DIM       3      3        54    Unit (Cat WU)                      
PMARTEAM  DIM       5      5        57    Team (pmstemaf)                    
PMARPRTY  DIM       3      3        62    Priority (Cat ye)                  
PMARDIAG  DIM       40     40       65    Diagnosis                          
PMARPROC  DIM       9      9        105   Principal Procedure (watproaf)     
PMARPROD  DIM       80     80       114   Procedure Description Comments     
PMARPRO1  DIM       9      9        194   Additional Procedure 1 (watproaf)  
PMARPRO2  DIM       9      9        203   Additional Procedure 2 (watproaf)  
PMARSIDE  DIM       3      3        212   Side of Surgery (Cat yf)           
PMARCONO  DIM       1      1        215   Consent Obtained                   
.                                         "0" = No                             
.                                         "1" = yes                            
.                                         "2" = N/A                            
PMARCONF  DIM       3      3        216   Consent Obtained Reason (Cat yg)   
PMARPPBY  DIM       3      3        219   Proc. Can Be Performed By (Cat yh) 
PMARIHOS  DIM       3      3        222   Intended Hospital (pathspaf)       
PMARPSAH  DIM       1      1        225   Patient Suitable For Another Hospit
.                                         "0" = No                             
.                                         "1" = yes                            
.                                         "2" = Unknown                        
PMARPHOS  DIM       3      3        226   Preferred Hospital (pathspaf)      
PMARPPAD  DIM       8      8        229   Preferred/Proposed Admission Date  
PMARBTYP  DIM       3      3        237   Type of Bed Required (Cat yj)      
PMARANPR  DIM       1      1        240   Admit Night Prior                  
.                                         "0" = No                             
.                                         "1" = yes                            
.                                         "2" = Unknown                        
PMARCCBR  DIM       3      3        241   Critical Care Bed Required         
.                                         "0" = No                             
.                                         "1" = yes                            
.                                         "2" = Unknown                        
PMARUDF1  DIM       3      3        244   Preferred Language (Cat LA)        
PMARANTY  DIM       3      3        247   Anaesthetic Type (Cat OA)          
PMARODUR  DIM       5      5        250   Operation Duration                 
PMARPARC  DIM       3      3        255   Pre-Anaesth. Review Code (Cat ym)  
PMARCLTR  DIM       3      3        258   Clinical Triage Code (Cat yl)      
PMARHGHT  DIM       6      6        261   Height                             
PMARWGHT  DIM       6      6        267   Weight                             
PMARCBMI  DIM       5      5        273   Calculated BMI                     
PMARCOAG  DIM       3      3        278   Anti-Coagulants                    
.                                         "0" = No                             
.                                         "1" = yes                            
.                                         "2" = Unknown                        
PMARRACG  DIM       1      1        281   Referral to Anti-Coagulant Clinic  
.                                         "0" = No                             
.                                         "1" = yes                            
.                                         "2" = Unknown                        
PMARAPLT  DIM       1      1        282   Anti-Platelet                      
.                                         "0" = No                             
.                                         "1" = yes                            
.                                         "2" = Unknown                        
PMARITCR  DIM       3      3        283   Initial Tertiary Care Reason Cat WH
PMARINTR  DIM       3      3        286   Interpreter Required               
.                                         "0" = No                             
.                                         "1" = yes                            
.                                         "2" = Unknown                        
PMARCLAM  DIM       3      3        289   Financial Class (Cat CL)           
PMARSRCR  DIM       3      3        292   Source of Referral (Cat S)         
PMARREFC  DIM       10     10       295   Referring Clinician (pmshcpaf)     
PMARPRAC  DIM       10     10       305   Practice (pmshcgaf)                
PMARPCNT  DIM       2      2        315   Practice Count                     
PMARLSTS  DIM       3      3        317   Listing Status (Cat VL)            
PMARINTS  DIM       3      3        320   Intended Stay (Cat VI)             
PMARSHTN  DIM       3      3        323   Short Notice (Cat WS)              
PMARPLOS  DIM       4      4        326   Planned Length of Stay             
PMARNWHC  DIM       3      3        330   Non WA Hospital Contact (Cat cw)   
PMARPRDT  DIM       8      8        333   Procedure Date (CCYYMMDD)          
PMARTHLC  DIM       3      3        341   Theatre Location (Cat yp)          
PMARIMPR  DIM       1      1        344   Implants Required                  
.                                         "0" = No                             
.                                         "1" = yes                            
.                                         "2" = Unknown                        
PMARIMPD  DIM       80     80       345   Implants Description               
PMARIMPO  DIM       1      1        425   Implants Ordered                   
.                                         "0" = No                             
.                                         "1" = yes                            
.                                         "2" = Unknown                        
PMARBNGR  DIM       1      1        426   Bone Graft                         
.                                         "0" = No                             
.                                         "1" = yes                            
.                                         "2" = Unknown                        
PMAREXFX  DIM       1      1        427   Ex Fix Removal                     
.                                         "0" = No                             
.                                         "1" = yes                            
.                                         "2" = Unknown                        
PMARSTAT  DIM       1      1        428   Request Status                     
.                                         "1" - Draft                          
.                                         "2" - Submitted                      
.                                         "3" - Returned to Clinician          
.                                         "4" - Processed                      
.                                         "5" - Removed                        
.                                         "6" - Review                         
.                                         "7" - Approval Required              
.                                         "8" - Approval Denied                
PMARMAPR  DIM       1      1        429   Medical Authorisation App          
.                                         "0" = Not Required                   
.                                         "1" = Approved                       
.                                         "2" = Approval Required              
.                                         "3" = Approval Denied                
.                                         "X" = Pending                        
PMARTHRQ  DIM       1      1        430   Theatre Required                   
.                                         "0" = No                             
.                                         "1" = yes                            
.                                         "2" = Unknown                        
PMARRECC  DIM       1      1        431   Recurring Care                     
.                                         "0" = No                             
.                                         "1" = yes                            
.                                         "2" = Unknown                        
PMARRRCL  DIM       3      3        432   Reason Returned to Clinician Cat yr
PMARRREM  DIM       3      3        435   Reason For Removal (Cat ys)        
PMARTSRC  DIM       5      5        438   Transfer Source (patvadaf)         
PMARCDAT  DIM       8      8        443   Created Date (CCYYMMDD)            
PMARCTIM  DIM       8      8        451   Created Time (HH:MM:SS)            
PMARCUID  DIM       10     10       459   Created By User (websecaf)         
PMARUDAT  DIM       8      8        469   Updated Date (CCYYMMDD)            
PMARUTIM  DIM       8      8        477   Updated Time (HH:MM:SS)            
PMARUUID  DIM       10     10       485   Updated By User (websecaf)         
PMARAPRR  DIM       3      3        495   Approval Required Reason (Cat Ar)  
PMARSPAR  DIM       97     97       498   Spare Variable                     
.
.End of Record                      595  
.
