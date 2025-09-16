. V6.00.003 19/04/1994                                                       
. *----------------------------------------------------------------------
. * Include Name  :   CASAGEFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Casemix Age Ranges                 
. *
. * File Type     :   SQL
. *
. * File Name     :   casageaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CASAGEA1   IFILE    SQL, FIXED=63, KEY="U1-1,2-4"                               
CASAGEA2   IFILE    SQL, FIXED=63, KEY="U1-1,40-42,43-44,45-47,2-4"             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCAGDEF   DIM       1      1        1     Range Definition Number 0-9        
CCAGGRP   DIM       3      3        2     Group Code                         
CCAGDES   DIM       35     35       5     Description                        
CCAGTAGE  DIM       3      3        40    To Age                             
CCAGTMTH  DIM       2      2        43    To Number of Months                
CCAGTDAY  DIM       3      3        45    To Number of Days                  
CCAGSPA   DIM       15     15       48    Spare                              
.
.End of Record                      63   
.
