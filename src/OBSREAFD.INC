. 9.07 .001 01/08/2006 JH  Created                                           
. 9.07 .002 03/08/2006                                                       
. 9.07 .003 31/08/2006                                                       
. *----------------------------------------------------------------------
. * Include Name  :   OBSREAFD.INC
. *
. * Function      :   File Def'n Include for Clinical Observations              
. *                   Observation Admission reasons      
. *
. * File Type     :   SQL
. *
. * File Name     :   obsreaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSREAA1   IFILE    SQL, FIXED=266, KEY="U1-8,9-11"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBREVISN  DIM       8      8        1     Visit Number                       
OBRELINE  DIM       3      3        9     Line Number                        
OBREREAS  DIM       127    127      12    Reason for admission               
OBRESPAR  DIM       127    127      139   Spare                              
.
.End of Record                      266  
.
