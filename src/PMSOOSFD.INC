. V10.07.01 06/11/2015 SA C-294154 Created File Definition                      
. *----------------------------------------------------------------------
. * Include Name  :   PMSOOSFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Opt Out of SMS                     
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsoosaf.dat
. *
. * Index Values  :   KEY8                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSOOSA1   IFILE    SQL, FIXED=65, KEY="U1-8"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMOOURNO  DIM       8      8        1     U/R Number                         
PMOOCUSR  DIM       10     10       9     User Who Created Record            
PMOOCDTE  DIM       8      8        19    Date Record Created                
PMOOCTME  DIM       8      8        27    Time Record Created                
PMOOSPAR  DIM       30     30       35    Spare                              
.
.End of Record                      65   
.
