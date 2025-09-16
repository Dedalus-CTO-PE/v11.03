. VF.01.001 01/04/2000 SB  Added GST Fields                                  
. *----------------------------------------------------------------------
. * Include Name  :   SINNPOFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Imprest Non-stock Purchase Order Generation
. *
. * File Type     :   SQL
. *
. * File Name     :   sinnpoaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINNPOA1   IFILE    SQL, FIXED=172, KEY="U1-5,6-10,11-17"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SINPCST   DIM       5      5        1     Cost Centre                        
SINPSUP   DIM       5      5        6     Supplier                           
SINPCAT   DIM       7      7        11    Catalog Code                       
SINPQTY   FORM      6      4        18    Quantity Required                  
SINPSUT   DIM       15     15       22    Supply Unit                        
SINPSUB   DIM       5      5        37    Product Group                      
SINPPD    DIM       30     30       42    Part Description                   
SINPPN    DIM       30     30       72    Part Number                        
SINPCON   DIM       10     10       102   Contract                           
SINPCDT   DIM       8      8        112   Contract Date                      
SINPEDT   DIM       8      8        120   Expected Delivery Date             
SINPECT   FORM      12.4   9        128   Expected Unit Cost                 
SINPGSTA  FORM      12.4   9        137   Expected GST                       
SINPGST   DIM       6      6        146   GST Code                           
SINPSPA   DIM       20     20       152   Spare Variable                     
.
.End of Record                      172  
.
