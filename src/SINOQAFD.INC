. V6.00.002 03/01/1995     Modified for NSM interface to SIN (RKS 3-1-95)    
. *----------------------------------------------------------------------
. * Include Name  :   SINOQAFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Outstanding Purchase Requisitions  
. *
. * File Type     :   SQL
. *
. * File Name     :   sinoqaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINOQAA1   IFILE    SQL, FIXED=156, KEY="U1-5,6-13"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIQACST   DIM       5      5        1     Cost Centre Code                   
SIQARID   DIM       8      8        6     Purchase Requisition ID            
SIQACAT   DIM       7      7        14    Catalog Code                       
SIQAUNT   DIM       15     15       21    Unit of Issue to Cost Centre       
SIQAPD    DIM       30     30       36    Part Description                   
SIQAPN    DIM       30     30       66    Part Number                        
SIQAQTY   FORM      12.2   8        96    Quantity Required                  
SIQASTA   DIM       3      3        104   Status Code (Category PRC)         
SIQAUID   DIM       4      4        107   User ID                            
SIQADAT   DIM       8      8        111   CCYYMMDD                           
SIQATIM   DIM       5      5        119   Time HH:MM                         
SIQAPOR   DIM       2      2        124   Port                               
SIQANSMO  DIM       10     10       126   Nursing Station Mngmt Order Number 
SIQANSMS  DIM       3      3        136   Nursing Station Mngmt Sub-Order Num
SIQASPA   DIM       17     17       139   Spare                              
.
.End of Record                      156  
.
