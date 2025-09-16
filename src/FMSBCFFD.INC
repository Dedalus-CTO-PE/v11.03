. **************************************************************************
. *                                                                        *
. *  Include Name    :   FMSBCFFD.INC                                      *
. *                                                                        *
. *  Function        :   File Def'n Include for Financial Management
. *                      Batch Header Table                                *
. *                                                                        *
. *  File Type       :   SQL                                               *
. *                                                                        *
. *  File Name       :   fmsbcfaf.dat                                      *
. *                                                                        *
. *  Keys            :   KEY5  KEY6                                        *
. *                                                                        *
. *  Modifications   :                                                     *
. **************************************************************************
.
FMSBCFA1  IFILE  SQL, FIXED=73, KEY="U1-5"
FMSBCFA2  IFILE  SQL, FIXED=73, KEY="U6-6,1-5"
FMSBCFA3  IFILE  SQL, FIXED=73, KEY="U31-38,1-5"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMBCBAT   DIM       5      5        1     Batch Number
FMBCSTA   DIM       1      1        6     Status 0. Batch in Use
.                                                1. Batch Awaiting Mods
.                                                2. Batch Awaiting Printing
.                                                3. Batch Awaiting Update
.                                                4. Batch Processed
.                                                5. Batch Update in Progress
FMBCSEC   FORM      5      4        7     Number of Sectors
FMBCTOT   FORM      12.2   8        11    Batch Debit Total
FMBCDIS   FORM      12.2   8        19    Discount Total
FMBCUID   DIM       4      4        27    Operator ID
FMBCDAT   DIM       8      8        31    Date Entered CCYYMMDD
FMBCPDAT  DIM       8      8        39    Post to Date (Accrual)
FMBCLED   DIM       2      2        47    Ledger Number
FMBCTRT   DIM       2      2        49    Transaction Type
.                                          CR = Credit Note
.                                          CS = Cash
.                                          CJ = Cash Journal
.                                          IN = Invoiced
.                                          JA = Journals
.                                          PY = Payments
.                                          RF = Refunds
FMBCINV   FORM      1      2        51    Inventory Directory Number 0 = No
FMBCCDAT  DIM       8      8        53    Post to Date (Cash)
FMBCSPAR  DIM       12     12       61    Spare
.         
.End of Record                      73
.
FMBCFMT   INIT      "(999,999,999,999.99 " * Batch Total Format for Keyin ?
FMBCFTOT  DIM       20      * Format Field for batch total
FMBCDTY   DIM       11      * Type Description (for keyin Routine)
FMBCDST   DIM       11      * Status Description (for keyin Routine)
.
FMBCDST1  INIT      "Await Mods "
FMBCDST2  INIT      "NOT Printed"
FMBCDST3  INIT      "Printed    "
FMBCDST4  INIT      "Processed  "
FMBCDST5  INIT      "PROCESSING "
.                  
