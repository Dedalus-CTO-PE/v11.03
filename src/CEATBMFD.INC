. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEATBMFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Theatre MBS Mapping                
. *
. * File Type     :   SQL
. *
. * File Name     :   ceatbmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEATBMA1   IFILE    SQL, FIXED=50, KEY="U1-9,10-12,13-19"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CETBMBS   DIM       9      9        1     MBS Item Number                    
CETBSPC   DIM       3      3        10    Service Provider Code              
CETBPSC   DIM       7      7        13    Patient Service Code               
CETBPQTY  FORM      6.2    5        20    Primary Operation Quantity         
CETBSQTY  FORM      6.2    5        25    Secondary Operation Quantity       
CETBSPA   DIM       20     20       30    Spare                              
.
.End of Record                      50   
.
