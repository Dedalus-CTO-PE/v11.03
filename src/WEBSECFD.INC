. V10.05.01 07/08/2014 SA C-304644 Moved WBSEGENR from SPARE into FD            
. V10.04.03 11/03/2014 SA C-294083 Made Index 7 a single field                  
. V10.04.02 04/03/2014 SA C-294083 Added WBSELOGN                               
. V10.04.01 06/01/2014 AP C-295007 Added field WESEEMAI                         
. V10.02.05 24/08/2011 EC C-242014 Updated WBSEOPDU description                 
. V10.02.04 27/07/2011 EC C-243582 Added WBSEUTLH and WBSEUTLC                  
. V10.02.03 11/07/2011 PV C-242014 Added WBSEOPDU Outpatient Direct User        
. V10.02.02 19/05/2011 ML C-240724 Add MR Home Hospital Id. & mod WBSEHLOC desc 
. V10.02.01 31/03/2011 JP C-239574 Changed department length, added roles       
. V10.01.01 04/01/2011 ML C-235635 Change "Last Access D/T" to "Last Login D/T" 
. V9.11.003 15/04/2009 JH C-145706 Added GP Access                              
. V9.10.001 23/09/2008 EC C-174044 Added WBSEBEDV                               
. V9.07.001 06/09/2006 PV C-118223 Added User ID Create and Update variables    
. V9.04.005 25/08/2005 EC C-57209  Added Nurse Code                             
. V9.04.004 05/05/2005 EC C-61268  Added WBSEFDEP                               
. V9.04.003 04/02/2005 DS C-       Added Clinic Location Type                   
. V9.04.002 09/09/2004 LV C-       Changed size of GP Code and GP Practice Code 
. V9.04.001 17/08/2004 LV C-       Add Hospital ID                              
. V9.03.011 11/03/2004 DS C-       Added index 5                                
. V9.03.010 03/03/2004 DS C-       Added MRT Security Number                    
. V9.03.009 27/11/2003 JH C-       Added cashier                                
. *----------------------------------------------------------------------
. * Include Name  :   WEBSECFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WEB Security File                  
. *
. * File Type     :   SQL
. *
. * File Name     :   websecaf.dat
. *
. * Index Values  :   KEY10   KEY50   KEY14   KEY11   KEY18   KEY11   KEY80  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBSECA1   IFILE    SQL, FIXED=597, KEY="U1-10"                                 
WEBSECA2   IFILE    SQL, FIXED=597, KEY="U69-108,1-10"                          
WEBSECA3   IFILE    SQL, FIXED=597, KEY="U47-50,1-10"                           
WEBSECA4   IFILE    SQL, FIXED=597, KEY="U201-201,1-10"                         
WEBSECA5   IFILE    SQL, FIXED=597, KEY="U202-209,1-10"                         
WEBSECA6   IFILE    SQL, FIXED=597, KEY="U305-305,1-10"                         
WEBSECA7   IFILE    SQL, FIXED=597, KEY="U417-496"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBSEUID   DIM       10     10       1     WEB User ID                        
WBSENAM   DIM       30     30       11    User Name                          
WBSEDOC   DIM       6      6        41    Linked Doctor Code                 
WBSEPCD   DIM       4      4        47    Passcode                           
WBSEWRD   DIM       3      3        51    Ward                               
WBSESIT   DIM       6      6        54    Outpatient Site                    
WBSECLI   DIM       6      6        60    Outpatient Clinic                  
WBSEOCG   DIM       3      3        66    Occupational Group (Cat w0)        
WBSEDIR   DIM       40     40       69    Log in URL Link                    
WBSEESC   DIM       3      3        109   Emergency Site Code                
WBSEEUC   DIM       3      3        112   Emergency Unit Code                
WBSEACT   DIM       1      1        115   Active 0=No 1=Yes                  
WBSEEXP   DIM       8      8        116   Expiry Date                        
WBSEPSE   DIM       1      1        124   Post Security Enabled              
WBSECNT   DIM       2      2        125   Retry Count                        
WBSEAUT   DIM       1      1        127   Auto Ageing (Y/N) 1=Yes 0=No       
WBSEAGE   DIM       3      3        128   Age by Number of Days              
WBSEDFM   DIM       8      8        131   Default Menu                       
WBSEGPCD  DIM       10     10       139   GP Code                            
WBSEGPPC  DIM       10     10       149   GP Practice Code                   
WBSEGPCN  DIM       2      2        159   GP Practice Count                  
WBSEMESA  DIM       1      1        161   Messages Available (Y/N) 1=Yes 0=No
WBSELACD  DIM       8      8        162   Last Login Date (CCYYMMDD)         
WBSELACT  DIM       5      5        170   Last Login Time (HH:MM)            
WBSEDEPT  DIM       6      6        175   Printer Department (ibadptaf)      
WBSECXA   DIM       1      1        181   Passwork Expiry User Alerted (1=Y) 
WBSEDALL  DIM       3      3        182   Allied Health Department Code (CG) 
WBSEDTYP  DIM       3      3        185   Document Type (Cat TY)             
WBSEHLOC  DIM       4      4        188   MR Home Location                   
WBSEVWSL  DIM       1      1        192   View Alert Security Level          
WBSEADSL  DIM       1      1        193   Add Alert Security Level           
WBSEDGSI  DIM       3      3        194   Day/General Surgery Ind (Cat YD)   
WBSEFPCD  DIM       4      4        197   Finance Passcode                   
WBSECASH  DIM       1      1        201   Cashier 1=Yes                      
WBSEMRTS  DIM       8      8        202   MRT Security Number                
WBSEHOSP  DIM       3      3        210   Logged into Hospital ID (pathspaf) 
WBSELTYP  DIM       3      3        213   Clinic Location Type (Category CT) 
WBSEFDEP  DIM       15     15       216   User Department (Free Format)      
WBSENURS  DIM       10     10       231   Nurse Code                         
WBSECDAT  DIM       8      8        241   Date Record Created (ccyymmdd)     
WBSECTIM  DIM       8      8        249   Time Record Created (hh:mm:ss)     
WBSECUID  DIM       10     10       257   WEB User Id Rec. Creator (websecaf)
WBSEUDAT  DIM       8      8        267   Last Update Date (ccyymmdd)        
WBSEUTIM  DIM       8      8        275   Last Update Time (hh:mm:ss:)       
WBSEUUID  DIM       10     10       283   WEB User Id Rec. Update (websecaf) 
WBSEBEDV  DIM       1      1        293   Bed Board View Number              
WBSEGPAC  DIM       1      1        294   GP Access - blank=all 1=no override
WBSEROLE  DIM       10     10       295   Role                               
WBSESECT  DIM       1      1        305   Security Id Type 0=User Profile    
.                                         1=Role Profile                       
WBSEVH1L  DIM       1      1        306   View H1 Security Level             
WBSEAH1L  DIM       1      1        307   Add H1 Security Level              
WBSEVH2L  DIM       1      1        308   View H2 Security Level             
WBSEAH2L  DIM       1      1        309   Add H2 Security Level              
WBSEVH3L  DIM       1      1        310   View H3 Security Level             
WBSEAH3L  DIM       1      1        311   Add H3 Security Level              
WBSEVH4L  DIM       1      1        312   View H4 Security Level             
WBSEAH4L  DIM       1      1        313   Add H4 Security Level              
WBSEVH5L  DIM       1      1        314   View H5 Security Level             
WBSEAH5L  DIM       1      1        315   Add H5 Security Level              
WBSEVH6L  DIM       1      1        316   View H6 Security Level             
WBSEAH6L  DIM       1      1        317   Add H6 Security Level              
WBSEVH7L  DIM       1      1        318   View H7 Security Level             
WBSEAH7L  DIM       1      1        319   Add H7 Security Level              
WBSEVH8L  DIM       1      1        320   View H8 Security Level             
WBSEAH8L  DIM       1      1        321   Add H8 Security Level              
WBSEVH9L  DIM       1      1        322   View H9 Security Level             
WBSEAH9L  DIM       1      1        323   Add H9 Security Level              
WBSEHHOS  DIM       3      3        324   MR Home Hospital Id. (pathspaf)    
WBSEOPDU  DIM       3      3        327   Outpatient Direct User (Cat Tz)    
WBSEUTLH  DIM       3      3        330   Usual Tracking Location Hospital   
WBSEUTLC  DIM       4      4        333   Usual Tracking Location            
WBSEEMAI  DIM       80     80       337   User Email Address                 
WBSELOGN  DIM       80     80       417   Long Login Name                    
WBSEGENR  DIM       1      1        497   Generic User ID (1=Yes,blank/0=No) 
WBSESPAR  DIM       99     99       498   Spare                              
.
.End of Record                      597  
.
