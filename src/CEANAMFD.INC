. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEANAMFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Ward Patient Service Mapping       
. *
. * File Type     :   SQL
. *
. * File Name     :   ceanamaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEANAMA1   IFILE    SQL, FIXED=44, KEY="U1-3,4-6,7-13"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CENAWRD   DIM       3      3        1     Ward                               
CENASPC   DIM       3      3        4     Service Provider                   
CENAPSC   DIM       7      7        7     Patient Service                    
CENAHQTY  FORM      6.2    5        14    Quantity per Hour                  
CENADQTY  FORM      6.2    5        19    Quantity per Day                   
CENASPA   DIM       20     20       24    Spare                              
.
.End of Record                      44   
.
