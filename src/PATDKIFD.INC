. *----------------------------------------------------------------------
. * Include Name  :   PATDKIFD.INC
. *
. * Function      :   File Def'n Include for Patient                 
. *                   Doctors Key Word Index             
. *
. * File Type     :   SQL
. *
. * File Name     :   patdkiaf.dat
. *
. * Index Values  :   KEY21  KEY21
. *
. * Modifications :
. *     V10.11.01    08/08/2017 Tracey Nguyen  TSK 0299206
. *                  Added (prefixed "~" is Soundex) to keyword description
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATDKIA1   IFILE    SQL, FIXED=32, KEY="U1-6,7-21"                              
PATDKIA2   IFILE    SQL, FIXED=32, KEY="U7-21,1-6"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTDKDOC   DIM       6      6        1     Doctors Code                       
PTDKKWD   DIM       15     15       7     Key Word (prefixed "~" is Soundex)             
PTDKSPA   DIM       10     10       22    Spare                              
.
.End of Record                      32   
.
