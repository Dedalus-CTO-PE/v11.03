. *----------------------------------------------------------------------
. * Include Name  :   CSMCIFFD.INC
. *
. * Function      :   File Def'n Include for Corporate Supply
. *                   Corporate Alias Table              
. *
. * File Type     :   SQL
. *
. * File Name     :   csmcifaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CSMCIFA1   IFILE    SQL, FIXED=508, KEY="U1-7"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CSIFCAT   DIM       7      7        1     Catalog                            
CSIFDE01  DIM       60     60       8     Alias 1                            
CSIFDE02  DIM       60     60       68    Alias 2                            
CSIFDE03  DIM       60     60       128   Alias 3                            
CSIFDE04  DIM       60     60       188   Alias 4                            
CSIFDE05  DIM       60     60       248   Alias 5                            
CSIFDE06  DIM       60     60       308   Alias 6                            
CSIFDE07  DIM       60     60       368   Alias 7                            
CSIFDE08  DIM       60     60       428   Alias 8                            
CSIFSPA   DIM       20     20       488   Spare                              
.
.End of Record                      508  
.
