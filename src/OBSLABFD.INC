. 9.07 .001 31/08/2006 JH  Created                                           
. *----------------------------------------------------------------------
. * Include Name  :   OBSLABFD.INC
. *
. * Function      :   File Def'n Include for Clinical Observations              
. *                   Laboratory Findings                
. *
. * File Type     :   SQL
. *
. * File Name     :   obslabaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSLABA1   IFILE    SQL, FIXED=266, KEY="U1-8,9-11"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBLBVISN  DIM       8      8        1     Visit Number                       
OBLBLINE  DIM       3      3        9     Line Number                        
OBLBDESC  DIM       127    127      12    Description                        
OBLBSPAR  DIM       127    127      139   Spare                              
.
.End of Record                      266  
.
