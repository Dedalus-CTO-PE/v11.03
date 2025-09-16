. V6.00.001 29/12/1992                                                       
. *----------------------------------------------------------------------
. * Include Name  :   AMSGILFD.INC
. *
. * Function      :   File Def'n Include for Asset Management
. *                   General Ledger Interface Codes     
. *
. * File Type     :   SQL
. *
. * File Name     :   amsgilaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
AMSGILA1   IFILE    SQL, FIXED=186, KEY="U1-5"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AMGIGIC   DIM       5      5        1     General Ledger Interface Code      
AMGIDES   DIM       35     35       6     Description                        
AMGIDIS   DIM       5      5        41    Dissection                         
AMGIRES   DIM       4      4        46    Responsibility                     
AMGILED   DIM       2      2        50    Ledger                             
AMGIADP   DIM       12     12       52    Accumulated Depreciation Account   
AMGIEDP   DIM       12     12       64    Expense Depreciation Account       
AMGICAP   DIM       12     12       76    Capital Expenditure Account        
AMGILOS   DIM       12     12       88    Loss on Sale                       
AMGIPRO   DIM       12     12       100   Profit on Sale                     
AMGIRVR   DIM       12     12       112   Revaluation Reserve                
AMGIRET   DIM       12     12       124   Retained Earnings                  
AMGISAL   DIM       12     12       136   Sale of Asset Account              
AMGIUD1   DIM       8      8        148   User Def Date 1                    
AMGIUD2   DIM       8      8        156   User Def Date 2                    
AMGIUY1   DIM       1      1        164   User Def Y/N 1                     
AMGIUY2   DIM       1      1        165   User Def Y/N 2                     
AMGISPA   DIM       20     20       166   Spare                              
.
.End of Record                      186  
.
