.  ***************************************************************************
.  *                                                                         *
.  *     Include Name : PATINVFD.INC                                         *
.  *                                                                         *
.  *     Function     : File Definition include for Patient                  *
.  *                    Invoices                                             *
.  *                                                                         *
.  *     File Type    : SQL                                                  *
.  *                                                                         *
.  *     File Name    : patinvrf.dat                                         *
.  *                                                                         *
.  *     Keys         : KEY 34 , KEY 16 , KEY 14 , KEY 8 , KEY32             *
.  *                                                                         *
.  *          V10.14.01 28/06/2019  J.Tan          TSK 0857392               *
.  *                    Mod PTINCMIX = 3 for ABF Invoice                     *
.  *          V10.13.02 18/12/2018  Peter Vela    TSK 0859743                *
.  *                    Added Amount Paid by Medicare to                     *
.  *                    PINVOTHA if Eclipse Bulk Billing claim               *
.  *          V10.13.01 20/08/2018  J.Tan         TSK 0859742                *
.  *                    Added PTINAPIN - Account Paid indicator using spare  *
.  *          V10.01.01 13/01/2011  Mike Laming   CAR 233084                 *
.  *                    Added PTINCNID (Contract Id.)                        *
.  *          V9.11.01  05/02/09 J.Tan    CAR 172740                         *
.  *                    Added invoice index7                                 *
.  *          V9.10.01  23/05/2008 J.Tan                                     *
.  *                    Added Time and date for record Created/Updated       *
.  *          V9.08.01  05/12/06 Davin    CAR 126848                         *
.  *                    Added contract/health fund                           *
.  *          V9.07.01  11/08/06 J.Tan    CAR 103365                         *
.  *                    Added discount and rounding amount                   *
.  *          V9.04.01  03/08/05 J.Tan    CAR 62750                          *
.  *                    Removed redefined amount variables                   *
.  *          V9.03.03  24/05/2004  Pat Dirito   CAR 50035                   *
.  *                    Added var PTINMVDY Mechanical Ventilation Days       *
.  *          V9.03.02  24/11/2003 J.Tan                                     *
.  *                    Changed definition for credit note                   *
.  *          V9.03.01  29/07/2003 J.Tan                                     *
.  *                    Changed index 5                                      *
.  *                    24/03/2003 J.Tan                                     *
.  *                    Added index 5                                        *
.  *          V9.02.00  19/12/2000  Jill Habasque                            *
.  *                    Added Casemix code, Patient Moeity descriptions &    *
.  *                    Patient Moeity amount                                *
.  *          V5.08.00  26/01/2000  Davin                                    *
.  *                    Added PTINGSTA,PTINGSTJ - GST amount                 *
.  *          V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes             *
.  *          V5.07.00  11/03/1999 J.Tan                                     *
.  *                    Added PTINCMIX - Casemix invoice param               *
.  *                                                                         *
.  ***************************************************************************
.
PATINVR1   IFILE SQL, FIXED=370, KEY="U1-8"
PATINVR2   IFILE SQL, FIXED=370, KEY="U9-16,1-8"
PATINVR3   IFILE SQL, FIXED=370, KEY="U23-30,1-8"
PATINVR4   IFILE SQL, FIXED=370, KEY="U39-39,40-45,46-48,17-22,23-30,1-8"
PATINVR5   IFILE SQL, FIXED=370, KEY="U31-38,23-30,1-8,9-16"
PATINVR6   IFILE SQL, FIXED=370, KEY="U262-267,31-38,23-30,1-8,9-16"
PATINVR7   IFILE SQL, FIXED=370, KEY="U262-267,1-8,9-16,31-38,23-30"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
PINVNO     DIM       8           8        1       INVOICE NUMBER
PINVDTE    DIM       8           8        9       INVOICE DATE  CCYYMMDD
PINALPHA   DIM       6           6       17       ALPHA SORT = PSNAME
DPINVADM   DIM       8           8       23       ADMISSION NUMBER
PINVUR     DIM       8           8       31       U.R. NUMBER
DPINVSYS   DIM       1           1       39       SYSTEM FOR INVOICE
.                                                 1 = A & E
.                                                 2 = OUT PATIENTS
.                                                 3 = IN PATIENTS
.                                                 4 = OTHER FINANCIAL
.                                                 5 = DAY CENTRE     
PINVSITE   DIM       6           6       40       OUTPATIENT SITE
PINVCLM    DIM       3           3       46       CLAIM TYPE
PINVLOCK   DIM       2           2       49       INVOICE LOCK INDICATOR
PINVAMT    FORM   12.2           8       51       INVOICE TOTAL 
PINVPATA   FORM   12.2           8       59       AMOUNT PAID BY PATIENT
PINVHFDA   FORM   12.2           8       67       AMOUNT PAID BY HEALTH FUND
PINVOTHA   FORM   12.2           8       75       OTHER AMOUNT PAID   
.                                                 Amount Paid by Medicare
.                                                 if Eclipse DBS Cat CL Ind 1=P
PINVJOUR   FORM   12.2           8       83       JOURNAL AMOUNT
PINVREB    FORM   12.2           8       91       FUND REBATE AMOUNT
PINVCANC   DIM       8           8       99       DATE INVOICE CREDITED-CCYYMMDD
PINVPCSH   FORM   12.2           8      107       INVOICE CASH PENDING
PINVTYP    FORM      1           2      115       INVOICE TYPE
.                                                 0 = Normal Invoice
.                                                 1 = Insurance Inv of two invs
.                                                 2 = Pat Invoice of two invs
PINVBLCD   DIM       8           8      117       DATE INVOICE BALANCED CCYYMMDD
PINVCADM   DIM       8           8      125       ADM NO FOR CREDITED INVOICES
DPTINCMX   DIM       1           1      133       CASEMIX INVOICE ?
.                                                 1 = Yes, 2 = No (normal pats)
.                                                 3 = ABF
DPTINEDS   DIM       1           1      134       EDI sent flag
.                                                   0 - Not sent
.                                                   1 - Sent
.                                                   2 - Rejected claim
.                                                   3 - On hold
PTINGSTA   FORM   12.2           8      135       Total GST Amount
PTINGSTJ   FORM   12.2           8      143       GST Journal amount
PTINCMCD   DIM       9           9      151       Casemix Code (from pmscmtaf)
PTINPMD1   DIM      30          30      160       Patient Moeity description 1
PTINPMD2   DIM      35          35      190       Patient Moeity description 2
PTINPMAM   FORM   12.2           8      225       Patient Moeity amount
PTINCRST   DIM       1           1      233       Credit Note Status
.                                                   0 - No Credit Note
.                                                   1 - Fully Credited
.                                                   2 - Credit by Item
PTINCRTT   FORM   12.2           8      234       Credit Note total (inc.GST)
PTINMVDY   DIM       4           4      242       Mechanical Ventilation Days
PTINDISC   FORM   12.2           8      246       Discount Amount
PTINROUN   FORM   12.2           8      254       Rounding Amount
PTINHFND   DIM       6           6      262       Contract/Health Fund
PTINCDAT   DIM       8           8      268       Date Record Created (ccyymmdd)
PTINCTIM   DIM       8           8      276       Time Record Created (hh:mm:ss)
PTINCUID   DIM      10          10      284       WEB User ID Created (websecaf)
PTINUDAT   DIM       8           8      294       Date Record Updated (ccyymmdd)
PTINUTIM   DIM       8           8      302       Time Record Updated (hh:mm:ss)
PTINUUID   DIM      10          10      310       WEB User ID Updated (websecaf)
PTINCNID   DIM       6           6      320       Contract Id.     
PTINAPIN   DIM       1           1      326       Account Paid Indicator-ECLIPSE
.                                                 0-disabled
.                                                 1-enabled (ticked)
PINVSPAR   DIM      43          43      327       SPARE CHARACTERS
.End of Record                          370
.
.    SPARE VARIABLES
.
SPINVNO     DIM          8            1       INVOICE NUMBER
SPINVDTE    DIM          8            9       INVOICE DATE  CCYYMMDD
SPINALPH    DIM          6           15       ALPHA SORT = PSNAME
SPINVADM    FORM         6           23       ADMISSION NUMBER
SPINVUR     DIM          8           31       U.R. NUMBER
SPINVAMT    FORM      12.2           37       INVOICE TOTAL 
SPINVPAT    FORM      12.2           48       AMOUNT PAID BY PATIENT
SPINVHFD    FORM      12.2           58       AMOUNT PAID BY HEALTH FUND
SPINVOTH    FORM      12.2           68       OTHER AMOUNT PAID   
SPINVJOU    FORM      12.2           78       JOURNAL AMOUNT
SPINVCLM    DIM          3           90       CLAIM TYPE
SPINVREB    FORM      12.2           93       FUND REBATE AMAOUNT
SPINVCAN    DIM          8          103       CANCELATION DATE (CCYYMMDD)
SPINVSYS    FORM         1          109       SYSTEM FOR INVOICE
SPINVPCS    FORM      12.2          110       INVOICE CASH PENDING
SPINVTYP    FORM         1          120       INVOICE TYPE
SPINVLOC    DIM          2          121       INVOICE LOCKING INDICATOR
SPINVBLC    DIM          8           92       DATE INVOICE BALANCED
SPINVSIT    DIM          6          100       OUTPATIENT SITE
SPINVCAD    DIM          8          105       ADM NO FOR CANCELLED INVOICES
SPINVSPA    DIM          7          113       SPARE 7 CHARACTERS
.
.
.  redefine form fields from key
.  -----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
PINVADM    FORM         8           21       ADMISSION NUMBER
PINVSYS    FORM         1           34       SYSTEM FOR INVOICE
PTINCMIX   FORM         1                    CASEMIX INVOICE ?
PTINEDSF   FORM         1                    EDI sent flag
