. *----------------------------------------------------------------------
. * Include Name  :   SINOQBFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Purchase Requisition Notes        
. *
. * File Type     :   SQL
. *
. * File Name     :   sinoqbaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINOQBA1   IFILE    SQL, FIXED=97, KEY="U1-5,6-13,14-16"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIQBCST   DIM       5      5        1     Cost Centre                        
SIQBRID   DIM       8      8        6     Purchase Requisition ID            
SIQBLIN   DIM       3      3        14    Line Number                        
SIQBCOM   DIM       60     60       17    Line Detail                        
SIQBSPA   DIM       20     20       77    Spare                              
.
.End of Record                      97   
.
