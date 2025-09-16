. V9.04.001 25/05/2005 SB  New FD                                            
. *----------------------------------------------------------------------
. * Include Name  :   HICEMSFD.INC
. *
. * Function      :   File Def'n Include for HIC CLAIMS                         
. *                   HIC Medicare Explanation Codes     
. *
. * File Type     :   SQL
. *
. * File Name     :   hicemsaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HICEMSA1   IFILE    SQL, FIXED=124, KEY="U1-3"                                  
HICEMSA2   IFILE    SQL, FIXED=124, KEY="U4-73,1-3"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HCEMCODE  DIM       3      3        1     Medicare Explanation Code          
HCEMDESC  DIM       70     70       4     Description of Explanation Code    
HCEMSPAR  DIM       50     50       74    Spare Variable                     
.
.End of Record                      124  
.
