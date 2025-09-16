. V9.07.001 07/07/2006 EC  Created FD CAR 103365                             
. *----------------------------------------------------------------------
. * Include Name  :   VISPAYFD.INC
. *
. * Function      :   File Def'n Include for Visit System                       
. *                   Visit Based Payer Details          
. *
. * File Type     :   SQL
. *
. * File Name     :   vispayaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
VISPAYA1   IFILE    SQL, FIXED=152, KEY="U1-8,9-14"                             
VISPAYA2   IFILE    SQL, FIXED=152, KEY="U1-8,15-16"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
VSPAVISN  DIM       8      8        1     Visit Number                       
VSPAPAYC  DIM       6      6        9     Expected Payor Code (patfn1af)     
VSPASEQN  DIM       2      2        15    Sequence Number                    
VSPACOMM  DIM       30     30       17    Comments                           
VSPAACTV  DIM       1      1        47    Active 0=Active 1=Inactive         
VSPAISEN  FORM      1      2        48    Invoice Sent 1=Yes 0=No            
VSPACDAT  DIM       8      8        50    Date Record Created (CCYYMMDD)     
VSPACTIM  DIM       8      8        58    Time Record Created (HH:MM:SS)     
VSPACUID  DIM       10     10       66    WEB User ID Created (websecaf)     
VSPAUDAT  DIM       8      8        76    Date Record Updated (CCYYMMDD)     
VSPAUTIM  DIM       8      8        84    Time Record Updated (HH:MM:SS)     
VSPAUUID  DIM       10     10       92    WEB User ID Created (websecaf)     
VSPASPAR  DIM       50     50       102   Spare                              
.
.End of Record                      152  
.
