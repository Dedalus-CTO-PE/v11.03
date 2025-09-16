. V6.00.001 09/04/1997 BGA New File                                          
. *----------------------------------------------------------------------
. * Include Name  :   CSMUICFD.INC
. *
. * Function      :   File Def'n Include for Corporate Supply
. *                   Catalog/Supplier Update Control    
. *
. * File Type     :   SQL
. *
. * File Name     :   csmuicaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CSMUICA1   IFILE    SQL, FIXED=53, KEY="U1-3,4-10,11-15,16-30"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CSUCDBS   DIM       3      3        1     Database                           
CSUCCAT   DIM       7      7        4     Catalog                            
CSUCSUP   DIM       5      5        11    Supplier                           
CSUCSUT   DIM       15     15       16    Supply Unit                        
CSUCTYP   FORM      2      2        31    Update Type 0=Add,1=Upd,2=Del      
CSUCSPA   DIM       20     20       33                                       
.
.End of Record                      53   
.
