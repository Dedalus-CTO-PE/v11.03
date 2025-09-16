. 9.07 .001 08/08/2006                                                       
. 9.07 .001 08/08/2006 JH  Created                                           
. 9.07 .001 08/08/2006                                                       
. *----------------------------------------------------------------------
. * Include Name  :   OBSPHYFD.INC
. *
. * Function      :   File Def'n Include for Clinical Observations              
. *                   Observation Physical Activity      
. *
. * File Type     :   SQL
. *
. * File Name     :   obsphyaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSPHYA1   IFILE    SQL, FIXED=189, KEY="U1-8,9-11"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBPHVISN  DIM       8      8        1     Visit Number                       
OBPHLINE  DIM       3      3        9     Line Number                        
OBPHPHYS  DIM       127    127      12    Physical Activity                  
OBPHSPAR  DIM       50     50       139   Spare                              
.
.End of Record                      189  
.
