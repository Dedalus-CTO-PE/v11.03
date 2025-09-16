. V10.15.01 07/10/2019 TT C-0856646 Add new fields from PMBRPWRD to PMBRCORC    
. V10.09.02 29/11/2016 DS C-0815244 Added index 4 and index 5                   
. V10.09.01 29/11/2016 DS C-0814743 Added new field PMBRTEAM                    
. V10.05.01 11/08/2014 DN C-297774 Added PMBRRDAT, PMBRRTIM                     
. V10.01.01 28/02/2011 DS  Added PMBRFTXT from spare  CAR 216620                
. V9.11.001 23/09/2008 EC  Added PMBRRWRD to PMBRHOSP CAR 174047                
. V9.09.001 07/11/2007 EC  Created FD CAR 151894                                
. *----------------------------------------------------------------------
. * Include Name  :   PMSBRQFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Bed Requests                       
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsbrqaf.dat
. *
. * Index Values  :   KEY24   KEY25   KEY24   KEY39   KEY31                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSBRQA1   IFILE    SQL, FIXED=360, KEY="U1-8,9-16,17-24"
PMSBRQA2   IFILE    SQL, FIXED=360, KEY="U1-8,41-41,9-16,17-24"
PMSBRQA3   IFILE    SQL, FIXED=360, KEY="U9-16,17-24,1-8"
PMSBRQA4   IFILE    SQL, FIXED=360, KEY="U52-54,55-57,41-41,58-65,1-8,9-16,17-24"
PMSBRQA5   IFILE    SQL, FIXED=360, KEY="U52-54,55-57,41-41,9-16,17-24,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMBRVISN  DIM       8      8        1     Visit Number                       
PMBRREQD  DIM       8      8        9     Request Date (ccyymmdd)            
PMBRREQT  DIM       8      8        17    Request Time (hh:mm:ss)            
PMBRUNIT  DIM       3      3        25    Unit (Cat AC)                      
PMBRRHCP  DIM       10     10       28    Requesting HCP (pmshcpaf)          
PMBRTYPE  DIM       3      3        38    Type of Bed Required (Cat RT)      
PMBRRSTA  DIM       1      1        41    Request Status                     
.                                         1 = Requested                        
.                                         2 = Allocated                        
.                                         3 = Completed                        
.                                         4 = Cancelled                        
PMBRDIAG  DIM       10     10       42    Diagnosis                          
PMBREWRD  DIM       3      3        52    Expected Ward                      
PMBREBED  DIM       3      3        55    Expected Bed                       
PMBRADAT  DIM       8      8        58    Date Allocated (ccyymmdd)          
PMBRATIM  DIM       8      8        66    Time Allocated (hh:mm:ss)          
PMBRAUID  DIM       10     10       74    WEB User Id Allocated              
PMBRCANR  DIM       3      3        84    Cancellation Reason (Cat cz)       
PMBRCAND  DIM       8      8        87    Date Cancelled (ccyymmdd)          
PMBRCANT  DIM       8      8        95    Time Cancelled (hh:mm:ss)          
PMBRCANU  DIM       10     10       103   WEB User Id Cancelled              
PMBRCDAT  DIM       8      8        113   Created Date (ccyymmdd)            
PMBRCTIM  DIM       8      8        121   Created Time (hh:mm:ss)            
PMBRCUID  DIM       10     10       129   WEB User ID Created                
PMBRUDAT  DIM       8      8        139   Updated Date (ccyymmdd)            
PMBRUTIM  DIM       8      8        147   Updated Time (hh:mm:ss)            
PMBRUUID  DIM       10     10       155   WEB User Id Updated                
PMBRRWRD  DIM       3      3        165   Requesting Ward                    
PMBRSBED  DIM       3      3        168   Speciality Bed Required (Cat CG)   
PMBRHOSP  DIM       3      3        171   Preferred Site (pathspaf)          
PMBRFTXT  DIM       100    100      174   Free Format Description            
PMBRRDAT  DIM       8      8        274   Ready Date (ccyymmdd)              
PMBRRTIM  DIM       8      8        282   Ready Time (hh:mm:ss)              
PMBRTEAM  DIM       5      5        290   Admitting Team (pmstemaf)          
PMBRPWRD  DIM       3      3        295   Preferred Ward                     
PMBRSFFR  DIM       1      1        298   Spec Feature - Falls Risk          
.                                         0=No, 1=Yes                          
PMBRSFEP  DIM       1      1        299   Spec Feature - Existing Pressure In
.                                         0=No, 1=Yes                          
PMBRSFCI  DIM       1      1        300   Spec Feature - Cognitive Impairment
.                                         0=No, 1=Yes                          
PMBRSFCO  DIM       1      1        301   Spec Feature - Companion           
.                                         0=No, 1=Yes                          
PMBRSFIS  DIM       1      1        302   Spec Feature - TBP (Isolation)     
.                                         0=No, 1=Yes                          
PMBRSFTE  DIM       1      1        303   Spec Feature - Telemetry           
.                                         0=No, 1=Yes                          
PMBRSFRC  DIM       1      1        304   Spec Feature - From Resident Care  
.                                         0=No, 1=Yes                          
PMBRSFOT  DIM       1      1        305   Spec Feature - Other (see notes)   
.                                         0=No, 1=Yes                          
PMBRSFNR  DIM       1      1        306   Spec Feature - None Required       
.                                         0=No, 1=Yes                          
PMBRSFMA  DIM       1      1        307   Spec Feature - Mobility Assistance 
.                                         0=No, 1=Yes                          
PMBRMASC  DIM       3      3        308   Mobility Assistance Score (Cat m3) 
PMBRWDTR  DIM       1      1        311   Suitable for Ward Transfer         
.                                         0=No, 1=Yes                          
PMBRCORC  DIM       1      1        312   Companion Requirement Confirmed    
.                                         0=No, 1=Yes                          
PMBRSPAR  DIM       47     47       313   Spare                              
.
.End of Record                      360  
.
