. V9.03.001 19/01/2004 P.D Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   PRIALSFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Medical Practice All User Access   
. *
. * File Type     :   SQL
. *
. * File Name     :   prialsaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRIALSA1   IFILE    SQL, FIXED=41, KEY="U1-10"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRALUSID  DIM       10     10       1     User ID                            
PRALSPAR  DIM       30     30       11    Spare                              
.
.End of Record                      41   
.
