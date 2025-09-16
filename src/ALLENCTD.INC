. *----------------------------------------------------------------------
. * Include Name  :   ALLENCTD.INC
. *
. * Function      :   CGI variables for ALLENCFD - allencaf.dat                 
. *
. * V10.10.01 17/05/2015  Ania P         CAR 266089
. *           Added ALENC128
. * V10.08.01 15/11/2016  Nicole Torrisi TSK 0815159
. *           Changed ALENC097 - ALENC106 to DIM from FORM        
. * V10.06.01 23/03/2015  Ebon Clements CAR 314429
. *           Changed ALENC079 to Event Program               
. * V10.03.01 06/09/2013  Don Nguyen    CAR 285773
. *           Added ALENC127 - Service Department (Cat CG)
. * V10.02.01 29/06/2011  Ebon Clements CAR 243794
. *           Added ALENC122 to ALENC126
. * V9.12.01  25/09/2009  Mike Laming  CAR 173274
. *           Added indicators for Encounter Notes, Medications, Inter & Supply
. * V9.11.01  06/04/2009  Mike Laming  CAR 191906
. *           Changed ALENC011 to ALLENC014 to Dim 6 (from Form 6)
. * V9.08.01  16/04/2007 Ebon Clements CAR 135533
. *           Added ALENC120 and ALENC121
. * V9.07.02  16/08/2006 Ebon Clements CAR 110311
. *           Added ALENC119
. * V9.07.01  02/08/2006 Ebon Clements CAR 113925
. *           Added ALENC118
. * V9.05.B02 18/01/2006 Ebon Clements CAR 76341
. *           Added ALENC117 Separate SACS Episode
. * V9.05.B01 16/12/2005 Ebon Clements CAR 76341
. *           Changed encounter number to DIM 8
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
ALENC001  DIM       8      Referral/Visit Number                       
ALENC002  DIM       8      Encounter Number                   
ALENC003  DIM       6      Clinic Type
ALENC004  DIM       10     Service Provider (pmshcpaf)        
ALENC005  DIM       8      Service Date (CCYYMMDD)            
ALENC006  DIM       8      Service Time (HH:MM:SS)            
ALENC007  DIM       3      Location of Service (Catgory LD)   
ALENC008  DIM       8      Linked Visit Number (if applic.) 
ALENC009  DIM       3      Patient Type (Category GI)
ALENC010  DIM       6      Service Type (allseraf)            
ALENC011  DIM       6      Direct Units                       
ALENC012  DIM       6      Direct Billable Units              
ALENC013  DIM       6      Indirect Units                     
ALENC014  DIM       6      Indirect Billable Units            
ALENC015  DIM       3      Bulk Billing Code (Category GB)
ALENC016  DIM       1      Record Status (0=Active,1=Cancel)  
ALENC017  DIM       8      User Defined Date 1 (CCYYMMDD)     
ALENC018  DIM       8      User Defined Time 1 (HH:MM:SS)     
ALENC019  DIM       8      User Defined Date 2 (CCYYMMDD)     
ALENC020  DIM       8      User Defined Time 2 (HH:MM:SS)     
ALENC021  DIM       8      User Defined Date 3 (CCYYMMDD)     
ALENC022  DIM       8      User Defined Time 3 (HH:MM:SS)     
ALENC023  DIM       8      User Defined Date 4 (CCYYMMDD)     
ALENC024  DIM       8      User Defined Time 4 (HH:MM:SS)     
ALENC025  DIM       10     User Defined Doctor 1 (pmshcpaf)   
ALENC026  DIM       10     User Defined Doctor 2 (pmshcpaf)   
ALENC027  DIM       10     User Defined Doctor 3 (pmshcpaf)   
ALENC028  DIM       10     User Defined Doctor 4 (pmshcpaf)   
ALENC029  DIM       9      User Defined Diagnosis 1 (alldiaaf)
ALENC030  DIM       9      User Defined Diagnosis 2 (alldiaaf)
ALENC031  DIM       9      User Defined Diagnosis 3 (alldiaaf)
ALENC032  DIM       60     Free Format Diagnosis 1            
ALENC033  DIM       60     Free Format Diagnosis 2            
ALENC034  DIM       60     Free Format Diagnosis 3            
ALENC035  DIM       1      User Defined Y/N 1 (0=No,1=Yes)    
ALENC036  DIM       1      User Defined Y/N 2 (0=No,1=Yes)    
ALENC037  DIM       1      User Defined Y/N 3 (0=No,1=Yes)    
ALENC038  DIM       1      User Defined Y/N 4 (0=No,1=Yes)    
ALENC039  DIM       1      User Defined Y/N 5 (0=No,1=Yes)    
ALENC040  DIM       1      User Defined Y/N 6 (0=No,1=Yes)    
ALENC041  DIM       1      User Defined Y/N 7 (0=No,1=Yes)    
ALENC042  DIM       1      User Defined Y/N 8 (0=No,1=Yes)    
ALENC043  DIM       1      User Defined Y/N 9 (0=No,1=Yes)    
ALENC044  DIM       60     User Defined Free Format           
ALENC045  DIM       60     User Defined Free Format           
ALENC046  DIM       60     User Defined Free Format           
ALENC047  DIM       3      User Defined Code 1 (Category za)  
ALENC048  DIM       3      User Defined Code 2 (Category zb)  
ALENC049  DIM       3      User Defined Code 3 (Category zc)  
ALENC050  DIM       3      User Defined Code 4 (Category zd)  
ALENC051  DIM       3      User Defined Code 5 (Category ze)  
ALENC052  DIM       3      User Defined Code 6 (Category zf)  
ALENC053  DIM       3      User Defined Code 7 (Category zg)  
ALENC054  DIM       3      User Defined Code 8 (Category zh)  
ALENC055  DIM       3      User Defined Code 9 (Category zi)  
ALENC056  DIM       3      User Defined Code 10 (Category zj) 
ALENC057  DIM       3      User Defined Code 11 (Category zk) 
ALENC058  DIM       3      User Defined Code 12 (Category zl) 
ALENC059  DIM       3      User Defined Code 13 (Category zm) 
ALENC060  DIM       3      User Defined Code 14 (Category zn) 
ALENC061  DIM       3      User Defined Code 15 (Category zo) 
ALENC062  DIM       3      User Defined Code 16 (Category zp) 
ALENC063  DIM       3      User Defined Code 17 (Category zq) 
ALENC064  DIM       3      User Defined Code 18 (Category zr) 
ALENC065  DIM       3      User Defined Code 19 (Category zs) 
ALENC066  DIM       3      User Defined Code 20 (Category zt) 
ALENC067  DIM       3      User Defined Code 21 (Category zu) 
ALENC068  DIM       3      User Defined Code 22 (Category zv) 
ALENC069  DIM       3      User Defined Code 23 (Category zw) 
ALENC070  DIM       3      User Defined Code 24 (Category zx) 
ALENC071  DIM       3      User Defined Code 25 (Category zy) 
ALENC072  DIM       3      User Defined Code 26 (Category zz) 
ALENC073  DIM       3      User Defined Code 27 (Category zA) 
ALENC074  DIM       3      User Defined Code 28 (Category zB) 
ALENC075  DIM       3      User Defined Code 29 (Category zC) 
ALENC076  DIM       3      User Defined Code 30 (Category zD) 
ALENC077  DIM       3      User Defined Code 31 (Category zE) 
ALENC078  DIM       3      User Defined Code 32 (Category zF) 
ALENC079  DIM       3      Event Program        (Category zG) 
ALENC080  DIM       3      User Defined Code 34 (Category zH) 
ALENC081  DIM       3      User Defined Code 35 (Category zI) 
ALENC082  DIM       3      User Defined Code 36 (Category zJ) 
ALENC083  DIM       3      User Defined Code 37 (Category zK) 
ALENC084  DIM       3      User Defined Code 38 (Category zL) 
ALENC085  DIM       3      User Defined Code 39 (Category zM) 
ALENC086  DIM       3      User Defined Code 40 (Category zN) 
ALENC087  FORM      12.2   User Defined Form Field 1          
ALENC088  FORM      12.2   User Defined Form Field 2          
ALENC089  FORM      12.2   User Defined Form Field 3          
ALENC090  FORM      12.2   User Defined Form Field 4          
ALENC091  FORM      12.2   User Defined Form Field 5          
ALENC092  FORM      12.2   User Defined Form Field 6          
ALENC093  FORM      12.2   User Defined Form Field 7          
ALENC094  FORM      12.2   User Defined Form Field 8          
ALENC095  FORM      12.2   User Defined Form Field 9          
ALENC096  FORM      12.2   User Defined Form Field 10         
ALENC097  DIM       8      User Defined Form Field 11         
ALENC098  DIM       8      User Defined Form Field 12         
ALENC099  DIM       8      User Defined Form Field 13         
ALENC100  DIM       8      User Defined Form Field 14         
ALENC101  DIM       8      User Defined Form Field 15         
ALENC102  DIM       8      User Defined Form Field 16         
ALENC103  DIM       8      User Defined Form Field 17         
ALENC104  DIM       8      User Defined Form Field 18         
ALENC105  DIM       8      User Defined Form Field 19         
ALENC106  DIM       8      User Defined Form Field 20         
ALENC107  DIM       80     Comments 1                         
ALENC108  DIM       80     Comments 2                         
ALENC109  DIM       8      Date Record Created (CCYYMMDD)     
ALENC110  DIM       8      Time Record Created (HH:MM:SS)     
ALENC111  DIM       10     WEB User ID Created (websecaf)     
ALENC112  DIM       8      Date Record Updated (CCYYMMDD)     
ALENC113  DIM       8      Time Record Updated (HH:MM:SS)     
ALENC114  DIM       10     WEB User ID Updated (websecaf)     
ALENC115  DIM       3      Compensation Code (Category CL)    
ALENC116  DIM       8      Private Practice Unique Code
ALENC117  DIM       1      Separate SACS Episode
ALENC118  DIM       8      Case Review Date
ALENC119  DIM       20     Case Referral
ALENC120  DIM       3      Purchaser (Cat HP)
ALENC121  DIM       3      Contract (Cat gb)
ALENC122  DIM       5      Referred to Hospital (patvadaf)
ALENC123  DIM       3      Care Type (cat CC)
ALENC124  DIM       3      Transport Source of Ref. (cat SI)
ALENC125  DIM       3      Outcome (Cat OZ)
ALENC126  DIM       3      Service Delivery Mode (Cat sd)
ALENC127  DIM       3      Service Department (Cat CG)
ALENC128  DIM       20
.
ALENC201  INIT      "za"
ALENC202  INIT      "zb"
ALENC203  INIT      "zc"
ALENC204  INIT      "zd"
ALENC205  INIT      "ze"
ALENC206  INIT      "zf"
ALENC207  INIT      "zg"
ALENC208  INIT      "zh"
ALENC209  INIT      "zi"
ALENC210  INIT      "zj"
ALENC211  INIT      "zk"
ALENC212  INIT      "zl"
ALENC213  INIT      "zm"
ALENC214  INIT      "zn"
ALENC215  INIT      "zo"
ALENC216  INIT      "zp"
ALENC217  INIT      "zq"
ALENC218  INIT      "zr"
ALENC219  INIT      "zs"
ALENC220  INIT      "zt"
ALENC221  INIT      "zu"
ALENC222  INIT      "zv"
ALENC223  INIT      "zw"
ALENC224  INIT      "zx"
ALENC225  INIT      "zy"
ALENC226  INIT      "zz"
ALENC227  INIT      "zA"
ALENC228  INIT      "zB"
ALENC229  INIT      "zC"
ALENC230  INIT      "zD"
ALENC231  INIT      "zE"
ALENC232  INIT      "zF"
ALENC233  INIT      "zG"
ALENC234  INIT      "zH"
ALENC235  INIT      "zI"
ALENC236  INIT      "zJ"
ALENC237  INIT      "zK"
ALENC238  INIT      "zL"
ALENC239  INIT      "zM"
ALENC240  INIT      "zN"
.
..... Common Variables .....
ENCNOTES  FORM      1                       * Encounter Notes indicator Y/N
ENCINTEV  FORM      1                       *     "     Intervention Ind.
ENCMEDIC  FORM      1                       *     "     Medications Ind.
ENCSUPLY  FORM      1                       *     "     Supplies Ind.

