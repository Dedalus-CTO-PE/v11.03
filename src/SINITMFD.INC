.    Transaction Types                        Reference Fields
.    -----------------                        ----------------
.  +   0 = New Stock Item                     Keyed in Reference
.  +-  1 = Stock Adjustment                   
.  +-  2 = Stocktake Adjustment               
.      3 = Stocktake Balance                  
.  +   4 = Receival                           Receival Number
.  -   5 = Internal Requisition               
.  -   6 = Backorder Requisition              
.  -   7 = Imprest Requisition                
.  +   8 = Stock Return                       
.  +   9 = Stock Variance                     
.  +- 10 = Stock Correction                   
.  +- 11 = Stock Transfer                     Keyed Reference
.  -  12 = Ward    Requisition (PHARMACY)     
.  +  13 = Script Cancellation (PHARMACY)     Script
.  -  14 = REVERSE Receival                   Receival
.  +  15 = REVERSE Backorder Requisition      
. VF.00.001 29/10/1998 SB  Year 2000                                         
. *----------------------------------------------------------------------
. * Include Name  :   SINITMFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Item History                       
. *
. * File Type     :   SQL
. *
. * File Name     :   sinitmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINITMA1   IFILE    SQL, FIXED=125, KEY="U1-5,6-12,13-20,21-28"                 
SINITMA2   IFILE    SQL, FIXED=125, KEY="U6-12,13-20,1-5,21-28"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIITWAR   DIM       5      5        1     Warehouse                          
SIITCAT   DIM       7      7        6     Catalog                            
SIITDAT   DIM       8      8        13    Date Of Transaction                
SIITTIM   DIM       8      8        21    Time                               
SIITOPR   DIM       4      4        29    Operator ID                        
SIITPOR   DIM       2      2        33    Port                               
SIITPRG   DIM       8      8        35    Program ID                         
SIITPER   DIM       6      6        43    Usage Date CCYYMM                  
SIITQTY   FORM      12.2   8        49    Quantity                           
SIITAMT   FORM      12.2   8        57    Amount of Transaction              
SIITTYP   FORM      2      2        65    Transaction Type                   
SIITCST   DIM       5      5        67    Cost Centre if Required            
SIITREQ   DIM       8      8        72    Requisition                        
SIITPUR   DIM       7      7        80    Purchase Order                     
SIITREF   DIM       20     20       87    Reference                          
SIITSOH   DIM       15     15       107   Stock on hand (unknown if blank)   
SIITSPA   DIM       3      3        122   Spare                              
.
.End of Record                      125  
.
