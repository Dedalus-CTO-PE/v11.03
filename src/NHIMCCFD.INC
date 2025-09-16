. *----------------------------------------------------------------------
. * Include Name  :   NHIMCCFD.INC
. *
. * Function      :   File Def'n Include for NZ National Health System          
. *                   Medical Warning Coding             
. *
. * File Type     :   SQL
. *
. * File Name     :   nhimccaf.dat
. *
. * Modifications :
. *      V9.02.01    17/01/200  Jill Habasque  SRF 34658
. *                  Changed NHMCCSYS from DIM 1 to DIM 2
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NHIMCCA1   IFILE    SQL, FIXED=89, KEY="U1-2,3-8"                               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NHMCCSYS  DIM       2      2        1     Coding System                      
NHMCCOD   DIM       6      6        3     Code                               
NHMCDES   DIM       50     50       9     Description                        
NHMCSPA   DIM       30     30       59    Spare                              
.
.End of Record                      89   
.
