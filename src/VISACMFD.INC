. V10.03.00 20/03/2012 PHA C-257776 AN-SNAP Visit Comments
. *----------------------------------------------------------------------
. * Include Name  :   VISACMFD.INC
. *
. * Function      :   File Def'n Include for Visit System
. *                   An-SNAP Visit Comments
. *
. * File Type     :   SQL
. *
. * File Name     :   visacmaf.dat
. *
. * Index Values  :   KEY30
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
VISACMA1   IFILE    SQL, FIXED=211, KEY="U1-8,9-16,17-24,25-27,28-30"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
VSACVISN  DIM       8      8        1     Visit Number
VSACADAT  DIM       8      8        9     Assessment Date
VSACATIM  DIM       8      8        17    Assessment Time
VSACTYPE  DIM       3      3        25    Comment Type
VSACLINE  DIM       3      3        28    Line Number
VSACDATA  DIM       100    100      31    Comment Line
VSACSPAR  DIM       80     80       131   Spare
.
.End of Record                      211
.
