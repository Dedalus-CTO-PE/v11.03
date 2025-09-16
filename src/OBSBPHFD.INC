. 9.07 .001 31/08/2006 JH  Created                                           
. *----------------------------------------------------------------------
. * Include Name  :   OBSBPHFD.INC
. *
. * Function      :   File Def'n Include for Clinical Observations              
. *                   Brief Physical Exam                
. *
. * File Type     :   SQL
. *
. * File Name     :   obsbphaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSBPHA1   IFILE    SQL, FIXED=266, KEY="U1-8,9-11"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBBPVISN  DIM       8      8        1     Visit Number                       
OBBPLINE  DIM       3      3        9     Line Number                        
OBBPDESC  DIM       127    127      12    Description                        
OBBPSPAR  DIM       127    127      139   Spare                              
.
.End of Record                      266  
.
