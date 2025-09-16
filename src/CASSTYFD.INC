. *----------------------------------------------------------------------
. * Include Name  :   CASSTYFD.INC
. *
. * Function      :   File Def'n Include for Analysis Types
. *
. * File Type     :   SQL
. *
. * File Name     :   casstyaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CASSTYA1   IFILE    SQL, FIXED=65, KEY="U1-3,4-6"                               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CASTTOE   DIM       3      3        1     Type of Episode                    
CASTSTY   DIM       3      3        4     Analysis Type                       
CASTDES   DIM       35     35       7     Description                        
CASTLEN   FORM      3      3        42    Field Lenth                        
CASTJR    DIM       1      1        45    Justify Right 0=No                 
CASTZF    DIM       1      1        46    Zero Fill     0=No                 
CASTDE    DIM       1      1        47    Digit Entry 0=No                   
CASTDAT   DIM       1      1        48    Date Entry 0=No 1=Yes              
CASTSPA   DIM       16     16       49    Spare                              
.
.End of Record                      65   
.
