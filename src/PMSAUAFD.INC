. V10.14.01 05/06/2019 JT C-0857392 Created ABF Adjustment audit table          
. *----------------------------------------------------------------------
. * Include Name  :   PMSAUAFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   ABF HAC Adjustment audit table     
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsauaaf.dat
. *
. * Index Values  :   KEY32   KEY32                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSAUAA1   IFILE    SQL, FIXED=115, KEY="U1-8,9-16,17-17,18-23,24-29,30-32"
PMSAUAA2   IFILE    SQL, FIXED=115, KEY="U18-23,24-29,30-32,1-8,9-16,17-17"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMAAADAT  DIM       8      8        1     Audit Date (Date of change)        
PMAAATIM  DIM       8      8        9     Audit Time (Time of change)        
PMAAATYP  DIM       1      1        17    Audit Type A-Add C-Change D-Delete 
PMAACNTR  DIM       6      6        18    Contract ID                        
PMAAHACG  DIM       6      6        24    HAC Group 01-16 Cat Ha             
PMAAVALF  DIM       3      3        30    Value From                         
PMAAOVLT  DIM       3      3        33    Old Value To                       
PMAANVLT  DIM       3      3        36    New Value To                       
PMAAOADJ  FORM      10.4   8        39    Old Complexity Adjustment %        
PMAANADJ  FORM      10.4   8        47    New Complexity Adjustment %        
PMAACUID  DIM       10     10       55    User ID Created                    
PMAASPAR  DIM       50     50       65    Spare variable                     
.
.End of Record                      115  
.
