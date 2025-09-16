. *----------------------------------------------------------------------
. * Include Name  :   SINCSEFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Cost Centre Security               
. *
. * File Type     :   SQL
. *
. * File Name     :   sincseaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINCSEA1   IFILE    SQL, FIXED=32, KEY="U1-4,5-9"                               
SINCSEA2   IFILE    SQL, FIXED=32, KEY="U5-9,1-4"                               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SICSUID   DIM       4      4        1     User ID                            
SICSCST   DIM       5      5        5     Cost Centre Code                   
SICSLEV   FORM      1      2        10    Security Level (Spare)             
SICSSPA   DIM       20     20       12    Spare                              
.
.End of Record                      32   
.
