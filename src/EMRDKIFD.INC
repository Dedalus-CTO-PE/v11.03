. *----------------------------------------------------------------------
. * Include Name  :   EMRDKIFD.INC
. *
. * Function      :   File Def'n Include for Emergency               
. *                   Doctors Key Word Index             
. *
. * File Type     :   SQL
. *
. * File Name     :   emrdkiaf.dat
. *
. * Modifications :
. *     V10.11.01    08/08/2017 Tracey Nguyen  TSK 0299206
. *                  Added (prefixed "~" is Soundex) to keyword description
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRDKIA1   IFILE    SQL, FIXED=36, KEY="U1-10,11-25"                            
EMRDKIA2   IFILE    SQL, FIXED=36, KEY="U11-25,1-10"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMDKDOC   DIM       10     10       1     Doctors Code                       
EMDKKWD   DIM       15     15       11    Key Word (prefixed "~" is Soundex) 
EMDKSPA   DIM       10     10       26    Spare                              
.
.End of Record                      36   
.
