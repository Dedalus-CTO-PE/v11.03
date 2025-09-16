. VF.00.001 29/02/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   APSCKIFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable
. *                   Creditors Keyword Index           
. *
. * File Type     :   SQL
. *
. * File Name     :   apsckiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSCKIA1   IFILE    SQL, FIXED=31, KEY="U1-5,6-20"                              
APSCKIA2   IFILE    SQL, FIXED=31, KEY="U6-20,1-5"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APCKCRD   DIM       5      5        1     Creditors Code                     
APCKKWD   DIM       15     15       6     Key Word                           
APCKSPA   DIM       10     10       21    Spare                              
.
.End of Record                      31   
.
