. V9.00.003 30/05/2001 SB  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   ALLACTFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Non U/R Activity Table             
. *
. * File Type     :   SQL
. *
. * File Name     :   allactaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLACTA1   IFILE    SQL, FIXED=810, KEY="U1-3,14-21,22-29,4-13"                 
ALLACTA2   IFILE    SQL, FIXED=810, KEY="U4-13,14-21,22-29,1-3"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALACDEPT  DIM       3      3        1     Department Code                    
ALACDOCT  DIM       10     10       4     Service Provider (pmshcpaf)        
ALACCODT  DIM       8      8        14    Contact Date (CCYYMMDD)            
ALACCOTM  DIM       8      8        22    Contact Time (HH:MM:SS)            
ALACLOCA  DIM       3      3        30    Location of Service (Category LD)  
ALACSERV  DIM       6      6        33    Service Type (allseraf)            
ALACUNIT  FORM      6      4        39    Units                              
ALACSTAT  DIM       1      1        43    Record Status (0=Active,1=Cancel)  
ALACUDT1  DIM       8      8        44    User Defined Date 1 (CCYYMMDD)     
ALACUTM1  DIM       8      8        52    User Defined Time 1 (HH:MM:SS)     
ALACUDT2  DIM       8      8        60    User Defined Date 2 (CCYYMMDD)     
ALACUTM2  DIM       8      8        68    User Defined Time 2 (HH:MM:SS)     
ALACUDT3  DIM       8      8        76    User Defined Date 3 (CCYYMMDD)     
ALACUTM3  DIM       8      8        84    User Defined Time 3 (HH:MM:SS)     
ALACUDT4  DIM       8      8        92    User Defined Date 4 (CCYYMMDD)     
ALACUTM4  DIM       8      8        100   User Defined Time 4 (HH:MM:SS)     
ALACUHC1  DIM       10     10       108   User Defined Doctor 1 (pmshcpaf)   
ALACUHC2  DIM       10     10       118   User Defined Doctor 2 (pmshcpaf)   
ALACUHC3  DIM       10     10       128   User Defined Doctor 3 (pmshcpaf)   
ALACUHC4  DIM       10     10       138   User Defined Doctor 4 (pmshcpaf)   
ALACUDI1  DIM       9      9        148   User Defined Diagnosis 1 (alldiaaf)
ALACUDI2  DIM       9      9        157   User Defined Diagnosis 2 (alldiaaf)
ALACUDI3  DIM       9      9        166   User Defined Diagnosis 3 (alldiaaf)
ALACUDI4  DIM       60     60       175   Free Format Diagnosis 1            
ALACUDI5  DIM       60     60       235   Free Format Diagnosis 2            
ALACUDI6  DIM       60     60       295   Free Format Diagnosis 3            
ALACUYN1  DIM       1      1        355   User Defined Y/N 1 (0=No,1=Yes)    
ALACUYN2  DIM       1      1        356   User Defined Y/N 2 (0=No,1=Yes)    
ALACUYN3  DIM       1      1        357   User Defined Y/N 3 (0=No,1=Yes)    
ALACUYN4  DIM       1      1        358   User Defined Y/N 4 (0=No,1=Yes)    
ALACUYN5  DIM       1      1        359   User Defined Y/N 5 (0=No,1=Yes)    
ALACUYN6  DIM       1      1        360   User Defined Y/N 6 (0=No,1=Yes)    
ALACUYN7  DIM       1      1        361   User Defined Y/N 7 (0=No,1=Yes)    
ALACUYN8  DIM       1      1        362   User Defined Y/N 8 (0=No,1=Yes)    
ALACUYN9  DIM       1      1        363   User Defined Y/N 9 (0=No,1=Yes)    
ALACUFF1  DIM       60     60       364   User Defined Free Format 1         
ALACUFF2  DIM       60     60       424   User Defined Free Format 2         
ALACUFF3  DIM       60     60       484   User Defined Free Format 3         
ALACUC01  DIM       3      3        544   User Defined Code 1 (Category u0)  
ALACUC02  DIM       3      3        547   User Defined Code 2 (Category u1)  
ALACUC03  DIM       3      3        550   User Defined Code 3 (Category u2)  
ALACUC04  DIM       3      3        553   User Defined Code 4 (Category u3)  
ALACUC05  DIM       3      3        556   User Defined Code 5 (Category u4)  
ALACUC06  DIM       3      3        559   User Defined Code 6 (Category u5)  
ALACUC07  DIM       3      3        562   User Defined Code 7 (Category u6)  
ALACUC08  DIM       3      3        565   User Defined Code 8 (Category u7)  
ALACUC09  DIM       3      3        568   User Defined Code 9 (Category u8)  
ALACUC10  DIM       3      3        571   User Defined Code 10 (Category u9) 
ALACUC11  DIM       3      3        574   User Defined Code 11 (Category ua) 
ALACUC12  DIM       3      3        577   User Defined Code 12 (Category ub) 
ALACUF01  FORM      12.2   8        580   User Defined Form Field 1          
ALACUF02  FORM      12.2   8        588   User Defined Form Field 2          
ALACUF03  FORM      12.2   8        596   User Defined Form Field 3          
ALACUF04  FORM      12.2   8        604   User Defined Form Field 4          
ALACUF05  FORM      12.2   8        612   User Defined Form Field 5          
ALACUF06  FORM      12.2   8        620   User Defined Form Field 6          
ALACUF07  FORM      8      5        628   User Defined Form Field 7          
ALACUF08  FORM      8      5        633   User Defined Form Field 8          
ALACUF09  FORM      8      5        638   User Defined Form Field 9          
ALACUF10  FORM      8      5        643   User Defined Form Field 10         
ALACUF11  FORM      8      5        648   User Defined Form Field 11         
ALACUF12  FORM      8      5        653   User Defined Form Field 12         
ALACCOMM  DIM       60     60       658   Comments                           
ALACCDAT  DIM       8      8        718   Date Record Created (CCYYMMDD)     
ALACCTIM  DIM       8      8        726   Time Record Created (HH:MM:SS)     
ALACCUID  DIM       10     10       734   WEB User ID Created (websecaf)     
ALACUDAT  DIM       8      8        744   Date Record Updated (CCYYMMDD)     
ALACUTIM  DIM       8      8        752   Time Record Updated (HH:MM:SS)     
ALACUUID  DIM       10     10       760   WEB User ID Updated (websecaf)     
ALACSPAR  DIM       40     40       770   Spare Variable                     
.
.End of Record                      810  
.
