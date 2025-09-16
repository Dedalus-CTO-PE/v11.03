. V9.09.001 15/01/2008 DS  Created FD  CAR 153384                            
. V9.09.002 15/05/2008 JH  Added PMFIPHCA and PMFIEDVA                       
. *----------------------------------------------------------------------
. * Include Name  :   PMSFIDFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Fees Information Table             
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsfidaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSFIDA1   IFILE    SQL, FIXED=494, KEY="U1-12,13-15"                           
PMSFIDA2   IFILE    SQL, FIXED=494, KEY="U16-23,1-12,13-15"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMFIFINO  DIM       12     12       1     Fee Information Number             
PMFIUNIQ  DIM       3      3        13    Unique Count                       
PMFIURNO  DIM       8      8        16    U/R Number                         
PMFIADMN  DIM       8      8        24    Admission Number                   
PMFIADAT  DIM       8      8        32    Admission Date (ccyymmdd)          
PMFISTAY  DIM       3      3        40    Number of Nights Stay              
PMFIEDDT  DIM       8      8        43    Expected Discharge Date (ccyymmdd) 
PMFICLTY  DIM       3      3        51    Claim Type (Cat. CL)               
PMFIHFND  DIM       6      6        54    Health Fund                        
PMFIHFTB  DIM       8      8        60    Health Fund Table                  
PMFISGAM  FORM      6.2    5        68    Surgeon Gap Amount                 
PMFIAGAM  FORM      6.2    5        73    Assistant Gap Amount               
PMFIANGA  FORM      6.2    5        78    Anaesthetist Gap Amount            
PMFIPHYI  FORM      6.2    5        83    Physiotherapy (Initial Visit)      
PMFIPHYS  FORM      6.2    5        88    Physiotherapy (Subsequent Visits)  
PMFIXRAY  FORM      6.2    5        93    X-Rays, Pathology                  
PMFISPLB  FORM      6.2    5        98    Splints/Brace                      
PMFIMISC  FORM      6.2    5        103   Miscellaneous                      
PMFIPHAR  FORM      6.2    5        108   Pharmacy                           
PMFIPROS  FORM      6.2    5        113   Prosthesis                         
PMFIHEXC  FORM      6.2    5        118   Hospital Excess                    
PMFIFAST  DIM       50     50       123   Fasting Information                
PMFIDEDT  DIM       5      5        173   Day Surgery Expected Disch.Time    
PMFIEANP  DIM       10     10       178   Expected Anaesthetics Practice     
PMFITHF1  DIM       9      9        188   Theatre Fee Code 1                 
PMFITHF2  DIM       9      9        197   Theatre Fee Code 2                 
PMFITHF3  DIM       9      9        206   Theatre Fee Code 3                 
PMFITHF4  DIM       9      9        215   Theatre Fee Code 4                 
PMFITHF5  DIM       9      9        224   Theatre Fee Code 5                 
PMFITHF6  DIM       9      9        233   Theatre Fee Code 6                 
PMFIMCC1  DIM       9      9        242   Miscellaneous Charge Code 1        
PMFIMCC2  DIM       9      9        251   Miscellaneous Charge Code 2        
PMFIMCC3  DIM       9      9        260   Miscellaneous Charge Code 3        
PMFIBTYP  DIM       3      3        269   Bed Type (Cat BT)
PMFIATYP  DIM       3      3        272   Admission Type (Cat A)
PMFIAGST  DIM       1      1        275   Accommodation GST                  
PMFIECOS  FORM      12.2   8        276   Expected Cost of Surgery           
PMFITPOA  FORM      12.2   8        284   Total Payable on Admission         
PMFIEACP  FORM      12.2   8        292   Expected Accomm. Charge - Patient  
PMFIEACH  FORM      12.2   8        300   Expected Accomm. Charge - Hospital 
PMFIETCP  FORM      12.2   8        308   Expected Theatre Charge - Patient  
PMFIETCH  FORM      12.2   8        316   Expected Theatre Charge - Hospital 
PMFIEMCP  FORM      12.2   8        324   Expected Miscel. Charge - Patient  
PMFIEMCH  FORM      12.2   8        332   Expected Miscel. Charge - Hospital 
PMFIQUA1  FORM      3      3        340   Item Quantity 1                    
PMFIQUA2  FORM      3      3        343   Item Quantity 2                    
PMFIQUA3  FORM      3      3        346   Item Quantity 3                    
PMFITHQ1  FORM      3      3        349   Theatre Quantity 1                 
PMFITHQ2  FORM      3      3        352   Theatre Quantity 2                 
PMFITHQ3  FORM      3      3        355   Theatre Quantity 3                 
PMFITHQ4  FORM      3      3        358   Theatre Quantity 4                 
PMFITHQ5  FORM      3      3        361   Theatre Quantity 5                 
PMFITHQ6  FORM      3      3        364   Theatre Quantity 6                 
PMFIITG1  FORM      6.2    5        367   Item GST 1                         
PMFIITG2  FORM      6.2    5        372   Item GST 2                         
PMFIITG3  FORM      6.2    5        377   Item GST 3                         
PMFITHG1  FORM      6.2    5        382   Theatre Fee GST 1                  
PMFITHG2  FORM      6.2    5        387   Theatre Fee GST 2                  
PMFITHG3  FORM      6.2    5        392   Theatre Fee GST 3                  
PMFITHG4  FORM      6.2    5        397   Theatre Fee GST 4                  
PMFITHG5  FORM      6.2    5        402   Theatre Fee GST 5                  
PMFITHG6  FORM      6.2    5        407   Theatre Fee GST 6                  
PMFICDAT  DIM       8      8        412   Date Record Created (CCYYMMDD)     
PMFICTIM  DIM       8      8        420   Time Record Created (HH:MM:SS)     
PMFICUID  DIM       10     10       428   WEB User ID Created (websecaf)     
PMFIUDAT  DIM       8      8        438   Update Date (CCYYMMDD)             
PMFIUTIM  DIM       8      8        446   Update Time (HH:MM:SS)             
PMFIUUID  DIM       10     10       454   WEB User ID Updated (websecaf)     
PMFIPHCA  FORM      6.2    5        464   Physician Consultation Amount      
PMFIEDVA  FORM      6.2    5        469   Educational DVD Amount             
PMFISPAR  DIM       20     20       474   Spare                              
.
.End of Record                      494  
.
