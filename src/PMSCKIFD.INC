. V10.14.01 05/03/2019 SA C-0871372 Changed "Work" to "Word" in FD description  
. V10.01.001 13/12/2010 DS Created FD  CAR 233033                               
. *----------------------------------------------------------------------
. * Include Name  :   PMSCKIFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Contract ID Key Word Index         
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsckiaf.dat
. *
. * Index Values  :   KEY21   KEY21                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSCKIA1   IFILE    SQL, FIXED=42, KEY="U1-6,7-21"
PMSCKIA2   IFILE    SQL, FIXED=42, KEY="U7-21,1-6"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMCKCNTR  DIM       6      6        1     Contract ID                        
PMCKKKWD  DIM       15     15       7     Key Word                           
PMCKSPAR  DIM       20     20       22    Spare Variable                     
.
.End of Record                      42   
.
