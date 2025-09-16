. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEAMCPFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Map Journal Codes to Patient Service    
. *
. * File Type     :   SQL
. *
. * File Name     :   ceamcpaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEAMCPA1   IFILE    SQL, FIXED=44, KEY="U1-3,4-6,7-13"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CEMCJCD   DIM       3      3        1     Journal Code                       
CEMCSPC   DIM       3      3        4     Service Provider Code              
CEMCPSC   DIM       7      7        7     Patient Service Code               
CEMCDQTY  FORM      6.2    5        14    Quantity per Dollar Charged        
CEMCTQTY  FORM      6.2    5        19    Quantity per Transaction           
CEMCSPA   DIM       20     20       24    Spare                              
.
.End of Record                      44   
.
