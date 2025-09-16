. V9.09.002 15/01/2008 JT  Added index 2  CAR 135498
. V9.09.001 10/10/2007 JT  Added Record sent ind and Record status CAR 135498
. V9.08.001 23/03/2007 EC  Created FD CAR 135530   
. *----------------------------------------------------------------------
. * Include Name  :   ALLEXTFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   External Referrals                 
. *
. * File Type     :   SQL
. *
. * File Name     :   allextaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLEXTA1   IFILE    SQL, FIXED=419, KEY="U1-8,9-16"                             
ALLEXTA2   IFILE    SQL, FIXED=419, KEY="U17-24,1-8,9-16" 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALEXVISN  DIM       8      8        1     Referral/Visit Number              
ALEXEXTR  DIM       8      8        9     External Referral Number           
ALEXRDAT  DIM       8      8        17    Referral Date (ccyymmdd)           
ALEXAHCP  DIM       10     10       25    Authorising HCP (pmshcpaf)         
ALEXCAST  DIM       10     10       35    Authorising Case Team (allcasaf)   
ALEXRREF  DIM       3      3        45    Reason for Referral (Cat rf)       
ALEXREFT  DIM       3      3        48    Referred to (Category S)           
.                                         A - External Agencies
.                                         L - Lawyers
.                                         C - Schools 
.                                         P - Private Hospitals
.                                         I - Indigenous Organizations
.                                         B - Public Hospitals
.                                         D - Residential
.                                         G - GP
ALEXORCD  DIM       6      6        51    Organisation Code                  
ALEXHCPC  DIM       10     10       57    HCP Code for GP                    
ALEXCOM1  DIM       50     50       67    Comment 1                          
ALEXCOM2  DIM       50     50       117   Comment 2                          
ALEXCOM3  DIM       50     50       167   Comment 3                          
ALEXCOM4  DIM       50     50       217   Comment 4                          
ALEXCDAT  DIM       8      8        267   Date Created (ccyymmdd)            
ALEXCTIM  DIM       8      8        275   Time Created (hh:mm:ss)            
ALEXCUID  DIM       10     10       283   Web User Created (websecaf)        
ALEXUDAT  DIM       8      8        293   Date Updated (ccyymmdd)            
ALEXUTIM  DIM       8      8        301   Time Updated (hh:mm:ss)            
ALEXUUID  DIM       10     10       309   Web User Updated (websecaf)        
ALEXMOHR  DIM       1      1        319   MOH Indicator Record sent to MHINC 
.                                         Blank=Not for MHINC
.                                         0=Unsent
.                                         1=Sent
.                                         2=Send Delete required
.                                         3=Send Update required
ALEXRCST  DIM       1      1        320   Record Status 1=Deleted            
ALEXSPAR  DIM       98     98       321   Spare Variable                     
.
.End of Record                      419  
.
