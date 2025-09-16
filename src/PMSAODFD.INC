. V9.09.001 11/12/2007 JH  Created                                           
. V9.09.002 13/12/2007 JH  Created for CAR 153381                            
. *----------------------------------------------------------------------
. * Include Name  :   PMSAODFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Adverse Outcome Long Description   
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsaodaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSAODA1   IFILE    SQL, FIXED=140, KEY="U1-6,7-9"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMAOCODE  DIM       6      6        1     Outcome code (pmsadcaf)            
PMAOLCNT  DIM       3      3        7     Line count                         
PMAOLINE  DIM       100    100      10    Line                               
PMAOSPAR  DIM       30     30       110   Spare                              
.
.End of Record                      140  
.
