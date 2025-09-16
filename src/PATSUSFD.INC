. V9.04.001 14/09/2005 JH  Created                                           
. V9.04.001 14/09/2005                                                       
. *----------------------------------------------------------------------
. * Include Name  :   PATSUSFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Suspension Table           
. *
. * File Type     :   SQL
. *
. * File Name     :   patsusaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATSUSA1   IFILE    SQL, FIXED=333, KEY="U1-8,9-16"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTSSURNO  DIM       8      8        1     UR Number                          
PTSSFDAT  DIM       8      8        9     From date (CCYYMMDD)               
PTSSTDAT  DIM       8      8        17    To date (CCYYMMDD)                 
PTSSRFCS  DIM       3      3        25    RFC Status (Category FC)           
PTSSREAS  DIM       3      3        28    Reason (Category FD)               
PTSSWEBC  DIM       10     10       31    User ID created                    
PTSSDATC  DIM       8      8        41    Date created (CCYYMMDD)            
PTSSTIMC  DIM       8      8        49    Time created (hh:mm:ss)            
PTSSWEBU  DIM       10     10       57    User ID updated                    
PTSSDATU  DIM       8      8        67    Date updated (CCYYMMDD)            
PTSSTIMU  DIM       8      8        75    Time updated (hh:mm:ss)            
PTSSCOM1  DIM       100    100      83    Comments line 1                    
PTSSCOM2  DIM       100    100      183   Comments line 2                    
PTSSSPAR  DIM       50     50       283   Spare                              
.
.End of Record                      333  
.
