. V11.01.02 11/08/2021 DS C-0910134 Changed description of OPARUT07 and OPARUT13
. V11.01.01 13/04/2021 TT C-0895165 Added Six times fields. OPARADST, OPARADET  
. V                                  OPARUT16, OPARUT17, OPARUT18 and OPARUT19  
. V10.12.01 16/07/2018 SA C-0851661 Updated mising field descriptions and values
. V10.08.01 23/06/2016 EC  Changed description of OPARUT02                      
. V9.11.001 19/01/2009 EC  Added OPARUYN1 and OPARUYN2 CAR 169339               
. V9.00.001 25/05/2001 dc  created                                              
. *----------------------------------------------------------------------
. * Include Name  :   OPRARDFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Operating Arrival & Recovery       
. *
. * File Type     :   SQL
. *
. * File Name     :   oprardaf.dat
. * Audit Name    :   opraudar.dat
. *
. * Index Values  :   KEY10                                                  
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
OPRAUDAR   IFILE    SQL, FIXED=664, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPARAUDD  DIM       8      8        1     Date of Change
OPARAUDT  DIM       8      8        9     Time of Change
OPARAUDP  DIM       2      2        17    Port
OPARAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
OPARAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
OPARAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
OPRARDA1   IFILE    SQL, FIXED=639, KEY="U1-10"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPARUNID  DIM       10     10       1     Unique ID.                         
OPARATIM  DIM       8      8        11    Arrival Time (hh:mm:ss)            
OPARANUR  DIM       6      6        19    Admitting Nurse                    
OPARRLAT  DIM       3      3        25    Reason Patient Late (Cat Os)       
OPARPCLC  DIM       1      1        28    Pre-op Check List Complete         
.                                         0 = No                               
.                                         1 = Yes                              
OPARCSFS  DIM       1      1        29    Consent Form Signed                
.                                         0 = No                               
.                                         1 = Yes                              
OPARMDRE  DIM       1      1        30    Medical Records                    
.                                         0 = No                               
.                                         1 = Yes                              
OPARXRAY  DIM       1      1        31    X-Ray                              
.                                         0 = No                               
.                                         1 = Yes                              
OPARBLEM  DIM       1      1        32    Bladder Empty                      
.                                         0 = No                               
.                                         1 = Yes                              
OPARMUPJ  DIM       1      1        33    Make Up & Jewelery Removed         
.                                         0 = No                               
.                                         1 = Yes                              
OPARPMED  DIM       1      1        34    Pre-medication Given               
.                                         0 = No                               
.                                         1 = Yes                              
OPARALCK  DIM       1      1        35    Allergies checked                  
.                                         0 = No                               
.                                         1 = Yes                              
OPARPROT  DIM       40     40       36    Prosthesis                         
OPARUC01  DIM       3      3        76    User Defined Code 1 (Cat oa)       
OPARUC02  DIM       3      3        79    User Defined Code 2 (Cat ob)       
OPARUC03  DIM       3      3        82    Recovery Bay (Cat oc)              
OPARUC04  DIM       3      3        85    Acuity (Cat od)                    
OPARUC05  DIM       3      3        88    User Defined Code 5 (Cat oe)       
OPARUC06  DIM       3      3        91    User Defined Code 6 (Cat of)       
OPARUC07  DIM       3      3        94    User Defined Code 7 (Cat og)       
OPARUC08  DIM       3      3        97    User Defined Code 8 (Cat oh)       
OPARUC09  DIM       3      3        100   User Defined Code 9 (Cat oi)       
OPARUC10  DIM       3      3        103   User Defined Code 10 (Cat oj)      
OPARUY01  DIM       1      1        106   User Defined Y/N 1                 
.                                         0 = No                               
.                                         1 = Yes                              
OPARUY02  DIM       1      1        107   User Defined Y/N 2                 
.                                         0 = No                               
.                                         1 = Yes                              
OPARUY03  DIM       1      1        108   User Defined Y/N 3                 
.                                         0 = No                               
.                                         1 = Yes                              
OPARUY04  DIM       1      1        109   User Defined Y/N 4                 
.                                         0 = No                               
.                                         1 = Yes                              
OPARUY05  DIM       1      1        110   User Defined Y/N 5                 
.                                         0 = No                               
.                                         1 = Yes                              
OPARUT01  DIM       8      8        111   Surgical Time Out (hh:mm:ss)       
OPARUT02  DIM       8      8        119   Clinical Review Date (ccyymmdd)    
OPARUT03  DIM       8      8        127   Clinical Review Time (hh:mm:ss)    
OPARUT04  DIM       8      8        135   User Defined Time Field 4          
OPARUT05  DIM       8      8        143   User Defined Time Field 5          
OPARUF01  FORM      6      4        151   Blood Loss                         
OPARUF02  FORM      6      4        155   User Defined Form Field 2          
OPARUF03  FORM      6      4        159   User Defined Form Field 3          
OPARUF04  FORM      6      4        163   User Defined Form Field 4          
OPARUF05  FORM      6      4        167   User Defined Form Field 5          
OPARTCAL  DIM       8      8        171   Time Called For                    
OPARUIAR  DIM       10     10       179   User ID for Arrival (websecaf)     
OPARANAP  DIM       8      8        189   Anaesthetic Prep Start (hh:mm:ss)  
OPARANAS  DIM       8      8        197   Anaesthetic Start (hh:mm:ss)       
OPARANAE  DIM       8      8        205   Anaesthetic End (hh:mm:ss)         
OPARITYP  DIM       3      3        213   Type of Intubation (category)      
OPARUC11  DIM       3      3        216   ASA Score (Cat ok)                 
OPARUC12  DIM       3      3        219   Anaesthetic Delay Reason (Cat ol)  
OPARUC13  DIM       3      3        222   User Defined Code 13 (Cat om)      
OPARUC14  DIM       3      3        225   User Defined Code 14 (Cat on)      
OPARUC15  DIM       3      3        228   User Defined Code 15 (Cat oo)      
OPARUC16  DIM       3      3        231   User Defined Code 16 (Cat op)      
OPARUC17  DIM       3      3        234   User Defined Code 17 (Cat oq)      
OPARUC18  DIM       3      3        237   User Defined Code 18 (Cat or)      
OPARUC19  DIM       3      3        240   User Defined Code 19 (Cat os)      
OPARUC20  DIM       3      3        243   User Defined Code 20 (Cat ot)      
OPARUY06  DIM       1      1        246   User Defined Y/N 6                 
.                                         0 = No                               
.                                         1 = Yes                              
OPARUY07  DIM       1      1        247   User Defined Y/N 7                 
.                                         0 = No                               
.                                         1 = Yes                              
OPARUY08  DIM       1      1        248   User Defined Y/N 8                 
.                                         0 = No                               
.                                         1 = Yes                              
OPARUY09  DIM       1      1        249   User Defined Y/N 9                 
.                                         0 = No                               
.                                         1 = Yes                              
OPARUY10  DIM       1      1        250   User Defined Y/N 10                
.                                         0 = No                               
.                                         1 = Yes                              
OPARUT06  DIM       8      8        251   Ready For Recovery                 
.                                         (Parameter Controlled)               
OPARUT07  DIM       8      8        259   Anaesthetic Time Out (hh:mm:ss)    
OPARUT08  DIM       8      8        267   Ready For Recovery                 
.                                         (Parameter controlled)               
OPARUT09  DIM       8      8        275   Ready For Recovery                 
.                                         (Parameter controlled)               
OPARUT10  DIM       8      8        283   Ready For Recovery                 
.                                         (Parameter controlled)               
OPARUF06  FORM      6      4        291   User Defined Form Field 6          
OPARUF07  FORM      6      4        295   User Defined Form Field 7          
OPARUF08  FORM      6      4        299   User Defined Form Field 8          
OPARUF09  FORM      6      4        303   User Defined Form Field 9          
OPARUF10  FORM      6      4        307   User Defined Form Field 10         
OPARUANA  DIM       10     10       311   User ID for Anaesthetic (websecaf) 
OPARTIRF  DIM       8      8        321   Time in Recovery - Front (hh:mm:ss)
OPARNUF1  DIM       6      6        329   Nurse 1 Attending Patient - Front  
OPARNUF2  DIM       6      6        335   Nurse 2 Attending Patient - Front  
OPARTIRB  DIM       8      8        341   Time in Recovery - Back (hh:mm:ss) 
OPARNUB1  DIM       6      6        349   Nurse 1 Attending Patient - Back   
OPARNUB2  DIM       6      6        355   Nurse 2 Attending Patient - Back   
OPARTIRD  DIM       8      8        361   Time in Recovery - Day Procedure   
OPARNUD1  DIM       6      6        369   Nurse 1 Attending Patient - Day    
OPARNUD2  DIM       6      6        375   Nurse 2 Attending Patient - Day    
OPARTETC  DIM       8      8        381   Time Exit Theatre Compl. (hh:mm:ss)
OPARUREC  DIM       10     10       389   User ID for Recovery (websecaf)    
OPARTEXP  DIM       8      8        399   Time Patient Died (hh:mm:ss)       
OPARTICU  DIM       8      8        407   Time Patient Went to ICU (hh:mm:ss)
OPARRDCD  DIM       3      3        415   Recovery Delay Code (Cat Ou)       
OPARTIDP  DIM       8      8        418   Ready to Depart Time (hh:mm:ss)    
OPARUC21  DIM       3      3        426   Reason For Overnight (Cat ou)      
OPARUC22  DIM       3      3        429   User Defined Code 22 (Cat ov)      
OPARUC23  DIM       3      3        432   User Defined Code 23 (Cat ow)      
OPARUC24  DIM       3      3        435   User Defined Code 24 (Cat ox)      
OPARUC25  DIM       3      3        438   User Defined Code 25 (Cat oy)      
OPARUC26  DIM       3      3        441   User Defined Code 26 (Cat oz)      
OPARUC27  DIM       3      3        444   User Defined Code 27 (Cat oA)      
OPARUC28  DIM       3      3        447   User Defined Code 28 (Cat oB)      
OPARUC29  DIM       3      3        450   User Defined Code 29 (Cat oC)      
OPARUC30  DIM       3      3        453   User Defined Code 30 (Cat oD)      
OPARUY11  DIM       1      1        456   User Defined Y/N 11                
.                                         0 = No                               
.                                         1 = Yes                              
OPARUY12  DIM       1      1        457   User Defined Y/N 12                
.                                         0 = No                               
.                                         1 = Yes                              
OPARUY13  DIM       1      1        458   User Defined Y/N 13                
.                                         0 = No                               
.                                         1 = Yes                              
OPARUY14  DIM       1      1        459   User Defined Y/N 14                
.                                         0 = No                               
.                                         1 = Yes                              
OPARUY15  DIM       1      1        460   User Defined Y/N 15                
.                                         0 = No                               
.                                         1 = Yes                              
OPARUT11  DIM       8      8        461   User Defined Time Field 11         
OPARUT12  DIM       8      8        469   User Defined Time Field 12         
OPARUT13  DIM       8      8        477   User Defined Time Field 13         
OPARUT14  DIM       8      8        485   User Defined Time Field 14         
OPARUT15  DIM       8      8        493   User Defined Time Field 15         
OPARUF11  FORM      6      4        501   User Defined Form Field 11         
OPARUF12  FORM      6      4        505   User Defined Form Field 12         
OPARUF13  FORM      6      4        509   User Defined Form Field 13         
OPARUF14  FORM      6      4        513   User Defined Form Field 14         
OPARUF15  FORM      6      4        517   User Defined Form Field 15         
OPARUYN1  DIM       10     10       521   User Defined Nurse 1               
OPARUYN2  DIM       10     10       531   User Defined Nurse 2               
OPARADST  DIM       8      8        541   Admitting Nurse Start Time         
OPARADET  DIM       8      8        549   Admitting Nurse End Time           
OPARUT16  DIM       8      8        557   User Defined Time Field 16         
OPARUT17  DIM       8      8        565   User Defined Time Field 17         
OPARUT18  DIM       8      8        573   User Defined Time Field 18         
OPARUT19  DIM       8      8        581   User Defined Time Field 19         
OPARSPAR  DIM       50     50       589   Spare Variable                     
.
.End of Record                      639  
.
