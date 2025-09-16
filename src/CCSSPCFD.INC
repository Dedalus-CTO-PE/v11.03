. V5.08.001 02/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSSPCFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Split Cost Model Master            
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsspcaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSSPCA1   IFILE    SQL, FIXED=105, KEY="U1-3"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCSPMID   DIM       3      3        1     Split Cost Model ID                
CCSPDES   DIM       35     35       4     Description                        
CCSPFYR   DIM       4      4        39    From Year                          
CCSPFPR   DIM       2      2        43    From Period                        
CCSPTYR   DIM       4      4        45    To Year                            
CCSPTPR   DIM       2      2        49    To Period                          
CCSPMOD   DIM       4      4        51    Cost Model (Blank = Actuals)       
CCSPSPA   DIM       50     50       55    Spare                              
.
.End of Record                      105  
.
