. V10.12.01 04/04/2018 SA C-0844685 Created File Definition                     
. *----------------------------------------------------------------------
. * Include Name  :   PMSMUPFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Missing UPI Patients               
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsmupaf.dat
. *
. * Index Values  :   KEY8                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSMUPA1   IFILE    SQL, FIXED=89, KEY="U1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMMUURNO  DIM       8      8        1     U/R Number                         
PMMUCUID  DIM       8      8        9     Created by User ID (websecaf)      
PMMUCDAT  DIM       8      8        17    Date record created (ccyymmdd)     
PMMUCTIM  DIM       8      8        25    Time record created (hh:mm:ss)     
PMMUUASS  DIM       10     10       33    User ID who assigned UPI (websecaf)
PMMUDASS  DIM       8      8        43    Date UPI assigned (ccyymmdd)       
PMMUTASS  DIM       8      8        51    Time UPI assigned (hh:mm:ss)       
PMMUSPAR  DIM       30     30       59    Spare Variable                     
.
.End of Record                      89   
.
