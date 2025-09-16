. V9.09.001 04/12/2007 JH  Created                                           
. V9.09.002 04/12/2007                                                       
. V9.09.003 13/12/2007 JH  Created for CAR 153381                            
. *----------------------------------------------------------------------
. * Include Name  :   PMSOCMFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Outcome Comments           
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsocmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSOCMA1   IFILE    SQL, FIXED=145, KEY="U1-8,9-11,12-14"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMOCVISN  DIM       8      8        1     Visit Number                       
PMOCOCNT  DIM       3      3        9     Outcome Count                      
PMOCLCNT  DIM       3      3        12    Line Count                         
PMOCLINE  DIM       100    100      15    Comment Line                       
PMOCSPAR  DIM       30     30       115   Spare                              
.
.End of Record                      145  
.
