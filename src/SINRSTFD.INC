. 6.00.01 18/04/1995 New for Random Stocktake
. *----------------------------------------------------------------------
. * Include Name  :   SINRSTFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Random Stocktake Table              
. *
. * File Type     :   SQL
. *
. * File Name     :   sinrstaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINRSTA1   IFILE    SQL, FIXED=50, KEY="U1-5,6-12,13-19"                        
SINRSTA2   IFILE    SQL, FIXED=50, KEY="U6-12"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIRSWAR   DIM       5      5        1     Warehouse                          
SIRSRAND  DIM       7      7        6     Random Stocktake                   
SIRSCAT   DIM       7      7        13    Catalog                            
SIRSSPA   DIM       30     30       20                                       
.
.End of Record                      50   
.
