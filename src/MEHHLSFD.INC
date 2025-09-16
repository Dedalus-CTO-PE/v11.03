. V10.11.01 17/10/2017 SA C-0843390 Added MHHLRDHB                              
. V10.03.01 07/11/2011 ML C-242151 Added new 7 fields for WA (move out of Spare)
. V10.02.01 07/09/2011 J.Tan CAR 242151 Added new fields for WA
. V10.00.01 25/03/2010 ML C-195158 add new fields for NZ Mental Health
. *----------------------------------------------------------------------
. * Include Name  :   MEHHLSFD.INC
. *
. * Function      :   File Def'n Include for Mental Health                      
. *                   Legal Status Header Record         
. *
. * File Type     :   SQL
. *
. * File Name     :   mehhlsaf.dat
. * Audit Name    :   mehaudha.dat
. *
. * Index Values  :   KEY16   KEY32                                          
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
MEHAUDHA   IFILE    SQL, FIXED=651, KEY="D28-35,1-8,9-16"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MHHLMDAT  DIM       8      8        1     Date of Change
MHHLMTIM  DIM       8      8        9     Time of Change
MHHLRTYP  DIM       1      1        17    Record Type
.                                              A = Added
.                                              B = Before image
.                                              C = After Image
.                                              D = Delete (Inactive)
.                                              R = Reactive (Supervisor)
.                                              V = View
MHHLMUID  DIM      10     10        18    WEB User ID Changed (websecaf)
.MHHLURNO  DIM      8      8        28    U/R Number
.
.
.Data File Definition
.--------------------
MEHHLSA1   IFILE    SQL, FIXED=624, KEY="U1-8,9-16"
MEHHLSA2   IFILE    SQL, FIXED=624, KEY="U1-8,17-24,25-32,9-16"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MHHLURNO  DIM       8      8        1     U/R Number                         
MHHLUNIQ  DIM       8      8        9     Unique Number                      
MHHLSDAT  DIM       8      8        17    Start Date (ccyymmdd)              
MHHLSTIM  DIM       8      8        25    Start Time (hh:mm:ss)              
MHHLEDAT  DIM       8      8        33    End Date (ccyymmdd)                
MHHLETIM  DIM       8      8        41    End Time (hh:mm:ss)                
MHHLSTAT  DIM       1      1        49    Status 0-Active 1- Inactive        
MHHLCURR  DIM       1      1        50    Current (1-Yes 0-No)               
MHHLSREF  DIM       3      3        51    Source Referral (Category S)       
.                                         Indicator7 = G - GP                  
.                                         Indicator7 = B - Public Hospital     
.                                         Indicator7 = P - Private Hospital    
.                                         Indicator7 = A - External Agency     
.                                         Indicator7 = S - Self/Other Referral 
.                                         Indicator7 = N - Next of Kin         
.                                         Indicator7 = E - Emergency Contact   
.                                         Indicator7 = R - Nearest Relative    
.                                         Indicator7 = C - School              
.                                         Indicator7 = D - Residential Institut
.                                         e                                    
MHHLORCD  DIM       6      6        54    Organisation Code                  
MHHLHCPC  DIM       10     10       60    HCP Code for GP                    
MHHLRNAM  DIM       20     20       70    Referrers Name                     
MHHLRAD1  DIM       35     35       90    Referrers Address line 1           
MHHLRAD2  DIM       35     35       125   Referrers Address line 2           
MHHLRAD3  DIM       35     35       160   Referrers Address Line 3           
MHHLRAD4  DIM       35     35       195   Referrers Address Line 4           
MHHLRPOS  DIM       8      8        230   Referrers Postcode                 
MHHLRTEL  DIM       20     20       238   Referrers Telephone number         
MHHLLAWY  DIM       6      6        258   Lawyers Code (pateoraf.ptertype=L)
MHHLPRIS  DIM       1      1        264   Prisoner (1-Yes, 0-No)             
MHHLESDT  DIM       8      8        265   End of Sentence Date for Prisoner  
MHHLCUID  DIM       10     10       273   WEB User ID created (websecaf)     
MHHLCDAT  DIM       8      8        283   Date record created                
MHHLCTIM  DIM       8      8        291   Time record created                
MHHLUUID  DIM       10     10       299   WEB User ID updated (websecaf)     
MHHLUDAT  DIM       8      8        309   Date record updated                
MHHLUTIM  DIM       8      8        317   Time record updated                
MHHLRSCL  DIM       10     10       325   Responsible Clinician (all Activ HC
MHHLCSTM  DIM       10     10       335   Case Team (linked to Respon.Clinici
MHHLDUAO  DIM       10     10       345   Duly Auth.Officer                  
MHHLKWRK  DIM       10     10       355   Key Worker (all Active HCPs)       
MHHLLAWT  DIM       50     50       365   Lawyer Free Text field             
MHHLUDFL  DIM       1      1        415   "Unfit to Drive" flag              
MHHLUDDT  DIM       8      8        416   "Unfit to Drive" Date Client Notifi
MHHLCOMM  DIM       100    100      424   Comments text                      
MHHLRODT  DIM       8      8        524   Receival Date (ccyymmdd)           
MHHLROTM  DIM       8      8        532   Receival Time (hh:mm:ss)           
MHHLAMDT  DIM       8      8        540   Admit MH Act Date (ccyymmdd)       
MHHLAMTM  DIM       8      8        548   Admit MH Act Time (hh:mm:ss)       
MHHLOREF  DIM       3      3        556   Origin of Referral (Catg tm)       
MHHLRCLI  DIM       10     10       559   Referring Clinician (for Outpat onl
MHHLRCLR  DIM       3      3        569   Referring Clinician Role(Cat "rm") 
MHHLRDHB  DIM       3      3        572   Responsible DHB (Cat dh)           
MHHLSPAR  DIM       49     49       575   Spare                              
.
.End of Record                      624  
.
