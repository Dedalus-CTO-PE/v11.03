. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEAMDPFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Map Discharge Status to Patient Service 
. *
. * File Type     :   SQL
. *
. * File Name     :   ceamdpaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEAMDPA1   IFILE    SQL, FIXED=39, KEY="U1-3,4-6,7-13"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CEMDCOD   DIM       3      3        1     Discharge Status                   
CEMDSPC   DIM       3      3        4     Service Provider                   
CEMDPSC   DIM       7      7        7     Patient Service                    
CEMDQTY   FORM      6.2    5        14    Quantity                           
CEMDSPA   DIM       20     20       19                                       
.
.End of Record                      39   
.
