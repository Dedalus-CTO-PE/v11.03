. *----------------------------------------------------------------------
. * Include Name  :   ALLACTTD.INC
. *
. * Function      :   CGI variables for ALLACTFD - allactaf.dat                 
. *
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
ALACT001  DIM       3      Department Code
ALACT002  DIM       10     Service Provider (pmshcpaf)        
ALACT003  DIM       8      Service Date (CCYYMMDD)
ALACT004  DIM       8      Service Time (HH:MM:SS)        
ALACT005  DIM       3      Location of Service (Category LD)  
ALACT006  DIM       6      Service Type (allseraf)
ALACT007  FORM      6      Units
ALACT008  DIM       1      Record Status (0=Active,1=Cancel)
ALACT009  DIM       8      User Defined Date 1 (CCYYMMDD)
ALACT010  DIM       8      User Defined Time 1 (HH:MM:SS)
ALACT011  DIM       8      User Defined Date 2 (CCYYMMDD)
ALACT012  DIM       8      User Defined Time 2 (HH:MM:SS)
ALACT013  DIM       8      User Defined Date 3 (CCYYMMDD)
ALACT014  DIM       8      User Defined Time 3 (HH:MM:SS)
ALACT015  DIM       8      User Defined Date 4 (CCYYMMDD)
ALACT016  DIM       8      User Defined Time 4 (HH:MM:SS)
ALACT017  DIM       10     User Defined Doctor 1 (pmshcpaf)     
ALACT018  DIM       10     User Defined Doctor 2 (pmshcpaf)     
ALACT019  DIM       10     User Defined Doctor 3 (pmshcpaf)     
ALACT020  DIM       10     User Defined Doctor 4 (pmshcpaf)     
ALACT021  DIM       9      User Defined Diagnosis 1 (alldiaaf)     
ALACT022  DIM       9      User Defined Diagnosis 2 (alldiaaf)     
ALACT023  DIM       9      User Defined Diagnosis 3 (alldiaaf)     
ALACT024  DIM       60     Free Format Diagnosis 1
ALACT025  DIM       60     Free Format Diagnosis 2
ALACT026  DIM       60     Free Format Diagnosis 3
ALACT027  DIM       1      User Defined Y/N 1 (0=No,1=Yes)    
ALACT028  DIM       1      User Defined Y/N 2 (0=No,1=Yes)    
ALACT029  DIM       1      User Defined Y/N 3 (0=No,1=Yes)    
ALACT030  DIM       1      User Defined Y/N 4 (0=No,1=Yes)    
ALACT031  DIM       1      User Defined Y/N 5 (0=No,1=Yes)    
ALACT032  DIM       1      User Defined Y/N 6 (0=No,1=Yes)    
ALACT033  DIM       1      User Defined Y/N 7 (0=No,1=Yes)    
ALACT034  DIM       1      User Defined Y/N 8 (0=No,1=Yes)    
ALACT035  DIM       1      User Defined Y/N 9 (0=No,1=Yes)    
ALACT036  DIM       60     User Defined Free Format           
ALACT037  DIM       60     User Defined Free Format           
ALACT038  DIM       60     User Defined Free Format           
ALACT039  DIM       3      User Defined Code 1 (Category u0)  
ALACT040  DIM       3      User Defined Code 2 (Category u1)  
ALACT041  DIM       3      User Defined Code 3 (Category u2)  
ALACT042  DIM       3      User Defined Code 4 (Category u3)  
ALACT043  DIM       3      User Defined Code 5 (Category u4)  
ALACT044  DIM       3      User Defined Code 6 (Category u5)  
ALACT045  DIM       3      User Defined Code 7 (Category u6)  
ALACT046  DIM       3      User Defined Code 8 (Category u7)  
ALACT047  DIM       3      User Defined Code 9 (Category u8)  
ALACT048  DIM       3      User Defined Code 10 (Category u9) 
ALACT049  DIM       3      User Defined Code 11 (Category ua) 
ALACT050  DIM       3      User Defined Code 12 (Category ub) 
ALACT051  FORM      12.2   User Defined Form Field 1          
ALACT052  FORM      12.2   User Defined Form Field 2          
ALACT053  FORM      12.2   User Defined Form Field 3          
ALACT054  FORM      12.2   User Defined Form Field 4          
ALACT055  FORM      12.2   User Defined Form Field 5          
ALACT056  FORM      12.2   User Defined Form Field 6          
ALACT057  FORM      8      User Defined Form Field 7
ALACT058  FORM      8      User Defined Form Field 8
ALACT059  FORM      8      User Defined Form Field 9          
ALACT060  FORM      8      User Defined Form Field 10         
ALACT061  FORM      8      User Defined Form Field 11         
ALACT062  FORM      8      User Defined Form Field 12         
ALACT063  DIM       60     Comments 1                         
ALACT064  DIM       8      Date Record Created (CCYYMMDD)     
ALACT065  DIM       8      Time Record Created (HH:MM:SS)     
ALACT066  DIM       10     WEB User ID Created (websecaf)     
ALACT067  DIM       8      Date Record Updated (CCYYMMDD)     
ALACT068  DIM       8      Time Record Updated (HH:MM:SS)     
ALACT069  DIM       10     WEB User ID Updated (websecaf)     
