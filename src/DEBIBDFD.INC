. *----------------------------------------------------------------------
. * Include Name  :   DEBIBDFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable
. *                   Import Billing Details
. *
. * File Type     :   ASCII
. *
. * File Name     :   xxxxxxxx.txt   (xxxxxxxx = user defined file name)
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
DEBIBDA1   FILE     ASCII, FIXED=370
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBIBDEBT  DIM       8      8        1     Debtor Code
DBIBITEM  DIM       8      8        9     Sales Item Code
DBIBSERD  DIM       8      8        17    Service Date (CCYYMMDD)
DBIBDREF  DIM       50     50       25    Debtors Reference
DBIBOREF  DIM       50     50       75    Our Reference
DBIBQTY   FORM      10.2   13       125   Quantity
DBIBPRIC  FORM      10.2   13       138   Price
DBIBEXTP  FORM      10.2   13       151   Extended Price
DBIBGST   DIM       6      6        164   GST Code
DBIBCMT1  DIM       50     50       170   Comment 1
DBIBCMT2  DIM       50     50       220   Comment 2
DBIBCMT3  DIM       50     50       270   Comment 3
DBIBCMT4  DIM       50     50       320   Comment 4
.
.End of Record                      370
.
