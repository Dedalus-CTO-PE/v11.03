. V10.03.00 09/03/2012 PHA C-257776 AN-SNAP Classification Code Keywords
. *----------------------------------------------------------------------
. * Include Name  :   PMSSKIFD.INC
. *
. * Function      :   File Def'n Include for Patient System
. *                   AN-SNAP Classification Code Keyword
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsskiaf.dat
. *
. * Index Values  :   KEY35   KEY35
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSSKIA1   IFILE    SQL, FIXED=66, KEY="U1-5,6-35"
PMSSKIA2   IFILE    SQL, FIXED=66, KEY="U6-35,1-5"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMSKCODE  DIM       5      5        1     AN-SNAP Key
PMSKKKWD  DIM       30     30       6     AN-SNAP Keyword
PMSKSPAR  DIM       30     30       36    Spare
.
.End of Record                      66
.
