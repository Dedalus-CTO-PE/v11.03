. V6.00.001 09/04/1997 BGA New File                                          
. *----------------------------------------------------------------------
. * Include Name  :   CSMSKYFD.INC
. *
. * Function      :   File Def'n Include for Corporate Supply
. *                   Corporate Suppler Keyword Index    
. *
. * File Type     :   SQL
. *
. * File Name     :   csmskyaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CSMSKYA1   IFILE    SQL, FIXED=31, KEY="U1-15,16-20"                            
CSMSKYA2   IFILE    SQL, FIXED=31, KEY="U16-20,1-15"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CSSKKWD   DIM       15     15       1     Key WOrd                           
CSSKCRD   DIM       5      5        16    Creditor                           
CSSKSPA   DIM       10     10       21    Spare                              
.
.End of Record                      31   
.
