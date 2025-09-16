. V9.09.001 21/01/2008 DS  Created FD  CAR 153382                            
. *----------------------------------------------------------------------
. * Include Name  :   PMSAILFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Admission/Fee Information Link     
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsailaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSAILA1   IFILE    SQL, FIXED=51, KEY="U1-8"                                   
PMSAILA2   IFILE    SQL, FIXED=51, KEY="U9-20,1-8"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMALADMN  DIM       8      8        1     Admission Number                   
PMALFINO  DIM       12     12       9     Fee Information Number             
PMALSPAR  DIM       30     30       21    Spare Variable                     
.
.End of Record                      51   
.
