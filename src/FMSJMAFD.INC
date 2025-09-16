. ***********************************************************************
. *                                                                     *
. *  Include Name    : FMSJMAFD.INC                                     *
. *                                                                     *
. *  Function        : File Def'n Include for Financial Management      *
. *                    Journal Master Details                           *
. *                                                                     *
. *  File Type       : SQL                                              *
. *                                                                     *
. *  File Name       : fmsjmaaf.dat                                     *
. *                                                                     *
. *  Keys            : KEY7                                             *
. *                                                                     *
. *  Modifications   : 05.08.91 Neeriem Dye                             *
. *                             Added record locking on key 1           *
. *                                                                     *
. ***********************************************************************
.
FMSJMAA1   IFILE SQL, FIXED=140, KEY="U1-1,2-7"        * Std Access Method
FMSJMAA2   IFILE SQL, FIXED=140, KEY="U1-1,53-53,2-7"  * For Proc Journals
FMSJMAA3   IFILE SQL, FIXED=140, KEY="U1-1,43-50,2-7"  * For Search by Date
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMJMJTY   DIM       1      1        1     Journal Type Gen/Std/Periodic
FMJMJID   DIM       6      6        2     Journal ID
FMJMDESC  DIM       35     35       8     Description
FMJMDENT  DIM       8      8        43    Date Entered CCYYMMDD
FMJMLEDG  DIM       2      2        51    Ledger 
FMJMSTAT  DIM       1      1        53    Status     0 = In Input
.                                                    1 = Balanced
.                                                    2 = Submitted
.                                                    9 = Authorised
.
FMJMCASH  FORM      1      2        54    Cash Journal 0 = No, 1 = Yes
FMJMREV   FORM      1      2        56    Reverse      0 = No, 1 = Yes
. 
. General Journal Details
.-------------------------
FMJMRPOS  DIM       8      8        58    Reversal Period   CCYYMMDD
FMJMCPOS  DIM       8      8        66    Cash Posting Date CCYYMMDD
FMJMPPOS  DIM       8      8        74    Accrual Posting Date CCYYMMDD
FMJMPDAT  DIM       8      8        82    Date Processed
FMJMPBAT  DIM       5      5        90    Batch Processed  (*JR *ZF)
FMJMRDAT  DIM       8      8        95    Reversal Date Processed
FMJMRBAT  DIM       5      5        103   Reversal Batch Processed  (*JR *ZF)
.
. Standard Journal Details
.-------------------------
FMJMSPER  FORM      1      2        108   Percentage All 0 = No, 1 = Yes
.
. Periodic Journal Details
.-------------------------
FMJMFPER  DIM       6      6        110   First Posting Period CCYYPP
FMJMLPER  DIM       6      6        116   Last Posting Period CCYYPP
FMJMPROF  DIM       4      4        122   Budget Profile Code
.
FMJMSPAR  DIM       14     14       126   Spare
.
.End of Record                      140
