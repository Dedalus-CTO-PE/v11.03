. VF.00.001 30/10/1998 SB  Year 2000                                         
. *----------------------------------------------------------------------
. * Include Name  :   APSSUBFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable
. *                   Supplier Budgets                   
. *
. * File Type     :   SQL
. *
. * File Name     :   apssubaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSSUBA1   IFILE    SQL, FIXED=78, KEY="U1-5,6-11"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APSBSUP   DIM       5      5        1     Supplier                           
APSBDAT   DIM       6      6        6     Date CCYYMM                        
APSBPAM   FORM      12.2   8        12    Purchases Actual                   
APSBPBD   FORM      12.2   8        20    Purchases Budget                   
APSBRAM   FORM      12.2   8        28    Receivals Actual                   
APSBRBD   FORM      12.2   8        36    Receivals Budget                   
APSBIAM   FORM      12.2   8        44    Invoiced Amount                    
APSBIBD   FORM      12.2   8        52    Invoiced Budget                    
APSBSPA   DIM       18     18       60    Spare                              
.
.End of Record                      78   
.
