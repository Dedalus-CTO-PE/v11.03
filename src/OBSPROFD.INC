. 9.07 .001 01/08/2006 JH  Created                                           
. 9.07 .002 16/08/2006                                                       
. *----------------------------------------------------------------------
. * Include Name  :   OBSPROFD.INC
. *
. * Function      :   File Def'n Include for Clinical Observations              
. *                   Clinical Summary Procedures        
. *
. * File Type     :   SQL
. *
. * File Name     :   obsproaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSPROA1   IFILE    SQL, FIXED=266, KEY="U1-8,9-11"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBPRVISN  DIM       8      8        1     Visit Number                       
OBPRLINE  DIM       3      3        9     Line Number                        
OBPRPROC  DIM       127    127      12    Procedure                          
OBPRSPAR  DIM       127    127      139   Spare                              
.
.End of Record                      266  
.
