. 9.07 .001 08/08/2006 JH  Created                                           
. 9.07 .003 17/08/2006                                                       
. *----------------------------------------------------------------------
. * Include Name  :   OBSCALFD.INC
. *
. * Function      :   File Def'n Include for Clinical Observations              
. *                   Observation when to call table     
. *
. * File Type     :   SQL
. *
. * File Name     :   obscalaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSCALA1   IFILE    SQL, FIXED=189, KEY="U1-8,9-11"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBCLVISN  DIM       8      8        1     Visit Number                       
OBCLCNTR  DIM       3      3        9     Counter                            
OBCLCALL  DIM       127    127      12    Call Details                       
OBCLSPAR  DIM       50     50       139   Spare                              
.
.End of Record                      189  
.
