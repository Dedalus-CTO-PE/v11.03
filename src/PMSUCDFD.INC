. V10.11.01 14/07/2017 TNG C-0821710 FD Created                                 
. *----------------------------------------------------------------------
. * Include Name  :   PMSUCDFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   U/R Comments Details Table         
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsucdaf.dat
. *
. * Index Values  :   KEY20                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSUCDA1   IFILE    SQL, FIXED=151, KEY="U1-8,9-11,12-17,18-20"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMUCURNO  DIM       8      8        1     U/R Number                         
PMUCCTTY  DIM       3      3        9     Comment Type                       
.                                         001 - U/R Number                     
PMUCCNUM  DIM       6      6        12    Counter/Note Number                
PMUCLNUM  DIM       3      3        18    Line Number                        
PMUCCOMM  DIM       100    100      21    Comment                            
PMUCSPAR  DIM       30     30       121   Spare Variable                     
.
.End of Record                      151  
.
