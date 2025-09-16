. V9.02.001 12/11/2002 EC  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   PMSMTXFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   General Patient Notes Free Text    
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsmtxaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSMTXA1   IFILE    SQL, FIXED=118, KEY="U1-8,9-14,15-17"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMMTURNO  DIM       8      8        1     U/R Number                         
PMMTNOTE  DIM       6      6        9     Note Number                        
PMMTUNIQ  DIM       3      3        15    Line Number                        
PMMTCMNT  DIM       70     70       18    Comment Line                       
PMMTSPAR  DIM       30     30       88    Spare Variable                     
.
.End of Record                      118  
.
