. V6.00.004 07/07/1992 Nez Added Type Field
. *----------------------------------------------------------------------
. * Include Name  :   APSSCXFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable
. *                   Subjective/Charge Code Cross Reference Table
. *
. * File Type     :   SQL
. *
. * File Name     :   apsscxaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSSCXA1   IFILE    SQL, FIXED=47, KEY="U1-12,13-14,15-26"
APSSCXA2   IFILE    SQL, FIXED=47, KEY="U13-14,15-26,1-12"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APSCCOD   DIM       12     12       1     Charge Code                        
APSCLED   DIM       2      2        13    Ledger                             
APSCSUB   DIM       12     12       15    Subjective/Account
APSCTYP   DIM       1      1        27    Type SP=Subjective, 1=Account      
APSCSPA   DIM       19     19       28    Spare                              
.
.End of Record                      47   
.
