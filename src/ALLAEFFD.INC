. v9.03.001 15/07/2003 DS  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   ALLAEFFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Additional ERC Fields              
. *
. * File Type     :   SQL
. *
. * File Name     :   allaefaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLAEFA1   IFILE    SQL, FIXED=152, KEY="U1-8"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALAEVISN  DIM       8      8        1     Referral/Visit Number              
ALAEMRYN  DIM       1      1        9     Medical Records Y/N (0=No,1=Yes)   
ALAEETYN  DIM       1      1        10    Education/Training Y/N (0=No,1=Yes)
ALAERSYN  DIM       1      1        11    Research Y/N (0=No,1=Yes)          
ALAEOTYN  DIM       1      1        12    Other Y/N (0=No,1=Yes)             
ALAEOTDS  DIM       30     30       13    Other Description Field            
ALAEPDRS  DIM       9      9        43    Predefined Diagnosis Reason        
ALAESPAR  DIM       100    100      52    Spare Variable                     
.
.End of Record                      152  
.
