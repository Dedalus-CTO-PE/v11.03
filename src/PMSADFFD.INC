. V9.09.001 26/10/2007 JH  Created                                           
. V9.09.002 13/12/2007 JH  Created for CAR 153381                            
. V9.09.003 13/12/2007 JH  Created for CAR 153381                            
. *----------------------------------------------------------------------
. * Include Name  :   PMSADFFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Adverse Outcome Definition         
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsadfaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSADFA1   IFILE    SQL, FIXED=140, KEY="U1-6,7-9"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMAFCODE  DIM       6      6        1     Adverse outcome code (pmsadcaf)    
PMAFLINE  DIM       3      3        7     Line no                            
PMAFDATA  DIM       100    100      10    Line                               
PMAFSPAR  DIM       30     30       110   Spare                              
.
.End of Record                      140  
.
