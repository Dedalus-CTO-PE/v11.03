. V5.07.001 13/08/1998 Glenn  507 Changes
.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PRIFINFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Private Practice  *
.  *                        Financial Summary                             *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   prifinsf.dat  (Invoice financial file)        *
.  *                        prifigaf.dat  (GST financial file)            *
.  *                                                                      *
.  *  Keys              :   KEY 39                                        *
.  *  Mods              :                                                 *
.  *  V10.13.01 27/07/2018  Richa Phogat  TSK 0848506                     *
.  *            Updated field length for PRFNCODE.Doctorcode from         *
.  *  V9.11.01  07/01/2009 J.Tan   CAR 178415                             *
.  *            Added Medical Practice                                    *
.  *  V9.03.01  01/04/2002 J.Tan   CAR 44116                              *
.  *            Mods for Credit note                                      *
.  *            21/03/2000 J.Tan                                          *
.  *            Added prifigaf file for GST                               *
.  *            10/01/2002 J.Tan                                          *
.  *            Changed Financial code for split income                   *
.  ************************************************************************
.Data File Definition
.--------------------
PRIFINS1   IFILE SQL, FIXED=164, KEY="U1-4,5-5,6-33,154-159"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRFNYEAR  DIM       4      4        1     Financial Year
PRFNTYPE  DIM       1      1        5     Financial Type
.                                           A = Fees Generated
.                                           B = Cash Received
.                                           C = Journals
.                                           D = Merchant Cards (Claimed)
.                                           E = Merchant Cards (Paid)
.                                           F = Merchant Cards (Commission)
.                                           G = Merchant Cards (Journals)
PRFNCODE  DIM       28     28       6     Finance Code
.                                           For Fees
.                                               MWWWXXYYYYYYYYYZZZ
.                                               NWWWXXYYYYYYYYYZZZ - Credit Note
.                                                  (WWW - Item Group)
.                                                  (XX - Item flag)
.                                                  (YYYYYYYYY - Item Code)
.                                                  (ZZZ - Subitem code)
.                                           For Fees - Split Income
.                                             PRCNAFEE=1
.                                               MAAAAAAAAAAWWWXXYYYYYYYYYZZZ
.                                               NAAAAAAAAAAWWWXXYYYYYYYYYZZZ-Crd
.                                             PRCNAFEE<>1
.                                               MWWWXXYYYYYYYYYZZZ
.                                               NWWWXXYYYYYYYYYZZZ-Crd
.                                                  (AAAAAAAAAA - Doctor Code)
.                                                  (WWW - Item Group)
.                                                  (XX - Item flag)
.                                                  (YYYYYYYYY - Item Code)
.                                                  (ZZZ - Subitem code)
.                                           For Receipts
.                                               A    = From Patient
.                                               BXXXXXX = From Health Fund
.                                               IXXXXXX = From Insurance Co.
.                                               C    = From Govt. Dept.
.                                           For Journals
.                                               PRCNAFEE=1 - AAAAAAAAAAZZZ
.                                               PRCNAFEE<>1 - ZZZ
.                                                  (AAAAAAAAAA - Doctor Code)
.                                                  (ZZZ - Journal Type)
.                                                       BD = Bad Debts
.                                                       CR = Credits
.                                                       RF = Refunds
.                                           For Merchant Cards
.                                               XXX = Merchant Code
.                                               WCXXX = Merchant Commission
.                                                      (XXX - Merchant Code)
.                                               WJXXX = Merchant Journal
.                                                      (XXX - Merchant Code)
.                                               WO = Write Off
PRFNPERA  FORM     12.2    8        34    Period Amount
PRFNPR01  FORM     12.2    8        42    Amount for Period 1
PRFNPR02  FORM     12.2    8        50    Amount for Period 2
PRFNPR03  FORM     12.2    8        58    Amount for Period 3
PRFNPR04  FORM     12.2    8        66    Amount for Period 4
PRFNPR05  FORM     12.2    8        74    Amount for Period 5
PRFNPR06  FORM     12.2    8        82    Amount for Period 6
PRFNPR07  FORM     12.2    8        90    Amount for Period 7
PRFNPR08  FORM     12.2    8        98    Amount for Period 8
PRFNPR09  FORM     12.2    8        106   Amount for Period 9
PRFNPR10  FORM     12.2    8        114   Amount for Period 10
PRFNPR11  FORM     12.2    8        122   Amount for Period 11
PRFNPR12  FORM     12.2    8        130   Amount for Period 12
PRFNPR13  FORM     12.2    8        138   Amount for Period 13
PRFNLAST  FORM     12.2    8        146   Last Year Amount
PRFNMPRA  DIM       6      6        154   Medical Practice
PRFNSPAR  DIM       4      4        160   Spare Variable
.
.End of Record                      164
.
.
