. VF.01.001 01/04/2000 SB  Added GST Fields                                  
. *----------------------------------------------------------------------
. * Include Name  :   SINSODFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Suggested Reorder Detail Table      
. *
. * File Type     :   SQL
. *
. * File Name     :   sinsodaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINSODA1   IFILE    SQL, FIXED=116, KEY="U4-8,9-15"                             
SINSODA2   IFILE    SQL, FIXED=116, KEY="U1-3,16-20,4-8,9-15"                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIODSID   DIM       3      3        1     Suggested Reorder ID               
SIODWAR   DIM       5      5        4     Warehouse                          
SIODCAT   DIM       7      7        9     Catalog Code                       
SIODSUP   DIM       5      5        16    Supplier                           
SIODCST   FORM      12.4   9        21    Unit Cost (Including GST)          
SIODGSTA  FORM      12.4   9        30    Expected GST                       
SIODQTY   FORM      12.2   8        39    Quantity                           
SIODSUT   DIM       15     15       47    Supply Unit                        
SIODCON   DIM       10     10       62    Contract                           
SIODCDT   DIM       8      8        72    Contract Date                      
SIODEDT   DIM       8      8        80    Expected Delivery Date             
SIODGST   DIM       6      6        88    GST Code                           
SIODSPA   DIM       22     22       94    Spare                              
.
.End of Record                      116  
.
