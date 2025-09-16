. 9.09 .001 27/11/2007 ML  Created
. *----------------------------------------------------------------------
. * Include Name  :   ALLISSFD.INC
. *
. * Function      :   File Def'n Include for Allied Health
. *                   Allied Health Issue Details
. *
. * File Type     :   SQL
. *
. * File Name     :   allissaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLISSA1   IFILE    SQL, FIXED=350, KEY="U1-8,9-16"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALISVISN  DIM       8      8        1     Referral Number
ALISISNO  DIM       8      8        9     Issue Number (unique number)
ALISISTY  DIM       3      3        17    Issue Type (Cat."zO")
ALISUDC1  DIM       3      3        20    User Defined 1 Cat."zP"
.                                            - (Identified)
ALISUDC2  DIM       3      3        23    User Defined 2 Cat."zQ"
.                                            - (Goal in Service Plan)
ALISUDC3  DIM       3      3        26    User Defined 3 Cat."zR"
.                                            - (Goal Achieved)
ALISUDC4  DIM       3      3        29    User Defined 4 Cat."zS"
.                                            - (Referred to a specialist agency)
ALISUDC5  DIM       3      3        32    User Defined 5 Cat."zT"
.                                            - (Issue still present at closure)
.
ALISUDY1  DIM       1      1        35    User Defined Yes/No 1 (1=Yes)
ALISUDY2  DIM       1      1        36    User Defined Yes/No 2 (1=Yes)
ALISUDY3  DIM       1      1        37    User Defined Yes/No 3 (1=Yes)
ALISUDY4  DIM       1      1        38    User Defined Yes/No 4 (1=Yes)
ALISUDY5  DIM       1      1        39    User Defined Yes/No 5 (1=Yes)
.
ALISUDD1  DIM       8      8        40    User Defined Date 1 (ccyymmdd)
ALISUDD2  DIM       8      8        48    User Defined Date 2 (ccyymmdd)
ALISUDD3  DIM       8      8        56    User Defined Date 3 (ccyymmdd)
ALISUDD4  DIM       8      8        64    User Defined Date 4 (ccyymmdd)
ALISUDD5  DIM       8      8        72    User Defined Date 5 (ccyymmdd)
.
ALISUDT1  DIM       30     30       80    User Defined Text 1 
ALISUDT2  DIM       30     30      110    User Defined Text 2 
ALISUDT3  DIM       30     30      140    User Defined Text 3 
ALISUDT4  DIM       30     30      170    User Defined Text 4 
ALISUDT5  DIM       30     30      200    User Defined Text 5 
.
ALISCDAT  DIM       8      8       230    Date record created (CCYYMMDD)
ALISCTIM  DIM       8      8       238    Time record created (HH:MM:SS)
ALISCUID  DIM       10     10      246    WEB user ID created (websecaf)
ALISUDAT  DIM       8      8       256    Date record updated (CCYYMMDD)
ALISUTIM  DIM       8      8       264    Time record updated (HH:MM:SS)
ALISUUID  DIM       10     10      272    WEB user ID updated (websecaf)
ALISSPAR  DIM       68     68      282    Spare
.
.End of Record                     350
.
