. *----------------------------------------------------------------------
. * Include Name  :   CORFLDFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Correspondence Download Fields                    
. *
. * File Type     :   SQL
. *
. * File Name     :   corfldaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CORFLDA1   IFILE    SQL, FIXED=111, KEY="U1-5"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
COFLFNUM  DIM       5      5        1     Download Field No.                 
COFLFDSC  DIM       50     50       6     Field Description                  
COFLGRP   DIM       20     20       56    Group Description                  
COFLTAB   DIM       8      8        76    Table                              
COFLFLD   DIM       8      8        84    Field Name                         
COFLFSPA  DIM       19     19       92    Spare                              
.
.End of Record                      111  
.
