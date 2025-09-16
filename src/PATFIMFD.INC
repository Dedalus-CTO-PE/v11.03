. V10.06.01 17/03/2015 PHA C-271541 Added new assessment fields                 
. V10.00.01 07/05/2010 SA CAR 220289                                            
. *----------------------------------------------------------------------
. * Include Name  :   PATFIMFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   FIM Assessment Scores              
. *
. * File Type     :   SQL
. *
. * File Name     :   patfimaf.dat
. *
. * Index Values  :   KEY24                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATFIMA1   IFILE    SQL, FIXED=1275, KEY="U1-8,9-16,17-24"                      
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTFIVISN  DIM       8      8        1     Visit Number                       
PTFIDATE  DIM       8      8        9     Date of Assessment (ccyymmdd)      
PTFITIME  DIM       8      8        17    Time of Assessment (hh:mm:ss)      
PTFITYPE  DIM       1      1        25    Assessment Type                    
.                                             A = Admission                    
.                                             D = Discharge                    
.                                             P = Progress                     
.                                             V = VINAH                        
PTFIEATS  FORM      2      2        26    Eating Score                       
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFIEATG  FORM      2      2        28    Eating Goal                        
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFIEATC  DIM       50     50       30    Eating Comments                    
PTFIGRMS  FORM      2      2        80    Grooming Score                     
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFIGRMG  FORM      2      2        82    Grooming Goal                      
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFIGRMC  DIM       50     50       84    Grooming Comments                  
PTFIBTHS  FORM      2      2        134   Bathing Score                      
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFIBTHG  FORM      2      2        136   Bathing Goal                       
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFIBTHC  DIM       50     50       138   Bathing Comments                   
PTFIUPBS  FORM      2      2        188   Dressing Upper Body Score          
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFIUPBG  FORM      2      2        190   Dressing Upper Body Goal           
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFIUPBC  DIM       50     50       192   Dressing Upper Body Comments       
PTFILWBS  FORM      2      2        242   Dressing Lower Body Score          
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFILWBG  FORM      2      2        244   Dressing Lower Body Goal           
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFILWBC  DIM       50     50       246   Dressing Lower Body Comments       
PTFITLTS  FORM      2      2        296   Toileting Score                    
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFITLTG  FORM      2      2        298   Toileting Goal                     
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFITLTC  DIM       50     50       300   Toileting Comments                 
PTFIBLMS  FORM      2      2        350   Bladder Management Score           
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFIBLMG  FORM      2      2        352   Bladder Management Goal            
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFIBLMC  DIM       50     50       354   Bladder Management Comments        
PTFIBWMS  FORM      2      2        404   Bowel Management Score             
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFIBWMG  FORM      2      2        406   Bowel Management Goal              
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFIBWMC  DIM       50     50       408   Bowel Management Comments          
PTFITBDS  FORM      2      2        458   Transfers - Bed/Chair/W'Chair Score
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFITBDG  FORM      2      2        460   Transfers - Bed/Chair/W'Chair Goal 
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFITBDC  DIM       50     50       462   Transfer-Bed/Chair/W'Chair Comments
PTFITTLS  FORM      2      2        512   Transfers - Toilet Score           
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFITTLG  FORM      2      2        514   Transfers - Toilet Goal            
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFITTLC  DIM       50     50       516   Transfers - Toilet Comments        
PTFITBTS  FORM      2      2        566   Transfers - Bath/Shower Score      
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFITBTG  FORM      2      2        568   Transfers - Bath/Shower Goal       
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFITBTC  DIM       50     50       570   Transfers - Bath/Shower Comments   
PTFILOCD  DIM       3      3        620   Location Code (Category SM)        
PTFILOCS  FORM      2      2        623   Locomotion Score                   
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFILOCG  FORM      2      2        625   Locomotion Goal                    
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFILOCC  DIM       50     50       627   Locomotion Comments                
PTFISTRS  FORM      2      2        677   Stairs Score                       
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFISTRG  FORM      2      2        679   Stairs Goal                        
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFISTRC  DIM       50     50       681   Stairs Comments                    
PTFICOCD  DIM       3      3        731   Comprehension Code (Category SJ)   
PTFICOMS  FORM      2      2        734   Comprehension Score                
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFICOMG  FORM      2      2        736   Comprehension Goal                 
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFICOMC  DIM       50     50       738   Comprehension Comments             
PTFIEXCD  DIM       3      3        788   Expression Code (Category SK)      
PTFIEXPS  FORM      2      2        791   Expression Score                   
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFIEXPG  FORM      2      2        793   Expression Goal                    
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFIEXPC  DIM       50     50       795   Expression Comments                
PTFISCIS  FORM      2      2        845   Social Interaction Score           
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFISCIG  FORM      2      2        847   Social Interaction Goal            
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFISCIC  DIM       50     50       849   Social Interaction Comments        
PTFIPRBS  FORM      2      2        899   Problem Solving Score              
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFIPRBG  FORM      2      2        901   Problem Solving Goal               
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFIPRBC  DIM       50     50       903   Problem Solving Comments           
PTFIMEMS  FORM      2      2        953   Memory Score                       
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFIMEMG  FORM      2      2        955   Memory Goal                        
.                                            Helper                            
.                                              1 = Total Assistance            
.                                              2 = Maximal Assistance          
.                                              3 = Moderate Assistance         
.                                              4 = Minimal Assistance          
.                                              5 = Supervision or Setup        
.                                            No Helper                         
.                                              6 = Modified Independence       
.                                              7 = Complete Independence       
PTFIMEMC  DIM       50     50       957   Memory Comments                    
PTFIASES  DIM       1      1        1007  Assessment Only                    
.                                             0 or Blank = No                  
.                                             1 = Yes                          
PTFIASCD  DIM       10     10       1008  Assessor's Code (pmshcpaf)         
PTFIASDN  DIM       3      3        1018  Assessor's Designation (Cat ad)    
PTFINSCD  DIM       10     10       1021  Nurse Code (oprnuraf)              
PTFINSID  DIM       10     10       1031  Nurse User Id (websecaf)           
PTFINSDT  DIM       8      8        1041  Date Nurse Updated rec. (ccyymmdd) 
PTFINSTM  DIM       8      8        1049  Time Nurse Updated rec. (hh:mm:ss) 
PTFIPHCD  DIM       10     10       1057  Physiotherapist Code (pmshcpaf)    
PTFIPHDT  DIM       8      8        1067  Physio. Date Updated rec.(ccyymmdd)
PTFIPHTM  DIM       8      8        1075  Physio. Time Updated rec.(hh:mm:ss)
PTFIOTCD  DIM       10     10       1083  Occup. Therapist Code (pmshcpaf)   
PTFIOTDT  DIM       8      8        1093  Occ. Ther. Date Updated (ccyymmdd) 
PTFIOTTM  DIM       8      8        1101  Occ. Ther. Time Updated (hh:mm:ss) 
PTFIDELT  DIM       1      1        1109  Deletion Flag                      
.                                             0 or Blank = Not deleted         
.                                             1 = Deleted                      
PTFICUID  DIM       10     10       1110  WEB User Id Created (websecaf)     
PTFICDAT  DIM       8      8        1120  Date Record Created (ccyymmdd)     
PTFICTIM  DIM       8      8        1128  Time record Created (hh:mm:ss)     
PTFIUUID  DIM       10     10       1136  WEB User Id Updated (websecaf)     
PTFIUDAT  DIM       8      8        1146  Date Record Updated (ccyymmdd)     
PTFIUTIM  DIM       8      8        1154  Time Record Updated (hh:mm:ss)     
PTFIDUID  DIM       10     10       1162  WEB User Id Deleted (websecaf)     
PTFIDDAT  DIM       8      8        1172  Date Record Deleted (ccyymmdd)     
PTFIDTIM  DIM       8      8        1180  Time Record Deleted (hh:mm:ss)     
PTFIIMPC  DIM       7      7        1188  Impairment Code                    
PTFICPLT  DIM       1      1        1195  Completed                          
.                                         0 or blank = No                      
.                                         1 = Yes                              
PTFIFUID  DIM       10     10       1196  User Id who completed assessment   
PTFIFDTE  DIM       8      8        1206  Date assessment completed          
PTFIFTME  DIM       8      8        1214  Time assessment completed          
PTFIDRES  DIM       3      3        1222  Reason for delete                  
PTFISPAR  DIM       50     50       1225  Spare                              
.
.End of Record                      1275 
.
