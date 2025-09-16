. V10.04.01 13/01/2014 AP C-289882 Created Index 3                              
.  V9.12.01 07/09/2009 PV Created FD CAR 202063
. *----------------------------------------------------------------------
. * Include Name  :   ALLLHIFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Referral Management Letter History 
. *
. * File Type     :   SQL
. *
. * File Name     :   alllhiaf.dat
. *
. * Index Values  :   KEY35   KEY35   KEY35                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLLHIA1   IFILE    SQL, FIXED=81, KEY="U1-8,28-35,25-27,9-16,17-24"            
ALLLHIA2   IFILE    SQL, FIXED=81, KEY="U28-35,1-8,25-27,9-16,17-24"            
ALLLHIA3   IFILE    SQL, FIXED=81, KEY="U28-35,1-8,9-16,17-24,25-27"            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALLHURNO  DIM       8      8        1     Patient U/R Number                 
ALLHDATE  DIM       8      8        9     Date Letter Sent                   
ALLHTIME  DIM       8      8        17    Time Letter Sent                   
ALLHLTNO  DIM       3      3        25    Letter Number                      
ALLHREFN  DIM       8      8        28    Referral Number                    
ALLHUSER  DIM       10     10       36    Web User Id (Letter Sender)        
ALLHSPAR  DIM       35     35       46    Spare                              
.
.End of Record                      81   
.
