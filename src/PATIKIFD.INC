. V6.04.001 09/04/1998 JIM MBS Item Key Word Index                           
. *----------------------------------------------------------------------
. * Include Name  :   PATIKIFD.INC
. *
. * Function      :   File Def'n Include for Patient                 
. *                   MBS Item Key Word Index            
. *
. * File Type     :   SQL
. *
. * File Name     :   patikiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATIKIA1   IFILE    SQL, FIXED=35, KEY="U1-9,10-24"                             
PATIKIA2   IFILE    SQL, FIXED=35, KEY="U10-24,1-9"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTIKITM   DIM       9      9        1     MBS Item Code                      
PTIKKWD   DIM       15     15       10    Key Word                           
PTIKSPA   DIM       10     10       25    Spare                              
.
.End of Record                      35   
.
