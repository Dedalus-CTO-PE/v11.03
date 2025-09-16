. V10.03.00 02/05/2012 PHA C-257776 Added Lawtons Assessment of Daily Living
. *----------------------------------------------------------------------
. * Include Name  :   PMSLADFD.INC
. *
. * Function      :   File Def'n Include for Patient System
. *                   Lawtons Assessment of Daily Living
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsladaf.dat
. *
. * Index Values  :   KEY24
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSLADA1   IFILE    SQL, FIXED=165, KEY="U1-8,9-16,17-24"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMLAVISN  DIM       8      8        1     Visit Number
PMLAADAT  DIM       8      8        9     Assessment Date
PMLAATIM  DIM       8      8        17    Assessment Time
PMLAFONE  DIM       1      1        25    Telephone
PMLASHOP  DIM       1      1        26    Shopping
PMLAFDPR  DIM       1      1        27    Food Preparation
PMLAHKEP  DIM       1      1        28    Housekeeping
PMLALAUN  DIM       1      1        29    Laundry
PMLAMTRN  DIM       1      1        30    Mode Of Transport
PMLARMED  DIM       1      1        31    Responsibility for own Medication
PMLAFINC  DIM       1      1        32    Ability to Handle Finances
PMLACDAT  DIM       8      8        33    Date Record Created
PMLACTIM  DIM       8      8        41    Time Record Created
PMLACUID  DIM       10     10       49    User who created record
PMLAUDAT  DIM       8      8        59    Date Record Updated
PMLAUTIM  DIM       8      8        67    Time Record Created
PMLAUUID  DIM       10     10       75    User who updated record
PMLASPAR  DIM       80     80       85    Spare
.
.End of Record                      165
.
