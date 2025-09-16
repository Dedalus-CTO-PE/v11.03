. *----------------------------------------------------------------------
. * Include Name  :   SINCIGFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Catalog/Warehouse Comments         
. *
. * File Type     :   SQL
. *
. * File Name     :   sincigaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINCIGA1   IFILE    SQL, FIXED=114, KEY="U1-7,8-12,13-15"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIIGCAT   DIM       7      7        1     Catalog                            
SIIGWAR   DIM       5      5        8     Warehouse                          
SIIGLIN   DIM       3      3        13    Line Number                        
SIIGCOM   DIM       78     78       16    Comment                            
SIIGSPA   DIM       20     20       94    Spare                              
.
.End of Record                      114  
.
