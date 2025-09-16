. V6.00.001 09/04/1997 BGA New File                                          
. *----------------------------------------------------------------------
. * Include Name  :   CSMCKYFD.INC
. *
. * Function      :   File Def'n Include for Corporate Supply
. *                   Corporate Catalog Keyword Index    
. *
. * File Type     :   SQL
. *
. * File Name     :   csmckyaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CSMCKYA1   IFILE    SQL, FIXED=33, KEY="U1-15,16-22"                            
CSMCKYA2   IFILE    SQL, FIXED=33, KEY="U16-22,1-15"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CSCKKWD   DIM       15     15       1     Key Word                           
CSCKCAT   DIM       7      7        16    Catalog                            
CSCKSPA   DIM       10     10       23    Spare                              
.
.End of Record                      33   
.
