. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEATAMFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Theatre Band Mapping               
. *
. * File Type     :   SQL
. *
. * File Name     :   ceatamaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEATAMA1   IFILE    SQL, FIXED=44, KEY="U1-3,4-6,7-13"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CETABAND  DIM       3      3        1     Theatre Band                       
CETASPC   DIM       3      3        4     Service Provider Code              
CETAPSC   DIM       7      7        7     Patient Service Code               
CETAPQTY  FORM      6.2    5        14    Primary Operation Quantity         
CETASQTY  FORM      6.2    5        19    Non-Primary Operation Quantity     
CETASPA   DIM       20     20       24    Spare                              
.
.End of Record                      44   
.
