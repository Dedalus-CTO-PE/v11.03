. V9.04.001 10/11/2005 JT  LGA Keyword file                                  
. *----------------------------------------------------------------------
. * Include Name  :   PATKLGFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   LGA Keyword Index                  
. *
. * File Type     :   SQL
. *
. * File Name     :   patklgaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATKLGA1   IFILE    SQL, FIXED=40, KEY="U1-4,5-19"                              
PATKLGA2   IFILE    SQL, FIXED=40, KEY="U5-19,1-4"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTLGCODE  DIM       4      4        1     LGA Code                           
PTLGKWRD  DIM       15     15       5     Key Word                           
PTLGSPAR  DIM       20     20       20    Spare variable                     
.
.End of Record                      40   
.
