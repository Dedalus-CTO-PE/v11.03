.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : LEGINVFD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for Legacy                    *
.  *                    LEGACY PATIENT INVOICE DETAILS                        *
.  *                                                                          *
.  *     File Type    : SQL                                                   *
.  *                                                                          *
.  *     File Name    : leginvrf.dat                                          *
.  *                                                                          *
.  *     Keys         : KEY 8,  KEY 16, KEY 16, KEY 32                        *
.  *                                                                          *
.  *     Modifications:                                                       *
.  *       V9.03.00  03/05/2004  Davin         CAR 49209                      *
.  *                 Created FD from 6.11 PATINVFD                            *
.  *                                                                          *
.  ****************************************************************************
.
.Data File Definition
.-------------------
LEGINVR5   IFILE SQL, FIXED=253, KEY="U31-38,23-30,1-8,9-16"
LEGINVR4   IFILE SQL, FIXED=253, KEY="U39-39,40-45,46-48,17-22,23-30,1-8"
LEGINVR3   IFILE SQL, FIXED=253, KEY="U23-30,1-8"
LEGINVR2   IFILE SQL, FIXED=253, KEY="U9-16,1-8"
LEGINVR1   IFILE SQL, FIXED=253, KEY="U1-8"
.
.NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
.----     ----   ------   --------  ----------   -----------
LPINVNO    DIM       8           8        1       INVOICE NUMBER
LPINVDTE   DIM       8           8        9       INVOICE DATE  CCYYMMDD
LPINALPH   DIM       6           6       17       ALPHA SORT = PSNAME
LDPINVAD   DIM       8           8       23       ADMISSION NUMBER
LDPINVUR   DIM       8           8       31       U.R. NUMBER
LDPINVSY   DIM       1           1       39       SYSTEM FOR INVOICE
.                                                 1 = A & E
.                                                 2 = OUT PATIENTS
.                                                 3 = IN PATIENTS
.                                                 4 = OTHER FINANCIAL
LPINVSIT   DIM       6           6       40       OUTPATIENT SITE
LPINVCLM   DIM       3           3       46       CLAIM TYPE
LPINVLOC   DIM       2           2       49       INVOICE LOCK INDICATOR
LPTIVAMN   FORM   12.2           8       51       INVOICE TOTAL 
LPTIVPAT   FORM   12.2           8       59       AMOUNT PAID BY PATIENT
LPTIVHFD   FORM   12.2           8       67       AMOUNT PAID BY HEALTH FUND
LPTIVOTH   FORM   12.2           8       75       OTHER AMOUNT PAID   
LPTIVJOU   FORM   12.2           8       83       JOURNAL AMOUNT
LPTIVREB   FORM   12.2           8       91       FUND REBATE AMAOUNT
LPINVCAN   DIM       8           8       99       CANCELATION DATE (CCYYMMDD)
LPTIVPCS   FORM   12.2           8      107       INVOICE CASH PENDING
LPINVTYP   FORM      1           2      115       INVOICE TYPE
.                                                 0 = Normal Invoice
.                                                 1 = Insurance Inv of two invs
.                                                 2 = Pat Invoice of two invs
LPINVBLC   DIM       8           8      117       DATE INVOICE BALANCED CCYYMMDD
LPINVCAD   DIM       8           8      125       ADM NO FOR CANCELLED INVOICES
LPTINCMI   FORM      1           2      133       CASEMIX INVOICE ?
.                                                 1 = Yes
.                                                 2 = No
LDPTINED   DIM       1           1      135       EDI sent flag
.                                                   0 - Not sent
.                                                   1 - Sent
.                                                   2 - Rejected claim
.                                                   3 - On hold
LPINGSTA   FORM   12.2           8      136       GST Amount
LPINGSTJ   FORM   12.2           8      144       GST Journal Amount
LPTINCMC   DIM       9           9      152       Casemix Code (from pmscmtaf)
LPINPMD1   DIM      30          30      161       Patient Moeity description 1
LPINPMD2   DIM      35          35      191       Patient Moeity description 2
LPTINPMA   FORM   12.2           8      226       Patient Moeity amount       
LPTINMVD   DIM       4           4      234       Mechanical Ventilation Days
LPINVSPA   DIM      15          15      238       SPARE
.
.End of Record                          253
.
.    SPARE VARIABLES
.
LSPINVNO    DIM          8            1       INVOICE NUMBER
LSPINVDT    DIM          8            9       INVOICE DATE  CCYYMMDD
LSPINALP    DIM          6           15       ALPHA SORT = PSNAME
LSPINVAD    FORM         8           23       ADMISSION NUMBER
LSPINVUR    FORM         8           31       U.R. NUMBER
LSPINVAM    FORM      12.2           37       INVOICE TOTAL 
LSPINVPA    FORM      12.2           48       AMOUNT PAID BY PATIENT
LSPINVHF    FORM      12.2           58       AMOUNT PAID BY HEALTH FUND
LSPINVOT    FORM      12.2           68       OTHER AMOUNT PAID   
LSPINVJO    FORM      12.2           78       JOURNAL AMOUNT
LSPINVCL    DIM          3           90       CLAIM TYPE
LSPINVRE    FORM      12.2           93       FUND REBATE AMAOUNT
LSPINCAN    DIM          8          103       CANCELATION DATE (CCYYMMDD)
LSPINVSY    FORM         1          109       SYSTEM FOR INVOICE
LSPINVPC    FORM      12.2          110       INVOICE CASH PENDING
LSPINVTY    FORM         1          120       INVOICE TYPE
LSPINVLO    DIM          2          121       INVOICE LOCKING INDICATOR
LSPINVBL    DIM          8           92       DATE INVOICE BALANCED
LSPINVSI    DIM          6          100       OUTPATIENT SITE
LSPINCAD    DIM          8          105       ADM NO FOR CANCELLED INVOICES
LSPTINCM    FORM         1          113       CASEMIX INVOICE
LSPINVSP    DIM         35          115       SPARE 35 CHARACTERS
.
.
.  redefine form fields from key
.  -----------------------------
. NAME     TYPE  LENGTH     START LOC.   DESCRIPTION
. ----     ----  ------     ----------   -----------
LQPINVAD   FORM     8                    ADMISSION NUMBER
LPINVADM   FORM     8                    ADMISSION NUMBER
LQPINVUR   FORM     8                    U/R NUMBER
LPINVUR    FORM     8                    U.R. NUMBER
LPINVSYS   FORM     1                    SYSTEM FOR INVOICE
LPINVAMT   FORM     8.2                  INVOICE TOTAL 
LPINVPAT   FORM     7.2                  AMOUNT PAID BY PATIENT
LPINVHFD   FORM     7.2                  AMOUNT PAID BY HEALTH FUND
LPINVOTH   FORM     7.2                  OTHER AMOUNT PAID   
LPINVJOU   FORM     9.2                  JOURNAL AMOUNT
LPINVREB   FORM     7.2                  FUND REBATE AMAOUNT
LPINVPCS   FORM     7.2                  INVOICE CASH PENDING
LPTINEDS   FORM     1                    EDI sent flag
