. V9.09.001 12/10/2007 EC  Created FD CAR 151931                             
. *----------------------------------------------------------------------
. * Include Name  :   PMSDSLFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Doctors Letter Selections Index    
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsdslaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSDSLA1   IFILE    SQL, FIXED=36, KEY="U1-4,5-14"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMDLSELI  DIM       4      4        1     Selection Id                       
PMDLHCPC  DIM       10     10       5     HCP Code (pmshcpaf)                
PMDLDLST  DIM       1      1        15    Deleted Status 0=No 1=Yes          
PMDLSPAR  DIM       20     20       16    Spare                              
.
.End of Record                      36   
.
