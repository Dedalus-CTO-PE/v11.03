. V11.01.01 05/03/2021 TTI C-0900995 Added new index 3                          
. V10.01.01 02/03/2011 DS  Added PMCDDVAC from spare   CAR 223380
. V10.00.01 08/06/2010 DS  Added PMCDDVAC as part of spare     CAR 223380
. V9.04.002 02/12/2004 DS  Added index 2
. V9.03.001 17/06/2004 DS  Created FD
. *----------------------------------------------------------------------
. * Include Name  :   PMSCCDFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Concession Card Details            
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsccdaf.dat
. *
. * Index Values  :   KEY19   KEY19   KEY39                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSCCDA1   IFILE    SQL, FIXED=122, KEY="U1-8,32-39,9-11"
PMSCCDA2   IFILE    SQL, FIXED=122, KEY="U9-11,32-39,1-8"
PMSCCDA3   IFILE    SQL, FIXED=122, KEY="U9-11,12-31,32-39,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMCDURNO  DIM       8      8        1     U/R Number                         
PMCDCTYP  DIM       3      3        9     Card Type (Category ct)            
PMCDCNUM  DIM       20     20       12    Card Number                        
PMCDEXDT  DIM       8      8        32    Card Expiry Date                   
PMCDCDAT  DIM       8      8        40    Date Record Created (ccyymmdd)     
PMCDCTIM  DIM       8      8        48    Time Record Created (hh:mm:ss)     
PMCDCUID  DIM       10     10       56    WEB User ID Created (websecaf)     
PMCDUDAT  DIM       8      8        66    Date Record Updated (ccyymmdd)     
PMCDUTIM  DIM       8      8        74    Time Record Updated (hh:mm:ss)     
PMCDUUID  DIM       10     10       82    WEB User ID Updated (websecaf)     
PMCDDVAC  DIM       3      3        92    DVA Card Colour (Cat DX)           
PMCDSPAR  DIM       27     27       95    Spare Variable                     
.
.End of Record                      122  
.
