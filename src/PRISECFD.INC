. V9.03.001 19/01/2004 P.D Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   PRISECFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Medical Practice Security Access   
. *
. * File Type     :   SQL
. *
. * File Name     :   prisecaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRISECA1   IFILE    SQL, FIXED=47, KEY="U1-6,7-16"                              
PRISECA2   IFILE    SQL, FIXED=47, KEY="U7-16,1-6"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRSEPRAC  DIM       6      6        1     Medical Practice                   
PRSEUSID  DIM       10     10       7     User ID                            
PRSESPAR  DIM       30     30       17    Spare                              
.
.End of Record                      47   
.
