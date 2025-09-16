. V9.04.001 26/04/2005 PV  CAR 59698 Created FD and IO                       
. *----------------------------------------------------------------------
. * Include Name  :   SINCIJFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Catalog Extended Description       
. *
. * File Type     :   SQL
. *
. * File Name     :   sincijaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINCIJA1   IFILE    SQL, FIXED=99, KEY="U1-7,8-10"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIIJCAT   DIM       7      7        1     Catalog                            
SIIJLIN   DIM       3      3        8     Line Number                        
SIIJCOM   DIM       78     78       11    Description                        
SIIJSPA   DIM       10     10       89    Spare                              
.
.End of Record                      99   
.
