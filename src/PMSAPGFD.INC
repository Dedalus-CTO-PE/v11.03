. V10.10.01 15/03/2017 SA C-0818098 Added PMAGDUGO and PMAGDWLK                 
. V10.03.01 30/03/2012 PHA C-257776 New Patient Health Fund Program Extension   
. *----------------------------------------------------------------------
. * Include Name  :   PMSAPGFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Health Fund Program Details
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsapgaf.dat
. *
. * Index Values  :   KEY31                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSAPGA1   IFILE    SQL, FIXED=441, KEY="U1-8,9-11,12-14,15-20,21-23,24-31"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMAGURNO  DIM       8      8        1     U/R Number                         
PMAGATYP  DIM       3      3        9     Admission Type (Cat A)             
PMAGCLAM  DIM       3      3        12    Claim Code (cat CL)                
PMAGFUND  DIM       6      6        15    Health Fund                        
PMAGTABT  DIM       3      3        21    Health Fund Table Type (Cat HT)    
PMAGEDAT  DIM       8      8        24    Expiry Date (CCYYMMDD)             
PMAGPCDE  DIM       8      8        32    Program Code                       
PMAGICDE  DIM       7      7        40    Impairment Code (pmsimpaf)         
PMAGVERS  DIM       2      2        47    AN-SNAP Version (pmssnpaf)         
PMAGSNAP  DIM       3      3        49    AN-SNAP Classification (pmssnpaf)  
PMAGMEST  DIM       3      3        52    Mode of Episode Start (Cat px)     
PMAGMEEN  DIM       3      3        55    Mode of Episode End (Cat pw)       
PMAGFADM  DIM       1      1        58    First Admission for this Impairment
PMAGTIMP  DIM       1      1        59    Current Impairment due to Trauma   
PMAGDADM  DIM       8      8        60    Date of relevant acute admission   
PMAGTOCC  DIM       3      3        68    Time since onset of chronic conditi
PMAGEMOR  DIM       1      1        71    Existing Co-morbility              
PMAGCMR1  DIM       3      3        72    Co-morbidity 1                     
PMAGCMR2  DIM       3      3        75    Co-morbidity 2                     
PMAGCMR3  DIM       3      3        78    Co-morbidity 3                     
PMAGCMR4  DIM       3      3        81    Co-morbidity 4                     
PMAGCMP1  DIM       3      3        84    Complication 1                     
PMAGCMP2  DIM       3      3        87    Complication 2                     
PMAGCMP3  DIM       3      3        90    Complication 3                     
PMAGCMP4  DIM       3      3        93    Complication 4                     
PMAGASSO  DIM       1      1        96    Assesment Only                     
PMAGACPA  DIM       3      3        97    Accomm Prior to Impairment (Cat py)
PMAGACPD  DIM       3      3        100   Final Destination (Cat pz)         
PMAGLSPA  DIM       3      3        103   Carer Status Prior (Cat ar)        
PMAGLSPD  DIM       3      3        106   Carer Status Post Dischrge (Cat as)
PMAGEMST  DIM       3      3        109   Employment Status Prior (Cat KD)   
PMAGRFDT  DIM       8      8        112   Referral Date                      
PMAGDART  DIM       8      8        120   Date Assessed by Rehab Team        
PMAGSRPD  DIM       1      1        128   Svce Rcvd Prior - Domestic         
PMAGSRPS  DIM       1      1        129   Svce Rcvd Prior - Social           
PMAGSRPN  DIM       1      1        130   Svce Rcvd Prior - Nursing          
PMAGSRPA  DIM       1      1        131   Svce Rcvd Prior - Allied Health Car
PMAGSRPP  DIM       1      1        132   Svce Rcvd Prior - Personal Care    
PMAGSRPM  DIM       1      1        133   Svce Rcvd Prior - Meals            
PMAGSRPG  DIM       1      1        134   Svce Rcvd Prior - Prov of goods/equ
PMAGSRPT  DIM       1      1        135   Svce Rcvd Prior - Transport Service
PMAGSRPC  DIM       1      1        136   Svce Rcvd Prior - Case Management  
PMAGDRAE  DIM       8      8        137   Date of Relevant Acute Episode     
PMAGEMSA  DIM       3      3        145   Employment Status after Discharge  
PMAGDCRD  DIM       8      8        148   Date Clinically Ready for Discharge
PMAGSRAD  DIM       1      1        156   Svce Rcvd Post - Domestic Assistanc
PMAGSRAS  DIM       1      1        157   Svce Rcvd Post - Social            
PMAGSRAN  DIM       1      1        158   Svce Rcvd Post - Nursing           
PMAGSRAA  DIM       1      1        159   Svce Rcvd Post - Allied Health Care
PMAGSRAP  DIM       1      1        160   Svce Rcvd Post - Personal Care     
PMAGSRAM  DIM       1      1        161   Svce Rcvd Post - Meals             
PMAGSRAG  DIM       1      1        162   Svce Rcvd Post - Prov of goods/equi
PMAGSRAT  DIM       1      1        163   Svce Rcvd Post - Transport Services
PMAGSRAC  DIM       1      1        164   Svce Rcvd Post - Case Management   
PMAGDEFP  DIM       8      8        165   Date Emereged from PTA             
PMAGCAMN  DIM       1      1        173   Chronic Amnesiac                   
PMAGESAS  DIM       3      3        174   Episode Start ASIA Score A,B,C or D
PMAGESSC  DIM       3      3        177   Episode Start Level of Spinal Chord
PMAGEESC  DIM       3      3        180   Episode End Level of Spinal Chord I
PMAGVDEE  DIM       1      1        183   Ventilator Dependant at Episode End
PMAGEEAS  DIM       3      3        184   Episode End ASIA Score A,B,C or D  
PMAGDRCA  DIM       8      8        187   Date Ready For Casting             
PMAGPACS  DIM       3      3        195   Phase of Amputee Care at Episode St
PMAGDWPC  DIM       1      1        198   Delayed Wound Phase of Care during 
PMAGPPPC  DIM       1      1        199   Pre Prosthetic Phase of Care during
PMAGAPPC  DIM       1      1        200   Prosthetic Phase of Care during Epi
PMAGPACE  DIM       3      3        201   Phase of Amputee Care at Episode En
PMAGPROS  DIM       1      1        204   Prosthetic?                        
PMAGDFPF  DIM       8      8        205   Date First Prosthetic Fitting      
PMAGRDIF  DIM       3      3        213   Reason for Delay in Fitting        
PMAGDTUG  FORM      2.1    3        216   Discharge Timed Up and Go          
PMAGD06M  FORM      3.1    4        219   Discharge 6 Minute walk test       
PMAGD10M  FORM      2.1    3        223   Discharge 10 Metre Walk            
PMAGFRAI  DIM       3      3        226   Fraility (pre-morbid)              
PMAGPITD  DIM       1      1        229   Participation in Therapy from Day 1
PMAGF12M  DIM       1      1        230   Fallen last 12 Months              
PMAGWL12  DIM       1      1        231   Weight Loss >10% in last 12 Months 
PMAGDCRC  DIM       10     10       232   Date Clinically Ready for Rehab Car
PMAGIDES  DIM       3      3        242   Iterim Destination (Cat pz)        
PMAGUDT1  DIM       8      8        245   User Defined Date 1                
PMAGUDT2  DIM       8      8        253   User Defined Date 2                
PMAGUDT3  DIM       8      8        261   User Defined Date 3                
PMAGUCT1  DIM       3      3        269   User Defined Category 1            
PMAGUCT2  DIM       3      3        272   User Defined Category 2            
PMAGUCT3  DIM       3      3        275   User Defined Category 3            
PMAGUCT4  DIM       3      3        278   User Defined Category 4            
PMAGUCT5  DIM       3      3        281   User Defined Category 5            
PMAGUYN1  DIM       1      1        284   User Defined yes/no 1              
PMAGUYN2  DIM       1      1        285   User Defined yes/no 2              
PMAGUYN3  DIM       1      1        286   User Defined yes/no 3              
PMAGUYN4  DIM       1      1        287   User Defined yes/no 4              
PMAGUYN5  DIM       1      1        288   User Defined yes/no 5              
PMAGCDAT  DIM       8      8        289   Date record Created                
PMAGCTIM  DIM       8      8        297   Time record created                
PMAGCUID  DIM       10     10       305   User who created record            
PMAGUDAT  DIM       8      8        315   Date record updated                
PMAGUTIM  DIM       8      8        323   Time record created                
PMAGUUID  DIM       10     10       331   User who updated record            
PMAGDUGO  DIM       4      4        341   Discharge timed up and go test     
.                                         (secs)                               
PMAGDWLK  DIM       4      4        345   Disch. 10 metre walk +/- aid test  
.                                         (secs)                               
PMAGSPAR  DIM       92     92       349   spare                              
.
.End of Record                      441  
.
