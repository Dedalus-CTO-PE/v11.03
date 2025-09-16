. V9.03.001 28/01/2004 P.D Created FD                                        
. V9.03.002 04/03/2004 JT  Rename the spare variable                         
. *----------------------------------------------------------------------
. * Include Name  :   PRITHDFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Common Items Header File           
. *
. * File Type     :   SQL
. *
. * File Name     :   prithdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRITHDA1   IFILE    SQL, FIXED=81, KEY="U1-4"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRTHTMID  DIM       4      4        1     Template ID                        
PRTHDESC  DIM       35     35       5     Description                        
PRTHINDC  DIM       1      1        40    Active Indicator 1=Active 0=Not    
PRTHSPRE  DIM       40     40       41    Spare variable                     
.
.End of Record                      81   
.
