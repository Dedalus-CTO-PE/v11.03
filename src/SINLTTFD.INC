. V9.04.001 15/04/2005 PV  CAR 59696 Changed SILTCOD from DIM 5 to DIM 6     
. V6.00.002 23/03/1995 RKS New Index for IBASUB90 Added
. *----------------------------------------------------------------------
. * Include Name  :   SINLTTFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Ledger Translation Table           
. *
. * File Type     :   SQL
. *
. * File Name     :   sinlttaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINLTTA1   IFILE    SQL, FIXED=40, KEY="U1-2,3-8"                               
SINLTTA2   IFILE    SQL, FIXED=40, KEY="U1-2,9-20,3-8"                          
SINLTTA3   IFILE    SQL, FIXED=40, KEY="U1-2,3-8,9-20"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SILTLED   DIM       2      2        1     Ledger                             
SILTCOD   DIM       6      6        3     Subjective or Commodity Code       
SILTSUB   DIM       12     12       9     General Ledger Subjective          
SILTSPA   DIM       19     19       21    Spare                              
.
.End of Record                      40   
.
