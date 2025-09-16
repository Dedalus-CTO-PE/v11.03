. V6.00.003 07/06/1993
. *----------------------------------------------------------------------
. * Include Name  :   FMSNRCFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Cost Centre Template Linkage
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsnrcaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSNRCA1   IFILE    SQL, FIXED=53, KEY="U1-3,4-15,16-20,21-32"
FMSNRCA2   IFILE    SQL, FIXED=53, KEY="U1-3,21-32,4-15"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMNCCODE  DIM       3      3        1     Cost Centre Template               
FMNCTCOD  DIM       12     12       4     Total Cost Centre                  
FMNCASEQ  DIM       5      5        16    Sequence                           
FMNCSCOD  DIM       12     12       21    Sub Cost Centre                    
FMNCSPAR  DIM       20     20       33    Spare                              
.
.End of Record                      53   
.
