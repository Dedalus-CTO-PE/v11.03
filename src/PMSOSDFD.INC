. V9.08.001 21/02/2007 ML  New Table                                         
. *----------------------------------------------------------------------
. * Include Name  :   PMSOSDFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Outstanding Debt polling Table
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsosdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSOSDA1   IFILE    SQL, FIXED=89, KEY="U1-8"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMODURNO  DIM       8      8        1     U/R Number                         
PMODWEBU  DIM       10     10       9     Web User Id (websecaf)             
PMODSPAR  DIM       70     70       19    Spare                              
.
.End of Record                      89   
.
