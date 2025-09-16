. *----------------------------------------------------------------------
. * Include Name  :   SINCIFFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Catalog Alias Table                 
. *
. * File Type     :   SQL
. *
. * File Name     :   sincifaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINCIFA1   IFILE    SQL, FIXED=81, KEY="U8-67,1-7"                              
SINCIFA2   IFILE    SQL, FIXED=81, KEY="U1-7,8-67"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIIFCAT   DIM       7      7        1     Catalog                            
SIIFALI   DIM       60     60       8     Alias                              
SIIFTYP   DIM       1      1        68    Type                               
SIIFATY   FORM      1      2        69    Type 0=Alias,1=Cata,2=Sup,3=Part   
SIIFSPA   DIM       10     10       71                                       
.
.End of Record                      81   
.
