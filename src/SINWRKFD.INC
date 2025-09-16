. V6.00.004 18/05/1993 Nez Added SIWKSOH                                     
. *----------------------------------------------------------------------
. * Include Name  :   SINWRKFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Stocktake work file stkxxxxx       
. *
. * File Type     :   SQL
. *
. * File Name     :   sinwrkaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINWRKA1   IFILE    SQL, FIXED=57, KEY="U1-5,6-13,14-20"                        
SINWRKA2   IFILE    SQL, FIXED=57, KEY="U1-5,14-20,6-13"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIWKWAR   DIM       5      5        1     Warehouse (I know this is in fname)
SIWKRACK  DIM       8      8        6     Rack/Shelf                         
SIWKCAT   DIM       7      7        14    Catalog Code                       
SIWKCNT   FORM      12.2   8        21    Quantity Counted                   
SIWKSOH   FORM      12.2   8        29    Stock on Hand at Last Count        
SIWKSPA   DIM       20     20       37    Spare                              
.
.End of Record                      57   
.
