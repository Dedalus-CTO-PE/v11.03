. ************************************************************************
. *                                                                      *
. *  Include Name      :   PRIINVFD.INC                                  *
. *                                                                      *
. *  Function          :   File Definition include for Private Practice  *
. *                        Invoice Details                               *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   priinvof.dat                                  *
. *                                                                      *
. *  Keys              :   KEY 8, KEY 16, KEY 18, KEY 30                 *
. *                                                                      *
. *  Modifications     :                                                 *
. *  V10.13.01 27/07/2018  Richa Phogat  TSK 0848506                     *
. *            Updated field length for PRINDOCT from 6 to 10            *
. *  V10.04.01 21/01/2014  Patrick Adair    CAR 265844                   *
. *            Increase PRA address and phone field lengths and add  new *
. *            fields for State and mobile phone                         *
. *  V9.09.01  23/05/08 J.Tan    CAR 169149                              *
. *            Added Date and Time record created                        *
. *  V9.04.01  03/08/05 J.Tan    CAR 62750                               *
. *            Removed redefined amount variables                        *
. *  V9.03.02  18/03/2004  Lina Vo                                       *
. *            Added PRINCNST - Credit Note Status descriptions          *
. *  V9.03.01  18/03/2004  Lina Vo                                       *
. *            Added PRINCNST - Credit Note Status                       *
. *            Added PRINCNTT - Credit Note Total                        *
. *            Increased size the PRINSPAR                               *
. *  V5.08.B01 31/01/2000  Steve Downing                                 *
. *            Added PRINGSTA field for GST                              *
. *  V5.07.001 07/08/1998 Glenn  507 Changes                             *
. ************************************************************************
.Data File Definition
.--------------------
PRIINVO1   IFILE SQL, FIXED=539, KEY="U1-8"
PRIINVO2   IFILE SQL, FIXED=539, KEY="U9-16,1-8"
PRIINVO3   IFILE SQL, FIXED=539, KEY="U23-30,31-32,1-8"
PRIINVO4   IFILE SQL, FIXED=539, KEY="U41-46,47-56,23-30,31-32,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRINNUMB  DIM       8      8        1     Invoice Number
.
PRINDATE  DIM       8      8        9     Invoice Date (CCYYMMDD)
PRINNAME  DIM       6      6        17    Alpha Sort on Patient Surname
.
PRINDEBT  DIM       8      8        23    Debtor Number
DPRINSCN  DIM       2      2        31    Scan Flag
.
DPRINUNQ  DIM       8      8        33    Unique Identifier
.
PRINPRAC  DIM       6      6        41    Medical Practice Code
PRINDOCT  DIM       10     10       47    Service Doctor
PRINCLAM  DIM       3      3        57    Claim Type (Category CL)
.
PRINITOT  FORM     12.2    8        60    Invoice Total
PRINPAMT  FORM     12.2    8        68    Amount Paid by Patient
PRINHAMT  FORM     12.2    8        76    Amount Paid by Health Fund
PRINIAMT  FORM     12.2    8        84    Amount Paid by Insurer
PRINMAMT  FORM     12.2    8        92    Amount Paid by Medicare
PRINVAMT  FORM     12.2    8        100   Amount Paid by Veterans Affairs
PRINOTHA  FORM     12.2    8        108   Other Amount Paid
PRINJAMT  FORM     12.2    8        116   Journal Amount
PRINPEND  FORM     12.2    8        124   Cash Pending
PRINTRAN  FORM      6      4        132   Next DTRAN Number
.
.         Person Responsible for A/C
.
PRINNAMR  DIM       45     45       136   P.R.A. Name
PRINPRA1  DIM       35     35       181   P.R.A. Address Line 1
PRINPRA2  DIM       35     35       216   P.R.A. Address Line 2
PRINPRA3  DIM       35     35       251   P.R.A. Address Line 3
PRINPRA4  DIM       35     35       286   P.R.A. Address Line 4
PRINPOST  DIM       8      8        321   P.R.A. Postcode
PRINTELP  DIM       20     20       329   P.R.A. Telephone Private
PRINTELB  DIM       20     20       349   P.R.A. Telephone Business
PRINMPHN  DIM       20     20       369   P.R.A. Mobile Phone
PRINRELP  DIM       10     10       389   P.R.A. Relationship
.
PRINCNUM  FORM       8      5       399   Unique Claim Number
PRINADTE  DIM        8      8       404   Accident Date
.
PRINGSTA  FORM      12.2    8       412   GST Amount
PRINGSTJ  FORM      12.2    8       420   GST Journal Amount
.
PRINCNST  DIM       1       1       428   Credit Note Status
.                                         0=No Credit Note
.                                         1=Fully Credited
.                                         2=Credit by Item
PRINCNTT  FORM      12.2    8       429   Credit Note Total
PRINCDAT  DIM       8       8       437   Date Record Created (ccyymmdd)
PRINCTIM  DIM       8       8       445   Time Record Created (hh:mm:ss)
PRINCUID  DIM      10      10       453   WEB User ID Created (websecaf)
PRINUDAT  DIM       8       8       463   Date Record Updated (ccyymmdd)
PRINUTIM  DIM       8       8       471   Time Record Updated (hh:mm:ss)
PRINUUID  DIM      10      10       479   WEB User ID Updated (websecaf)
PRINSPAR  DIM      50      50       489   Spare Variable
.End of Record                      539
.
.
. Redefine form fields from key
. -----------------------------
.
PRINSCAN  FORM      2
PRINUNIQ  FORM      8
.
