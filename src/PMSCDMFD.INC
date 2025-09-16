. V9.07.001 08/09/2006 EC  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   PMSCDMFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Chronic Disease Management         
. *
. * File Type     :   SQL
. *
. * File Name     :   pmscdmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSCDMA1   IFILE    SQL, FIXED=110, KEY="U1-8"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMDMURNO  DIM       8      8        1     U/R Number                         
PMDMSTAT  DIM       1      1        9     Status                             
PMDMPW01  DIM       5      5        10    Pathway Code 1                     
PMDMPW02  DIM       5      5        15    Pathway Code 2                     
PMDMPW03  DIM       5      5        20    Pathway Code 3                     
PMDMPW04  DIM       5      5        25    Pathway Code 4                     
PMDMPW05  DIM       5      5        30    Pathway Code 5                     
PMDMPW06  DIM       5      5        35    Pathway Code 6                     
PMDMPW07  DIM       5      5        40    Pathway Code 7                     
PMDMPW08  DIM       5      5        45    Pathway Code 8                     
PMDMPW09  DIM       5      5        50    Pathway Code 9                     
PMDMPW10  DIM       5      5        55    Pathway Code 10                    
PMDMSPAR  DIM       50     50       60    Spare Variable                     
.
.End of Record                      110  
.
