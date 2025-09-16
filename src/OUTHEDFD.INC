. V11.02.01 03/02/2022 TT C-0905641 Added Additional HCP Code (1-4)             
. V11.00.01 30/04/2020 EC C-0876663 Added OTHEAOPN to OTHEDATE                  
. V10.13.01 24/07/2018 PV C-0833256 Added new option to OTHECENC 2=Yes plus DNA 
. V10.11.01 30/10/2017 SA C-0846915 Added fields OTHEHCLI & OTHEHCAI            
. V10.05.01 16/07/2014 EC C-261630 Added OTHETCOD and OTHETCED                  
. V10.04.02 05/02/2014 EC C-291879 Added OTHEHPIO - HPI-O Number                
. V10.04.01 05/01/2014 AP C-294344 Moved OTHEMREF out of Spare. Added Index 2   
. V10.03.01 19/02/2013 EC C-277862 Added OTHEMREF as part of spare              
. V10.02.05 15/07/2011 PC C-246597 Added OTHEXPUL                               
. V10.02.04 24/06/2011 EC C-242246 Added OTHECTEL to OTHEMLTD                   
. V10.02.03 16/06/2011 EC C-239534 Added OTHECPAG                               
. V10.02.02 03/06/2011 EC C-239525 Added OTHECPMI                               
. V10.02.01 19/05/2011 EC C-239554 Added OTHENDPS                               
. V9.04.001 15/06/2005 EC  Added OTHEGBOK CAR 58654                             
. V9.05.B01 12/01/2006 EC  Added OTHEADEP and OTHECENC                          
. V9.05.B02 01/02/2006 EC  Added OTHEKDOC and OTHEDEFD CAR 91752                
. V9.05.003 22/03/2006 EC  Added OTHECCAR CAR 79277                             
. V9.07.001 18/08/2006 EC  Added OTHECTRN CAR 110245                            
. *----------------------------------------------------------------------
. * Include Name  :   OUTHEDFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Outpatient Master Header Table     
. *
. * File Type     :   SQL
. *
. * File Name     :   outhedaf.dat
. *
. * Index Values  :   KEY28   KEY31                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTHEDA1   IFILE    SQL, FIXED=510, KEY="U1-6,7-12,13-13,14-18,19-20,21-28"
OUTHEDA2   IFILE    SQL, FIXED=510, KEY="U1-6,259-261,7-12,13-13,14-18,19-20,21-28"
FILHEDA1  INIT      "hedaf"
FILHEDA2  INIT      "hedaf"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTHESITE  DIM       6      6        1     SITE ID                            
OTHECLIN  DIM       6      6        7     CLINIC ID                          
OTHEWDAY  DIM       1      1        13    DAY INDICATOR                      
OTHESTRT  DIM       5      5        14    SESSION START TIME (HH:MM)         
OTHESHNO  DIM       2      2        19    SCHEDULE NUMBER                    
OTHESDAT  DIM       8      8        21    SCHEDULE DATE (CCYYMMDD)           
OTHEDTCC  DIM       8      8        29    DATE CLINIC CLOSED (CCYYMMDD)      
OTHECOM1  DIM       40     40       37    COMMENTS LINE 1                    
OTHECOM2  DIM       40     40       77    COMMENTS LINE 2                    
OTHEINS1  DIM       40     40       117   INSTRUCTIONS LINE 1                
OTHEINS2  DIM       40     40       157   INSTRUCTIONS LINE 2                
OTHEINS3  DIM       40     40       197   INSTRUCTIONS LINE 3                
OTHEDURN  FORM      3      3        237   SLOT DURATION (MINS)               
OTHEBFIN  DIM       5      5        240   BOOKING FINISH TIME (HH:MM)        
OTHESEND  DIM       5      5        245   END SESSION TIME (HH:MM)           
OTHELTYP  DIM       3      3        250   LOCATION TYPE (CATEGORY CT)        
OTHECLSE  DIM       6      6        253   CLINIC SESSION                     
OTHEHOSP  DIM       3      3        259   HOSPITAL CODE                      
OTHELOCN  DIM       4      4        262   LOCATION OF CLINIC                 
OTHECTYP  DIM       6      6        266   CLINIC TYPE                        
OTHECIND  DIM       3      3        272   CLINIC INDICATOR(CI)M=Med N=Non-Med
OTHEGBOK  DIM       1      1        275   ALLOW GROUP BOOKINGS 0=NO 1=YES    
OTHEADEP  DIM       3      3        276   ALLIED HEALTH DEPARTMENT           
OTHECENC  DIM       1      1        279   COLLECT ENCOUNTER DETAILS          
.                                         0=No 1=Yes 2=Yes plus DNA            
OTHEKDOC  DIM       1      1        280   KEYIN HCP ON ATTENDANCE (Y/N)      
OTHEDEFD  DIM       10     10       281   DEFAULT HCP CODE                   
OTHECCAR  DIM       1      1        291   COLLECT CARER DETAILS              
.                                         0=No 1=Yes                           
OTHECTRN  DIM       1      1        292   COLLECT TRANSPORT DETAILS          
.                                         0=No 1=Yes                           
OTHENDPS  DIM       3      3        293   NUMBER OF DAYS PRIOR TO SEND LETTER
OTHECPMI  DIM       1      1        296   USING CONFIRM PMI                  
.                                         0=No 1=Yes                           
OTHECPAG  DIM       1      1        297   USING CHECK IN PAGE                
.                                         0=No 1=Yes                           
OTHECTEL  DIM       20     20       298   CLINIC TELEPHONE NUMBER            
OTHENMDS  DIM       3      3        318   NMDS CODE (CATEGORY NM)            
OTHECART  DIM       3      3        321   CARE TYPE (CATEGORY CC)            
OTHESRVD  DIM       3      3        324   SERVICE DELIVERY MODE(Cat sd)      
.                                         0=No, 1=Yes                          
OTHECLHR  DIM       1      1        327   CLINICAL HIGH RISK                 
.                                         0=No, 1=Yes                          
OTHEMLTD  DIM       1      1        328   MULTIDISCIPLINARY CLINIC           
.                                         0=No, 1=Yes                          
OTHEXPUL  DIM       1      1        329   Exclude from Pulling List (N=0,Y=1)
OTHEMREF  DIM       1      1        330   Mandatory Waiting/Active Referral  
OTHEHPIO  DIM       20     20       331   HPI-O Number                       
OTHETCOD  DIM       3      3        351   Tier 2 Code (category NC)          
OTHETCED  DIM       8      8        354   Tier 2 Code Effective Date CCYYMMDD
OTHEHCLI  DIM       20     20       362   HERO Clinic Identifier             
.                                         (SERVICE_PROVIDER_ID)                
OTHEHCAI  DIM       20     20       382   HERO Campus Identifier             
.                                         (SERVICE_EVENT_ATTRIBUTE_TYPE_CODE - 
.                                         04 -                                 
.                                         Service Location ID)                 
OTHEAOPN  DIM       1      1        402   Auto Open Clinic                   
.                                         Blank or 0 = No, 1 = Yes             
OTHEAOFR  DIM       1      1        403   Auto Open Frequency                
.                                         1 = Weekly, 2 = 2 Weekly, 4 = 4 Weekl
.                                         y                                    
OTHEAOWM  DIM       5      5        404   Auto Open Week of Month            
.                                         Blank or 0 = No, 1 = Yes             
.                                         Position 1 to 5 = Week 1 to 5        
OTHEAAOW  DIM       3      3        409   Auto Open Number of Weeks in Advance
OTHEDATE  DIM       8      8        412   Last Session Open Date (CCYYMMDD)  
OTHEHCP1  DIM       10     10       420   Additional HCP 1 Code              
OTHEHCP2  DIM       10     10       430   Additional HCP 2 Code              
OTHEHCP3  DIM       10     10       440   Additional HCP 3 Code              
OTHEHCP4  DIM       10     10       450   Additional HCP 4 Code              
OTHESPAR  DIM       50     50       460   SPARE                              
.
.End of Record                      510  
.
