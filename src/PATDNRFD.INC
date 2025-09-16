. *----------------------------------------------------------------------
. * Include Name  :   PATDNRFD.INC
. *
. * Function      :   File Def'n Include for Patient           
. *                   Donor Information
. *
. * File Type     :   SQL
. * Keys          :   KEY10, KEY19
. *
. * File Name     :   patdnraf.dat
. *               :   patauddn.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
PATAUDDN   IFILE    SQL, FIXED=57, KEY="D1-8,9-16,17-18,19-19"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTDNAUDD  DIM       8      8        1     Date of Change
PTDNAUDT  DIM       8      8        9     Time of Change
PTDNAUDP  DIM       2      2        17    Port
PTDNAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
PTDNAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
PTDNAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
PATDNRA1   IFILE    SQL, FIXED=32, KEY="U1-8,9-10"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTDNURNO  DIM       8      8        1     U/R Number
DPTDNCNT  DIM       2      2        9     Unique Counter
PTDNCODE  DIM       3      3        11    Donor code (Cat DN)
PTDNLUPD  DIM       8      8        14    Date last changed
PTDNSPAR  DIM       10     10       22    Spare
.End of Record                      32   
.
.Redefine for form field keys
PTDNCNT   FORM      2
