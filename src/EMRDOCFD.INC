. V9.03.001 21/10/2003 Ebon Clements Fixed index 2 positions CAR 44496
. V5.07.000 14/10/1999 NMH Ported to 5.07
. V6.06.003 30/04/1999                                                       
. V6.06.001 06/05/1999                                                       
. *----------------------------------------------------------------------
. * Include Name  :   EMRDOCFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Emergency Doctors Table
. *
. * File Type     :   SQL
. *
. * File Name     :   emrdocaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRDOCA1   IFILE    SQL, FIXED=60, KEY="U1-10"                                 
EMRDOCA2   IFILE    SQL, FIXED=60, KEY="U11-35,1-10"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMDODOC   DIM       10     10       1     Doctor Code                        
EMDODNM   DIM       25     25       11    Display Name                       
EMDODIN   DIM       3      3        36    Display Initials                   
EMDOACT   DIM       1      1        39    Active 0=No 1=Yes                  
EMDOSPA   DIM       20     20       40    Spare                              
.
.End of Record                      60   
.
