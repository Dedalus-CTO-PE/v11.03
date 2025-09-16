. V9.12.01 25/08/2009 SS  Added new Waiting list extract fields                 
. V9.02.01  30/10/2001 Ashwin                                                   
. V9.00.B01 31/05/2001 EC                                                       
. *----------------------------------------------------------------------
. * Include Name  :   WATEXTFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   Waiting List Extracts              
. *
. * File Type     :   SQL
. *
. * File Name     :   watextaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATEXTA1   IFILE    SQL, FIXED=409, KEY="U1-4"                                  
WATEXTA2   IFILE    SQL, FIXED=409, KEY="U5-39,1-4"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTEXCODE  DIM       4      4        1     Code                               
WTEXDESC  DIM       35     35       5     Description                        
WTEXFLDT  DIM       8      8        40    From List Date                     
WTEXTLDT  DIM       8      8        48    To List Date                       
WTEXFVDT  DIM       8      8        56    From Review Date                   
WTEXTVDT  DIM       8      8        64    To Review Date                     
WTEXFSDT  DIM       8      8        72    From Sch Date                      
WTEXTSDT  DIM       8      8        80    To Sch Date                        
WTEXFRDT  DIM       8      8        88    From Removal Date                  
WTEXTRDT  DIM       8      8        96    To Removal Date                    
WTEXUNT   DIM       3      3        104   Unit (WU)                          
WTEXPRI   DIM       3      3        107   Priority (TP)                      
WTEXNOT   DIM       3      3        110   Short Notice (WS)                  
WTEXPGP   DIM       3      3        113   Procedure Group (WG)               
WTEXRMR   DIM       3      3        116   Removal Reason (WR/BC)             
WTEXRGP   DIM       8      8        119   Referring GP                       
WTEXCON   DIM       6      6        127   Consultant                         
WTEXPRO   DIM       9      9        133   Procedure                          
WTEXSRC   DIM       3      3        142   Source of Referral                 
WTEXUD1   DIM       3      3        145   User Def 1 (W1)                    
WTEXUD2   DIM       3      3        148   User Def 2 (W2)                    
WTEXUD3   DIM       3      3        151   User Def 3 (W3)                    
WTEXUD4   DIM       3      3        154   User Def 4 (W4)                    
WTEXUD5   DIM       3      3        157   User Def 5 (X5)                    
WTEXUD6   DIM       3      3        160   User Def 6 (X6)                    
WTEXUD7   DIM       3      3        163   User Def 7 (X7)                    
WTEXUD8   DIM       3      3        166   User Def 8 (X8)                    
WTEXSTA   DIM       1      1        169   Waiting List Status 0=All          
WTEXANL1  DIM       3      3        170   Analysis Level 1                   
WTEXANL2  DIM       3      3        173   Analysis Level 2                   
WTEXANL3  DIM       3      3        176   Analysis Level 3                   
WTEXANL4  DIM       3      3        179   Analysis Level 4                   
WTEXANM1  DIM       3      3        182   Analysis Measures 1                
WTEXANM2  DIM       3      3        185   Analysis Measures 2                
WTEXANM3  DIM       3      3        188   Analysis Measures 3                
WTEXPOWD  DIM       3      3        191   Expected Post Op Ward (patwr1af)   
WTEXIDYC  DIM       3      3        194   Intended Day Case (Cat XB)         
WTEXLLSC  DIM       3      3        197   Last Letter Sent Code              
WTEXCRTL  DIM       1      1        200   Check Response to letter 0=No 1=Yes
WTEXADMW  DIM       3      3        201   Admitting Point (patwr1af)         
WTEXINCD  DIM       1      1        204   Include Deceased 0=No 1=Yes        
WTEXOVON  DIM       1      1        205   Overdue Patients Only 0=No 1=Yes   
WTEXCTYP  DIM       3      3        206   Claim Code Cat CL                  
WTEXLIST  DIM       3      3        209   Listing Status (Cat VL)            
WTEXFURN  DIM       8      8        212   U/R Number From                    
WTEXTURN  DIM       8      8        220   U/R Number To                      
WTEXFPRO  DIM       9      9        228   Procedure From                     
WTEXTPRO  DIM       9      9        237   Procedure To                       
WTEXFPRS  DIM       1      1        246   Procedure Status From              
WTEXTPRS  DIM       1      1        247   Procedure Status To                
WTEXFUNI  DIM       3      3        248   Unit From (Cat WU)                 
WTEXTUNI  DIM       3      3        251   Unit To (Cat WU)                   
WTEXFCON  DIM       10     10       254   Consultant From                    
WTEXTCON  DIM       10     10       264   Consultant To                      
WTEXFSES  FORM      5      4        274   Estimated Stay From                
WTEXTSES  FORM      5      4        278   Estimated Stay To                  
WTEXADTY  DIM       3      3        282   Admission Type (Cat A)             
WTEXRSTA  DIM       3      3        285   Resident Status (Cat T)            
WTEXFPAD  DIM       8      8        288   Pre-assessment Date From           
WTEXTPAD  DIM       8      8        296   Pre-assessment Date To             
WTEXFSYD  DIM       8      8        304   Date on System From                
WTEXTSYD  DIM       8      8        312   Date on System To                  
WTEXFSUD  DIM       8      8        320   Date on Suspension From            
WTEXTSUD  DIM       8      8        328   Date on Suspension To              
WTEXFOSD  DIM       8      8        336   Date off Suspension From           
WTEXTOSD  DIM       8      8        344   Date off Suspension To             
WTEXSPA   DIM       57     57       352   Spare                              
.
.End of Record                      409  
.
