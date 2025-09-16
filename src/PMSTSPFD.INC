. V9.12.001 08/09/2009 DS  Added pmtsrtdt, pmtsrttm, pmtsrtbk  CAR 205397       
. V9.07.001 17/08/2006 EC  Added PMTSRUNO and PMTSTRNO CAR 110245               
. V9.06.001 24/04/2006 EC  Fixed desc of PMTSAIDS CAR 102863                    
. V9.05.001 06/04/2006 EC  Created FD CAR 89302                                 
. *----------------------------------------------------------------------
. * Include Name  :   PMSTSPFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Transport Details                  
. *
. * File Type     :   SQL
. *
. * File Name     :   pmstspaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSTSPA1   IFILE    SQL, FIXED=1188, KEY="U1-8,9-16,17-19"                      
PMSTSPA2   IFILE    SQL, FIXED=1188, KEY="U20-27,28-35,1-8,9-16,17-19"          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMTSURNO  DIM       8      8        1     Patient U/R Number                 
PMTSVISN  DIM       8      8        9     Visit Number                       
PMTSUNIQ  DIM       3      3        17    Unique Number                      
PMTSTDAT  DIM       8      8        20    Pick Up Transport Date (ccyymmdd)  
PMTSTTIM  DIM       8      8        28    Pick Up Transport Time (hh:mm:ss)  
PMTSPAD1  DIM       35     35       36    Pick Up Address Line 1             
PMTSPAD2  DIM       35     35       71    Pick Up Address Line 2             
PMTSPAD3  DIM       35     35       106   Pick Up Address Line 3             
PMTSPAD4  DIM       35     35       141   Pick Up Address Line 4             
PMTSPPOS  DIM       8      8        176   Pick Up Post Code                  
PMTSPTLP  DIM       20     20       184   Pick Up Telephone Private          
PMTSPTLB  DIM       20     20       204   Pick Up Telephone Business         
PMTSPTLM  DIM       20     20       224   Pick Up Telephone Mobile           
PMTSPEML  DIM       80     80       244   Pick Up Email                      
PMTSPMEL  DIM       20     20       324   Pick Up Melway Ref                 
PMTSRAD1  DIM       35     35       344   Return Address Line 1              
PMTSRAD2  DIM       35     35       379   Return Address Line 2              
PMTSRAD3  DIM       35     35       414   Return Address Line 3              
PMTSRAD4  DIM       35     35       449   Return Address Line 4              
PMTSRPOS  DIM       8      8        484   Return Post Code                   
PMTSRTLP  DIM       20     20       492   Return Telephone Private           
PMTSRTLB  DIM       20     20       512   Return Telephone Business          
PMTSRTLM  DIM       20     20       532   Return Telephone Mobile            
PMTSREML  DIM       80     80       552   Return Email                       
PMTSRMEL  DIM       20     20       632   Return Melway Ref                  
PMTSSAME  DIM       1      1        652   Return Address Same As Pick Up     
PMTSDAD1  DIM       35     35       653   Destination Address Line 1         
PMTSDAD2  DIM       35     35       688   Destination Address Line 2         
PMTSDAD3  DIM       35     35       723   Destination Address Line 3         
PMTSDAD4  DIM       35     35       758   Destination Address Line 4         
PMTSDPOS  DIM       8      8        793   Destination Post Code              
PMTSDTLP  DIM       20     20       801   Destination Telephone Private      
PMTSDTLB  DIM       20     20       821   Destination Telephone Business     
PMTSDTLM  DIM       20     20       841   Destination Telephone Mobile       
PMTSDEML  DIM       80     80       861   Destination Email                  
PMTSDMEL  DIM       20     20       941   Destination Melway Ref             
PMTSFACL  DIM       3      3        961   Facility (Cat fa)                  
PMTSTRNS  DIM       3      3        964   Transport In (Cat OB)              
PMTSMOBL  DIM       3      3        967   Mobility (Cat pn)                  
PMTSBOOK  DIM       1      1        970   Pick Up Transport Booked 0=No 1=Yes
PMTSAIDS  DIM       3      3        971   Aides (CAT po)                     
PMTSMENT  DIM       3      3        974   Mental State (Cat pp)              
PMTSSPEC  DIM       3      3        977   Special Arrangements (Cat SA)      
PMTSCCEN  DIM       10     10       980   Cost Centre                        
PMTSCLAM  DIM       3      3        990   Claim Code (Cat CL)                
PMTSAMBS  DIM       1      1        993   Ambulance Subscriber 0=No 1=Yes    
PMTSAMBN  DIM       10     10       994   Ambulance Subscription Number      
PMTSM40S  DIM       1      1        1004  M40 Card Subscriber 0=No 1=Yes     
PMTSM40N  DIM       20     20       1005  M40 Card Number                    
PMTSM40E  DIM       8      8        1025  M40 Card Expiry Date (CCYYMMDD)    
PMTSRUNN  DIM       3      3        1033  Run Number In                      
PMTSCDAT  DIM       8      8        1036  Date Record Created (CCYYMMDD)     
PMTSCTIM  DIM       8      8        1044  Time Record Created (HH:MM:SS)     
PMTSCUID  DIM       10     10       1052  WEB User ID Created (websecaf)     
PMTSUDAT  DIM       8      8        1062  Update Date (CCYYMMDD)             
PMTSUTIM  DIM       8      8        1070  Update Time (HH:MM:SS)             
PMTSUUID  DIM       10     10       1078  WEB User ID Updated (websecaf)     
PMTSRUNO  DIM       3      3        1088  Run Number Out                     
PMTSTRNO  DIM       3      3        1091  Transport Out (Cat OB)             
PMTSRTDT  DIM       8      8        1094  Return Transport Date (ccyymmdd)   
PMTSRTTM  DIM       8      8        1102  Return Transport Time (hh:mm:ss)   
PMTSRTBK  DIM       1      1        1110  Return Transport Booked            
PMTSSPAR  DIM       77     77       1111  Spare                              
.
.End of Record                      1188 
.
