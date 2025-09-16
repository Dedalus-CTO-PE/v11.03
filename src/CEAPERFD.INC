. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEAPERFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Period Setup Table                  
. *
. * File Type     :   SQL
. *
. * File Name     :   ceaperaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEAPERA1   IFILE    SQL, FIXED=50, KEY="U1-4,5-6"                               
CEAPERA2   IFILE    SQL, FIXED=50, KEY="U22-29,1-4,5-6"                         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CEPEYEAR  DIM       4      4        1     Year                               
CEPEPER   DIM       2      2        5     Period                             
CEPEDES   DIM       15     15       7     Description                        
CEPEEND   DIM       8      8        22    Period Ending                      
CEPESPA   DIM       20     20       30                                       
.
.End of Record                      50   
.
