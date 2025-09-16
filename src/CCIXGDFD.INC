.  5.01.001 09/06/1993 bez Created
.  *----------------------------------------------------------------------
.  * Include Name  :   CCIXGDFD.INC
.  *
.  * Function      :   File Def'n Include for Clinical Costing
.  *                   O/P Extra Screen Generated Department Table  
.  *
.  * File Type     :   SQL
.  *
.  * File Name     :   ccixgdaf.dat
.  *
.  *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCIXGDA1   IFILE    SQL, FIXED=74, KEY="U1-8,9-10,11-13,14-22,23-31,32-40"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCXDPRID  DIM       8      8        1     Program ID
CCXDSCID  DIM       2      2        9     Screen ID
CCXDUNIQ  DIM       3      3        11    Unique Count
CCXDCOD1  DIM       9      9        14    1st Code                           
CCXDCOD2  DIM       9      9        23    2nd Code                           
CCXDCOD3  DIM       9      9        32    3rd Code                           
CCXDDEPT  DIM       3      3        41    Costing Department code            
CCXDSPAR  DIM       30     30       44    spare                              
.
.End of Record                      74   
.
