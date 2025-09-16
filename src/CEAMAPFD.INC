. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEAMAPFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Map Miscellaneous Group to Patient Service       
. *
. * File Type     :   SQL
. *
. * File Name     :   ceamapaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEAMAPA1   IFILE    SQL, FIXED=44, KEY="U1-3,4-6,7-13"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CEMAMGP   DIM       3      3        1     Misc. Group (Cat FI)               
CEMASPC   DIM       3      3        4     Service Provider Code              
CEMAPSC   DIM       7      7        7     Patient Service Code               
CEMADQTY  FORM      6.2    5        14    Quantity per Dollar Charged        
CEMATQTY  FORM      6.2    5        19    Quantity per Transaction           
CEMASPA   DIM       20     20       24    Spare                              
.
.End of Record                      44   
.
