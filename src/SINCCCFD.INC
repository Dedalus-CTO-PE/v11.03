. *----------------------------------------------------------------------
. * Include Name  :   SINCCCFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Cost Centre Comments               
. *
. * File Type     :   SQL
. *
. * File Name     :   sincccaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINCCCA1   IFILE    SQL, FIXED=97, KEY="U1-5,6-8"                               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SICCCST   DIM       5      5        1     Cost Centre                        
SICCLIN   DIM       3      3        6     Line Number                        
SICCCOM   DIM       78     78       9     Comment                            
SICCSPA   DIM       10     10       87    SPare                              
.
.End of Record                      97   
.
