. *----------------------------------------------------------------------
. * Include Name  :   OUTDEMTD.INC
. *
. * Function      :   CGI Variables for OUTDEMFD - outdemaf    
. *
. * Mods          :   V10.03.01 20/06/2013 Peter Vela    CAR 283202
. *                             Added OTDEM083 OTDEM084
. *                   V10.02.00 23/08/2011 Ebon Clements CAR 242014
. *                             Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
OTDEM001  DIM       8      U/R Number                         
OTDEM002  DIM       8      Action Date (CCYYMMDD)     
OTDEM003  DIM       8      Action Time (HH:MM:SS)     
OTDEM004  DIM       4      Title                              
OTDEM005  DIM       40     Surname                            
OTDEM006  DIM       40     First Given Name                   
OTDEM007  DIM       40     Second Given Name                  
OTDEM008  DIM       1      Gender                             
OTDEM009  DIM       8      Date of Birth (CCYYMMDD)           
OTDEM010  DIM       3      Marital Status (Cat M)             
OTDEM011  DIM       10     Medicare Number                    
OTDEM012  DIM       2      Medicare Reference Number          
OTDEM013  DIM       8      Medicare Valid To Date (CCYYMMDD)  
OTDEM014  DIM       8      DVA Card Expiry Date (CCYYMMDD)               
OTDEM015  DIM       20     DVA Number                         
OTDEM016  DIM       3      DVA Card Colour (Cat DX)           
OTDEM017  DIM       35     Address Line 1                     
OTDEM018  DIM       35     Address Line 2                     
OTDEM019  DIM       35     Address Line 3                     
OTDEM020  DIM       35     Address Line 4                     
OTDEM021  DIM       8      Post Code                          
OTDEM022  DIM       20     Telephone Private                  
OTDEM023  DIM       20     Telephone Work                     
OTDEM024  DIM       20     Telephone Mobile                   
OTDEM025  DIM       80     Email Address                      
OTDEM026  DIM       8      Date of Death (CCYYMMDD)           
OTDEM027  DIM       3      Death Type (Cat DY)                
OTDEM028  DIM       1      Unknown Date of Death (Y/N)        
OTDEM029  DIM       3      Contact 1 Type (Cat tc)            
OTDEM030  DIM       4      Contact 1 Title
OTDEM031  DIM       40     Contact 1 Surname                  
OTDEM032  DIM       40     Contact 1 Given Name 1             
OTDEM033  DIM       40     Contact 1 Given Name 2             
OTDEM034  DIM       35     Contact 1 Address Line 1           
OTDEM035  DIM       35     Contact 2 Address Line 2           
OTDEM036  DIM       35     Contact 3 Address Line 3           
OTDEM037  DIM       35     Contact 4 Address Line 4           
OTDEM038  DIM       8      Contact 1 Post Code                
OTDEM039  DIM       20     Contact 1 Telephone Private        
OTDEM040  DIM       20     Contact 1 Telephone Business       
OTDEM041  DIM       20     Contact 1 Telephone Mobile         
OTDEM042  DIM       10     Contact 1 Relationship             
OTDEM043  DIM       80     Contact 1 Email                    
OTDEM044  DIM       3      Contact 2 Type (Cat tc)            
OTDEM045  DIM       4      Contact 2 Title
OTDEM046  DIM       40     Contact 2 Surname                  
OTDEM047  DIM       40     Contact 2 Given Name 1             
OTDEM048  DIM       40     Contact 2 Given Name 2             
OTDEM049  DIM       35     Contact 2 Address Line 1           
OTDEM050  DIM       35     Contact 2 Address Line 2           
OTDEM051  DIM       35     Contact 2 Address Line 3           
OTDEM052  DIM       35     Contact 2 Address Line 4           
OTDEM053  DIM       8      Contact 2 Post Code                
OTDEM054  DIM       20     Contact 2 Telephone Private        
OTDEM055  DIM       20     Contact 2 Telephone Business       
OTDEM056  DIM       20     Contact 2 Telephone Mobile         
OTDEM057  DIM       10     Contact 2 Relationship             
OTDEM058  DIM       80     Contact 2 Email                    
OTDEM059  DIM       30     Alias 1 Surname                    
OTDEM060  DIM       30     Alias 1 First Given Name           
OTDEM061  DIM       30     Alias 1 Second Given Name          
OTDEM062  DIM       1      Alias 1 Gender                     
OTDEM063  DIM       8      Alias 1 Date of Birth (CCYYMMDD)   
OTDEM064  DIM       30     Alias 2 Surname                    
OTDEM065  DIM       30     Alias 2 First Given Name           
OTDEM066  DIM       30     Alias 2 Second Given Name          
OTDEM067  DIM       1      Alias 2 Gender                     
OTDEM068  DIM       8      Alias 2 Date of Birth (CCYYMMDD)   
OTDEM069  DIM       30     Alias 3 Surname                    
OTDEM070  DIM       30     Alias 3 First Given Name           
OTDEM071  DIM       30     Alias 3 Second Given Name          
OTDEM072  DIM       1      Alias 3 Gender                     
OTDEM073  DIM       8      Alias 3 Date of Birth (CCYYMMDD)   
OTDEM074  DIM       30     Alias 4 Surname                    
OTDEM075  DIM       30     Alias 4 First Given Name           
OTDEM076  DIM       30     Alias 4 Second Given Name          
OTDEM077  DIM       1      Alias 4 Gender                     
OTDEM078  DIM       8      Alias 4 Date of Birth (CCYYMMDD)   
OTDEM079  DIM       8      Saftey Net Card Expiry (CCYYMMDD)
OTDEM080  DIM       20     Safety Net Card Number
OTDEM081  DIM       3      Safety Net Card Type (Cat ct)
OTDEM082  DIM       3      DVA Card Type (Cat ct)
OTDEM083  DIM       3      Preferred Method of Contact (Cat Pn)
OTDEM084  DIM       3      Preferred MEthod of Correspondence (Cat Pr)
.
