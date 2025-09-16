. V9.09.001 30/01/2008 PV  Created Prosthetic Tracking Header Tble CAR 155334
. *----------------------------------------------------------------------
. * Include Name  :   PMSPTHFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Prosthetic Tracking Header Table   
. *
. * File Type     :   SQL
. *
. * File Name     :   pmspthaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSPTHA1   IFILE    SQL, FIXED=56, KEY="U1-8,9-16"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMPTEXDT  DIM       8      8        1     Extract Date ccyymmdd              
PMPTEXTM  DIM       8      8        9     Extract Time hh:mm:ss              
PMPTFLNM  DIM       25     25       17    PROS_RECON_ccyymmddhhmmss          
PMPTRCCT  FORM      5      4        42    Record Count                       
PMPTSPAR  DIM       10     10       46    Spare Variable                     
.
.End of Record                      56   
.
