. VF.01.001 05/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSAGEFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing
. *                   Casemix Age Ranges                 
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsageaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSAGEA1   IFILE    SQL, FIXED=63, KEY="U1-1,2-4"                               
CCSAGEA2   IFILE    SQL, FIXED=63, KEY="U1-1,40-42,2-4"                         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCAGDEF   DIM       1      1        1     Range Definition Number 0-9        
CCAGGRP   DIM       3      3        2     Group Code                         
CCAGDES   DIM       35     35       5     Description                        
CCAGTAGE  DIM       3      3        40    To Age                             
CCAGSPA   DIM       20     20       43    Spare                              
.
.End of Record                      63   
.
