. V9.04.001 15/04/2005 PV  Changed SICECOM from DIM 5 to DIM 6               
. VF.00.001 29/10/1998 SB  Year 2000
. *----------------------------------------------------------------------
. * Include Name  :   SINCCEFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Cost Centre Usage by Commodity     
. *
. * File Type     :   SQL
. *
. * File Name     :   sincceaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINCCEA1   IFILE    SQL, FIXED=51, KEY="U1-5,12-17,6-11"                        
SINCCEA2   IFILE    SQL, FIXED=51, KEY="U1-5,6-11,12-17"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SICECST   DIM       5      5        1     Cost Centre                        
SICECOM   DIM       6      6        6     Commodity Group                    
SICEDAT   DIM       6      6        12    Date CCYYMM                        
SICEAMT   FORM      12.2   8        18    Amount (Requisitions + Imprest)    
SICEBUD   FORM      12.2   8        26    Budget                             
SICESPAR  DIM       17     17       34    Spare                              
.
.End of Record                      51   
.
