. *----------------------------------------------------------------------
. * Include Name  :   OPRNKIFD.INC
. *
. * Function      :   File Def'n Include for Patient                 
. *                   Nurse Code Key Word Index            
. *
. * File Type     :   SQL
. *
. * File Name     :   oprnkiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRNKIA1   IFILE    SQL, FIXED=35, KEY="U1-6,7-21"                             
OPRNKIA2   IFILE    SQL, FIXED=35, KEY="U7-21,1-6"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPNKITM   DIM       6      6        1     Nurse Code                      
OPNKKWD   DIM       15     15       7     Key Word                           
OPNKSPA   DIM       13     13       22    Spare                              
.
.End of Record                      35   
.
