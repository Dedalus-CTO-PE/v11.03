. *----------------------------------------------------------------------
. * Include Name  :   SINCIBFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Catalog Comments                   
. *
. * File Type     :   SQL
. *
. * File Name     :   sincibaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINCIBA1   IFILE    SQL, FIXED=99, KEY="U1-7,8-10"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIIBCAT   DIM       7      7        1     Catalog                            
SIIBLIN   DIM       3      3        8     Line Number                        
SIIBCOM   DIM       78     78       11    Comment                            
SIIBSPA   DIM       10     10       89                                       
.
.End of Record                      99   
.
