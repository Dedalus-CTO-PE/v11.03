. *----------------------------------------------------------------------
. * Include Name  :   CSMCEQFD.INC
. *
. * Function      :   File Def'n Include for Corporate Supply
. *                   Catalog Enquiries Temporary Table  
. *
. * File Type     :   SQL
. *
. * File Name     :   csmceqaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CSMCEQA1   IFILE    SQL, FIXED=116, KEY="U1-7,8-10,11-15"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CSCECAT   DIM       7      7        1     Catalog                            
CSCEDBS   DIM       3      3        8     Database                           
CSCEWAR   DIM       5      5        11    Warehouse                          
CSCEDDES  DIM       35     35       16    Datebase Description               
CSCEWDES  DIM       35     35       51    Warehouse Description              
CSCESTK   FORM      1      2        86    Stocked                            
CSCESOH   FORM      12.2   8        88    Stock on Hand                      
CSCESPA   DIM       20     20       96    Spare                              
.
.End of Record                      116  
.
