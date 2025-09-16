. 9.07 .003 08/08/2006 JH  Created                                           
. *----------------------------------------------------------------------
. * Include Name  :   OBSRESFD.INC
. *
. * Function      :   File Def'n Include for Clinical Observations              
. *                   Observation Drug Restrictions      
. *
. * File Type     :   SQL
. *
. * File Name     :   obsresaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSRESA1   IFILE    SQL, FIXED=189, KEY="U1-8,9-11"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBRSVISN  DIM       8      8        1     Visit Number                       
OBRSLINE  DIM       3      3        9     Line Number                        
OBRSREST  DIM       127    127      12    Restrictions                       
OBRSSPAR  DIM       50     50       139   Spare                              
.
.End of Record                      189  
.
