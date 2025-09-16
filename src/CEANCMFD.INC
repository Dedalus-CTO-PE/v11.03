. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEANCMFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Bed Type Additional Patient Service
. *
. * File Type     :   SQL
. *
. * File Name     :   ceancmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEANCMA1   IFILE    SQL, FIXED=39, KEY="U1-3,4-6,7-13"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CENCBTY   DIM       3      3        1     Bed Type                           
CENCSPC   DIM       3      3        4     Service Provider                   
CENCPSC   DIM       7      7        7     Patient Service Code               
CENCQTY   FORM      6.2    5        14    Quantity per Day                   
CENCSPA   DIM       20     20       19                                       
.
.End of Record                      39   
.
