. V10.03.00 07/03/2012 PHA C-257776 Impairment Code Keywords
. *----------------------------------------------------------------------
. * Include Name  :   PMSIKIFD.INC
. *
. * Function      :   File Def'n Include for Patient System
. *                   Impairment Code Keywords
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsikiaf.dat
. *
. * Index Values  :   KEY37   KEY37
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSIKIA1   IFILE    SQL, FIXED=68, KEY="U1-7,8-37"
PMSIKIA2   IFILE    SQL, FIXED=68, KEY="U8-37,1-7"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMIKCODE  DIM       7      7        1     Impairment Code
PMIKKKWD  DIM       30     30       8     Impairment Code Keyword
PMIKSPAR  DIM       30     30       38    Spare
.
.End of Record                      68
.
