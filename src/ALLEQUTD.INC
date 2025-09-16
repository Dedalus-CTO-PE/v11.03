. *----------------------------------------------------------------------
. * Include Name  :   ALLEQUTD.INC
. *
. * Function      :   CGI variables for ALLEQUFD - allequaf.dat
. *
. * V9.03.02 02/03/2004  Pat Dirito    CAR 43997
. *          Added new var Fee To Be Paid    
. * V9.03.01 06/10/2003  Ebon Clements CAR
. *          Fixed size of Purchase Date cgi
. *----------------------------------------------------------------------
.
.Name     Type      Length  Description
.----     ----      ------  -----------
ALEQU001  DIM       10    *   Equipment Code
ALEQU002  DIM       40    *   Equipment Description
ALEQU003  DIM       3     *   Loan Group (Category QG)
ALEQU004  DIM       3     *   Equipment Type (Category QT)
ALEQU005  DIM       3     *   Equipment Sub-Type (Category QY)
ALEQU006  DIM       3     *   Home Location (Category QH)
ALEQU007  DIM       3     *   Department Code (alldepaf)
ALEQU008  DIM       9     *   Item Code (priitmaf)
ALEQU009  DIM       5     *   Supplier Code (apsmasaf)
ALEQU010  DIM       20    *   Supplier Product Code
ALEQU011  DIM       20    *   Serial Number
ALEQU012  DIM       1     *   Status Flag
ALEQU013  DIM       8     *   Date of Status (CCYYMMDD)
ALEQU014  DIM       8     *   Purchase Date (CCYYMMDD)
ALEQU015  DIM       3     *   Maintenance Period (Months)
ALEQU016  DIM       17    *   Unit Cost
ALEQU017  DIM       11    *   Deposit Amount
ALEQU018  DIM       1     *   Special Funding (0=No,1=Yes)
ALEQU019  DIM       1     *   Loan Authorisation Level
ALEQU020  DIM       8     *   Re-conditioned Date (CCYYMMDD)
ALEQU021  DIM       1     *   Consumable Indicator (0=No,1=Yes)
ALEQU022  DIM       5     *   Current Balance
ALEQU023  DIM       5     *   Re-order Level
ALEQU024  DIM       5     *   Re-order Quantity
ALEQU025  DIM       2     *   Register Number (amsregaf)
ALEQU026  DIM       12    *   Asset Number (amsmasaf)
ALEQU027  DIM       1     *   Record Status (0=Active 1=Inactive)
ALEQU028  DIM       11    *   Fee To Be Paid 
