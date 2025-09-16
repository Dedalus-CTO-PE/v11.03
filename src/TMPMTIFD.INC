. *----------------------------------------------------------------------
. * Include Name  :   TMPMTIFD.INC
. *
. * Function      :   File Def'n Include for Bulk Temporary                    
. *                   Misc.Items and Theatre Charges file
. *
. * File Type     :   SQL
. *
. * File Name     :   tmpmtiaf.dat
. *
. *         V10.01.02  14/12/2010 Ebon Clements  CAR 233900
. *                    Added batch number
. *         V10.01.01  11/11/2010 PeterVela CAR 233257
. *                    Created FD                       
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
TMPMTIA1   IFILE    SQL, FIXED=376, KEY="U281-288,1-8,9-14"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.
.PMMIVISN  DIM       8      8        1     Visit number
.PMMITRAN  DIM       6      6        9     Transaction Number
.PMMIURNO  DIM       8      8        15    U/R Number
.PMMISYST  DIM       2      2        23    System
.                                             1 = Emergency
.                                             2 = Outpatient
.                                             3 = Inpatient
.PMMIITEM  DIM       9      9        25    Item Number
.PMMIDESC  DIM       30     30       34    Description
.PMMIDES2  DIM       35     35       64    Description 2
.PMMITDAT  DIM       8      8        99    Transaction date
.PMMIRTYP  DIM       1      1        107   Record type
.                                         1 - ACCOM
.                                         2 - THEATRE
.                                         3 - MISCELLANEOUS
.                                         4 - DOCTORS FEES
.                                         5 - CASH RECEIPT
.                                         6 - JOURNALS
.                                         7 - DISCOUNT
.                                         8 - PROCEDURE
.PMMIREFN  DIM       12     12       108   Reference
.PMMIAMTT  FORM      12.2   8        120   Gross Total amount
.PMMIAMTG  FORM      12.2   8        128   Government Portion
.PMMIAMTH  FORM      12.2   8        136   Orig rate before any disc.allowance
.PMMIAMTP  FORM      12.2   8        144   Patient portion amount
.PMMIRBAT  FORM      12.2   8        152   Estimate Rebate amount
.PMMITDOC  DIM       6      6        160   Treating doctor
.PMMISERV  FORM      5      4        166   Service Number
.PMMIODOC  DIM       6      6        170   Operating Doctor
.PMMISESS  DIM       2      2        176   Session (Theatre only)
.PMMIMGRP  DIM       3      3        178   Misc.Group (Mis.&Theatre only)CatFI
.                                         JH-Discount (Cat FI)
.                                         JH-Misc.Item/Doctor Chrg Group(Cat FN)
.PMMIBTCH  DIM       8      8        181   Batch No for Misc.Items,Cash,Jrnl.
.                                         JH-Misc.Item/Doctor Chrg Group(Cat FI)
.PMMIINVN  FORM      1      2        189   No of Invoices
.PMMIGSTA  FORM      1      2        191   Is GST Applicable to this item
.PMMIGSTC  DIM       6      6        193   GST Payable code
.PMMIGSTM  FORM      12.2   8        199   GST Amount
.PMMIDUPD  DIM       8      8        207   Date record update
.PMMITUPD  DIM       8      8        215   Time record updated
.PMMIWUSR  DIM       10     10       223   WEB User ID
.PMMIMVBR  DIM       1      1        233   Mech.Vent.Billing Record? 1=Yes
.PMMIUNIQ  DIM       10     10       234   Unique id for theatre booking
.PMMICNTR  DIM       6      6        244   Contract/Health Fund
.PMMISUNQ  DIM       3      3        250   Subsequence Proc.Unique No(NZ Priv)
.                                      or Banding (CAT TB)(Theatre Only)
.PMMIINCT  DIM       1      1        253   NZ Private: Inclusion Type
.                                                     0=Inc in contract
.                                                     1=Bill to Patient
.                                                     2=Extra to contract
.                                         OTHERS - Indicator to Print Procedure
.                                                  Date/Time on EMR Invoice
.                                                  1= Yes, 0=No
.PMMISUBN  DIM       3      3        254   Sub Item Code
.PMMIEDAD  DIM       10     10       257   ED Attending Doctor
.PMMISVTM  DIM       8      8        267   Service Time (HH:MM:SS)
.PMMICCON  DIM       1      1        275   CMBS Confirmed 1=Yes
.PMMISCHF  FORM      3.2    4        276   Schedule Fee (AMA=0,MBS=0.75, 0.85)
.PMMIITYP  DIM       1      1        280   Item Type (0=MBS 1=AMA)
.                                         2=Exploding Misc.itm(No recalc.charge)
PMMIMBCH   DIM       8      8        281   Batch Number
.PMMISPAR  DIM       87     87       289   Spare Variable
.
.End of Record                      376
