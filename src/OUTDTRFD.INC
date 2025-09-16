. V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes 
. ************************************************************************
. *                                                                      *
. *     Include Name     :   OUTDTRFD.INC                                *
. *                                                                      *
. *     Function         :   File Definition include for Outpatients     *
. *                          Debtors Transaction Details                 *
. *                                                                      *
. *     File Type        :   SQL                                         *
. *                                                                      *
. *     File Name        :   outdtrof.dat                                *
. *                                                                      *
. *     Keys             :   KEY 22, KEY 23                              *
. *                                                                      *
. *     Modifications:                                                   *
. ************************************************************************
. *          V10.14.01 28/06/2019  J.Tan          TSK 0857392            *
. *                    Added record type (DOTRECTY)=7 for ABF            *
. *          V10.13.02 05/12/2018  Peter Vela Task 0859743               *
. *                    Added 6 - THEATRE ITEM to DOTRECTY/OTRECTYP       * 
. *                    Added sub item number to OTDEPTYP if rec type is 6*
. *          V10.13.01 26/09/2018  Thanh T  TSK 0859743                  *
. *                    Added OTDTACAO OTDTDSRO OTDTSRTX OTDTLSPN         *
. *                          OTDTMPRO OTDTNPAT OTDTSFDM OTDTTDUR         *
. *                          OTDTNCAT fields                             *     
. ************************************************************************
. *          V10.07.01 27/10/2015 J.Tan CAR 303942                       *
. *                    Added Payment Code                                *
. *          V9.09.01  26/06/07 J.Tan    CAR 140282                      *
. *                    Added 6th Index for NZ G/L Extract                *
. *          V9.08.02  07/05/07 J.Tan    CAR 140282                      *
. *                    Added field - Batch Number for NZ Priv.Extract    *
. *                    Added Invoice number to index 2                   *
. *          V9.08.01  22/01/2007  Mike Laming  128643                   *
. *                    Change OTSERVS to FORM 5 (was Form 2)             *
. *          V9.07.01  12/07/06 J.Tan    CAR 103365                      *
. *                    Added index 5                                     *
. *          V9.04.01  03/08/05 J.Tan    CAR 62750                       *
. *                  Removed redefined amount variables                  *
. *          V9.03.02  07/01/2004  J.Tan                                 *
. *                    Added index 4                                     *
. *          V9.03.01  14/10/2003  J.Tan   CAR 44176                     *
. *                    Added Credit Note status                          *
. *           V9.02.01  04/09/2002  Davin                                *
. *                     Added index 3                                    *
. *           V5.08.B02 28/02/2000  Jill Habasque                        *
. *                     Added OTDTGSTA                                   *
. *                     Added OTEFFDTE - JT                              *
. *           V5.08.B01 27/01/2000  Steve Downing                        *
. *                     Added fields for GST                             *
. ************************************************************************
.
.          IO INC       OUTDTRIO
.
OUTDTRO1   IFILE  SQL, FIXED=312, KEY="U1-8,9-16,17-22"
OUTDTRO2   IFILE  SQL, FIXED=312, KEY="U96-96,97-104,1-8,9-16,17-22"
OUTDTRO3   IFILE  SQL, FIXED=312, KEY="U1-8,9-16,96-96,61-68,17-22"
OUTDTRO4   IFILE  SQL, FIXED=312, KEY="U9-16,96-96,1-8,17-22"
OUTDTRO5   IFILE  SQL, FIXED=312, KEY="U1-8,9-16,96-96,113-115,17-22"
OUTDTRO6   IFILE  SQL, FIXED=312, KEY="U173-188,9-16,1-8,17-22"
.
FILDTRO1    INIT     "dtrof"
FILDTRO2    INIT     "dtrof"
FILDTRO3    INIT     "dtrof"
FILDTRO4    INIT     "dtrof"
FILDTRO5    INIT     "dtrof"
FILDTRO6    INIT     "dtrof"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
DOTNUMB     DIM       8          8         1      OUTPATIENT NUMBER
OTINVNO     DIM       8          8         9      (INVOICE #)
DOTTRANS    DIM       6          6        17      TRANSACTION NUMBER
.
OTDDESC     DIM      30         30        23      DESCRIPTION
OTPATAMT    FORM   12.2          8        53      TOTAL AMOUNT
OTDDATE     DIM       8          8        61      DATE CCYYMMDD
.
OTITEMNO    DIM       9          9        69      ITEM NUMBER
.
OTTYPE      DIM       2          2        78      TRANSACTION TYPE  PY=PAYMENTS
.                                                                   DB=CHARGES
.                                                                   xx=JOURNALS
.
OTPAYTYP    FORM      1           2       80      PAYMENT METHOD
.                                                0 = NOT APPLICABLE
.                                                1 = CASH
.                                                2 = CHEQUE
.                                                3 = CREDIT CARD
.                                                4 = MERCHANT CARDS EG AMEX
.                                                5 = MONEY ORDER
.                                                6 = EFTPOS
.                                                7 = BPAY
.                                                8 = Virtual Terminal (HICAPS)
.                                                9 = Medicare
.
OTRECEPT   DIM      12          12       82      RECEIPT NUMBER
.
OTINVPRT   FORM      1           2       94      0=INVOICE NOT YET PRINTED
.                                                1=INVOICE PRINTED
.
DOTRECTY   DIM       1           1       96      RECORD TYPE 1 - MISC ITEM
.                                                            2 - CASH RECEIPT
.                                                            3 - JOURNALS
.                                                            4 - DOCTOR FEES
.                                                            5 - DISCOUNT
.                                                            6 - MBS ITEM
.                                                            7 - ABF
.
.          These next two variables are updated automatically by the
.          I/O include for each write or update
.
OTCHGDTE   DIM       8           8       97      DATE THIS RECORD LAST CHANGED
OTCHGTIM   DIM       8           8      105      TIME THIS RECORD LAST CHANGED
.
OTMISGRP   DIM       3           3      113      MISCELLANEOUS GROUP (Cat FI)
.                                                JH-Misc.Item Group (Cat FN)
OTDEPTYP   DIM       3           3      116      DEPOSIT TYPE(BLANK IF NOT DEP)
.                                                SUB ITEM NO (IF REC TYPE IS 6)
OTBATCHN   DIM       8           8      119      BTCH NO FOR MISC.ITMS,CASH,JOUR
.                                                JH-Misc.Item Group (Cat FI)
OTPATPOR   FORM   12.2           8      127      PATIENT PORTION OF CHARGE
OTREBPOR   FORM   12.2           8      135      REBATE PORTION OF CHARGE
DOTNINVS   DIM       1           1      143      No. of invoices to be printed
OTSERVS    FORM      5           4      144      Number of services
OTDTGSTA   FORM      1           2      148      Is GST Applicable to this item
.                                                 0-No GST, 1-Yes, 2-Unknown GST
OTDTGSTC   DIM       6           6      150      GST Payable code
OTDTGSTM   FORM    12.2          8      156      GST Amount
OTDTEFFD   DIM       8           8      164      Date item assigned to Fees Inv.
OTDTCRST   DIM       1           1      172      Credit Note status
.                                                 0 - No Credit Note
.                                                 1 - Fully Credited
.                                                 2 - Credit by Item
OTDTBTCH   DIM       16         16      173      Batch Details (NZ Priv Exract)
.                                                format (99999XXXCCYYMMDD)
.                                                where 99999 = G/L Batch No.
.                                                      XXX   = Hospital Code
.                                                      CCYYMMDD = Extract.date
OTDTPCOD   DIM       3           3      189      Payment Code (Cat Py)
OTDTACAO   DIM       1           1      192      After care Override
.                                                 0 or Blank - No
.                                                 1 - Yes
OTDTDSRO   DIM       1           1      193      Duplicate Service Override
.                                                 0 or Blank - No
.                                                 1 - Yes
OTDTSRTX   DIM      50          50      194      Service Text
OTDTLSPN   DIM       6           6      244      LSPN Value
OTDTMPRO   DIM       1           1      250      Multiple Procedure Override
.                                                 0 or Blank - No
.                                                 1 - Yes
OTDTNPAT   DIM       2           2      251      Number Of Patients
OTDTSFDM   DIM       3           3      253      Self Deem Code (cat Sd)
OTDTTDUR   DIM       3           3      256      Time Duration
OTDTNCAT   DIM       3           3      259      Restricted Override Code
.                                                 (Cat Ro)
OTSPARE    DIM      50          50      262      SPARE
.
.End of record                          312
.
.  redefine form fields from key
.  -----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
OTNUMB      FORM         8             1      OUTPATIENT NUMBER
OTTRANS     FORM         6            17      TRANSACTION NUMBER
OTRECTYP    FORM         1            88      TRANSACTION TYPE
OTNINVS     FORM         1            129     No. of invoices to be printed
