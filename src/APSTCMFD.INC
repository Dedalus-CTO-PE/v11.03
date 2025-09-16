. V6.00.001 30/07/1996 BGA New File                                          
. *----------------------------------------------------------------------
. * Include Name  :   APSTCMFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable
. *                   Invoice Tracking Comments          
. *
. * File Type     :   SQL
. *
. * File Name     :   apstcmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSTCMA1   IFILE    SQL, FIXED=110, KEY="U1-5,6-13,14-16,17-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APTCCRD   DIM       5      5        1     Creditor Code                      
APTCDTRC  DIM       8      8        6     Date Received                      
APTCUNIQ  DIM       3      3        14    Unique ID                          
APTCLINE  DIM       3      3        17    Line Number                        
APTCCOM   DIM       70     70       20    Comment                            
APTCSPA   DIM       20     20       90    Spare                              
.
.End of Record                      110  
.
