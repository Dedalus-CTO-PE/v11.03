. V10.00.01 12/04/2010 EC  Added CCEPADTS and CCEPDCTS CAR 217427            
. V9.12.001 12/08/2009 EC  Added CCEPRHC1 CAR 198266                            
. V9.11.001 28/01/2009 EC  Added CCEPUC21 to CCEPUC28 CAR 178341                
. VF.09.002 17/12/2003                                                          
. VF.09.003 18/12/2003                                                          
. V9.03.001 18/12/2003 EC  Added A/H and Outpatient fields                      
. V9.03.001 18/12/2003 EC  Added Allied Health and Outpatient fields            
. V9.03.002 25/02/2004 SL  Added fields from SDRG to CPAP                       
. V9.03.002 09/03/2004 SL  Added fields SDRG to DEPT                            
. V9.03.002 09/03/2004 SL  Added SDRG to STYP                                   
. V9.03.002 10/03/2004 SL  Added SDRG to ASIT                                   
. V9.03.003 07/05/2004 SB  Added categories                                     
. *----------------------------------------------------------------------
. * Include Name  :   CCSEPSFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Episode Basic Details              
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsepsaf.dat
. * Audit Name    :   ccsaudep.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
CCSAUDEP   IFILE    SQL, FIXED=893, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCEPAUDD  DIM       8      8        1     Date of Change
CCEPAUDT  DIM       8      8        9     Time of Change
CCEPAUDP  DIM       2      2        17    Port
CCEPAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
CCEPAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
CCEPAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
CCSEPSA1   IFILE    SQL, FIXED=868, KEY="U1-2,3-18"                             
CCSEPSA2   IFILE    SQL, FIXED=868, KEY="U64-64,1-2,3-18"                       
CCSEPSA3   IFILE    SQL, FIXED=868, KEY="U83-90,1-2,3-18"                       
CCSEPSA4   IFILE    SQL, FIXED=868, KEY="U121-128,1-2,3-18"                     
CCSEPSA5   IFILE    SQL, FIXED=868, KEY="U65-74,1-2,3-18"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCEPHCD   DIM       2      2        1     Hospital Code                      
CCEPEPS   DIM       16     16       3     Episode                            
CCEPSUR   DIM       20     20       19    Surname                            
CCEPGIV   DIM       25     25       39    Given Names                        
CCEPCOM   DIM       1      1        64    Complete 0=No                      
CCEPURN   DIM       10     10       65    UR Number                          
CCEPSDT   DIM       8      8        75    Data Created by the System         
CCEPLTD   DIM       8      8        83    Last Data Transfer Date            
CCEPLOS   FORM      6      4        91    Length of Stay                     
CCEPINPT  DIM       1      1        95    Inpatient 0=No                     
CCEPDAY   DIM       1      1        96    Day Case 0=No                      
CCEPVIST  DIM       2      2        97    Visit Type                         
CCEPSEX   DIM       1      1        99    Patient Sex M or F                 
CCEPDOB   DIM       8      8        100   Date of Birth                      
CCEPAGEY  DIM       3      3        108   Age in Years                       
CCEPAGEM  DIM       2      2        111   Age in Months                      
CCEPAGED  DIM       2      2        113   Age in Days                        
CCEPCOB   DIM       3      3        115   Country of Birth (Category C)      
CCEPREL   DIM       3      3        118   Religion (Category R )             
CCEPDDAT  DIM       8      8        121   Discharge Date                     
CCEPDWAR  DIM       3      3        129   Discharge Ward                     
CCEPDSTA  DIM       3      3        132   Discharge Status (Cat. D)          
CCEPDDES  DIM       3      3        135   Discharge Destination (Cat. DD)    
CCEPDMBS  DIM       9      9        138   Discharge Diagnosis                
CCEPDDPT  DIM       3      3        147   Discharge Dept (From Tran)         
CCEPDSER  DIM       3      3        150   Discharge Service (From Dept)      
CCEPMDCC  DIM       4      4        153   M.D.C.                             
CCEPDRGC  DIM       4      4        157   D.R.G.                             
CCEPADAT  DIM       8      8        161   Admission Date or                  
CCEPAWAR  DIM       3      3        169   Adm Ward                           
CCEPASRC  DIM       3      3        172   Adm Source (Category S)            
CCEPACLS  DIM       3      3        175   Adm Class (Category P)             
CCEPACAR  DIM       3      3        178   Adm Care Class (Category CC)       
CCEPADPT  DIM       3      3        181   Adm Dept. (Cat. AC)(Pat. Class)    
CCEPASER  DIM       3      3        184   Adm Service. (From Dept)           
CCEPARDC  DIM       10     10       187   Doctor Referred By                 
CCEPATDC  DIM       10     10       197   Doctor Treating                    
CCEPAADC  DIM       10     10       207   Doctor Attending at Admission      
CCEPDADC  DIM       10     10       217   Doctor Attending at Discharge      
CCEPAHFD  DIM       6      6        227   Health Fund (Source Board)         
CCEPAHTB  DIM       8      8        233   Health Fund Table                  
CCEPAMBS  DIM       9      9        241   Admission MBS Code                 
CCEPOPCL  DIM       6      6        250   Outpatient Clinic                  
CCEPPDIA  DIM       9      9        256   Primary Diagnosis                  
CCEPSDIA  DIM       9      9        265   Secondary Diagnosis                
CCEPPOPP  DIM       9      9        274   Primary Op Code                    
CCEPSOPP  DIM       9      9        283   Secondary Op Code                  
CCEPEXC   DIM       1      1        292   Casemix Exclusion 0=No             
CCEPPMBS  DIM       9      9        293   Primary MBS Code                   
CCEPSMBS  DIM       9      9        302   Secondary MBS Code                 
CCEPMU1   DIM       3      3        311   User Def 1 (patmi1af) (Category U1)
CCEPMU2   DIM       3      3        314   User Def 2 (Category U2)           
CCEPMU3   DIM       3      3        317   User Def 3 (Category U3)           
CCEPMU4   DIM       3      3        320   User Def 4 (Category U4)           
CCEPMU5   DIM       3      3        323   User Def 5 (Category U5)           
CCEPMU6   DIM       3      3        326   User Def 6 (Category U6)           
CCEPMU7   DIM       3      3        329   User Def 7 (Category U7)           
CCEPPCD   DIM       10     10       332   Patients Post Code                 
CCEPCLM   DIM       3      3        342   Claim Code (patmi1af.aclaim Cat CL)
CCEPCLI   DIM       6      6        345   Theatre Clinic/Surgeon             
CCEPCTY   DIM       3      3        351   Theatre Clinic/Surgeon Type (DT)   
CCEPANA   DIM       3      3        354   Theatre Anaesthetic Code (OA)      
CCEPOTY   DIM       3      3        357   Theatre Operation Type   (OY)      
CCEPTTR   DIM       3      3        360   Theatre Transport Code (OR)        
CCEPOY6   DIM       3      3        363   Theatre User Def 1 (Y6)            
CCEPOY7   DIM       3      3        366   Theatre User Def 2 (Y7)            
CCEPOY8   DIM       3      3        369   Theatre User Def 3 (Y8)            
CCEPOY9   DIM       3      3        372   Theatre User Def 4 (Y9)            
CCEPORM   DIM       6      6        375   Theatre Operating Room             
CCEPOKI   DIM       3      3        381   Theatre Op Known Infect. (OK)      
CCEPOTP   DIM       3      3        384   Theatre Op Time Period   (SP)      
CCEPTST   DIM       3      3        387   Theatre Session Type (ST)          
CCEPINS   DIM       3      3        390   Insurance St. (U1)(OBAINS,ADAINSUR)
CCEPTIM   DIM       5      5        393   Time Seen (O/P & A&E)              
CCEPTDP   DIM       5      5        398   Time of Departure                  
CCEPAST   DIM       3      3        403   EMR Situation (S)(EMVISITN)        
CCEPAMD   DIM       3      3        406   EMR Mode of Arrival(EA)(EMVIMODE)  
CCEPAU1   DIM       3      3        409   EMR User Def 1 (A1) (EMVIUC01)     
CCEPAU2   DIM       3      3        412   EMR User Def 2 (A2) (EMVIUC02)     
CCEPAU3   DIM       3      3        415   EMR User Def 3 (A3) (EMVIUC03)     
CCEPAU4   DIM       3      3        418   EMR User Def 4 (A4) (EMVIUC04)     
CCEPAU5   DIM       3      3        421   EMR User Def 5 (A5) (EMVIUC05)     
CCEPAU6   DIM       3      3        424   EMR User Def 6 (A6)(EMVIUC06)      
CCEPAU7   DIM       3      3        427   EMR User Def 7 (A7)(EMVIUC07)      
CCEPAU8   DIM       3      3        430   EMR User Def 8 (A8)(EMVIUC08)      
CCEPAWT   DIM       3      3        433   EMR Comp Wait  (EW) (EMVIWAIT)     
CCEPAPR   DIM       3      3        436   EMR Prev Attend(EP) (EMVIPREV)     
CCEPAET   DIM       3      3        439   EMR Time Since (AE) (EMVIELAP)     
CCEPART   DIM       3      3        442   EMR RTA Seatbelt(AR) (EMVIRTAS)    
CCEPAIN   DIM       3      3        445   EMR Initiator  (AI) (EMVIINIT)     
CCEPAPL   DIM       3      3        448   EMR Place of Incident(AP)(EMVIPLIN)
CCEPAPY   DIM       3      3        451   EMR Priority Code(AA)(EMVITRIG)    
CCEPOST   DIM       6      6        454   Outpatient Site (OBASITE)          
CCEPOCL   DIM       6      6        460   Outpatient Clinic (OBACLIN)        
CCEPOCT   DIM       6      6        466   Outpatient Clinic Type (OBACTYP)   
CCEPOVT   DIM       3      3        472   Outpatient Visit Type (OBAVISIT)   
CCEPODY   DIM       1      1        475   Outpatient Day Indicator (OBADAY)  
CCEPOSS   DIM       3      3        476   O/P Session Status (CS) (OBASESST) 
CCEPODS   DIM       3      3        479   O/P Discharge Status (DO)(OBADISCH)
CCEPOAT   DIM       3      3        482   O/P Attendance Code (CA) (OBAATTN) 
CCEPOPR   DIM       3      3        485   O/P Priority Code (PR) (OBAPRTY)   
CCEPOU1   DIM       3      3        488   O/P User Def 1 (O1) (OBAUSR1)      
CCEPOU2   DIM       3      3        491   O/P User Def 2 (O2) (OBAUSR2)      
CCEPOU3   DIM       3      3        494   O/P User Def 3 (O3) (OBAUSR3)      
CCEPOU4   DIM       3      3        497   O/P User Def 4 (O4) (OBAUSR4)      
CCEPODP   DIM       3      3        500   O/P Department (AC) (OBADEPT)      
CCEPOTR   DIM       3      3        503   O/P Transport (OB) (OBATRAN)       
CCEPOLG   DIM       3      3        506   O/P Language (OL) (OTBBLNGI)       
CCEPOOT   DIM       3      3        509   O/P Outcome (OZ) (OTBBOUTC)        
CCEPMU8   DIM       3      3        512   Admission User Defined 8 (U8)      
CCEPMU9   DIM       3      3        515   Admission User Defined 9 (U9)      
CCEPMU10  DIM       3      3        518   Admission User Defined 10 (U0)     
CCEPPHP   DIM       3      3        521   Pri. Health Service Purchaser (HP) 
CCEPAGN   DIM       3      3        524   Health Agency (HA)                 
CCEPVW5   FORM      8.4    7        527   WEIS 5 NZ Calculation              
CCEPV5A   FORM      8.4    7        534   WEIS 5A NZ Calculation             
CCEPCMX   DIM       1      1        541   Case Payment ? (PTMICMXP)          
CCEPV8A   FORM      8.4    7        542   WEIS 8A NZ Calculation (Southland) 
CCEPINTR  DIM       1      1        549   Interpreter Required               
CCEPSTAT  DIM       1      1        550   O/P Slot Status                    
CCEPCIND  DIM       3      3        551   O/P Clinic Indicator (CI)          
CCEPSPCA  DIM       3      3        554   O/P Special Arrangements (SA)      
CCEPRSTA  DIM       1      1        557   A/H Referral Status                
CCEPRHCP  DIM       10     10       558   A/H Resp. HCP (Ref)                
CCEPPRB1  DIM       9      9        568   A/H Problem Code 1 (Ref)           
CCEPPRB2  DIM       9      9        577   A/H Problem Code 2 (Ref)           
CCEPPRB3  DIM       9      9        586   A/H Problem Code 3 (Ref)           
CCEPDIA1  DIM       9      9        595   A/H Diag Code 1 (Ref)              
CCEPDIA2  DIM       9      9        604   A/H Diag Code 2 (Ref)              
CCEPDIA3  DIM       9      9        613   A/H Diag Code 3 (Ref)              
CCEPENCN  DIM       3      3        622   A/H Enc Number (Enc)               
CCEPSERP  DIM       10     10       625   A/H Serv. Provider (Enc)           
CCEPACTY  DIM       6      6        635   A/H Clinic Type (Enc)              
CCEPSERD  DIM       8      8        641   A/H Service Date (Enc)             
CCEPPTYP  DIM       3      3        649   A/H Patient Type (Enc) (GI)        
CCEPDEPT  DIM       3      3        652   Department Code (ALREDEPT)         
CCEPDUNT  FORM      6      4        655   A/H Direct Units (Enc)             
CCEPDBUN  FORM      6      4        659   A/H Direct Billable Units (Enc)    
CCEPIUNT  FORM      6      4        663   A/H Indirect Units (Enc)           
CCEPIBUN  FORM      6      4        667   A/H Indirect Billable Units (Enc)  
CCEPABRG  DIM       3      3        671   Indigenous Status (VA)             
CCEPCADM  DIM       3      3        674   Admission Criteria (VB)            
CCEPIRAD  DIM       3      3        677   Intention to Readmit (VR)          
CCEPIDUS  DIM       3      3        680   Intended Stay (VI)                 
CCEPCRAV  DIM       3      3        683   Carer Availability (VK)            
CCEPRCCT  DIM       3      3        686   Critical Care Transfer (VJ)        
CCEPINDC  DIM       1      1        689   Intended Day Case                  
CCEPMDAV  DIM       3      3        690   Mode of Inp. Arrival (VM)          
CCEPCSNG  DIM       3      3        693   Coder Snags (VN)                   
CCEPASUT  DIM       3      3        696   Adm. Serv. Unit Type (KA)          
CCEPELPS  DIM       3      3        699   Elective Patient Stat (KC)         
CCEPEMPL  DIM       3      3        702   Employment Status (KD)             
CCEPFINP  DIM       3      3        705   Financial Program (KE)             
CCEPOCCP  DIM       3      3        708   Occupation (KF)                    
CCEPPALC  DIM       3      3        711   Inv. In Palliative Care (KG)       
CCEPPPAL  DIM       3      3        714   Palliative Care (KH)               
CCEPPPPT  DIM       3      3        717   Public / Private (KI)              
CCEPPSOS  DIM       3      3        720   Pension Status on Sep (KJ)         
CCEPPYSP  DIM       3      3        723   Payment Stat on Sep (KK)           
CCEPQLDB  DIM       3      3        726   Type of Episode QLD (KL)           
CCEPREAD  DIM       3      3        729   Re-Admission 28 Days (KM)          
CCEPUDIN  DIM       3      3        732   Discharge Intention (KN)           
CCEPUREA  DIM       3      3        735   Unplanned Readmission (KO)         
CCEPUSAC  DIM       3      3        738   Usual Accom (KP)                   
CCEPUVTH  DIM       3      3        741   Unplanned Visit to Theatre (KB)    
CCEPDVAC  DIM       3      3        744   DVA Card Colour (DX)               
CCEPFLDR  DIM       3      3        747   Folder Selection (FS)              
CCEPPCCL  DIM       1      1        750   Patient CC Class Level             
CCEPSDRG  DIM       4      4        751   State D.R.G. (PTPGSDRG)            
CCEPUINT  FORM      4      3        755   Hrs in Intensive Care (PTICUINT)   
CCEPUCCU  FORM      4      3        758   Hrs in Critical Care (PTICUCCU)    
CCEPUMEC  FORM      4      3        761   Hrs on Mech. Vent (PTICUMEC)       
CCEPCPAP  FORM      5      4        764   Hrs on Const. Pos. Air (PTICCPAP)  
CCEPRCLO  DIM       3      3        768   Reason for Closure (LL) (ALRERCLO) 
CCEPSRCE  DIM       3      3        771   Source of Referral (ALRESRCE)      
CCEPSTYP  DIM       6      6        774   A/H Service Type (Enc)             
CCEPASIT  DIM       6      6        780   Allied Health Outpatient Site      
CCEPUC21  DIM       3      3        786   EMR Attendance Source (Cat em)     
CCEPUC09  DIM       3      3        789   EMR Transport Mode (Cat ea)        
CCEPUC20  DIM       3      3        792   EMR Presenting Complaint (Cat el)  
CCEPUC28  DIM       3      3        795   EMR Ready For Admission (Cat et)   
CCEPRHC1  DIM       10     10       798   Referring HCP 1 (pmsvx1af)         
CCEPADTS  DIM       5      5        808   Admission Transfer Source          
CCEPDCTS  DIM       5      5        813   Discharge Transfer Source          
CCEPSPA   DIM       50     50       818   Spare                              
.
.End of Record                      868  
.
