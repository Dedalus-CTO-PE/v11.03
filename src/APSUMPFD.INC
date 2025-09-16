. V6.00.001 07/05/1992
. *----------------------------------------------------------------------
. * Include Name  :   APSUMPFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable
. *                   Unmatched Payments
. *
. * File Type     :   SQL
. *
. * File Name     :   apsumpaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSUMPA1   IFILE    SQL, FIXED=64, KEY="U1-5,6-10,11-25"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APUMBCH   DIM       5      5        1     Batch                              
APUMCRD   DIM       5      5        6     Creditor                           
APUMDOC   DIM       15     15       11    Document Reference                 
APUMAIN   FORM      12.2   8        26    Amount Invoiced                    
APUMSPA   DIM       30     30       34    Spare                              
.
.End of Record                      64   
.
