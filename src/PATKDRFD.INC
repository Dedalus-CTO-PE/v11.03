. V6.04.001 23/04/1998 JIM DRG Code Key Word Index                           
. *----------------------------------------------------------------------
. * Include Name  :   PATKDRFD.INC
. *
. * Function      :   File Def'n Include for Patient                 
. *                   DRG Code Key Word Index            
. *
. * File Type     :   SQL
. *
. * File Name     :   patkdraf.dat
. *
. * Modifications :
. *        V5.07.01   23/11/1999  Davin
. *                   Changed drg to 4 chars
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATKDRA1   IFILE    SQL, FIXED=30, KEY="U1-4,5-19"                              
PATKDRA2   IFILE    SQL, FIXED=30, KEY="U5-19,1-4"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTKDITM   DIM       4      4        1     DRG Code                           
PTKDKWD   DIM       15     15       5     Key Word                           
PTKDSPA   DIM       10     10       20    Spare                              
.
.End of Record                      30   
.
