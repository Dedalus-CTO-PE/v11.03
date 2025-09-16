. V10.00.01 17/08/2010 JP  Created for CAR 222551                            
. *----------------------------------------------------------------------
. * Include Name  :   PMSINCFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Pregnancy Incomplete Table         
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsincaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSINCA1   IFILE    SQL, FIXED=111, KEY="U1-10"                                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMINUNIQ  DIM       10     10       1     Pregnancy Unique Id                
PMINSPAR  DIM       100    100      11    Spare                              
.
.End of Record                      111  
.
