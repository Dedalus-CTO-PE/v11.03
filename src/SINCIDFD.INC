. *----------------------------------------------------------------------
. * Include Name  :   SINCIDFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Catalog/Supplier Comments          
. *
. * File Type     :   SQL
. *
. * File Name     :   sincidaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINCIDA1   IFILE    SQL, FIXED=104, KEY="U1-7,8-12,13-15"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIIDCAT   DIM       7      7        1     Catalog                            
SIIDSUP   DIM       5      5        8     Supplier                           
SIIDLIN   DIM       3      3        13    Line Number                        
SIIDCOM   DIM       78     78       16    Comment                            
SIIDSPA   DIM       10     10       94    Spare                              
.
.End of Record                      104  
.
