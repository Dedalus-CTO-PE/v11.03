. V9.05.B01 12/12/2005 DS  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   ALLPCTFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Patient Care Team                  
. *
. * File Type     :   SQL
. *
. * File Name     :   allpctaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLPCTA1   IFILE    SQL, FIXED=84, KEY="U1-8,9-10,11-20,21-26"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALPCURNO  DIM       8      8        1     U/R Number                         
ALPCTYPE  DIM       2      2        9     Type of Team                       
.                                           1=HCP
.                                           2=Clinic Type
.                                           3=Clinic ID
.                                           4=Case Team
ALPCCODE  DIM       10     10       11    Team Code                          
ALPCSITE  DIM       6      6        21    Site Code                          
ALPCADFL  DIM       1      1        27    Admitting Doctor Flag (0=No,1=Yes) 
ALPCCDAT  DIM       8      8        28    Date Record Created (ccyymmdd)     
ALPCCTIM  DIM       8      8        36    Time Record Created (hh:mm:ss)     
ALPCCUID  DIM       10     10       44    WEB User ID Created (websecaf)     
ALPCSPAR  DIM       30     30       54    Spare Variable                     
.
.End of Record                      84   
.
