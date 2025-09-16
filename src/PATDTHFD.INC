. V9.04.001 26/09/2005 Added PTDTWEBU CAR 56868                              
. V5.08.001 05/09/2000 kcn                                                   
. *----------------------------------------------------------------------
. * Include Name  :   PATDTHFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Death Polling Table        
. *
. * File Type     :   SQL
. *
. * File Name     :   patdthaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATDTHA1   IFILE    SQL, FIXED=89, KEY="U1-8"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTDHURNO  DIM       8      8        1     U/R Number                         
PTDHWEBU  DIM       10     10       9     Web User Id (websecaf)             
PTDHSPAR  DIM       70     70       19    Spare                              
.
.End of Record                      89   
.
