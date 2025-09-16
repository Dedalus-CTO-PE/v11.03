. 9.07 .001 01/08/2006 JH  Created                                           
. 9.07 .002 01/08/2006                                                       
. 9.07 .003 16/08/2006                                                       
. *----------------------------------------------------------------------
. * Include Name  :   OBSDIAFD.INC
. *
. * Function      :   File Def'n Include for Clinical Observations              
. *                   Observation Diagnosis Details      
. *
. * File Type     :   SQL
. *
. * File Name     :   obsdiaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSDIAA1   IFILE    SQL, FIXED=266, KEY="U1-8,9-11"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBDIVISN  DIM       8      8        1     Visit Number                       
OBDILINE  DIM       3      3        9     Line Number                        
OBDIDIAG  DIM       127    127      12    Diagnosis                          
OBDISPAR  DIM       127    127      139   Spare                              
.
.End of Record                      266  
.
