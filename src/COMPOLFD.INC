. V10.10.01 27/09/2017 JT C-0843232 Created a new file for Common Polling Table 
. *----------------------------------------------------------------------
. * Include Name  :   COMPOLFD.INC
. *
. * Function      :   File Def'n Include for Common                             
. *                   Common Polling Table               
. *
. * File Type     :   SQL
. *
. * File Name     :   compolaf.dat
. *
. * Index Values  :   KEY24   KEY23   KEY24                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
COMPOLA1   IFILE    SQL, FIXED=245, KEY="U1-1,2-4,5-24"
COMPOLA2   IFILE    SQL, FIXED=245, KEY="U2-4,5-24"
COMPOLA3   IFILE    SQL, FIXED=245, KEY="U2-4,1-1,5-24"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CMPLSTAT  DIM       1      1        1     Status                             
.                                         0=Waiting 1=Processed 2=Errors       
CMPLTYPE  DIM       3      3        2     Type                               
.                                         001=Deposits Upload                  
CMPLUNIQ  DIM       20     20       5     Unique ID                          
.                                         Type 001 = Date/Time record created  
CMPLFILN  DIM       120    120      25    File path/name                     
CMPLSPAR  DIM       100    100      145   Spare Variable                     
.
.End of Record                      245  
.
