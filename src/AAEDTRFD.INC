.  **********************************************************************
.  *                                                                    *
.  *     Include Name : AAEDTRFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition Include for Accident & Emergency*
.  *                    A&E Debtors Transaction                         *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : aaedtref.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 22                                          *
.  *                                                                    *
.  *     Modifications                                                  *
.  *          V10.14.01 28/06/2019  J.Tan          TSK 0857392          *
.  *                    Added record type (DATRECTY)=6 for ABF          *
.  *          V10.13.02 19/08/2018 J.Tan TSK 0863727                    *
.  *                    Added Restrictive Override Code                 *
.  *          V10.13.01 16/08/2018 J.Tan TSK 859742                     *
.  *                    Added new fields for Eclipse-Claims Store&Foward*
.  *          V10.07.01 27/10/2015 J.Tan CAR 303942                     *
.  *                    Added Payment Code                              *
.  *          V10.05.01 04/08/2014 Peter Vela CAR 302164                *
.  *                    Added ATDTRBRS - Rebate Reason                  *
.  *          V9.09.03  15/04/08 J.Tan    CAR 161684                    *
.  *                    Mods to ATSPARE1 for Ind.to print Proc Date/Time*
.  *          V9.09.02  12/11/07 J.Tan    CAR 151803                    *
.  *                    Added fields for Schedule fee and Item type     *
.  *          V9.09.01  26/06/07 J.Tan    CAR 140282                    *
.  *                    Added 7th Index for NZ G/L Extract              *
.  *          V9.08.02  29/05/2007  Peter Vela CAR SJOG ED Billing      *
.  *                    Fixed Index 5                                   *
.  *          V9.08.01  07/05/2007  Peter Vela CAR SJOG ED Billing      *
.  *                    Added field - Batch Number for NZ Priv Extract  *
.  *                                  Sub Item Code                     *
.  *                                  ED Attending Doctor               *
.  *                                  Service Time (HH:MM:SS)           *
.  *                    Added Invoice number to index 2                 *
.  *          V9.03.02  07/01/2004  J.Tan                               *
.  *                    Added index 4                                   *
.  *          V9.03.01  14/10/2003  J.Tan   CAR 44176                   *
.  *                    Added Credit Note status                        *
.  *                    V9.02 04/09/2002  Davin                         *
.  *                          Added index 3                             *
.  *                    V6.09 31/01/01 Jill Habasque                    *
.  *                          Added ATDTGSTA,ATDTGSTC,ATDTGSTM          *
.  *                    V5.00 22.03.89 J.Clark     (IBA)                *
.  *                          Change includes heading                   *
.  *                    V5.01 12/04/89 Graeme Williams                  *
.  *                          Added 2nd index. Fixed up I/O include     *
.  *                    V5.02 28/04/89 Graeme Williams                  *
.  *                          Changed second index to use Last Chg Date *
.  *                          SRF 100339                                *
.  *      V5.01.01  03/06/1992  Graeme Williams             SRF 114865  *
.  *                Changed the item code from 4 to 9 characters        *
.  *      V5.01.02  05/11/1992  Graeme Williams                         *
.  *                Added the ATSERVS variable to record the multiplier *
.  *                for miscellaneous charges                           *
.  *      V5.08.01  10/03/1999 J.Tan                                    *
.  *                Added Effective date                                *
.  *                                                                    *
.  **********************************************************************
.
AAEDTRE1   IFILE    SQL, FIXED=357, KEY="U1-8,9-16,17-22"
AAEDTRE2   IFILE    SQL, FIXED=357, KEY="U96-96,97-104,1-8,17-22,9-16"
AAEDTRE3   IFILE    SQL, FIXED=357, KEY="U1-8,9-16,96-96,61-68,17-22"
AAEDTRE4   IFILE    SQL, FIXED=357, KEY="U9-16,96-96,1-8,17-22"
AAEDTRE5   IFILE    SQL, FIXED=357, KEY="U61-68,200-209,1-8,9-16,17-22"
AAEDTRE6   IFILE    SQL, FIXED=357, KEY="U200-209,61-68,1-8,9-16,17-22"
AAEDTRE7   IFILE    SQL, FIXED=357, KEY="U181-196,9-16,1-8,17-22"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
DATNUMB     DIM       8          8         1      AAE NUMBER
ATINVNO     DIM       8          8         9      (INVOICE #)
DATTRANS    DIM       6          6        17      TRANSACTION NUMBER
.
ATDDESC     DIM      30         30        23      DESCRIPTION
ATPATAMT    FORM     12.2        8        53      TOTAL AMOUNT
ATDDATE     DIM       8          8        61      DATE YYMMDD
.
ATITEMNO    DIM       9          9        69      ITEM NUMBER
.
ATTYPE      DIM       2          2        78      TRANSACTION TYPE PY=PAYMENTS
.                                                                  DB=CHARGE
.                                                                  xx=JOURNALS
.
ATPAYTYP   FORM      1           2        80      PAYMENT METHOD
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
ATRECEPT   DIM      12          12       82      RECEIPT NUMBER
.
ATINVPRT   FORM      1           2       94      0=INVOICE NOT YET PRINTED
.                                                1=INVOICE PRINTED
.
DATRECTY   DIM       1           1       96      RECORD TYPE 1 - MISC ITEM
.                                                            2 - CASH RECEIPT
.                                                            3 - JOURNALS
.                                                            4 - DEPOSITS
.                                                            5 - PROCEDURE
.                                                            6 - ABF
.
.          These next two variables are updated automatically by the
.          I/O include for each write or update
.
ATCHGDTE   DIM       8           8       97      DATE THIS RECORD LAST CHANGED
ATCHGTIM   DIM       8           8      105      TIME THIS RECORD LAST CHANGED
.
ATMISGRP   DIM       3           3      113      MISCELLANEOUS GROUP
ATDEPTYP   DIM       3           3      116      DEPOSIT TPE(BLNK IF NOT DEP)
ATBATCHN   DIM       8           8      119      BATCH NO FOR MISC.ITMS,CSH,JOUR
.
ATPATPOR   FORM    12.2          8      127      PATIENT PORTION OF CHARGE
ATREBPOR   FORM    12.2          8      135      REBATE PORTION OF CHARGE
DATNINVS   DIM       1           1      143      No. of invoices to be printed
ATSERVS    FORM      2           2      144      Number of services
ATDTEFFD   DIM       8           8      146      Date item assigned to Fees Inv.
ATSPARE1   FORM      1           2      154      Print Date/Time procedure on
.                                                Invoice. 1=Yes, 0=No
ATSPARE2   FORM     12.2         8      156      Spare field
ATDTGSTA   FORM      1           2      164      GST Applicable - 0=gst free
.                                                1-GST Payable
.                                                2-Either     
ATDTGSTC   DIM       6           6      166      GST Payable Code
ATDTGSTM   FORM    12.2          8      172      GST Amount
ATDTCRST   DIM       1           1      180      Credit Note Status
.                                                 0 - No Credit Note
.                                                 1 - Fully Credited
.                                                 2 - Credit by Item
ATDTBTCH   DIM       16          16     181      Batch Details (NZ Priv Extract)
.                                                format (99999XXXCCYYMMDD)
.                                                where 99999 = G/L Batch No.
.                                                      XXX   = Hospital Code
.                                                      CCYYMMDD = Extract.date
ATDTSUBN   DIM       3           3      197      Sub Item Number
ATDTEDAD   DIM       10          10     200      ED Attending Doctor
ATDTSVTM   DIM       8           8      210      Service Time (HH:MM:SS)
ATDTSCHF   FORM      3.2         4      218      Schedule Fee
.                                                (AMA=0,MBS=0.75, 0.85)
ATDTITYP   DIM       1           1      222      Item Type (0=MBS 1=AMA)
ATDTRBRS   DIM       3           3      223      Rebate Reason (CAT Rr)
ATDTPCOD   DIM       3           3      226      Payment Code (Cat Py)
ATDTACOI   DIM       1           1      229      After Care Override Indicator
.                                                0-No
.                                                1-Yes
ATDTDSOV   DIM       1           1      230      Duplicate Service Override
.                                                0-No
.                                                1-Yes
ATDTSTXT   DIM       50          50     231      Service Text
ATDTLSPN   DIM       6           6      281      Location Specific Practice No
.                                                LSPN value (can not be 000000)
ATDTMPOV   DIM       1           1      287      Multi Procedure Override
.                                                0-No
.                                                1-Yes
ATDTNMPT   DIM       2           2      288      Number of Patients Seen
ATDTSDCD   DIM       3           3      290      Self Deem Code (Cat Sd)
ATDTTDUR   DIM       3           3      293      Time Duration (Mins)
ATDTROVR   DIM       3           3      296      Restrictive Override (Cat Ro)
ATSPARE    DIM       58          58     299      SPARE
.
.End of Record                      357
.
.  redefine form fields from key
.  -----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
ATNUMB      FORM         8             1      AAE NUMBER
ATTRANS     FORM         6            17      TRANSACTION NUMBER
ATRECTYP    FORM         1            88      TRANSACTION TYPE
ATNINVS     FORM         1            129     No. of invoices to be printed
.
.
