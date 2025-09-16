. VF.09.001 01/11/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   SINWSEFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Warehouse Security Table           
. *
. * File Type     :   SQL
. *
. * File Name     :   sinwseaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINWSEA1   IFILE    SQL, FIXED=32, KEY="U1-4,5-9"                               
SINWSEA2   IFILE    SQL, FIXED=32, KEY="U5-9,1-4"                               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIWSUID   DIM       4      4        1     User Security ID                   
SIWSWAR   DIM       5      5        5     Warehouse Code                     
SIWSLEV   FORM      1      2        10    Security Level (Spare              
SIWSSPA   DIM       20     20       12    Spare                              
.
.End of Record                      32   
.
