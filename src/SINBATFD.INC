. V6.00.003 29/06/1992                                                       
. *----------------------------------------------------------------------
. * Include Name  :   SINBATFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Backorder Temporary Allocation Table  
. *
. * File Type     :   SQL
. *
. * File Name     :   sinbataf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINBATA1   IFILE    SQL, FIXED=45, KEY="U1-7,8-15"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIBTPON   DIM       7      7        1     Purchase Order Number              
SIBTREQ   DIM       8      8        8     Requisition                        
SIBTCST   DIM       5      5        16    Cost Centre                        
SIBTQTY   FORM      10.2   7        21    Quantity Required                  
SIBTISS   FORM      10.2   7        28    Quantity Issued                    
SIBTSPA   DIM       10     10       35                                       
.
.End of Record                      45   
.
