. V10.04.02 20/03/2014 AP C-208234 Removed ALCRACTV                             
. V10.04.01 26/02/2014 SA C-208234 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   ALLCCTFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Department Contract Codes          
. *
. * File Type     :   SQL
. *
. * File Name     :   allcctaf.dat
. *
. * Index Values  :   KEY6                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLCCTA1   IFILE    SQL, FIXED=109, KEY="U1-3,4-6"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALCCDEPT  DIM       3      3        1     Department (alldepaf)              
ALCCCONT  DIM       3      3        4     Contract Code (Cat gb)             
ALCCCDAT  DIM       8      8        7     Date Record Created (ccyymmdd)     
ALCCCTIM  DIM       8      8        15    Time Record Created (hh:mm:ss)     
ALCCCUID  DIM       10     10       23    Web User Id Created (websecaf)     
ALCCUDAT  DIM       8      8        33    Date Record Updated (ccyymmdd)     
ALCCUTIM  DIM       8      8        41    Time Record Updated (hh:mm:ss)     
ALCCUUID  DIM       10     10       49    Web User Id Updated (websecaf)     
ALCCSPAR  DIM       50     50       59    Spare Variable                     
.
.End of Record                      109  
.
