. V10.14.01 04/03/2019 RP C-0869551 Added new field PMWXVHCP                    
. V10.13.01 20/09/2018 DN C-0853817 Added new Claim Status code for 'Cancelled' 
. V10.09.02 29/11/2016 DS C-0825435 Added index 2                               
. V10.09.01 28/11/2016 DS C-0822329 Added new fields PMWXGRAD to PMWXPORD       
. V10.05.01 04/09/2014 SA C-274958 Added PMWXECOD                               
. V9.10.01  01/05/2008 ML  CAR 153670  Added NZ ACC field PMWXTPRO              
. V9.08.01  08/05/2007 JG  Added NZ ACC fields CAR 142467                       
. V9.03.003 28/07/2004 JH  Added NZ ACC fields                                  
. V9.03.003 28/07/2004 JH                                                       
. *----------------------------------------------------------------------
. * Include Name  :   PMSWX1FD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Workers Comp File extension table  
. *
. * File Type     :   SQL
. *
. * File Name     :   pmswx1af.dat
. *
. * Index Values  :   KEY8    KEY17                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSWX1A1   IFILE    SQL, FIXED=442, KEY="U1-8"
PMSWX1A2   IFILE    SQL, FIXED=442, KEY="U322-322,166-173,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMWXVISN  DIM       8      8        1     Visit Number                       
PMWXALOC  DIM       50     50       9     Accident Location                  
PMWXCINJ  DIM       3      3        59    Cause of Injury (Cat IK)           
PMWXICOD  DIM       3      3        62    Injury Code (Cat IJ)               
PMWXCNAM  DIM       40     40       65    Contact Name                       
PMWXCDTE  DIM       8      8        105   Date Record Created (ccyymmdd)     
PMWXCTIM  DIM       8      8        113   Time Record Created (hh:mm:ss)     
PMWXWEBC  DIM       10     10       121   WEB User Id rec. creator (websecaf)
PMWXLUPD  DIM       8      8        131   Last Update Date (ccyymmdd)        
PMWXLUPT  DIM       8      8        139   Last Update Time (hh:mm:ss)        
PMWXWEBU  DIM       10     10       147   WEB User Id rec. updater (websecaf)
PMWXACCF  DIM       3      3        157   Work Related (Cat IQ)              
PMWXPLIN  DIM       3      3        160   Place injury occurred (Cat IP)     
PMWXACTI  DIM       3      3        163   Activity when injured (Cat IO)     
PMWXADTE  DIM       8      8        166   ACC Decline Date (ccyymmdd)        
PMWXATME  DIM       8      8        174   Accident Time (hh:mm:ss)           
PMWXACLC  DIM       3      3        182   Accident Location (Cat IM)         
PMWXAINZ  DIM       1      1        185   Accident in NZ Y/N                 
.                                         0=No  1=Yes                          
PMWXMOVV  DIM       1      1        186   Involves Moving Vehicle on Public  
.                                         Road                                 
.                                         0=No  1=Yes                          
PMWXSPTI  DIM       1      1        187   Sporting Injury Y/N                
.                                         0=No  1=Yes                          
PMWXSPRT  DIM       3      3        188   Sport Name (Category IB)           
PMWXRECI  DIM       1      1        191   Recurring Injury Indicator Y/N     
.                                         0=No  1=Yes                          
PMWXTRIC  DIM       1      1        192   Treatment Injury Claim Y/N         
.                                         0=No  1=Yes                          
PMWXESTA  DIM       3      3        193   Employment Status (Cat IF)         
PMWXPDDT  DIM       8      8        196   Patient Declaration Date (ccyymmdd)
PMWXARG1  DIM       20     20       204   Authorized Representative Given    
.                                         Name 1                               
PMWXARG2  DIM       20     20       224   Authorized Representative Given    
.                                         Name 2                               
PMWXARSN  DIM       25     25       244   Authorized Representative Surname  
PMWXARTL  DIM       4      4        269   Authorized Representative Title    
PMWXARRP  DIM       10     10       273   Authorized Representative Relation 
PMWXASST  DIM       1      1        283   Assistance is Required Y/N         
.                                         0=No  1=Yes                          
PMWXNEED  DIM       1      1        284   Need to call HP Y/N                
.                                         0=No  1=Yes                          
PMWXCONT  DIM       1      1        285   Continue Normal Hours of Work Y/N  
.                                         0=No  1=Yes                          
PMWXALTW  DIM       1      1        286   Alternative Work Indicator Y/N     
.                                         0=No  1=Yes                          
PMWXTYPA  DIM       3      3        287   Type of Alternative Work (Cat IH)  
PMWXSALT  DIM       8      8        290   Start Date of Alternative Work     
.                                         (ccyymmdd)                           
PMWXHPDA  DIM       2      2        298   Hours per day of Alternative Work  
PMWXUNFD  DIM       3      3        300   Unfit for Work For Duration        
PMWXUNFT  DIM       3      3        303   Unfit for Work For Type (Cat UI)   
PMWXFISD  DIM       8      8        306   Full Incapacity Start Date         
.                                         (ccyymmdd)                           
PMWXRNWD  DIM       8      8        314   Return to Normal Work Date         
.                                         (ccyymmdd)                           
PMWXCSTA  DIM       1      1        322   Claim Status                       
.                                         0 = Existing                         
.                                         1 = Parked                           
.                                         2 = Completed                        
.                                         3 = Cancelled                        
PMWXTWRK  DIM       3      3        323   Type of Work (Category IX)         
PMWXOEST  DIM       50     50       326   Other Employment Status            
PMWXTPRO  DIM       10     10       376   HCP Treatment Provider             
PMWXECOD  DIM       6      6        386   Employer Code (pateoraf)           
PMWXGRAD  DIM       1      1        392   Gradual Process Injury Y/N         
.                                         0=No 1=Yes                           
PMWXAHOS  DIM       1      1        393   Admitted to Hospital Y/N           
.                                         0=No 1=Yes                           
PMWXVCON  DIM       1      1        394   Verbal Consent Gained Y/N          
.                                         0=No 1=Yes                           
PMWXAPPR  DIM       10     10       395   Approving HCP                      
PMWXPORD  DIM       20     20       405   ACC Purchase Order Number          
PMWXVHCP  DIM       10     10       425   Verbal Consent Gained By HCP       
PMWXSPAR  DIM       7      7        435   Spare                              
.
.End of Record                      442  
.
