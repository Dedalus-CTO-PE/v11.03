. V9.05.B01 09/12/2005 EC  Created FD CAR 76341                              
. *----------------------------------------------------------------------
. * Include Name  :   ALLRLNFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Linked SACS Referrals              
. *
. * File Type     :   SQL
. *
. * File Name     :   allrlnaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLRLNA1   IFILE    SQL, FIXED=93, KEY="U1-8,9-16"                              
ALLRLNA2   IFILE    SQL, FIXED=93, KEY="U9-16,1-8"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALRLVISN  DIM       8      8        1     Referral/Visit Number              
ALRLLNKV  DIM       8      8        9     Linked Referral Number             
ALRLCDAT  DIM       8      8        17    Date Record Created (CCYYMMDD)     
ALRLCTIM  DIM       8      8        25    Time Record Created (HH:MM:SS)     
ALRLCUID  DIM       10     10       33    WEB User ID Created (websecaf)     
ALRLSPAR  DIM       50     50       43    Spare                              
.
.End of Record                      93   
.
