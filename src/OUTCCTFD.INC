. V10.04.02 20/03/2014 AP C-208234 Removed OTCTACTV                             
. V10.04.01 26/02/2014 SA C-208234 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   OUTCCTFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Clinic Type Contract Codes         
. *
. * File Type     :   SQL
. *
. * File Name     :   outcctaf.dat
. *
. * Index Values  :   KEY15                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTCCTA1   IFILE    SQL, FIXED=118, KEY="U1-6,7-12,13-15"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTCCSITE  DIM       6      6        1     Site Code (outsitaf)               
OTCCCTYP  DIM       6      6        7     Clinic Type                        
OTCCCONT  DIM       3      3        13    Contract Code (cat gb)             
OTCCCDAT  DIM       8      8        16    Date Record Created (ccyymmdd)     
OTCCCTIM  DIM       8      8        24    Time Record Created (hh:mm:ss)     
OTCCCUID  DIM       10     10       32    Web User Id Created (websecaf)     
OTCCUDAT  DIM       8      8        42    Date Record Updated (ccyymmdd)     
OTCCUTIM  DIM       8      8        50    Time Record Updated (hh:mm:ss)     
OTCCUUID  DIM       10     10       58    Web User Id Updated (websecaf)     
OTCCSPAR  DIM       50     50       68    Spare Variable                     
.
.End of Record                      118  
.
