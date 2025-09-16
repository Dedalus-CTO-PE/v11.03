. 9.07 .001 08/08/2006 JH  Created                                           
. *----------------------------------------------------------------------
. * Include Name  :   OBSDITFD.INC
. *
. * Function      :   File Def'n Include for Clinical Observations              
. *                   Observation Diet Details           
. *
. * File Type     :   SQL
. *
. * File Name     :   obsditaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSDITA1   IFILE    SQL, FIXED=189, KEY="U1-8,9-11"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBDTVISN  DIM       8      8        1     Visit Number                       
OBDTCNTR  DIM       3      3        9     Counter                            
OBDTDIET  DIM       127    127      12    Diet Details                       
OBDTSPAR  DIM       50     50       139   Spare                              
.
.End of Record                      189  
.
