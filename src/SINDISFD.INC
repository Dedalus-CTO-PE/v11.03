. V6.00.001 20/05/1993 Nez New File                                          
. *----------------------------------------------------------------------
. * Include Name  :   SINDISFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Stocktake Discrepancies            
. *
. * File Type     :   SQL
. *
. * File Name     :   sindisaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINDISA1   IFILE    SQL, FIXED=57, KEY="U1-5,6-12,13-20"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIDSWAR   DIM       5      5        1     Warehouse                          
SIDSCAT   DIM       7      7        6     Catalog                            
SIDSDAT   DIM       8      8        13    Date Stocktake Finalized           
SIDSDIS   FORM      12.2   8        21    Discrepancy                        
SIDSVAL   FORM      12.2   8        29    Discrepancy Value                  
SIDSSPA   DIM       20     20       37    Spare                              
.
.End of Record                      57   
.
