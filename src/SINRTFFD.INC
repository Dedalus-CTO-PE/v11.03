. *----------------------------------------------------------------------
. * Include Name  :   SINRTFFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Requisition Input Temporary Table         
. *
. * File Type     :   SQL
. *
. * File Name     :   sinrtfaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINRTFA1   IFILE    SQL, FIXED=54, KEY="U1-2,3-5"                               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIRTPOR   DIM       2      2        1     Port                               
SIRTUNI   DIM       3      3        3     Unique                             
SIRTWAR   DIM       5      5        6     Warehouse                          
SIRTCAT   DIM       7      7        11    Catalog                            
SIRTREQ   FORM      12.2   8        18    Required                           
SIRTISS   FORM      12.2   8        26    Issued                             
SIRTSPA   DIM       20     20       34                                       
.
.End of Record                      54   
.
