. V10.03.00 30/03/2012 PHA C-257776 Program Interrupted Table
. *----------------------------------------------------------------------
. * Include Name  :   PMSPITFD.INC
. *
. * Function      :   File Def'n Include for Patient System
. *                   Program Interrupted Table
. *
. * File Type     :   SQL
. *
. * File Name     :   pmspitaf.dat
. *
. * Index Values  :   KEY36
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSPITA1   IFILE    SQL, FIXED=215, KEY="U1-8,9-11,12-14,15-20,21-23,24-31,32-36"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMPIURNO  DIM       8      8        1     U/R Number
PMPIATYP  DIM       3      3        9     Admission Type (Cat A)
PMPICLAM  DIM       3      3        12    Claim Code (cat CL)
PMPIFUND  DIM       6      6        15    Health Fund
PMPITABT  DIM       3      3        21    Health Fund Table Type (Cat HT)
PMPIEDAT  DIM       8      8        24    Expiry Date (CCYYMMDD)
PMPIICNT  DIM       5      5        32    Count
PMPIRINT  DIM       3      3        37    Reason for Interruption (Cat RZ)
PMPIFDAT  DIM       8      8        40    From Date
PMPITDAT  DIM       8      8        48    To Date
PMPIDELT  DIM       1      1        56    Deleted (1=deleted)
PMPICDAT  DIM       8      8        57    Date record created
PMPICTIM  DIM       8      8        65    Time record created
PMPICUID  DIM       10     10       73    User who created record
PMPIUDAT  DIM       8      8        83    Date record updated
PMPIUTIM  DIM       8      8        91    Time record created
PMPIUUID  DIM       10     10       99    User who updated record
PMPIDDAT  DIM       8      8        109   Date record deleted
PMPIDTIM  DIM       8      8        117   Date record deleted
PMPIDUID  DIM       10     10       125   User who deleted record
PMPISPAR  DIM       80     80       135   Spare
.
.End of Record                      215
.
