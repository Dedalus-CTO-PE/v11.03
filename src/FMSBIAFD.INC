. V6.00.001 20/05/1992 Nez New File
. *----------------------------------------------------------------------
. * Include Name  :   FMSBIAFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Budget Interface File A
. *
. * File Type     :   TEXT
. *
. * File Name     :   user defined
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSBIAA1   FILE    ASCII,FIXED=282
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMBALED   DIM       2      2        1     Ledger              (Mandatory)
FMBAACC   DIM       12     12       3     Account             (Mandatory)
FMBAS01   DIM       1      1        15    Sign  for period 01 (Optional)
FMBAV01   FORM      12.5   18       16    Value for period 01 (Mandatory)
FMBAS02   DIM       1      1        34    Sign  for period 02 (Optional)
FMBAV02   FORM      12.5   18       35    Value for period 02 (Mandatory)
FMBAS03   DIM       1      1        53    Sign  for period 03 (Optional)
FMBAV03   FORM      12.5   18       54    Value for period 03 (Mandatory)
FMBAS04   DIM       1      1        72    Sign  for period 04 (Optional)
FMBAV04   FORM      12.5   18       73    Value for period 04 (Mandatory)
FMBAS05   DIM       1      1        91    Sign  for period 05 (Optional)
FMBAV05   FORM      12.5   18       92    Value for period 05 (Mandatory)
FMBAS06   DIM       1      1       110    Sign  for period 06 (Optional)
FMBAV06   FORM      12.5   18      111    Value for period 06 (Mandatory)
FMBAS07   DIM       1      1       129    Sign  for period 07 (Optional)
FMBAV07   FORM      12.5   18      130    Value for period 07 (Mandatory)
FMBAS08   DIM       1      1       148    Sign  for period 08 (Optional)
FMBAV08   FORM      12.5   18      149    Value for period 08 (Mandatory)
FMBAS09   DIM       1      1       167    Sign  for period 09 (Optional)
FMBAV09   FORM      12.5   18      168    Value for period 09 (Mandatory)
FMBAS10   DIM       1      1       186    Sign  for period 10 (Optional)
FMBAV10   FORM      12.5   18      187    Value for period 10 (Mandatory)
FMBAS11   DIM       1      1       205    Sign  for period 11 (Optional)
FMBAV11   FORM      12.5   18      206    Value for period 11 (Mandatory)
FMBAS12   DIM       1      1       224    Sign  for period 12 (Optional)
FMBAV12   FORM      12.5   18      225    Value for period 12 (Mandatory)
FMBAS13   DIM       1      1       243    Sign  for period 13 (Optional)
FMBAV13   FORM      12.5   18      244    Value for period 13 (Mandatory)
FMBASPA   DIM       20     20      262    Spare
.
.End of Record                     282  
.
