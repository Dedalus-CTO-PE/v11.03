. V9.04.001 15/04/2005 PV  CAR 59696 Changed SIGBCOM from DIM 5 to DIM 6     
. VF.00.001 29/10/1998 SB  Year 2000
. *----------------------------------------------------------------------
. * Include Name  :   SINCGBFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Commodity Usage                    
. *
. * File Type     :   SQL
. *
. * File Name     :   sincgbaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINCGBA1   IFILE    SQL, FIXED=78, KEY="U1-6,7-12"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIGBCOM   DIM       6      6        1     Commodity Group                    
SIGBDAT   DIM       6      6        7     Date CCYYMM                        
SIGBUAM   FORM      12.2   8        13    Usage Amount                       
SIGBUBD   FORM      12.2   8        21    Usage Budget                       
SIGBPAM   FORM      12.2   8        29    Purchases Actual                   
SIGBPBD   FORM      12.2   8        37    Purchases Budget                   
SIGBRAM   FORM      12.2   8        45    Receivals Actual                   
SIGBRBD   FORM      12.2   8        53    Receivals Budget                   
SIGBSPA   DIM       17     17       61    Spare                              
.
.End of Record                      78   
.
SIUSCST   FORM      12.2
SIUSQTY   FORM      12.2
