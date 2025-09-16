. V6.00.001 11/03/1992 Nez New File
. *----------------------------------------------------------------------
. * Include Name  :   FMSSIBFD.INC
. *
. * Function      :   File Def'n Include for Financial Management System
. *                   Statistical Batch File
. *
. * File Type     :   TEXT
. *
. * File Name     :   sibxxxxx.txt
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSSIBA1   FILE    ASCII,FIXED=95
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMSBLEDG  DIM       2      2        1     Ledger
FMSBACCT  DIM       12     12       3     Account
FMSBDESC  DIM       30     30       15    Transaction Description
FMSBREF   DIM       15     15       45    Reference
FMSBUNIT  FORM      12.6   19       60    Units
FMSBSPAR  DIM       16     16       79    Spare
.
.End of Record                      95
.
