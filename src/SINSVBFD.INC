. V6.00.001 14/10/1992 Nez New File                                          
. *----------------------------------------------------------------------
. * Include Name  :   SINSVBFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Service Code Comments              
. *
. * File Type     :   SQL
. *
. * File Name     :   sinsvbaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINSVBA1   IFILE    SQL, FIXED=88, KEY="U1-4,5-7"                               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIVBCOD   DIM       4      4        1     Service Code                       
SIVBLIN   DIM       3      3        5     Line Number                        
SIVBCOM   DIM       60     60       8     Comments                           
SIVBSPA   DIM       20     20       68    Spare                              
.
.End of Record                      88   
.
