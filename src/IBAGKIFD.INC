. VF.01.001 18/02/2000 SB  File Created                                      
. *----------------------------------------------------------------------
. * Include Name  :   IBAGKIFD.INC
. *
. * Function      :   File Def'n Include for Common
. *                   GST Keyword Index              
. *
. * File Type     :   SQL
. *
. * File Name     :   ibagkiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBAGKIA1   IFILE    SQL, FIXED=32, KEY="U1-6,7-21"                              
IBAGKIA2   IFILE    SQL, FIXED=32, KEY="U7-21,1-6"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBGKGST   DIM       6      6        1     GST Code                       
IBGKKWD   DIM       15     15       7     Keyword                            
IBGKSPA   DIM       10     10       22    Spare                              
.
.End of Record                      32   
.
