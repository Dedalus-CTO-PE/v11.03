. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEAPPMFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Payment Model Parameters           
. *
. * File Type     :   SQL
. *
. * File Name     :   ceappmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEAPPMA1   IFILE    SQL, FIXED=276, KEY="U1-1"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CEPPIND   DIM       1      1        1     Model Number 1-9                   
CEPPDES   DIM       35     35       2     Description                        
CEPPNURF  FORM      4.4    5        37    Fixed Nursing                      
CEPPTHEF  FORM      4.4    5        42    Fixed Theatre                      
CEPPPHAF  FORM      4.4    5        47    Fixed Pharmacy                     
CEPPICUF  FORM      4.4    5        52    Fixed Critical Care                
CEPPALLF  FORM      4.4    5        57    Fixed Allied Health                
CEPPMSSF  FORM      4.4    5        62    Fixed Medical & Surgical Supplies  
CEPPTAXF  FORM      4.4    5        67    Fixed Taxes                        
CEPPOVHF  FORM      4.4    5        72    Fixed Overheads                    
CEPPCATF  FORM      4.4    5        77    Fixed Catering                     
CEPPDEPF  FORM      4.4    5        82    Fixed Depreciation                 
CEPPOTHF  FORM      4.4    5        87    Fixed Other                        
CEPPNURV  FORM      4.4    5        92    Var Nursing                        
CEPPTHEV  FORM      4.4    5        97    Var Theatre                        
CEPPPHAV  FORM      4.4    5        102   Var Pharmacy                       
CEPPICUV  FORM      4.4    5        107   Var Critical Care                  
CEPPALLV  FORM      4.4    5        112   Var Allied Health                  
CEPPMSSV  FORM      4.4    5        117   Var Medical & Surgical Supplies    
CEPPTAXV  FORM      4.4    5        122   Var Taxes                          
CEPPOVHV  FORM      4.4    5        127   Var Overheads                      
CEPPCATV  FORM      4.4    5        132   Var Catering                       
CEPPDEPV  FORM      4.4    5        137   Var Depreciation                   
CEPPOTHV  FORM      4.4    5        142   Var Other                          
CEPPPRO   FORM      4.4    5        147   Profit Margin                      
CEPPICU   FORM      6.2    5        152   ICU Per Day Payment Type 1         
CEPPINCI  FORM      1      2        157   Include ICU in DRG per Diem 0=No   
CEPPUTH   FORM      1      2        159   Use Patients Actual Theatre 0=No   
CEPPB01   FORM      6.2    5        161   Band 1 Payment                     
CEPPB02   FORM      6.2    5        166   Band 2 Payment                     
CEPPB03   FORM      6.2    5        171   Band 3 Payment                     
CEPPB04   FORM      6.2    5        176   Band 4 Payment                     
CEPPB05   FORM      6.2    5        181   Band 5 Payment                     
CEPPB06   FORM      6.2    5        186   Band 6 Payment                     
CEPPB07   FORM      6.2    5        191   Band 7 Payment                     
CEPPB08   FORM      6.2    5        196   Band 8 Payment                     
CEPPB09   FORM      6.2    5        201   Band 9 Payment                     
CEPPB10   FORM      6.2    5        206   Band 10 Payment                    
CEPPB11   FORM      6.2    5        211   Band 11 Payment                    
CEPPB12   FORM      6.2    5        216   Band 12 Payment                    
CEPPB13   FORM      6.2    5        221   Band 13 Payment                    
CEPPB14   FORM      6.2    5        226   Band 14 Payment                    
CEPPB15   FORM      6.2    5        231   Band 15 Payment                    
CEPPSPA   DIM       40     40       236   Spare                              
.
.End of Record                      276  
.
