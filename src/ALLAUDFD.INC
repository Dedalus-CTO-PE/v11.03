. V10.13.01 25/07/2018 TTI C-845563 3 new fields added                          
. V10.12.02 10/07/2018 TNG C-0318661 Added update type R - Priority             
. V10.12.01 21/02/2018 EC C-0846913 Added index 3                               
. V10.04.01 22/05/2014 DN  Added update type W - Waiting     CAR 301238         
. V10.00.01 14/07/2010 EC  Added update types P, H & S       CAR 186250         
. V9.08.002 25/02/2007 EC  Added Index 2                     CAR 132585         
. V9.08.001 25/02/2007 EC  Added (M)ark Action update type   CAR 132585         
. V9.00.001 20/05/2001 SB  Created FD                                           
. V9.05.B01 14/12/2005 EC  Added rejected & reinstate status  CAR 76341         
. *----------------------------------------------------------------------
. * Include Name  :   ALLAUDFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Referral Audit Table               
. *
. * File Type     :   SQL
. *
. * File Name     :   allaudaf.dat
. *
. * Index Values  :   KEY24   KEY26   KEY24                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLAUDA1   IFILE    SQL, FIXED=140, KEY="U1-8,9-16,17-24"
ALLAUDA2   IFILE    SQL, FIXED=140, KEY="U1-8,38-39,9-16,17-24"
ALLAUDA3   IFILE    SQL, FIXED=140, KEY="U9-16,17-24,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALAUVISN  DIM       8      8        1     Referral/Visit Number (allrefaf)   
ALAUADAT  DIM       8      8        9     Action Date (CCYYMMDD)             
ALAUATIM  DIM       8      8        17    Action Time (HH:MM:SS)             
ALAUAUID  DIM       10     10       25    Action WEB User ID (websecaf)      
ALAUACTI  DIM       3      3        35    Action Code (Category LF)          
ALAUUPDT  DIM       2      2        38    Update Type                        
.                                         "A " - Add Referral                  
.                                         "C " - Closed Status                 
.                                         "E " - Reinstate Status              
.                                         "H " - Transfer HCP                  
.                                         "I " - Inactivate Status             
.                                         "J " - Rejected Status               
.                                         "N " - Cancel Status                 
.                                         "M " - Mark Action                   
.                                         "MD" - Action Delete                 
.                                         "P " - Transfer Department           
.                                         "R " - Priority                      
.                                         "S " - Transfer Caseteam             
.                                         "T " - Activate Status               
.                                         "U " - Update                        
.                                         "V " - View                          
.                                         "W " - Waiting Status                
ALAUCOMM  DIM       50     50       40    Comments                           
ALAUUDAT  DIM       8      8        90    Action Date Update (CCYYMMDD)      
ALAUUTIM  DIM       8      8        98    Action Time Update (HH:MM:SS)      
ALAUUUID  DIM       10     10       106   Action WEB User ID Updat (websecaf)
ALAUSPAR  DIM       24     24       116   Spare Variable                     
.
.End of Record                      140  
.
