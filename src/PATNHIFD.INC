. *----------------------------------------------------------------------
. * Include Name  :   PATNHIFD.INC
. *
. * Function      :   File Def'n Include for Patient        
. *                   Translation from NHI to IBA codes  
. *
. * File Type     :   SQL
. * Keys          :   KEY6, KEY19
. *
. * File Name     :   patnhiaf.dat
. *               :   pataudnh.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
PATAUDNH   IFILE    SQL, FIXED=56, KEY="D1-8,9-16,17-18,19-19"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTNHAUDD  DIM       8      8        1     Date of Change
PTNHAUDT  DIM       8      8        9     Time of Change
PTNHAUDP  DIM       2      2        17    Port
PTNHAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
PTNHAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
PTNHAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
PATNHIA1   IFILE    SQL, FIXED=31, KEY="U1-2,3-6"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTNHCAT   DIM       2      2        1     Category being converted
PTNHNHI   DIM       4      4        3     NHI code being converted
PTNHCODE  DIM       3      3        7     IBA code being converted to
PTNHIPAR  DIM       21     21       10    Spare
.End of Record                      31   
