. V10.04.01 26/02/2014 SA C-292257 Added PMEFVISN, PMEFCNTR & PMEFFLAG          
. V10.01.04 24/03/2011 PV  Added repatriation number                            
. V10.01.03 21/03/2011 PV  Fixed Index 3                                        
. V10.01.02 21/03/2011 PV  Added Index 4                                        
. V10.01.01 09/03/2011 PV  Created FD and IO CAR 239463                         
. *----------------------------------------------------------------------
. * Include Name  :   PMSELFFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Free Format Eligibility Table      
. *
. * File Type     :   SQL
. *
. * File Name     :   pmselfaf.dat
. *
. * Index Values  :   KEY8    KEY16   KEY88   KEY88                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSELFA1   IFILE    SQL, FIXED=489, KEY="U1-8"                                  
PMSELFA2   IFILE    SQL, FIXED=489, KEY="U9-16,1-8"                             
PMSELFA3   IFILE    SQL, FIXED=489, KEY="U62-101,22-61,1-8"                     
PMSELFA4   IFILE    SQL, FIXED=489, KEY="U22-61,62-101,1-8"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMEFELGN  DIM       8      8        1     Eligibility Number                 
PMEFURNO  DIM       8      8        9     U/R Number                         
PMEFOECC  DIM       1      1        17    Patient OEC Consent                
PMEFTITL  DIM       4      4        18    Title                              
PMEFFNAM  DIM       40     40       22    Patient First Name                 
PMEFSNAM  DIM       40     40       62    Patient Second Name                
PMEFHFGN  DIM       40     40       102   Health Fund Given Name             
PMEFHFSN  DIM       40     40       142   Health Fund Surname                
PMEFGEND  DIM       1      1        182   Gender                             
PMEFBDAT  DIM       8      8        183   Date of Birth                      
PMEFEADT  DIM       8      8        191   Expected Admission Date            
PMEFISTY  DIM       3      3        199   Intended Stay                      
PMEFPLOS  DIM       3      3        202   Planned LOS                        
PMEFDINT  DIM       3      3        205   Discharge Intention                
PMEFPEAI  DIM       1      1        208   PEA Indicator                      
PMEFEMAD  DIM       1      1        209   Emergency Admission                
PMEFPRIC  DIM       3      3        210   Presenting Illness Code            
PMEFPRIM  DIM       9      9        213   Presenting Illness MBS             
PMEFCLTY  DIM       3      3        222   Claim Type                         
PMEFHFND  DIM       6      6        225   Health Fund                        
PMEFHFNT  DIM       8      8        231   Health Fund Table                  
PMEFHFMN  DIM       19     19       239   Health Fund Membership Number      
PMEFDIAG  DIM       50     50       258   Diagnosis                          
PMEFSRV1  DIM       9      9        308   Service Code 1                     
PMEFSRV2  DIM       9      9        317   Service Code 2                     
PMEFSRV3  DIM       9      9        326   Service Code 3                     
PMEFSRV4  DIM       9      9        335   Service Code 4                     
PMEFSRV5  DIM       9      9        344   Service Code 5                     
PMEFCUID  DIM       10     10       353   User who created record            
PMEFCDAT  DIM       8      8        363   Date record created                
PMEFCTIM  DIM       8      8        371   Time record created                
PMEFDVAN  DIM       10     10       379   Repatriation Number                
PMEFVISN  DIM       8      8        389   Visit Number                       
PMEFCNTR  DIM       3      3        397   Report Counter                     
PMEFFLAG  DIM       1      1        400   Created by (0=Software,1=Fixit)    
PMEFSPAR  DIM       88     88       401   Spare                              
.
.End of Record                      489  
.
