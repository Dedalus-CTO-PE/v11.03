. V6.00.001 30/09/1996 BGA New Table for Bank Statement Imports              
. *----------------------------------------------------------------------
. * Include Name  :   FMSBRIFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Bank Statement Import Rules        
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsbriaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSBRIA1   IFILE    SQL, FIXED=260, KEY="U1-3"                                  
FMSBRIA2   IFILE    SQL, FIXED=260, KEY="U42-56,39-41,57-72,73-90,1-3"          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMBRRID   DIM       3      3        1     Rule ID                            
FMBRDES   DIM       35     35       4     Rule Description                   
FMBRBSC   DIM       3      3        39    Bank Statement Code                
FMBRCHQ   DIM       15     15       42    Cheque Account                     
FMBRNOR   DIM       16     16       57    Name of Remitter                   
FMBRLOG   DIM       18     18       73    Lodgement Reference                
FMBRLED   DIM       2      2        91    Ledger                             
FMBRDAC   DIM       12     12       93    Debit Account                      
FMBRCAC   DIM       12     12       105   Credit Account                     
FMBRDIS   DIM       5      5        117   Dissection                         
FMBRRES   DIM       4      4        122   Responsibility                     
FMBRTDS   DIM       30     30       126   Transaction Description            
FMBRTRF   DIM       15     15       156   Transaction Reference              
FMBRAUT   DIM       1      1        171   Authorise Transaction (Y/N)        
FMBRUR1   DIM       25     25       172   User Def Ref 1                     
FMBRUR2   DIM       25     25       197   User Def Ref 2                     
FMBRUD1   DIM       8      8        222   User Def Date 1                    
FMBRUD2   DIM       8      8        230   User Def Date 2                    
FMBRUY1   DIM       1      1        238   User Def Y/N 1                     
FMBRUY2   DIM       1      1        239   User Def Y/N 2                     
FMBRSPA   DIM       20     20       240   Spare                              
.
.End of Record                      260  
.
