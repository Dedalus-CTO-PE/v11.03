. V10.14.01 17/04/2019 SA C-0868837 Changed descriptions for ALENUDT1 & ALENUTM1
. V10.09.01 03/01/2017 DS C-0266089 Added ALENACCN (ACC Number)                 
. V10.06.01 23/03/2015 EC  Changed ALENUC33 to Event Program CAR 314429         
. V10.04.01 03/01/2014 DN  Moved ALENSDEP out of spare variable CAR 294456      
. V10.03.01 06/09/2013 DN  Added ALENSDEP to spare    CAR 285773                
. V10.02.01 29/06/2011 EC  Added ALENCONT to ALENSRVD CAR 243794                
. V9.09.002 12/02/2008 JT  Added 2nd audit file (allaudea)                      
. V9.09.001 10/10/2007 JT  Added Indicator record sent to MHINC CAR 135498      
. V9.08.001 16/04/2007 EC  Added ALENPURC and ALENCONT CAR 135532               
. V9.07.002 16/08/2006 EC  Added ALENCREF CAR 110311                            
. V9.07.001 02/08/2006 EC  Added case review date CAR 113925                    
. V9.05.B04 20/02/2006 EC  Added Audit File CAR 76341                           
. V9.05.B03 18/01/2006 EC  Added ALENSSAC CAR 76341                             
. V9.05.B02 16/01/2006 EC  Added index 7 CAR 91106                              
. V9.05.B01 16/12/2005 EC  Changed ALENENCT to DIM 8 CAR 76341                  
. V9.00.003 17/06/2002 EC  Added Index 6                                        
. *----------------------------------------------------------------------
. * Include Name  :   ALLENCFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Encounter Table                    
. *
. * File Type     :   SQL
. *
. * File Name     :   allencaf.dat
. * Audit Name    :   allauden.dat
. *
. * Index Values  :   KEY16   KEY42   KEY24   KEY24   KEY42   KEY32   KEY24  
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
ALLAUDEN   IFILE    SQL, FIXED=1187, KEY="D1-8,9-16,17-18,19-19"                
ALLAUDEA   IFILE    SQL, FIXED=1187, KEY="D26-33,34-41,1-8,9-16"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALENAUDD  DIM       8      8        1     Date of Change
ALENAUDT  DIM       8      8        9     Time of Change
ALENAUDP  DIM       2      2        17    Port
ALENAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
ALENAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
ALENAUDO  DIM       4      4        22    Operator ID
.
.ALENVISN DIM       8      8        26    Referral/Visit Number
.ALENENCT DIM       8      8        34    Encounter Number
.
.
.Data File Definition
.--------------------
ALLENCA1   IFILE    SQL, FIXED=1162, KEY="U1-8,9-16"
ALLENCA2   IFILE    SQL, FIXED=1162, KEY="U23-32,33-40,41-48,1-8,9-16"
ALLENCA3   IFILE    SQL, FIXED=1162, KEY="U1054-1061,1-8,9-16"
ALLENCA4   IFILE    SQL, FIXED=1162, KEY="U33-40,1-8,9-16"
ALLENCA5   IFILE    SQL, FIXED=1162, KEY="U1015-1024,33-40,41-48,1-8,9-16"
ALLENCA6   IFILE    SQL, FIXED=1162, KEY="U1-8,33-40,41-48,9-16"
ALLENCA7   IFILE    SQL, FIXED=1162, KEY="U52-59,1-8,9-16"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALENVISN  DIM       8      8        1     Referral/Visit Number              
ALENENCT  DIM       8      8        9     Encounter Number                   
ALENCLIN  DIM       6      6        17    Clinic Type                        
ALENHCP   DIM       10     10       23    Service Provider (pmshcpaf)        
ALENSDAT  DIM       8      8        33    Service Date (CCYYMMDD)            
ALENSTIM  DIM       8      8        41    Service Time (HH:MM:SS)            
ALENLOCA  DIM       3      3        49    Location of Service (Category LD)
ALENLINK  DIM       8      8        52    Linked Visit Number                
ALENTYPE  DIM       3      3        60    Patient Type (Category GI)         
ALENSERV  DIM       6      6        63    Service Type (allseraf)            
ALENDIUN  FORM      6      4        69    Direct Units                       
ALENDBUN  FORM      6      4        73    Direct Billable Units              
ALENINUN  FORM      6      4        77    Indirect Units                     
ALENIBUN  FORM      6      4        81    Indirect Billable Units            
ALENBULK  DIM       3      3        85    Bulk Billing Code (Category GB)    
ALENRSTA  DIM       1      1        88    Record Status (0=Active,1=Cancel)  
ALENUDT1  DIM       8      8        89    Contact End Date (ccyymmdd)        
ALENUTM1  DIM       8      8        97    Contact End Time (hh:mm:ss)        
ALENUDT2  DIM       8      8        105   User Defined Date 2 (CCYYMMDD)     
ALENUTM2  DIM       8      8        113   User Defined Time 2 (HH:MM:SS)     
ALENUDT3  DIM       8      8        121   User Defined Date 3 (CCYYMMDD)     
ALENUTM3  DIM       8      8        129   User Defined Time 3 (HH:MM:SS)     
ALENUDT4  DIM       8      8        137   User Defined Date 4 (CCYYMMDD)     
ALENUTM4  DIM       8      8        145   User Defined Time 4 (HH:MM:SS)     
ALENUHC1  DIM       10     10       153   User Defined Doctor 1 (pmshcpaf)   
ALENUHC2  DIM       10     10       163   User Defined Doctor 2 (pmshcpaf)   
ALENUHC3  DIM       10     10       173   User Defined Doctor 3 (pmshcpaf)   
ALENUHC4  DIM       10     10       183   User Defined Doctor 4 (pmshcpaf)   
ALENUDI1  DIM       9      9        193   User Defined Diagnosis 1 (alldiaaf)
ALENUDI2  DIM       9      9        202   User Defined Diagnosis 2 (alldiaaf)
ALENUDI3  DIM       9      9        211   User Defined Diagnosis 3 (alldiaaf)
ALENUDI4  DIM       60     60       220   Free Format Diagnosis 1            
ALENUDI5  DIM       60     60       280   Free Format Diagnosis 2            
ALENUDI6  DIM       60     60       340   Free Format Diagnosis 3            
ALENUYN1  DIM       1      1        400   User Defined Y/N 1 (0=No,1=Yes)    
ALENUYN2  DIM       1      1        401   User Defined Y/N 2 (0=No,1=Yes)    
ALENUYN3  DIM       1      1        402   User Defined Y/N 3 (0=No,1=Yes)    
ALENUYN4  DIM       1      1        403   User Defined Y/N 4 (0=No,1=Yes)    
ALENUYN5  DIM       1      1        404   User Defined Y/N 5 (0=No,1=Yes)    
ALENUYN6  DIM       1      1        405   User Defined Y/N 6 (0=No,1=Yes)    
ALENUYN7  DIM       1      1        406   User Defined Y/N 7 (0=No,1=Yes)    
ALENUYN8  DIM       1      1        407   User Defined Y/N 8 (0=No,1=Yes)    
ALENUYN9  DIM       1      1        408   User Defined Y/N 9 (0=No,1=Yes)    
ALENUFF1  DIM       60     60       409   User Defined Free Format           
ALENUFF2  DIM       60     60       469   User Defined Free Format           
ALENUFF3  DIM       60     60       529   User Defined Free Format           
ALENUC01  DIM       3      3        589   User Defined Code 1 (Category za)  
ALENUC02  DIM       3      3        592   User Defined Code 2 (Category zb)  
ALENUC03  DIM       3      3        595   User Defined Code 3 (Category zc)  
ALENUC04  DIM       3      3        598   User Defined Code 4 (Category zd)  
ALENUC05  DIM       3      3        601   User Defined Code 5 (Category ze)  
ALENUC06  DIM       3      3        604   User Defined Code 6 (Category zf)  
ALENUC07  DIM       3      3        607   User Defined Code 7 (Category zg)  
ALENUC08  DIM       3      3        610   User Defined Code 8 (Category zh)  
ALENUC09  DIM       3      3        613   User Defined Code 9 (Category zi)  
ALENUC10  DIM       3      3        616   User Defined Code 10 (Category zj) 
ALENUC11  DIM       3      3        619   User Defined Code 11 (Category zk) 
ALENUC12  DIM       3      3        622   User Defined Code 12 (Category zl) 
ALENUC13  DIM       3      3        625   User Defined Code 13 (Category zm) 
ALENUC14  DIM       3      3        628   User Defined Code 14 (Category zn) 
ALENUC15  DIM       3      3        631   User Defined Code 15 (Category zo) 
ALENUC16  DIM       3      3        634   User Defined Code 16 (Category zp) 
ALENUC17  DIM       3      3        637   User Defined Code 17 (Category zq) 
ALENUC18  DIM       3      3        640   User Defined Code 18 (Category zr) 
ALENUC19  DIM       3      3        643   User Defined Code 19 (Category zs) 
ALENUC20  DIM       3      3        646   User Defined Code 20 (Category zt) 
ALENUC21  DIM       3      3        649   User Defined Code 21 (Category zu) 
ALENUC22  DIM       3      3        652   User Defined Code 22 (Category zv) 
ALENUC23  DIM       3      3        655   User Defined Code 23 (Category zw) 
ALENUC24  DIM       3      3        658   User Defined Code 24 (Category zx) 
ALENUC25  DIM       3      3        661   User Defined Code 25 (Category zy) 
ALENUC26  DIM       3      3        664   User Defined Code 26 (Category zz) 
ALENUC27  DIM       3      3        667   User Defined Code 27 (Category zA) 
ALENUC28  DIM       3      3        670   User Defined Code 28 (Category zB) 
ALENUC29  DIM       3      3        673   User Defined Code 29 (Category zC) 
ALENUC30  DIM       3      3        676   User Defined Code 30 (Category zD) 
ALENUC31  DIM       3      3        679   User Defined Code 31 (Category zE) 
ALENUC32  DIM       3      3        682   User Defined Code 32 (Category zF) 
ALENUC33  DIM       3      3        685   Event Program        (Category zG) 
ALENUC34  DIM       3      3        688   User Defined Code 34 (Category zH) 
ALENUC35  DIM       3      3        691   User Defined Code 35 (Category zI) 
ALENUC36  DIM       3      3        694   User Defined Code 36 (Category zJ) 
ALENUC37  DIM       3      3        697   User Defined Code 37 (Category zK) 
ALENUC38  DIM       3      3        700   User Defined Code 38 (Category zL) 
ALENUC39  DIM       3      3        703   User Defined Code 39 (Category zM) 
ALENUC40  DIM       3      3        706   User Defined Code 40 (Category zN) 
ALENUF01  FORM      12.2   8        709   User Defined Form Field 1          
ALENUF02  FORM      12.2   8        717   User Defined Form Field 2          
ALENUF03  FORM      12.2   8        725   User Defined Form Field 3          
ALENUF04  FORM      12.2   8        733   User Defined Form Field 4          
ALENUF05  FORM      12.2   8        741   User Defined Form Field 5          
ALENUF06  FORM      12.2   8        749   User Defined Form Field 6          
ALENUF07  FORM      12.2   8        757   User Defined Form Field 7          
ALENUF08  FORM      12.2   8        765   User Defined Form Field 8          
ALENUF09  FORM      12.2   8        773   User Defined Form Field 9          
ALENUF10  FORM      12.2   8        781   User Defined Form Field 10         
ALENUF11  FORM      8      5        789   User Defined Form Field 11         
ALENUF12  FORM      8      5        794   User Defined Form Field 12         
ALENUF13  FORM      8      5        799   User Defined Form Field 13         
ALENUF14  FORM      8      5        804   User Defined Form Field 14         
ALENUF15  FORM      8      5        809   User Defined Form Field 15         
ALENUF16  FORM      8      5        814   User Defined Form Field 16         
ALENUF17  FORM      8      5        819   User Defined Form Field 17         
ALENUF18  FORM      8      5        824   User Defined Form Field 18         
ALENUF19  FORM      8      5        829   User Defined Form Field 19         
ALENUF20  FORM      8      5        834   User Defined Form Field 20         
ALENCMT1  DIM       80     80       839   Comments 1                         
ALENCMT2  DIM       80     80       919   Comments 2                         
ALENCDAT  DIM       8      8        999   Date Record Created (CCYYMMDD)     
ALENCTIM  DIM       8      8        1007  Time Record Created (HH:MM:SS)     
ALENCUID  DIM       10     10       1015  WEB User ID Created (websecaf)     
ALENUDAT  DIM       8      8        1025  Date Record Updated (CCYYMMDD)     
ALENUTIM  DIM       8      8        1033  Time Record Updated (HH:MM:SS)     
ALENUUID  DIM       10     10       1041  WEB User ID Updated (websecaf)     
ALENCOMP  DIM       3      3        1051  Compensation Code (Category CL)    
ALENUNIQ  DIM       8      8        1054  Private Practice Unique Identifier 
ALENSSAC  DIM       1      1        1062  Separate SACS Episode 0=No 1=Yes   
ALENREVD  DIM       8      8        1063  Case Review Date (CCYYMMDD)        
ALENCREF  DIM       20     20       1071  Case Referral                      
ALENPURC  DIM       3      3        1091  Purchaser (Cat HP)                 
ALENCONT  DIM       3      3        1094  Contract (Cat gb)                  
ALENMOHR  DIM       1      1        1097  MOH Indicator Record sent to MHINC 
.                                         Blank=Not for MHINC                  
.                                         0=Unsent                             
.                                         1=Sent                               
.                                         2=Send Delete required               
ALENRHOS  DIM       5      5        1098  Referred to Hospital (patvadaf)    
ALENCART  DIM       3      3        1103  Care Type (cat CC)                 
ALENSTRA  DIM       3      3        1106  Transport Source of Ref. (cat SI)  
ALENOUTC  DIM       3      3        1109  Outcome (Cat OZ)                   
ALENSRVD  DIM       3      3        1112  Service Delivery Mode (Cat sd)     
ALENSDEP  DIM       3      3        1115  Service Department (Cat CG)        
ALENACCN  DIM       20     20       1118  ACC Number                         
ALENSPAR  DIM       24     24       1138  Spare Variable                     
.
.End of Record                      1162 
.
