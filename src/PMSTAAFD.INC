. V9.05.001 11/04/2006 EC  Created FD CAR 89302                              
. *----------------------------------------------------------------------
. * Include Name  :   PMSTAAFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Transport Facility Address         
. *
. * File Type     :   SQL
. *
. * File Name     :   pmstaaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSTAAA1   IFILE    SQL, FIXED=407, KEY="U1-3"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMTAFACL  DIM       3      3        1     Facility (Cat fa)                  
PMTAADD1  DIM       35     35       4     Address Line 1                     
PMTAADD2  DIM       35     35       39    Address Line 2                     
PMTAADD3  DIM       35     35       74    Address Line 3                     
PMTAADD4  DIM       35     35       109   Address Line 4                     
PMTAPOST  DIM       8      8        144   Post Code                          
PMTATELP  DIM       35     35       152   Telephone Private                  
PMTATELB  DIM       35     35       187   Telephone Business                 
PMTATELM  DIM       35     35       222   Telephone Mobile                   
PMTAEMAI  DIM       80     80       257   Email                              
PMTAMELW  DIM       20     20       337   Melway Ref                         
PMTASPAR  DIM       50     50       357   Spare                              
.
.End of Record                      407  
.
