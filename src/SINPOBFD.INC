. V6.00.001 24/06/1992                                                       
. *----------------------------------------------------------------------
. * Include Name  :   SINPOBFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Purchase Order Notes               
. *
. * File Type     :   SQL
. *
. * File Name     :   sinpobaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINPOBA1   IFILE    SQL, FIXED=91, KEY="U1-7,8-10"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIPBPON   DIM       7      7        1     Purchase Order Number              
SIPBLIN   DIM       3      3        8     Line Number                        
SIPBCOM   DIM       60     60       11    Comment Line                       
SIPBSPA   DIM       20     20       71                                       
.
.End of Record                      91   
.
