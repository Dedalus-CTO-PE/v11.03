. V6.04.001 21/05/1998 jim ICD9 Disease Code Key Word Index                  
. *----------------------------------------------------------------------
. * Include Name  :   PATDICFD.INC
. *
. * Function      :   File Def'n Include for Patient                 
. *                   ICD9 Disease Key Word Index        
. *
. * File Type     :   SQL
. *
. * File Name     :   patdicaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATDICA1   IFILE    SQL, FIXED=35, KEY="U1-9,10-24"                             
PATDICA2   IFILE    SQL, FIXED=35, KEY="U10-24,1-9"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTDIICD   DIM       9      9        1     ICD9 Disease Code                  
PTDIKWD   DIM       15     15       10    Key Word                           
PTDISPA   DIM       10     10       25    Spare                              
.
.End of Record                      35   
.
