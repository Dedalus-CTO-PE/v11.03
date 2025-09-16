.  5.01.001 09/06/1993 bez Created
.  *----------------------------------------------------------------------
.  * Include Name  :   CCIXPAFD.INC
.  *
.  * Function      :   File Def'n Include for Clinical Costing
.  *                   O/P Extra Screen Parameter Table
.  *
.  * File Type     :   SQL
.  *
.  * File Name     :   ccixpaaf.dat
.  *
.  *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCIXPAA1  IFILE    SQL, FIXED=70, KEY="U1-8,9-10,11-13"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCXAPRID  DIM       8      8        1     Program ID
CCXASCID  DIM       2      2        9     Screen ID
CCXAUNIQ  DIM       3      3        11    Unique Count      
CCXAAUTO  FORM      1      2        14    Auto Extract for this type ? y/n   
CCXAPCD1  FORM      3      3        16    Variable for procedure code 1      
CCXAPCD2  FORM      3      3        19    Variable for procedure code 2      
CCXAPCD3  FORM      3      3        22    Variable for procedure code 3      
CCXAPCD4  FORM      3      3        25    Variable for procedure code 4      
CCXADCD1  FORM      3      3        28    Variable for department code 1     
CCXADCD2  FORM      3      3        31    Variable for department code 2     
CCXADCD3  FORM      3      3        34    Variable for department code 3     
CCXAQTYV  FORM      3      3        37    Quantity Variable
CCXASPAR  DIM       30     30       40    Spare                              
.
.End of Record                      70   
.
