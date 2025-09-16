. V9.12.001 21/08/2009 EC  Created FD CAR 202965                             
. *----------------------------------------------------------------------
. * Include Name  :   PMSCDNFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Chronic Disease Management Event   
. *
. * File Type     :   SQL
. *
. * File Name     :   pmscdnaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSCDNA1   IFILE    SQL, FIXED=118, KEY="U1-8"                                  
PMSCDNA2   IFILE    SQL, FIXED=118, KEY="U9-16,1-8"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMDNVISN  DIM       8      8        1     Admission Number                   
PMDNURNO  DIM       8      8        9     U/R Number                         
PMDNSTAT  DIM       1      1        17    Status                             
PMDNPW01  DIM       5      5        18    Pathway Code 1                     
PMDNPW02  DIM       5      5        23    Pathway Code 2                     
PMDNPW03  DIM       5      5        28    Pathway Code 3                     
PMDNPW04  DIM       5      5        33    Pathway Code 4                     
PMDNPW05  DIM       5      5        38    Pathway Code 5                     
PMDNPW06  DIM       5      5        43    Pathway Code 6                     
PMDNPW07  DIM       5      5        48    Pathway Code 7                     
PMDNPW08  DIM       5      5        53    Pathway Code 8                     
PMDNPW09  DIM       5      5        58    Pathway Code 9                     
PMDNPW10  DIM       5      5        63    Pathway Code 10                    
PMDNSPAR  DIM       50     50       68    Spare                              
.
.End of Record                      118  
.
