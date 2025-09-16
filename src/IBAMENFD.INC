. V6.00.001 25/07/1991                                                       
. *----------------------------------------------------------------------
. * Include Name  :   IBAMENFD.INC
. *
. * Function      :   File Def'n Include for Common
. *                   Menu Master                        
. *
. * File Type     :   SQL
. *
. * File Name     :   ibamenaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBAMENA1   IFILE    SQL, FIXED=24, KEY="U1-3"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBMNMENU  DIM       3      3        1     Menu Id                            
IBMNDESC  DIM       20     20       4     Description                        
.
.End of Record                      24   
.
