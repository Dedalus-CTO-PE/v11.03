. V6.00.001 23/03/1992 Nez New File
. *----------------------------------------------------------------------
. * Include Name  :   APSCTSFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable 
. *                   Creditor Types
. *
. * File Type     :   SQL
. *
. * File Name     :   apsctsaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSCTSA1   IFILE    SQL, FIXED=59, KEY="U1-3"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APCTCODE  DIM       3      3        1     Creditor Type                      
APCTDESC  DIM       35     35       4     Creditor Description               
APCTSPAR  DIM       20     20       39    Spare                              
.
.End of Record                      59   
.
