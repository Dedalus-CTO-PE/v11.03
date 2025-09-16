. V6.00.001 20/06/1996                                                       
. *----------------------------------------------------------------------
. * Include Name  :   DEBADJFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable               
. *                   Adjustment Codes                   
. *
. * File Type     :   SQL
. *
. * File Name     :   debadjaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
DEBADJA1   IFILE    SQL, FIXED=158, KEY="U1-3"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBADCOD   DIM       3      3        1     Adjustment Code                    
DBADDES   DIM       35     35       4     Description                        
DBADTYP   DIM       1      1        39    Debit or Credit                    
DBADLED   DIM       2      2        40    Ledger                             
DBADIAC   DIM       12     12       42    Income Account                     
DBADTAC   DIM       12     12       54    Tax Account                        
DBADUR1   DIM       35     35       66    User Def Ref 1                     
DBADUR2   DIM       35     35       101   User Def Ref 2                     
DBADUY1   DIM       1      1        136   User Def Y/N 1                     
DBADUY2   DIM       1      1        137   User Def Y/N 2                     
DBADSPA   DIM       20     20       138   Spare                              
.
.End of Record                      158  
.
