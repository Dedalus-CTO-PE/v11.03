. V10.14.01 05/03/2019 SA C-0871372 Changed "Work" to "Word" in FD description  
. V10.11.01 08/08/2017 TNG C-0299206 Added (prefixed "~" is Soundex) to keyword 
. V9.00.001 02/07/2001 SB  Created FD                                           
. *----------------------------------------------------------------------
. * Include Name  :   PMSHKIFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   HCP Key Word Index                 
. *
. * File Type     :   SQL
. *
. * File Name     :   pmshkiaf.dat
. *
. * Index Values  :   KEY25   KEY25                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSHKIA1   IFILE    SQL, FIXED=36, KEY="U1-10,11-25"
PMSHKIA2   IFILE    SQL, FIXED=36, KEY="U11-25,1-10"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMHKHCPC  DIM       10     10       1     HCP Code                           
PMHKKKWD  DIM       15     15       11    Key Word (prefixed "~" is Soundex) 
PMHKSPAR  DIM       10     10       26    Spare Variable                     
.
.End of Record                      36   
.
