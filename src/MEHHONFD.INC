. *----------------------------------------------------------------------------
. * Include Name  :  MEHHONFD.INC
. *
. * Function      :  File Def'n Include for Mental Health                      
. *                  MH HONOS Reporting Table           
. *
. * File Type     :  SQL
. *
. * File Name     :  mehhonaf.dat
. *
. * Modifications :
. *    
. *       V10.06.01  17/03/2015  Patrick Adair           CAR 271541
. *                  Added delete assessment fields
. *       V10.05.01  20/08/2014  Ania P                  CAR 303210
. *                  Added fields MHHNRFMV to MHHNURNO
. *        V9.08.01  28/08/2007  JH
. *                  Modified
. *        V9.08.01  22/08/2007  JH
. *                  Modified
. *        V9.08.01  21/08/2007  JH
. *                  Modified
. *        V9.08.01  15/08/2007  JH
. *                  Modified
. *        V9.08.01  09/08/2007  JH
. *                  Modified
. *        V9.08.01  09/08/2007  JH
. *                  Modified
. *        V9.08.01  02/08/2007  JH
. *                  Created
. *
. *----------------------------------------------------------------------------
.
.Data File Definition
.--------------------
MEHHONA1   IFILE    SQL, FIXED=398, KEY="U1-8,9-16"                             
MEHHONA2   IFILE    SQL, FIXED=398, KEY="U256-263,1-8,9-16"                     
MEHHONA3   IFILE    SQL, FIXED=398, KEY="U1-8,22-29,9-16"                       
MEHHONA4   IFILE    SQL, FIXED=398, KEY="U320-327,1-8,9-16"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MHHNVISN  DIM       8      8        1     Visit Number                       
MHHNUNIQ  DIM       8      8        9     Unique Count                       
MHHNHOTY  DIM       3      3        17    HONOS Type (Cat hs)                
MHHNACTV  DIM       1      1        20    Active 1=Yes                       
MHHNSENT  DIM       1      1        21    Sent (1=Yes)                       
MHHNHDAT  DIM       8      8        22    HONOS Date (CCYYMMDD)              
MHHNSSET  DIM       3      3        30    Service Setting (Cat ss)           
MHHNREAS  DIM       3      3        33    Reason for Collection (Cat hp)     
MHHNRHCP  DIM       10     10       36    Responsible HCP (pmshcpaf)         
MHHNCAST  DIM       10     10       46    Case Team (allcasaf)               
MHHNPHCP  DIM       10     10       56    Performing HCP (pmshcpaf)          
MHHNWEBC  DIM       10     10       66    WEB User Created (websecaf)        
MHHNCDTE  DIM       8      8        76    Date Created (CCYYMMDD)            
MHHNCTIM  DIM       8      8        84    Time Created (HH:MM:SS)            
MHHNCOMP  DIM       1      1        92    Completed (1=Yes)                  
MHHNWEBF  DIM       10     10       93    Web User Completed (websecaf)      
MHHNDATF  DIM       8      8        103   Date Completed (CCYYMMDD)          
MHHNTIMF  DIM       8      8        111   Time Completed (HH:MM:SS)          
MHHNWEBU  DIM       10     10       119   Web User ID Updated (websecaf)     
MHHNDATU  DIM       8      8        129   Date Updated (CCYYMMDD)            
MHHNTIMU  DIM       8      8        137   Time Updated (HH:MM:SS)            
MHHNFOCU  DIM       3      3        145   Focus of Care (Cat hf)             
MHHNCULS  DIM       3      3        148   Cultural Support (Cat hc)          
MHHNNGOS  DIM       1      1        151   NGO Support (1=Yes)                
MHHNNGOA  DIM       1      1        152   NGO Support Accommodation (1=Yes)  
MHHNNGOW  DIM       1      1        153   NGO Comm Support Worker (1=Yes)    
MHHNVOCA  DIM       1      1        154   Vocational Assistance (1=Yes)      
MHHNNSNG  DIM       1      1        155   Non Specific NGO Service (1=Yes)   
MHHNCOLS  DIM       3      3        156   Collection Status (Cat ht)         
MHHNMODA  DIM       3      3        159   Mode of Administration (Cat hm)    
MHHNADQ1  DIM       1      1        162   Adult Q1                           
MHHNADQ2  DIM       1      1        163   Adult Q2                           
MHHNADQ3  DIM       1      1        164   Adult Q3                           
MHHNADQ4  DIM       1      1        165   Adult Q4                           
MHHNADQ5  DIM       1      1        166   Adult Q5                           
MHHNADQ6  DIM       1      1        167   Adult Q6                           
MHHNADQ7  DIM       1      1        168   Adult Q7                           
MHHNADQ8  DIM       1      1        169   Adult Q8                           
MHHNAQ8A  DIM       1      1        170   Adult Q8A                          
MHHNFREE  DIM       35     35       171   8A Free Text                       
MHHNADQ9  DIM       1      1        206   Adult Q9                           
MHHNAQ10  DIM       1      1        207   Adult Q10                          
MHHNAQ11  DIM       1      1        208   Adult Q11                          
MHHNAQ12  DIM       1      1        209   Adult Q12                          
MHHNCYQ1  DIM       1      1        210   Child and Youth Q1                 
MHHNCYQ2  DIM       1      1        211   Child and Youth Q2                 
MHHNCYQ3  DIM       1      1        212   Child and Youth Q3                 
MHHNCYQ4  DIM       1      1        213   Child and Youth Q4                 
MHHNCYQ5  DIM       1      1        214   Child and Youth Q5                 
MHHNCYQ6  DIM       1      1        215   Child and Youth Q6                 
MHHNCYQ7  DIM       1      1        216   Child and Youth Q7                 
MHHNCYQ8  DIM       1      1        217   Child and Youth Q8                 
MHHNCYQ9  DIM       1      1        218   Child and Youth Q9                 
MHHNCQ10  DIM       1      1        219   Child and Youth Q10                
MHHNCQ11  DIM       1      1        220   Child and Youth Q11                
MHHNCQ12  DIM       1      1        221   Child and Youth Q12                
MHHNCQ13  DIM       1      1        222   Child and Youth Q13                
MHHNCQ14  DIM       1      1        223   Child and Youth Q14                
MHHNCQ15  DIM       1      1        224   Child and Youth Q15                
MHHNLDQ1  DIM       1      1        225   Learning Disabilities Q1           
MHHNLDQ2  DIM       1      1        226   Learning Disabilities Q2           
MHHNLDQ3  DIM       1      1        227   Learning Disabilities Q3           
MHHNLDQ4  DIM       1      1        228   Learning Disabilities Q4           
MHHNLDQ5  DIM       1      1        229   Learning Disabilities Q5           
MHHNLDQ6  DIM       1      1        230   Learning Disabilities Q6           
MHHNLDQ7  DIM       1      1        231   Learning Disabilities Q7           
MHHNLDQ8  DIM       1      1        232   Learning Disabilities Q8           
MHHNLDQ9  DIM       1      1        233   Learning Disabilities Q9           
MHHNLQ10  DIM       1      1        234   Learning Disabilities Q10          
MHHNLQ11  DIM       1      1        235   Learning Disabilities Q11          
MHHNLQ12  DIM       1      1        236   Learning Disabilities Q12          
MHHNLQ13  DIM       1      1        237   Learning Disabilities Q13          
MHHNLQ14  DIM       1      1        238   Learning Disabilities Q14          
MHHNLQ15  DIM       1      1        239   Learning Disabilities Q15          
MHHNLQ16  DIM       1      1        240   Learning Disabilities Q16          
MHHNLQ17  DIM       1      1        241   Learning Disabilities Q17          
MHHNLQ18  DIM       1      1        242   Learning Disabilities Q18          
MHHNSCQ1  DIM       1      1        243   Secure Q1                          
MHHNSCQ2  DIM       1      1        244   Secure Q2                          
MHHNSCQ3  DIM       1      1        245   Secure Q3                          
MHHNSCQ4  DIM       1      1        246   Secure Q4                          
MHHNSCQ5  DIM       1      1        247   Secure Q5                          
MHHNSCQ6  DIM       1      1        248   Secure Q6                          
MHHNSCQ7  DIM       1      1        249   Secure Q7                          
MHHNHVER  DIM       3      3        250   Honos Version (cat hv)             
MHHNLD3A  DIM       3      3        253   LD Question 3A (Cat hl)            
MHHNRDAT  DIM       8      8        256   Review Date (CCYYMMDD)             
MHHNRFMV  DIM       2      2        264   ADOM Mandated / Voluntary
.                                         M = Mandated
.                                         V = Voluntary
MHHNDAYS  DIM       2      2        266   ADOM Number of Days covered (7-28)
MHHNCEPS  DIM       2      2        268   ADOM Co-existing Problems (Yes/No)
.                                         1 = Yes
.                                         0 = No
MHHNAM01  DIM       2      2        270   ADOM Q1
MHHNAM02  DIM       2      2        272   ADOM Q2
MHHNAM03  DIM       2      2        274   ADOM Q3
MHHNAM04  DIM       2      2        276   ADOM Q4
MHHNAM05  DIM       2      2        278   ADOM Q5
MHHNAM06  DIM       2      2        280   ADOM Q6
MHHNAM7A  DIM       2      2        282   ADOM Q7a
MHHNAM7B  DIM       2      2        284   ADOM Q7b
MHHNAM7C  DIM       2      2        286   ADOM Q7c
MHHNAM7D  DIM       2      2        288   ADOM Q7d
MHHNAM7E  DIM       2      2        290   ADOM Q7e
MHHNAM7F  DIM       2      2        292   ADOM Q7f
MHHNAM08  DIM       2      2        294   ADOM Q8
MHHNAM9A  DIM       1      1        296   ADOM Q9a
MHHNAM9B  DIM       1      1        297   ADOM Q9b
MHHNAM9C  DIM       1      1        298   ADOM Q9c
MHHNAM10  DIM       2      2        299   ADOM Q10
MHHNAM11  DIM       1      1        301   ADOM Q11
MHHNAM12  DIM       2      2        302   ADOM Q12
MHHNAM13  DIM       2      2        304   ADOM Q13
MHHNAM14  DIM       2      2        306   ADOM Q14
MHHNAM15  DIM       2      2        308   ADOM Q15
MHHNAM16  DIM       2      2        310   ADOM Q16
MHHNAM17  DIM       2      2        312   ADOM Q17
MHHNAM18  DIM       2      2        314   ADOM Q18
MHHNAM19  DIM       2      2        316   ADOM Q19
MHHNAM20  DIM       2      2        318   ADOM Q20
MHHNURNO  DIM       8      8        320   U/R Number
MHHNDELF  DIM       1      1        328   Delete Flag
.                                         0 or blank = not deleted
.                                         1 = deleted
MHHNDUID  DIM       10     10       329   User who deleted assessment
MHHNDDTE  DIM       8      8        339   Date assessment deleted
MHHNDTME  DIM       8      8        347   Time assessment deleted
MHHNDRES  DIM       3      3        355   Reason for delete
MHHNSPAR  DIM       40     40       358   Spare                              
.
.End of Record                      398  
.
