. V6.00.001 09/04/1997 BGA New File                                          
. *----------------------------------------------------------------------
. * Include Name  :   CSMUIAFD.INC
. *
. * Function      :   File Def'n Include for Corporate Supply
. *                   Catalog Update Control             
. *
. * File Type     :   SQL
. *
. * File Name     :   csmuiaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CSMUIAA1   IFILE    SQL, FIXED=33, KEY="U1-3,4-10"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CSUADBS   DIM       3      3        1     Database                           
CSUACAT   DIM       7      7        4     Catalog                            
CSUATYP   FORM      2      2        11    Update Type 0=Add,1=Upd,2=Del      
CSUASPA   DIM       20     20       13                                       
.
.End of Record                      33   
.
