. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEAMBPFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Map Miscellaneous Code to Patient Service        
. *
. * File Type     :   SQL
. *
. * File Name     :   ceambpaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEAMBPA1   IFILE    SQL, FIXED=50, KEY="U1-9,10-12,13-19"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CEMBMCC   DIM       9      9        1     Misc Charge Code                   
CEMBSPC   DIM       3      3        10    Service Provider Code              
CEMBPSC   DIM       7      7        13    Patient Service Code               
CEMBDQTY  FORM      6.2    5        20    Quantity per Dollar Charged        
CEMBTQTY  FORM      6.2    5        25    Quantity per Transaction           
CEMBSPA   DIM       20     20       30    Spare                              
.
.End of Record                      50   
.
