. V6.00.002 25/05/1992 Nez Added Telephone (Srf 121179 Quote 7608)
. *----------------------------------------------------------------------
. * Include Name  :   FMSRESFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Responsibility Codes
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsresaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSRESA1   IFILE    SQL, FIXED=60, KEY="U1-4"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMRSCODE  DIM       4      4        1     Responsibilty Code                 
FMRSDESC  DIM       35     35       5     Responsibility Description         
FMRSTELE  DIM       20     20       40    Telephone                          
.
.End of Record                      60   
.
FMRSSPAR  DIM       1                     Spare                              
