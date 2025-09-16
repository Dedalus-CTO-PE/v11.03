. VF.01.001 14/07/2000 CH  Added Restock ID                                  
. *----------------------------------------------------------------------
. * Include Name  :   SINIPSFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Imprest Picking Sheet Table         
. *
. * File Type     :   SQL
. *
. * File Name     :   sinipsaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINIPSA1  IFILE    SQL, FIXED=134, KEY="U1-5,6-10,11-60,61-68,69-75,76-76,77-83"
SINIPSA2  IFILE    SQL, FIXED=134, KEY="U1-5,6-10,11-60,110-113,61-68,69-75,76-76,77-83"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIIPWAR   DIM       5      5        1     Warehouse                          
SIIPCST   DIM       5      5        6     Cost Centre                        
SIIPDEL   DIM       50     50       11    Delivery Details                   
SIIPRAC   DIM       8      8        61    Rack & Shelf                       
SIIPCAT   DIM       7      7        69    Catalog                            
SIIPTYP   DIM       1      1        76    Requisition Type                   
SIIPREQ   DIM       7      7        77    Requisition Number                 
SIIPRQT   FORM      12.2   8        84    Required Quantity                  
SIIPAQT   FORM      12.2   8        92    Quantity Available (I)             
SIIPBQT   FORM      12.2   8        100   Quantity Placed on Backorder (I)   
SIIPPFL   DIM       2      2        108   Printed by Port. SP2=Not Printed   
SIIPIMP   DIM       4      4        110   Imprest Sequence                   
SIIPRESI  DIM       10     10       114   Restock ID                         
SIIPSPA   DIM       10     10       124   Spare                              
.
.End of Record                      134  
.
