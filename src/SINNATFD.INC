. 6.00 .002 23/06/1994     Added Catalog Code to the Nato Code Key           
. *----------------------------------------------------------------------
. * Include Name  :   SINNATFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Catalog/Nato Cross-Reference Table
. *
. * File Type     :   SQL
. *
. * File Name     :   sinnataf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINNATA1   IFILE    SQL, FIXED=48, KEY="U1-7"                                   
SINNATA2   IFILE    SQL, FIXED=48, KEY="U8-17,1-7"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SINACAT   DIM       7      7        1     Catalogue Code                     
SINANAT   DIM       10     10       8     Nato Code                          
SINASPA   DIM       30     30       18    Spare                              
.
.End of Record                      48   
.
NATOCODE  DIM       10
