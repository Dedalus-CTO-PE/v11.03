. V10.13.02 24/10/2018 EC C-0815359 Added index 2                               
. V10.13.01 24/07/2018 EC C-0815359 Created FD                                  
. *----------------------------------------------------------------------
. * Include Name  :   PMSENCFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Inpatient Allied Health Contacts   
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsencaf.dat
. *
. * Index Values  :   KEY16   KEY32                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSENCA1   IFILE    SQL, FIXED=1324, KEY="U1-8,9-16"
PMSENCA2   IFILE    SQL, FIXED=1324, KEY="U1-8,30-37,38-45,9-16"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMENVISN  DIM       8      8        1     Referral/Visit Number              
PMENENCT  DIM       8      8        9     Encounter Number                   
PMENSDEP  DIM       3      3        17    Service Department (Cat CG)        
PMENSHCP  DIM       10     10       20    Service Provider (pmshcpaf)        
PMENSDAT  DIM       8      8        30    Service Date (CCYYMMDD)            
PMENSTIM  DIM       8      8        38    Service Time (HH:MM:SS)            
PMENLOCA  DIM       3      3        46    Location of Service (Catgory LD)   
PMENSERV  DIM       6      6        49    Service Type (allseraf)            
PMENSRVD  DIM       3      3        55    Service Delivery Mode (Cat sd)     
PMENDIUN  FORM      6      4        58    Direct Units                       
PMENDBUN  FORM      6      4        62    Direct Billable Units              
PMENINUN  FORM      6      4        66    Indirect Units                     
PMENIBUN  FORM      6      4        70    Indirect Billable Units            
PMENCOMP  DIM       3      3        74    Compensation Code (Category CL)    
PMENBULK  DIM       3      3        77    Bulk Billing Code (Category GB)    
PMENPURC  DIM       3      3        80    Purchaser (Cat HP)                 
PMENCONT  DIM       3      3        83    Contract (Cat gb)                  
PMENTYPE  DIM       3      3        86    Patient Type (Category GI)         
PMENRSTA  DIM       1      1        89    Record Status (0=Active,1=Cancel)  
PMENUDT1  DIM       8      8        90    User Defined Date 1 (CCYYMMDD)     
PMENUTM1  DIM       8      8        98    User Defined Time 1 (HH:MM:SS)     
PMENUDT2  DIM       8      8        106   User Defined Date 2 (CCYYMMDD)     
PMENUTM2  DIM       8      8        114   User Defined Time 2 (HH:MM:SS)     
PMENUDT3  DIM       8      8        122   User Defined Date 3 (CCYYMMDD)     
PMENUTM3  DIM       8      8        130   User Defined Time 3 (HH:MM:SS)     
PMENUDT4  DIM       8      8        138   User Defined Date 4 (CCYYMMDD)     
PMENUTM4  DIM       8      8        146   User Defined Time 4 (HH:MM:SS)     
PMENAHC1  DIM       10     10       154   Additional HCP 1 (pmshcpaf)        
PMENAHC2  DIM       10     10       164   Additional HCP 2 (pmshcpaf)        
PMENAHC3  DIM       10     10       174   Additional HCP 3 (pmshcpaf)        
PMENAHC4  DIM       10     10       184   Additional HCP 4 (pmshcpaf)        
PMENUHC1  DIM       10     10       194   User Defined HCP 1 (pmshcpaf)      
PMENUHC2  DIM       10     10       204   User Defined HCP 2 (pmshcpaf)      
PMENUHC3  DIM       10     10       214   User Defined HCP 3 (pmshcpaf)      
PMENUHC4  DIM       10     10       224   User Defined HCP 4 (pmshcpaf)      
PMENUDI1  DIM       9      9        234   User Defined Diagnosis 1 (alldiaaf)
PMENUDI2  DIM       9      9        243   User Defined Diagnosis 2 (alldiaaf)
PMENUDI3  DIM       9      9        252   User Defined Diagnosis 3 (alldiaaf)
PMENFFD1  DIM       80     80       261   Free Format Diagnosis 1            
PMENFFD2  DIM       80     80       341   Free Format Diagnosis 2            
PMENFFD3  DIM       80     80       421   Free Format Diagnosis 3            
PMENUDP1  DIM       9      9        501   User Defined Procedure 1 (allproaf)
PMENUDP2  DIM       9      9        510   User Defined Procedure 2 (allproaf)
PMENUDP3  DIM       9      9        519   User Defined Procedure 3 (allproaf)
PMENUYN1  DIM       1      1        528   User Defined Y/N 1 (0=No,1=Yes)    
PMENUYN2  DIM       1      1        529   User Defined Y/N 2 (0=No,1=Yes)    
PMENUYN3  DIM       1      1        530   User Defined Y/N 3 (0=No,1=Yes)    
PMENUYN4  DIM       1      1        531   User Defined Y/N 4 (0=No,1=Yes)    
PMENUYN5  DIM       1      1        532   User Defined Y/N 5 (0=No,1=Yes)    
PMENUYN6  DIM       1      1        533   User Defined Y/N 6 (0=No,1=Yes)    
PMENUYN7  DIM       1      1        534   User Defined Y/N 7 (0=No,1=Yes)    
PMENUYN8  DIM       1      1        535   User Defined Y/N 8 (0=No,1=Yes)    
PMENUYN9  DIM       1      1        536   User Defined Y/N 9 (0=No,1=Yes)    
PMENUFF1  DIM       80     80       537   User Defined Free Format 1         
PMENUFF2  DIM       80     80       617   User Defined Free Format 2         
PMENUFF3  DIM       80     80       697   User Defined Free Format 3         
PMENUC01  DIM       3      3        777   User Defined Code 1 (Category za)  
PMENUC02  DIM       3      3        780   User Defined Code 2 (Category zb)  
PMENUC03  DIM       3      3        783   User Defined Code 3 (Category zc)  
PMENUC04  DIM       3      3        786   User Defined Code 4 (Category zd)  
PMENUC05  DIM       3      3        789   User Defined Code 5 (Category ze)  
PMENUC06  DIM       3      3        792   User Defined Code 6 (Category zf)  
PMENUC07  DIM       3      3        795   User Defined Code 7 (Category zg)  
PMENUC08  DIM       3      3        798   User Defined Code 8 (Category zh)  
PMENUC09  DIM       3      3        801   User Defined Code 9 (Category zi)  
PMENUC10  DIM       3      3        804   User Defined Code 10 (Category zj) 
PMENUC11  DIM       3      3        807   User Defined Code 11 (Category zk) 
PMENUC12  DIM       3      3        810   User Defined Code 12 (Category zl) 
PMENUC13  DIM       3      3        813   User Defined Code 13 (Category zm) 
PMENUC14  DIM       3      3        816   User Defined Code 14 (Category zn) 
PMENUC15  DIM       3      3        819   User Defined Code 15 (Category zo) 
PMENUC16  DIM       3      3        822   User Defined Code 16 (Category zp) 
PMENUC17  DIM       3      3        825   User Defined Code 17 (Category zq) 
PMENUC18  DIM       3      3        828   User Defined Code 18 (Category zr) 
PMENUC19  DIM       3      3        831   User Defined Code 19 (Category zs) 
PMENUC20  DIM       3      3        834   User Defined Code 20 (Category zt) 
PMENUC21  DIM       3      3        837   User Defined Code 21 (Category zu) 
PMENUC22  DIM       3      3        840   User Defined Code 22 (Category zv) 
PMENUC23  DIM       3      3        843   User Defined Code 23 (Category zw) 
PMENUC24  DIM       3      3        846   User Defined Code 24 (Category zx) 
PMENUC25  DIM       3      3        849   User Defined Code 25 (Category zy) 
PMENUC26  DIM       3      3        852   User Defined Code 26 (Category zz) 
PMENUC27  DIM       3      3        855   User Defined Code 27 (Category zA) 
PMENUC28  DIM       3      3        858   User Defined Code 28 (Category zB) 
PMENUC29  DIM       3      3        861   User Defined Code 29 (Category zC) 
PMENUC30  DIM       3      3        864   User Defined Code 30 (Category zD) 
PMENUC31  DIM       3      3        867   User Defined Code 31 (Category zE) 
PMENUC32  DIM       3      3        870   User Defined Code 32 (Category zF) 
PMENUC33  DIM       3      3        873   User Defined Code 33 (Category zG) 
PMENUC34  DIM       3      3        876   User Defined Code 34 (Category zH) 
PMENUC35  DIM       3      3        879   User Defined Code 35 (Category zI) 
PMENUC36  DIM       3      3        882   User Defined Code 36 (Category zJ) 
PMENUC37  DIM       3      3        885   User Defined Code 37 (Category zK) 
PMENUC38  DIM       3      3        888   User Defined Code 38 (Category zL) 
PMENUC39  DIM       3      3        891   User Defined Code 39 (Category zM) 
PMENUC40  DIM       3      3        894   User Defined Code 40 (Category zN) 
PMENUF01  FORM      14.2   9        897   User Defined Form Field 1          
PMENUF02  FORM      14.2   9        906   User Defined Form Field 2          
PMENUF03  FORM      14.2   9        915   User Defined Form Field 3          
PMENUF04  FORM      14.2   9        924   User Defined Form Field 4          
PMENUF05  FORM      14.2   9        933   User Defined Form Field 5          
PMENUF06  FORM      14.2   9        942   User Defined Form Field 6          
PMENUF07  FORM      14.2   9        951   User Defined Form Field 7          
PMENUF08  FORM      14.2   9        960   User Defined Form Field 8          
PMENUF09  FORM      14.2   9        969   User Defined Form Field 9          
PMENUF10  FORM      14.2   9        978   User Defined Form Field 10         
PMENUF11  FORM      8      5        987   User Defined Form Field 11         
PMENUF12  FORM      8      5        992   User Defined Form Field 12         
PMENUF13  FORM      8      5        997   User Defined Form Field 13         
PMENUF14  FORM      8      5        1002  User Defined Form Field 14         
PMENUF15  FORM      8      5        1007  User Defined Form Field 15         
PMENUF16  FORM      8      5        1012  User Defined Form Field 16         
PMENUF17  FORM      8      5        1017  User Defined Form Field 17         
PMENUF18  FORM      8      5        1022  User Defined Form Field 18         
PMENUF19  FORM      8      5        1027  User Defined Form Field 19         
PMENUF20  FORM      8      5        1032  User Defined Form Field 20         
PMENCMT1  DIM       80     80       1037  Comments 1                         
PMENCMT2  DIM       80     80       1117  Comments 2                         
PMENCDAT  DIM       8      8        1197  Date Record Created (CCYYMMDD)     
PMENCTIM  DIM       8      8        1205  Time Record Created (HH:MM:SS)     
PMENCUID  DIM       10     10       1213  WEB User ID Created (websecaf)     
PMENUDAT  DIM       8      8        1223  Date Record Updated (CCYYMMDD)     
PMENUTIM  DIM       8      8        1231  Time Record Updated (HH:MM:SS)     
PMENUUID  DIM       10     10       1239  WEB User ID Updated (websecaf)     
PMENSSAC  DIM       1      1        1249  Separate SACS Episode 0=No 1=Yes   
PMENMOHR  DIM       1      1        1250  MOH Indicator Record sent to MHINC 
.                                         Blank=Not for MHINC                  
.                                         0=Unsent                             
.                                         1=Sent                               
.                                         2=Send Delete required               
PMENOUTC  DIM       3      3        1251  Outcome (Cat OZ)                   
PMENACCN  DIM       20     20       1254  ACC Number                         
PMENSPAR  DIM       50     50       1274  Spare                              
.
.End of Record                      1324 
.
