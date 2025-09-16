. V6.04.001 21/05/1998 jim ICD9 Operation Code Key Word Index                
. *----------------------------------------------------------------------
. * Include Name  :   PATOICFD.INC
. *
. * Function      :   File Def'n Include for Patient                 
. *                   ICD9 Operation Code Key Word Index 
. *
. * File Type     :   SQL
. *
. * File Name     :   patoicaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATOICA1   IFILE    SQL, FIXED=35, KEY="U1-9,10-24"                             
PATOICA2   IFILE    SQL, FIXED=35, KEY="U10-24,1-9"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTOIICD   DIM       9      9        1     ICD9 Operation Code                
PTOIKWD   DIM       15     15       10    Key Word                           
PTOISPA   DIM       10     10       25    Spare                              
.
.End of Record                      35   
.
