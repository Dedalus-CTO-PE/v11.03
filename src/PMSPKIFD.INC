. V10.14.01 05/03/2019 SA C-0871372 Changed "Work" to "Word" in FD description  
. V10.11.01 08/08/2017 TNG C-0299206 Added (prefixed "~" is Soundex) to keyword 
. V9.04.001 11/05/2005 DS  Created FD                                           
. *----------------------------------------------------------------------
. * Include Name  :   PMSPKIFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   HCP Practice Key Word Index        
. *
. * File Type     :   SQL
. *
. * File Name     :   pmspkiaf.dat
. *
. * Index Values  :   KEY27   KEY27                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSPKIA1   IFILE    SQL, FIXED=48, KEY="U1-12,13-27"
PMSPKIA2   IFILE    SQL, FIXED=48, KEY="U13-27,1-12"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMPKHCGC  DIM       12     12       1     HCP Practice Code/Count Key        
PMPKKKWD  DIM       15     15       13    Key Word (prefixed "~" is Soundex) 
PMPKSPAR  DIM       20     20       28    Spare Variable                     
.
.End of Record                      48   
.
