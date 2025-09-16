.------------------------------------------------------------------------
. Include Name  :   OPRARDTD.INC
.
. Function      :   CGI Variables for OPRARDFD - oprardaf.dat                 
.
.------------------------------------------------------------------------
.  V11.01.01  19/07/2021  Thanh T.      TSK 0895165
.             Added OPARD115 - Admitting Nurse Start Time and
.                   OPARD116 - Admitting Nurse End Time
.  V10.08.01  23/06/2016  Ebon Clements TSK 0312728
.             Changed OPARD030/OPARUT02 from a time to a date
.  V9.11.01   19/01/2009  Ebon Clements CAR 169339
.             Added OPARD113 and OPARD114
.------------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
OPARD001  DIM       10     Unique ID.                         
OPARD002  DIM       8      Arrival Time (HH:MM:SS)            
OPARD003  DIM       6      Admitting Nurse                    
OPARD004  DIM       3      Reason Patient Late                
OPARD005  DIM       1      Pre-op Check List Complete         
.                          0 = No
.                          1 = Yes
OPARD006  DIM       1      Consent Form Signed                
.                          0 = No
.                          1 = Yes
OPARD007  DIM       1      Medical Records                    
.                          0 = No
.                          1 = Yes
OPARD008  DIM       1      X-Ray                              
.                          0 = No
.                          1 = Yes
OPARD009  DIM       1      Bladder Empty                      
.                          0 = No
.                          1 = Yes
OPARD010  DIM       1      Make Up & Jewelry Removed          
.                          0 = No
.                          1 = Yes
OPARD011  DIM       1      Pre-medication Given               
.                          0 = No
.                          1 = Yes
OPARD012  DIM       1      Allergies checked                  
.                          0 = No
.                          1 = Yes
OPARD013  DIM       40     Prothetesis                        
OPARD014  DIM       3      User Defined Code 1                
OPARD015  DIM       3      User Defined Code 2                
OPARD016  DIM       3      User Defined Code 3                
OPARD017  DIM       3      User Defined Code 4                
OPARD018  DIM       3      User Defined Code 5                
OPARD019  DIM       3      User Defined Code 6                
OPARD020  DIM       3      User Defined Code 7                
OPARD021  DIM       3      User Defined Code 8                
OPARD022  DIM       3      User Defined Code 9                
OPARD023  DIM       3      User Defined Code 10               
OPARD024  DIM       1      User Defined Y/N 1                 
.                          0 = No
.                          1 = Yes
OPARD025  DIM       1      User Defined Y/N 2                 
.                          0 = No
.                          1 = Yes
OPARD026  DIM       1      User Defined Y/N 3                 
.                          0 = No
.                          1 = Yes
OPARD027  DIM       1      User Defined Y/N 4                 
.                          0 = No
.                          1 = Yes
OPARD028  DIM       1      User Defined Y/N 5                 
.                          0 = No
.                          1 = Yes
OPARD029  DIM       8      User Defined Time Field 1          
OPARD030  DIM       8      User Defined Date Field 2          
OPARD031  DIM       8      User Defined Time Field 3          
OPARD032  DIM       8      User Defined Time Field 4          
OPARD033  DIM       8      User Defined Time Field 5          
OPARD034  FORM      6      User Defined Form Field 1          
OPARD035  FORM      6      User Defined Form Field 2          
OPARD036  FORM      6      User Defined Form Field 3          
OPARD037  FORM      6      User Defined Form Field 4          
OPARD038  FORM      6      User Defined Form Field 5          
OPARD039  DIM       8      Time Called For                    
OPARD040  DIM       10     User ID for Arrival (websecaf)     
OPARD041  DIM       8      Anaesthetic Prep Start (HH:MM:SS)  
OPARD042  DIM       8      Anaesthetic Start (HH:MM:SS)       
OPARD043  DIM       8      Anaesthetic End (HH:MM:SS)         
OPARD044  DIM       3      Type of Intubation (category)      
OPARD045  DIM       3      User Defined Code 11               
OPARD046  DIM       3      User Defined Code 12               
OPARD047  DIM       3      User Defined Code 13               
OPARD048  DIM       3      User Defined Code 14               
OPARD049  DIM       3      User Defined Code 15               
OPARD050  DIM       3      User Defined Code 16               
OPARD051  DIM       3      User Defined Code 17               
OPARD052  DIM       3      User Defined Code 18               
OPARD053  DIM       3      User Defined Code 19               
OPARD054  DIM       3      User Defined Code 20               
OPARD055  DIM       1      User Defined Y/N 6                 
.                          0 = No
.                          1 = Yes
OPARD056  DIM       1      User Defined Y/N 7                 
.                          0 = No
.                          1 = Yes
OPARD057  DIM       1      User Defined Y/N 8                 
.                          0 = No
.                          1 = Yes
OPARD058  DIM       1      User Defined Y/N 9                 
.                          0 = No
.                          1 = Yes
OPARD059  DIM       1      User Defined Y/N 10                
.                          0 = No
.                          1 = Yes
OPARD060  DIM       8      User Defined Time Field 6          
OPARD061  DIM       8      User Defined Time Field 7          
OPARD062  DIM       8      User Defined Time Field 8          
OPARD063  DIM       8      User Defined Time Field 9          
OPARD064  DIM       8      User Defined Time Field 10         
OPARD065  FORM      6      User Defined Form Field 6          
OPARD066  FORM      6      User Defined Form Field 7          
OPARD067  FORM      6      User Defined Form Field 8          
OPARD068  FORM      6      User Defined Form Field 9          
OPARD069  FORM      6      User Defined Form Field 10         
OPARD070  DIM       10     User ID for Anaesthetic (websecaf) 
OPARD071  DIM       8      Time in Recovery - Front (HH:MM:SS)
OPARD072  DIM       6      Nurse 1 Attending Patient - Front  
OPARD073  DIM       6      Nurse 2 Attending Patient - Front  
OPARD074  DIM       8      Time in Recovery - Back (HH:MM:SS) 
OPARD075  DIM       6      Nurse 1 Attending Patient - Back   
OPARD076  DIM       6      Nurse 2 Attending Patient - Back   
OPARD077  DIM       8      Time in Recovery - Day Procedure   
OPARD078  DIM       6      Nurse 1 Attending Patient - Day    
OPARD079  DIM       6      Nurse 2 Attending Patient - Day    
OPARD080  DIM       8      Time Exit Theatre Compl. (HH:MM:SS)
OPARD081  DIM       10     User ID for Recovery (websecaf)    
OPARD082  DIM       8      Time Patient Died (HH:MM:SS)       
OPARD083  DIM       8      Time Patient Went to ICU (HH:MM:SS)
OPARD084  DIM       3      Recovery Delay Code (category)     
OPARD085  DIM       8      Ready to Depart Time (HH:MM:SS)    
OPARD086  DIM       3      User Defined Code 21               
OPARD087  DIM       3      User Defined Code 22               
OPARD088  DIM       3      User Defined Code 23               
OPARD089  DIM       3      User Defined Code 24               
OPARD090  DIM       3      User Defined Code 25               
OPARD091  DIM       3      User Defined Code 26               
OPARD092  DIM       3      User Defined Code 27               
OPARD093  DIM       3      User Defined Code 28               
OPARD094  DIM       3      User Defined Code 29               
OPARD095  DIM       3      User Defined Code 30               
OPARD096  DIM       1      User Defined Y/N 11                
.                          0 = No
.                          1 = Yes
OPARD097  DIM       1      User Defined Y/N 12                
.                          0 = No
.                          1 = Yes
OPARD098  DIM       1      User Defined Y/N 13                
.                          0 = No
.                          1 = Yes
OPARD101  DIM       1      User Defined Y/N 14                
.                          0 = No
.                          1 = Yes
OPARD102  DIM       1      User Defined Y/N 15                
.                          0 = No
.                          1 = Yes
OPARD103  DIM       8      User Defined Time Field 11         
OPARD104  DIM       8      User Defined Time Field 12         
OPARD105  DIM       8      User Defined Time Field 13         
OPARD106  DIM       8      User Defined Time Field 14         
OPARD107  DIM       8      User Defined Time Field 15         
OPARD108  FORM      6      User Defined Form Field 11         
OPARD109  FORM      6      User Defined Form Field 12         
OPARD110  FORM      6      User Defined Form Field 13         
OPARD111  FORM      6      User Defined Form Field 14         
OPARD112  FORM      6      User Defined Form Field 15         
OPARD113  DIM       10     User Defined Nurse 1
OPARD114  DIM       10     User Defined Nurse 2
OPARD115  DIM       8      Admitting Nurse Start Time 
OPARD116  DIM       8      Admitting Nurse End Time
