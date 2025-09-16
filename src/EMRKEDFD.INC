. *----------------------------------------------------------------------
. * Include Name  :   EMRKEDFD.INC
. *
. * Function      :   File Def'n Include for WEB          
. *                   Emergency Diagnosis Key Word Index 
. *
. * File Type     :   SQL
. *
. * File Name     :   emrkedaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRKEDA1   IFILE    SQL, FIXED=45, KEY="U1-9,10-24"                             
EMRKEDA2   IFILE    SQL, FIXED=45, KEY="U10-24,1-9"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMEDITM   DIM       9      9        1     Emergency Diagnosis Code           
EMEDKWD   DIM       15     15       10    Key Word                           
EMEDSPA   DIM       20     20       25    Spare                              
.
.End of Record                      45   
.
