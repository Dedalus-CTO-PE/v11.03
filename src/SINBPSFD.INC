. VF.01.001 14/07/2000 CH  Added Restock ID                                  
. *----------------------------------------------------------------------
. * Include Name  :   SINBPSFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Backorder Picking Sheets           
. *
. * File Type     :   SQL
. *
. * File Name     :   sinbpsaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINBPSA1  IFILE    SQL, FIXED=130, KEY="U1-5,6-10,11-60,61-68,69-75,76-76,77-83"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIBPWAR   DIM       5      5        1     Warehouse                          
SIBPCST   DIM       5      5        6     Cost Centre                        
SIBPDEL   DIM       50     50       11    Delivery Details                   
SIBPRAC   DIM       8      8        61    Rack & Shelf                       
SIBPCAT   DIM       7      7        69    Catalog                            
SIBPTYP   DIM       1      1        76    Requisition Type                   
SIBPREQ   DIM       7      7        77    Requisition Number                 
SIBPRQT   FORM      12.2   8        84    Required Quantity                  
SIBPAQT   FORM      12.2   8        92    Quantity Available (I)             
SIBPBQT   FORM      12.2   8        100   Quantity Placed on Backorder (I)   
SIBPPFL   DIM       2      2        108   Printed by Port. SP2=Not Printed   
SIBPRESI  DIM       10     10       110   Restock ID                         
SIBPSPA   DIM       10     10       120   Spare                              
.
.End of Record                      130  
.
