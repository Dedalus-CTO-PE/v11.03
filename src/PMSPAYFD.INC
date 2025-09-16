. V9.07.001 27/06/2006 EC  Created FD CAR 103365                             
. V9.07.002 10/07/2006 EC  Added index 2 FD CAR 103365                             
. *----------------------------------------------------------------------
. * Include Name  :   PMSPAYFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Expected Payor Details             
. *
. * File Type     :   SQL
. *
. * File Name     :   pmspayaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSPAYA1   IFILE    SQL, FIXED=150, KEY="U1-8,9-14"                             
PMSPAYA2   IFILE    SQL, FIXED=150, KEY="U1-8,15-16"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMPAURNO  DIM       8      8        1     U/R Number                         
PMPAPAYC  DIM       6      6        9     Expected Payor Code (patfn1af)     
PMPASEQN  DIM       2      2        15    Sequence Number                    
PMPACOMM  DIM       30     30       17    Comments                           
PMPAACTV  DIM       1      1        47    Active 0=Active 1=Inactive         
PMPACDAT  DIM       8      8        48    Date Record Created (CCYYMMDD)     
PMPACTIM  DIM       8      8        56    Time Record Created (HH:MM:SS)     
PMPACUID  DIM       10     10       64    WEB User ID Created (websecaf)     
PMPAUDAT  DIM       8      8        74    Date Record Updated (CCYYMMDD)     
PMPAUTIM  DIM       8      8        82    Time Record Updated (HH:MM:SS)     
PMPAUUID  DIM       10     10       90    WEB User ID Created (websecaf)     
PMPASPAR  DIM       50     50       100   Spare                              
.
.End of Record                      150  
.
