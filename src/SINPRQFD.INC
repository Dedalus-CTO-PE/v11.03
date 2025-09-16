. V6.00.010 27/06/1995 RKS Added second index by Catalog                     
. V6.00.011 13/08/1996 SB  Make second index unique                          
. *----------------------------------------------------------------------
. * Include Name  :   SINPRQFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Requisition Picking Sheets         
. *
. * File Type     :   SQL
. *
. * File Name     :   sinprqaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINPRQA1   IFILE    SQL, FIXED=130, KEY="U1-5,6-10,11-60,61-68,69-75,76-76,77-83"
SINPRQA2   IFILE    SQL, FIXED=130, KEY="U69-75,1-5,76-76,77-83,6-10,11-60,61-68"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIPRWAR   DIM       5      5        1     Warehouse                          
SIPRCST   DIM       5      5        6     Cost Centre                        
SIPRDEL   DIM       50     50       11    Delivery Details                   
SIPRRAC   DIM       8      8        61    Rack & Shelf                       
SIPRCAT   DIM       7      7        69    Catalog                            
SIPRTYP   DIM       1      1        76    Requisition Type                   
SIPRREQ   DIM       7      7        77    Requisition Number                 
SIPRRQT   FORM      12.2   8        84    Required Quantity                  
SIPRAQT   FORM      12.2   8        92    Quantity Available (I)             
SIPRBQT   FORM      12.2   8        100   Quantity Placed on Backorder (I)   
SIPRPFL   DIM       2      2        108   Printed by Port. SP2=Not Printed   
SIPRSPA   DIM       20     20       110                                      
.
.End of Record                      130  
.
