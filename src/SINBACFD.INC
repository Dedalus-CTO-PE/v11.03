. VF.01.001 13/07/2000 CH  Added Restock ID                                  
. *----------------------------------------------------------------------
. * Include Name  :   SINBACFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Back Orders                        
. *
. * File Type     :   SQL
. *
. * File Name     :   sinbacaf.dat
. * Audit Name    :   sinaudba.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
SINAUDBA   IFILE    SQL, FIXED=87, KEY="D1-8,9-16,17-18,19-19"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIBAAUDD  DIM       8      8        1     Date of Change
SIBAAUDT  DIM       8      8        9     Time of Change
SIBAAUDP  DIM       2      2        17    Port
SIBAAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
SIBAAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
SIBAAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
SINBACA1   IFILE    SQL, FIXED=61, KEY="U1-5,6-12,13-20,21-25"                  
SINBACA2   IFILE    SQL, FIXED=61, KEY="U21-25,6-12,1-5,13-20"                  
SINBACA3   IFILE    SQL, FIXED=61, KEY="U6-12,21-25,1-5,13-20"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIBACST   DIM       5      5        1     Cost Centre                        
SIBACAT   DIM       7      7        6     Catalog                            
SIBAREQ   DIM       8      8        13    Requisition                        
SIBAWAR   DIM       5      5        21    Warehouse                          
SIBADAT   DIM       8      8        26    Date of Requisition                
SIBAQTY   FORM      10.2   7        34    Quantity on Back Order             
SIBARESI  DIM       10     10       41    Restock ID                         
SIBASPA   DIM       10     10       51    Spare                              
.
.End of Record                      61   
.
