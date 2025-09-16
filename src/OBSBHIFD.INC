. 9.07 .001 31/08/2006 JH  Created                                           
. *----------------------------------------------------------------------
. * Include Name  :   OBSBHIFD.INC
. *
. * Function      :   File Def'n Include for Clinical Observations              
. *                   Brief History of Illness           
. *
. * File Type     :   SQL
. *
. * File Name     :   obsbhiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSBHIA1   IFILE    SQL, FIXED=266, KEY="U1-8,9-11"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBBHVISN  DIM       8      8        1     Visit Number                       
OBBHLINE  DIM       3      3        9     Line Number                        
OBBHDESC  DIM       127    127      12    Description                        
OBBHSPAR  DIM       127    127      139   Spare                              
.
.End of Record                      266  
.
