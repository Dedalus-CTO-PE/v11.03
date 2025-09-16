. *----------------------------------------------------------------------
. * Include Name  :   PMSENCTD.INC
. *
. * Function      :   CGI variables for PMSENCFD - pmsencaf.dat                 
. *
. * V10.13.00 24/07/2018  Ebon Clements  TSK 0815359
. *           Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
PMENC001  DIM       8      Referral/Visit Number              
PMENC002  DIM       8      Encounter Number                   
PMENC003  DIM       3      Service Department (Cat CG)        
PMENC004  DIM       10     Service Provider (pmshcpaf)        
PMENC005  DIM       8      Service Date (CCYYMMDD)            
PMENC006  DIM       8      Service Time (HH:MM:SS)            
PMENC007  DIM       3      Location of Service (Catgory LD)   
PMENC008  DIM       6      Service Type (allseraf)            
PMENC009  DIM       3      Service Delivery Mode (Cat sd)     
PMENC010  DIM       6      Direct Units                       
PMENC011  DIM       6      Direct Billable Units              
PMENC012  DIM       6      Indirect Units                     
PMENC013  DIM       6      Indirect Billable Units            
PMENC014  DIM       3      Compensation Code (Category CL)    
PMENC015  DIM       3      Bulk Billing Code (Category GB)    
PMENC016  DIM       3      Purchaser (Cat HP)                 
PMENC017  DIM       3      Contract (Cat gb)                  
PMENC018  DIM       3      Patient Type (Category GI)         
PMENC019  DIM       1      Record Status (0=Active,1=Cancel)  
PMENC020  DIM       8      User Defined Date 1 (CCYYMMDD)     
PMENC021  DIM       8      User Defined Time 1 (HH:MM:SS)     
PMENC022  DIM       8      User Defined Date 2 (CCYYMMDD)     
PMENC023  DIM       8      User Defined Time 2 (HH:MM:SS)     
PMENC024  DIM       8      User Defined Date 3 (CCYYMMDD)     
PMENC025  DIM       8      User Defined Time 3 (HH:MM:SS)     
PMENC026  DIM       8      User Defined Date 4 (CCYYMMDD)     
PMENC027  DIM       8      User Defined Time 4 (HH:MM:SS)     
PMENC028  DIM       10     Additional HCP 1 (pmshcpaf)        
PMENC029  DIM       10     Additional HCP 2 (pmshcpaf)        
PMENC030  DIM       10     Additional HCP 3 (pmshcpaf)        
PMENC031  DIM       10     Additional HCP 4 (pmshcpaf)        
PMENC032  DIM       10     User Defined HCP 1 (pmshcpaf)      
PMENC033  DIM       10     User Defined HCP 2 (pmshcpaf)      
PMENC034  DIM       10     User Defined HCP 3 (pmshcpaf)      
PMENC035  DIM       10     User Defined HCP 4 (pmshcpaf)      
PMENC036  DIM       9      User Defined Diagnosis 1 (alldiaaf)
PMENC037  DIM       9      User Defined Diagnosis 2 (alldiaaf)
PMENC038  DIM       9      User Defined Diagnosis 3 (alldiaaf)
PMENC039  DIM       80     Free Format Diagnosis 1            
PMENC040  DIM       80     Free Format Diagnosis 2            
PMENC041  DIM       80     Free Format Diagnosis 3            
PMENC042  DIM       9      User Defined Procedure 1 (allproaf)
PMENC043  DIM       9      User Defined Procedure 2 (allproaf)
PMENC044  DIM       9      User Defined Procedure 3 (allproaf)
PMENC045  DIM       1      User Defined Y/N 1 (0=No,1=Yes)    
PMENC046  DIM       1      User Defined Y/N 2 (0=No,1=Yes)    
PMENC047  DIM       1      User Defined Y/N 3 (0=No,1=Yes)    
PMENC048  DIM       1      User Defined Y/N 4 (0=No,1=Yes)    
PMENC049  DIM       1      User Defined Y/N 5 (0=No,1=Yes)    
PMENC050  DIM       1      User Defined Y/N 6 (0=No,1=Yes)    
PMENC051  DIM       1      User Defined Y/N 7 (0=No,1=Yes)    
PMENC052  DIM       1      User Defined Y/N 8 (0=No,1=Yes)    
PMENC053  DIM       1      User Defined Y/N 9 (0=No,1=Yes)    
PMENC054  DIM       80     User Defined Free Format 1         
PMENC055  DIM       80     User Defined Free Format 2         
PMENC056  DIM       80     User Defined Free Format 3         
PMENC057  DIM       3      User Defined Code 1 (Category za)  
PMENC058  DIM       3      User Defined Code 2 (Category zb)  
PMENC059  DIM       3      User Defined Code 3 (Category zc)  
PMENC060  DIM       3      User Defined Code 4 (Category zd)  
PMENC061  DIM       3      User Defined Code 5 (Category ze)  
PMENC062  DIM       3      User Defined Code 6 (Category zf)  
PMENC063  DIM       3      User Defined Code 7 (Category zg)  
PMENC064  DIM       3      User Defined Code 8 (Category zh)  
PMENC065  DIM       3      User Defined Code 9 (Category zi)  
PMENC066  DIM       3      User Defined Code 10 (Category zj) 
PMENC067  DIM       3      User Defined Code 11 (Category zk) 
PMENC068  DIM       3      User Defined Code 12 (Category zl) 
PMENC069  DIM       3      User Defined Code 13 (Category zm) 
PMENC070  DIM       3      User Defined Code 14 (Category zn) 
PMENC071  DIM       3      User Defined Code 15 (Category zo) 
PMENC072  DIM       3      User Defined Code 16 (Category zp) 
PMENC073  DIM       3      User Defined Code 17 (Category zq) 
PMENC074  DIM       3      User Defined Code 18 (Category zr) 
PMENC075  DIM       3      User Defined Code 19 (Category zs) 
PMENC076  DIM       3      User Defined Code 20 (Category zt) 
PMENC077  DIM       3      User Defined Code 21 (Category zu) 
PMENC078  DIM       3      User Defined Code 22 (Category zv) 
PMENC079  DIM       3      User Defined Code 23 (Category zw) 
PMENC080  DIM       3      User Defined Code 24 (Category zx) 
PMENC081  DIM       3      User Defined Code 25 (Category zy) 
PMENC082  DIM       3      User Defined Code 26 (Category zz) 
PMENC083  DIM       3      User Defined Code 27 (Category zA) 
PMENC084  DIM       3      User Defined Code 28 (Category zB) 
PMENC085  DIM       3      User Defined Code 29 (Category zC) 
PMENC086  DIM       3      User Defined Code 30 (Category zD) 
PMENC087  DIM       3      User Defined Code 31 (Category zE) 
PMENC088  DIM       3      User Defined Code 32 (Category zF) 
PMENC089  DIM       3      User Defined Code 33 (Category zG) 
PMENC090  DIM       3      User Defined Code 34 (Category zH) 
PMENC091  DIM       3      User Defined Code 35 (Category zI) 
PMENC092  DIM       3      User Defined Code 36 (Category zJ) 
PMENC093  DIM       3      User Defined Code 37 (Category zK) 
PMENC094  DIM       3      User Defined Code 38 (Category zL) 
PMENC095  DIM       3      User Defined Code 39 (Category zM) 
PMENC096  DIM       3      User Defined Code 40 (Category zN) 
PMENC097  DIM       17     User Defined Form Field 1          
PMENC098  DIM       17     User Defined Form Field 2          
PMENC099  DIM       17     User Defined Form Field 3          
PMENC100  DIM       17     User Defined Form Field 4          
PMENC101  DIM       17     User Defined Form Field 5          
PMENC102  DIM       17     User Defined Form Field 6          
PMENC103  DIM       17     User Defined Form Field 7          
PMENC104  DIM       17     User Defined Form Field 8          
PMENC105  DIM       17     User Defined Form Field 9          
PMENC106  DIM       17     User Defined Form Field 10         
PMENC107  DIM       8      User Defined Form Field 11         
PMENC108  DIM       8      User Defined Form Field 12         
PMENC109  DIM       8      User Defined Form Field 13         
PMENC110  DIM       8      User Defined Form Field 14         
PMENC111  DIM       8      User Defined Form Field 15         
PMENC112  DIM       8      User Defined Form Field 16         
PMENC113  DIM       8      User Defined Form Field 17         
PMENC114  DIM       8      User Defined Form Field 18         
PMENC115  DIM       8      User Defined Form Field 19         
PMENC116  DIM       8      User Defined Form Field 20         
PMENC117  DIM       80     Comments 1                         
PMENC118  DIM       80     Comments 2                         
PMENC119  DIM       8      Date Record Created (CCYYMMDD)     
PMENC120  DIM       8      Time Record Created (HH:MM:SS)     
PMENC121  DIM       10     WEB User ID Created (websecaf)     
PMENC122  DIM       8      Date Record Updated (CCYYMMDD)     
PMENC123  DIM       8      Time Record Updated (HH:MM:SS)     
PMENC124  DIM       10     WEB User ID Updated (websecaf)     
PMENC125  DIM       1      Separate SACS Episode 0=No 1=Yes   
PMENC126  DIM       1      MOH Indicator Record sent to MHINC 
PMENC127  DIM       3      Outcome (Cat OZ)                   
PMENC128  DIM       20     ACC Number                         
.
