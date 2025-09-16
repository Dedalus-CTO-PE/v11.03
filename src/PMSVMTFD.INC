. V10.11.01 02/10/2017 SA C-0816814 File Definition Created                     
. *----------------------------------------------------------------------
. * Include Name  :   PMSVMTFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Clinical Codes Value Mapping       
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsvmtaf.dat
. *
. * Index Values  :   KEY41                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSVMTA1   IFILE    SQL, FIXED=202, KEY="U1-8,9-38,39-41"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMVMTNAM  DIM       8      8        1     Table Name                         
PMVMTIDX  DIM       30     30       9     Table Index Value                  
PMVMMVSI  DIM       3      3        39    Map to Value Set ID                
PMVMMCOD  DIM       30     30       42    Map to Code                        
PMVMMDES  DIM       100    100      72    Map to Description                 
PMVMSPAR  DIM       30     30       172   Spare Variable                     
.
.End of Record                      202  
.
