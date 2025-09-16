. V9.09.001 07/11/2007 EC  Created FD CAR 151935                             
. *----------------------------------------------------------------------
. * Include Name  :   PMSLHIFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Letter History             
. *
. * File Type     :   SQL
. *
. * File Name     :   pmslhiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSLHIA1   IFILE    SQL, FIXED=70, KEY="U1-8,9-16,17-19"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMLHVISN  DIM       8      8        1     Visit Number                       
PMLHDATE  DIM       8      8        9     Date Letter Sent (ccyymmdd)        
PMLHLETN  DIM       3      3        17    Letter Number                      
PMLHSPAR  DIM       50     50       20    Spare                              
.
.End of Record                      70   
.
