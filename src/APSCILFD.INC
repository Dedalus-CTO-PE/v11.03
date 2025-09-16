. V6.00.001 13/05/1992 Nez New file
. *----------------------------------------------------------------------
. * Include Name  :   APSCILFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable
. *                   Cheques in Limbo Between Creditors & GL
. *
. * File Type     :   SQL
. *
. * File Name     :   apscilaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSCILA1   IFILE    SQL, FIXED=61, KEY="U1-15,16-20,21-25,26-40"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APCLDOC   DIM       15     15       1     Cheque Number                      
APCLBCH   DIM       5      5        16    Batch Number                       
APCLCRD   DIM       5      5        21    Creditor Code                      
APCLREF   DIM       15     15       26    Invoice Number                     
APCLSPA   DIM       20     20       41    Spare                              
.
.End of Record                      61   
.
