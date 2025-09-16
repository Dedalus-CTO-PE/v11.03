. V6.00.002 30/04/1997 BGA Added Supplier for Multiple Order Generation      
. *----------------------------------------------------------------------
. * Include Name  :   SINLIMFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Imprest Load Temporary Table             
. *
. * File Type     :   SQL
. *
. * File Name     :   sinlimaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINLIMA1   IFILE    SQL, FIXED=157, KEY="U1-5,6-10,11-17"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SILICST   DIM       5      5        1     Cost Centre                        
SILISUP   DIM       5      5        6     Supplier                           
SILICAT   DIM       7      7        11    Catalog                            
SILIQTY   FORM      6      4        18    Quantity Required                  
SILISUT   DIM       15     15       22    Supply Unit                        
SILISUB   DIM       5      5        37    Product Group (Subjective)         
SILIPD    DIM       30     30       42    Part Description                   
SILIPN    DIM       30     30       72    Part Number                        
SILICON   DIM       10     10       102   Contract                           
SILICDT   DIM       8      8        112   Contract Date                      
SILIEDT   DIM       8      8        120   Expected Delivery Date             
SILIECT   FORM      12.4   9        128   Expected Unit Cost                 
SILISPA   DIM       20     20       137   Spare                              
.
.End of Record                      157  
.
