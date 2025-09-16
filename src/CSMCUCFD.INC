. V6.00.001 09/04/1997 BGA New FIle                                          
. *----------------------------------------------------------------------
. * Include Name  :   CSMCUCFD.INC
. *
. * Function      :   File Def'n Include for Corporate Supply
. *                   Creditor/Supplier Update Control   
. *
. * File Type     :   SQL
. *
. * File Name     :   csmcucaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CSMCUCA1   IFILE    SQL, FIXED=31, KEY="U1-3,4-8"                               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CSCUDBS   DIM       3      3        1     Database                           
CSCUCRD   DIM       5      5        4     Creditor/Supplier Code             
CSCUTYP   FORM      2      2        9     Type 0=Add,1=Upd,2=Del             
CSCUSPA   DIM       20     20       11                                       
.
.End of Record                      31   
.
