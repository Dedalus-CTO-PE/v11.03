. V10.14.01 27/05/2019 JT C-0857391 Created FD                                  
. *----------------------------------------------------------------------
. * Include Name  :   PMSRDIFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   ABF Radiotherapy/Dialysis codes    
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsrdiaf.dat
. *
. * Index Values  :   KEY29   KEY29   KEY29   KEY29                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSRDIA1   IFILE    SQL, FIXED=132, KEY="U1-6,7-8,9-9,10-29"
PMSRDIA2   IFILE    SQL, FIXED=132, KEY="U7-8,9-9,10-29,1-6"
PMSRDIA3   IFILE    SQL, FIXED=132, KEY="U9-9,10-29,1-6,7-8"
PMSRDIA4   IFILE    SQL, FIXED=132, KEY="U1-6,9-9,10-29,7-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMRICNTR  DIM       6      6        1     Contract ID                        
PMRICTYP  DIM       2      2        7     Type of Code                       
.                                         1 - Radiotherapy                     
.                                         2 - Dialysis                         
PMRISTYP  DIM       1      1        9     Type of Coding System              
.                                         1 - ICD10                            
PMRIICDC  DIM       20     20       10    ICD10 Code or other coding system  
PMRICDAT  DIM       8      8        30    Date record created                
PMRICTIM  DIM       8      8        38    Time record created                
PMRICUID  DIM       10     10       46    Record created by                  
PMRIUDAT  DIM       8      8        56    Date record updated                
PMRIUTIM  DIM       8      8        64    Time record updated                
PMRIUUID  DIM       10     10       72    Record updated by                  
PMRISPAR  DIM       50     50       82    Spare variable                     
.
.End of Record                      132  
.
