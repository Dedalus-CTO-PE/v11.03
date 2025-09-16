. V10.08.01 02/05/2016 JP C-0817063 Created                                     
. *----------------------------------------------------------------------
. * Include Name  :   MEHSCRFD.INC
. *
. * Function      :   File Def'n Include for Mental Health                      
. *                   MH Supplementary Consumer Records  
. *
. * File Type     :   SQL
. *
. * File Name     :   mehscraf.dat
. *
. * Index Values  :   KEY16                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MEHSCRA1   IFILE    SQL, FIXED=763, KEY="U1-8,9-16"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MHSCURNO  DIM       8      8        1     UR Number                          
MHSCSDAT  DIM       8      8        9     Collection Date                    
MHSCCOUN  DIM       5      5        17    Counter                            
MHSCUC01  DIM       3      3        22    Wellness Plan (Cat sA)             
MHSCUC02  DIM       3      3        25    Accommodation (Cat sB)             
MHSCUC03  DIM       3      3        28    Employment Status (Cat sC)         
MHSCUC04  DIM       3      3        31    Education Status (Cat sD)          
MHSCUC05  DIM       3      3        34    User Defined Code 5 (Cat sE)       
MHSCUC06  DIM       3      3        37    User Defined Code 6 (Cat sF)       
MHSCUC07  DIM       3      3        40    User Defined Code 7 (Cat sG)       
MHSCUC08  DIM       3      3        43    User Defined Code 8 (Cat sH)       
MHSCUC09  DIM       3      3        46    User Defined Code 9 (Cat sI)       
MHSCUC10  DIM       3      3        49    User Defined Code 10 (Cat sJ)      
MHSCUC11  DIM       3      3        52    User Defined Code 11 (Cat sK)      
MHSCUC12  DIM       3      3        55    User Defined Code 12 (Cat sL)      
MHSCUC13  DIM       3      3        58    User Defined Code 13 (Cat sM)      
MHSCUC14  DIM       3      3        61    User Defined Code 14 (Cat sN)      
MHSCUC15  DIM       3      3        64    User Defined Code 15 (Cat sO)      
MHSCUDT1  DIM       8      8        67    User Defined Date 1 (CCYYMMDD)     
MHSCUTM1  DIM       8      8        75    User Defined Time 1 (hh:mm:ss)     
MHSCUDT2  DIM       8      8        83    User Defined Date 2 (CCYYMMDD)     
MHSCUTM2  DIM       8      8        91    User Defined Time 2 (hh:mm:ss)     
MHSCUDT3  DIM       8      8        99    User Defined Date 3 (CCYYMMDD)     
MHSCUTM3  DIM       8      8        107   User Defined Time 3 (hh:mm:ss)     
MHSCUDT4  DIM       8      8        115   User Defined Date 4 (CCYYMMDD)     
MHSCUTM4  DIM       8      8        123   User Defined Time 4 (hh:mm:ss)     
MHSCUDT5  DIM       8      8        131   User Defined Date 5 (CCYYMMDD)     
MHSCUTM5  DIM       8      8        139   User Defined Time 5 (CCYYMMDD)     
MHSCUDT6  DIM       8      8        147   User Defined Date 6 (CCYYMMDD)     
MHSCUTM6  DIM       8      8        155   User Defined Time 6 (hh:mm:ss)     
MHSCUDT7  DIM       8      8        163   User Defined Date 7 (CCYYMMDD)     
MHSCUTM7  DIM       8      8        171   User Defined Time 7 (hh:mm:ss)     
MHSCUDT8  DIM       8      8        179   User Defined Date 8 (CCYYMMDD)     
MHSCUTM8  DIM       8      8        187   User Defined Time 8 (hh:mm:ss)     
MHSCUDT9  DIM       8      8        195   User Defined Date 9 (CCYYMMDD)     
MHSCUTM9  DIM       8      8        203   User Defined Time 9 (hh:mm:ss)     
MHSCUHC1  DIM       10     10       211   User Defined Doctor 1 (pmshcpaf)   
MHSCUHC2  DIM       10     10       221   User Defined Doctor 2 (pmshcpaf)   
MHSCUHC3  DIM       10     10       231   User Defined Doctor 3 (pmshcpaf)   
MHSCUHC4  DIM       10     10       241   User Defined Doctor 4 (pmshcpaf)   
MHSCUHC5  DIM       10     10       251   User Defined Doctor 5 (pmshcpaf)   
MHSCUHC6  DIM       10     10       261   User Defined Doctor 6 (pmshcpaf)   
MHSCUHC7  DIM       10     10       271   User Defined Doctor 7 (pmshcpaf)   
MHSCUHC8  DIM       10     10       281   User Defined Doctor 8 (pmshcpaf)   
MHSCUHC9  DIM       10     10       291   User Defined Doctor 9 (pmshcpaf)   
MHSCUYN1  DIM       1      1        301   User Defined Y/N 1 (1=yes)         
MHSCUYN2  DIM       1      1        302   User Defined Y/N 2 (1=yes)         
MHSCUYN3  DIM       1      1        303   User Defined Y/N 3 (1=yes)         
MHSCUYN4  DIM       1      1        304   User Defined Y/N 4 (1=yes)         
MHSCUYN5  DIM       1      1        305   User Defined Y/N 5 (1=yes)         
MHSCUYN6  DIM       1      1        306   User Defined Y/N 6 (1=yes)         
MHSCUYN7  DIM       1      1        307   User Defined Y/N 7 (1=yes)         
MHSCUYN8  DIM       1      1        308   User Defined Y/N 8 (1=yes)         
MHSCUYN9  DIM       1      1        309   User Defined Y/N 9 (1=yes)         
MHSCUFF1  DIM       60     60       310   User Defined Free Format 1         
MHSCUFF2  DIM       60     60       370   User Defined Free Format 2         
MHSCUFF3  DIM       60     60       430   User Defined Free Format 3         
MHSCUFF4  DIM       60     60       490   User Defined Free Format 4         
MHSCUFF5  DIM       60     60       550   User Defined Free Format 5         
MHSCCDAT  DIM       8      8        610   Date Record Created (CCYYMMDD)     
MHSCCTIM  DIM       8      8        618   Created Time (hh:mm:ss)            
MHSCCUID  DIM       10     10       626   WEB User Id Created (websecaf)     
MHSCUDAT  DIM       8      8        636   Update Date (CCYYMMDD)             
MHSCUTIM  DIM       8      8        644   Update Time (hh:mm:ss)             
MHSCUUID  DIM       10     10       652   WEB User Id Updated (websecaf)     
MHSCSTAT  DIM       1      1        662   Status 1=Inactive                  
MHSCSPAR  DIM       100    100      663   Spare                              
.
.End of Record                      763  
.
