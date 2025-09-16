. *----------------------------------------------------------------------
. * Include Name  :   ALLSCTTD.INC
. *
. * Function      :   CGI variables for ALLSCTFD - allsctaf.dat
. *----------------------------------------------------------------------
.  Modifications Done :
.
.  V9.05.B01 23/02/2006  Davin         CAR 76341
.           Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length  Description
.----     ----      ------  -----------
ALSCT001  DIM       8       U/R Number                         
ALSCT002  DIM       8       Counter                            
ALSCT003  DIM       3       Current Service 1                  
ALSCT004  DIM       3       Current Service 2                  
ALSCT005  DIM       3       Current Service 3                  
ALSCT006  DIM       3       Current Service 4                  
ALSCT007  DIM       3       Current Service 5                  
ALSCT008  DIM       3       Current Service 6                  
ALSCT009  DIM       3       Current Service 7                  
ALSCT010  DIM       3       Current Service 8                  
ALSCT011  DIM       3       Current Service 9                  
ALSCT012  DIM       30      Referral Agency 1                  
ALSCT013  DIM       30      Referral Agency 2                  
ALSCT014  DIM       30      Referral Agency 3                  
ALSCT015  DIM       30      Referral Agency 4                  
ALSCT016  DIM       30      Referral Agency 5                  
ALSCT017  DIM       30      Referral Agency 6                  
ALSCT018  DIM       30      Referral Agency 7                  
ALSCT019  DIM       60      Referral Reason 1                  
ALSCT020  DIM       60      Referral Reason 2                  
ALSCT021  DIM       60      Referral Reason 3                  
ALSCT022  DIM       60      Referral Reason 4                  
ALSCT023  DIM       60      Referral Reason 5                  
ALSCT024  DIM       60      Referral Reason 6                  
ALSCT025  DIM       60      Referral Reason 7                  
ALSCT026  DIM       3       Consumer Consent 1                 
ALSCT027  DIM       3       Consumer Consent 2                 
ALSCT028  DIM       3       Consumer Consent 3                 
ALSCT029  DIM       3       Consumer Consent 4                 
ALSCT030  DIM       3       Consumer Consent 5                 
ALSCT031  DIM       3       Consumer Consent 6                 
ALSCT032  DIM       3       Consumer Consent 7                 
ALSCT033  DIM       3       Referral Method 1                  
ALSCT034  DIM       3       Referral Method 2                  
ALSCT035  DIM       3       Referral Method 3                  
ALSCT036  DIM       3       Referral Method 4                  
ALSCT037  DIM       3       Referral Method 5                  
ALSCT038  DIM       3       Referral Method 6                  
ALSCT039  DIM       3       Referral Method 7                  
ALSCT040  DIM       3       Feedback Required 1                
ALSCT041  DIM       3       Feedback Required 2                
ALSCT042  DIM       3       Feedback Required 3                
ALSCT043  DIM       3       Feedback Required 4                
ALSCT044  DIM       3       Feedback Required 5                
ALSCT045  DIM       3       Feedback Required 6                
ALSCT046  DIM       3       Feedback Required 7                
ALSCT047  DIM       8       Referral Date 1 (ccyymmdd)         
ALSCT048  DIM       8       Referral Date 2 (ccyymmdd)         
ALSCT049  DIM       8       Referral Date 3 (ccyymmdd)         
ALSCT050  DIM       8       Referral Date 4 (ccyymmdd)         
ALSCT051  DIM       8       Referral Date 5 (ccyymmdd)         
ALSCT052  DIM       8       Referral Date 6 (ccyymmdd)         
ALSCT053  DIM       8       Referral Date 7 (ccyymmdd)         
ALSCT054  DIM       3       Living Arrangement                 
ALSCT055  DIM       3       Accommodation                      
ALSCT056  DIM       3       Employment Status                  
ALSCT057  DIM       3       Mental Health Act Status           
ALSCT058  DIM       30      Other Legal Order                  
ALSCT059  DIM       1       Legal Order Flag                   
ALSCT060  DIM       3       Decision Making Responsibility     
ALSCT061  DIM       1       Capable of making own decisions    
ALSCT062  DIM       3       Financial Decision Maker           
ALSCT063  DIM       1       Financial Trade Offs               
ALSCT064  DIM       3       Carer Availability                 
ALSCT065  DIM       3       Carer Residency Status             
ALSCT066  DIM       3       Carer Relationship                 
ALSCT067  DIM       1       Overall Health                     
ALSCT068  DIM       1       Bodily Pain                        
ALSCT069  DIM       1       Interference with activities       
ALSCT070  DIM       1       Vision for reading                 
ALSCT071  DIM       1       Vision for distance                
ALSCT072  DIM       1       Hearing                            
ALSCT073  DIM       3       No. of falls in last 6 months      
ALSCT074  DIM       60      Free Format Comments 1             
ALSCT075  DIM       60      Free Format Comments 2             
ALSCT076  DIM       60      Free Format Comments 3             
ALSCT077  DIM       60      Free Format Comments 4             
ALSCT078  DIM       60      Free Format Comments 5             
ALSCT079  DIM       60      Free Format Comments 6             
ALSCT080  DIM       60      Free Format Comments 7             
ALSCT081  DIM       60      Free Format Comments 8             
ALSCT082  DIM       60      Free Format Comments 9             
ALSCT083  DIM       60      Free Format Comments 10            
ALSCT084  DIM       60      Free Format Comments 11            
ALSCT085  DIM       60      Free Format Comments 13            
ALSCT086  DIM       60      Free Format Comments 13            
ALSCT087  DIM       60      Free Format Comments 14            
ALSCT088  DIM       60      Free Format Comments 15            
ALSCT089  DIM       1       K10 Scale Field 1                  
ALSCT090  DIM       1       K10 Scale Field 2                  
ALSCT091  DIM       1       K10 Scale Field 3                  
ALSCT092  DIM       1       K10 Scale Field 4                  
ALSCT093  DIM       1       K10 Scale Field 5                  
ALSCT094  DIM       1       K10 Scale Field 6                  
ALSCT095  DIM       1       K10 Scale Field 7                  
ALSCT096  DIM       1       K10 Scale Field 8                  
ALSCT097  DIM       1       K10 Scale Field 9                  
ALSCT098  DIM       1       K10 Scale Field 10                 
ALSCT099  DIM       1       Personal/Social Support            
ALSCT100  DIM       1       Eligible for Disability Services   
ALSCT101  DIM       1       Eligibility Criteria 1             
ALSCT102  DIM       1       Eligibility Criteria 2             
ALSCT103  DIM       1       Eligibility Criteria 3             
ALSCT104  DIM       1       Eligibility Criteria 4             
ALSCT105  DIM       60      Free Format Comments 16            
