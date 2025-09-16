. *----------------------------------------------------------------------
. * Include Name  :   PMSMTEFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Misc.Items and Theatre Charges file for Invoice Estimate
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsmteaf.dat
. *                   (A Copy of pmsmtiaf for JH Invoice Estimate)
. *
. * Modification  :   V10.09.01 29/11/2016 J.Tan  TSK 0822042
. *                   Increased Record length to match with pmsmtiaf file
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSMTEA1   IFILE    SQL, FIXED=368, KEY="U1-8,9-14"                             
PMSMTEA4   IFILE    SQL, FIXED=368, KEY="U1-8,107-107,178-180,9-14"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.PMMIVISN  DIM       8      8        1     Visit number
.PMMITRAN  DIM       6      6        9     Transaction Number
.PMMIURNO  DIM       8      8        15    U/R Number
.PMMISYST  DIM       2      2        23    System
.PMMIITEM  DIM       9      9        25    Item Number
.PMMIDESC  DIM       30     30       34    Description
.PMMIDES2  DIM       35     35       64    Description 2
.PMMITDAT  DIM       8      8        99    Transaction date/Billing Date
.PMMIRTYP  DIM       1      1        107   Record type
.                                          0 - HEADER RECORD - Billing Date
.                                          2 - THEATRE
.                                          3 - MISCELLANEOUS
.                                          4 - DOCTORS FEES
.PMMIREFN  DIM       12     12       108   Reference
.PMMIAMTT  FORM      12.2   8        120   Gross Total amount
.PMMIAMTG  FORM      12.2   8        128   Government Portion
.PMMIAMTH  FORM      12.2   8        136   Orig rate before any disc.allowance
.PMMIAMTP  FORM      12.2   8        144   Patient portion amount
.PMMIRBAT  FORM      12.2   8        152   Estimate Rebate amount
.PMMITDOC  DIM       6      6        160   Treating doctor
.PMMISERV  FORM      5      4        166   Service Number
.PMMIODOC  DIM       6      6        170   Operating docotr
.PMMISESS  DIM       2      2        176   Session (Theatre only)
.PMMIMGRP  DIM       3      3        178   Misc.Group (Mis.& Theatre only)
.PMMIBTCH  DIM       8      8        181   Batch No for Misc.Items,Cash,Jrnl.
.PMMIINVN  FORM      1      2        189   No of Invoices
.PMMIGSTA  FORM      1      2        191   Is GST Applicable to this item
.PMMIGSTC  DIM       6      6        193   GST Payable code
.PMMIGSTM  FORM      12.2   8        199   GST Amount
.PMMIDUPD  DIM       8      8        207   Date record update
.PMMITUPD  DIM       8      8        215   Time record updated
.PMMIWUSR  DIM       10     10       223   WEB User ID
.PMMIMVBR  DIM       1      1        233   Mech.Vent.Billing Record? 1=Yes
.PMMIUNIQ  DIM       10     10       234   Unique id for theatre booking
.PMMISPAR  DIM      124    124       244   Spare variable
.
.End of Record                      368
.
