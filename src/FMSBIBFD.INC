. V6.00.001 20/05/1992 Nez New File
. *----------------------------------------------------------------------
. * Include Name  :   FMSBIBFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Budget Interface File B
. *
. * File Type     :   TEXT
. *
. * File Name     :   user defined
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSBIBA1   FILE    ASCII,FIXED=282
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMBBLED   DIM       2      2        1     Ledger             (Mandatory)
FMBBACC   DIM       12     12       3     Account            (Mandatory)
FMBBPRO   DIM       3      3        15    Budget Profile     (Optional)
FMBBSIN   DIM       1      1        18    Annual Total Sign  (Optional)
FMBBVAL   FORM      12.5   18       19    Annual Total Value (Mandatory)
FMBBSPA   DIM       20     20       37    Spare
.
.End of Record                      57  
.
