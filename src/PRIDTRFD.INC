.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PRIDTRFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Debtors           *
.  *                        Transaction File for Private Practice System  *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   pridtraf.dat                                  *
.  *                                                                      *
.  *  Keys              :   KEY 22, KEY 24, KEY 30                        *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *  V10.13.03 20/09/2018  J.Tan         TSK 0863727                     *
.  *            Added Restrictive Override Code                           *
.  *  V10.13.02 21/08/2018  J.Tan         TSK 0859742                     *
.  *            Added Hospital Indicator using spare variable             *
.  *  V10.13.01 28/07/2018  Richa Phogat  TSK 0848506                     *
.  *            Updated field length for PRDTDOCT & PRDTREFD from 6 to 10 *
.  ************************************************************************
.  *  V10.11.04 25/09/2017  Steve Armstrong TSK 0837619                   *
.  *            Changed PRDTASPF to be used for Compensation Claim        *
.  *            Indicator                                                 *
.  *  V10.11.03 18/09/2017  Peter Vela      TSK 0837619                   *
.  *            Changed PRHTASPF and PRHTAICF to not used                 *
.  *  V10.11.02 29/08/2017  Steve Armstrong TSK 0837619                   *
.  *            Added value "2" to DPRHTFLG.                              *
.  *            Added PRDTLVIS and reduced the length of PTDTSPAR.        *
.  *  V10.11.01 14/07/2017  Steve Armstrong TSK 0837619                   *
.  *            Added PRDTRPER to PRDTROVR and extended length of PTDTSPAF*
.  ************************************************************************
.  *  V10.08.01 24/03/2016  Steve Armstrong TSK 0294177                   *
.  *            Added PRDTACOI & PRDTTDUR and reduced the length of       *
.  *            PTDTSPAR.                                                 *
.  ************************************************************************
.  *  V10.07.01 12/10/2015 J.Tan    CAR 310329                            *
.  *            Added a new field for Date item assigned to Fees Inv.     *
.  *            27/10/2015 J.Tan    CAR 303942                            *
.  *            Added Payment Code                                        *
.  ************************************************************************
.  *  V9.05.B01 19/12/2005 Ebon Clements CAR 76341                        * 
.  *            Changed PRDTENCN to DIM 8                                 *
.  *  V9.04.01  03/08/05 J.Tan    CAR 62750                               *
.  *            Removed redefined amount variables                        *
.  *  V9.03.02  23/03/2004  Lina Vo                                       *
.  *            Added PRDTPFLG - Pathology Flag                           *
.  *            Added PRDTS4B3 - S4B3 Flag                                *
.  *  V9.03.01  18/03/2004  Lina Vo                                       *
.  *            Added PRDTCNST - Credit Note Status                       *
.  *  V9.03.00  02/03/2004  Ebon Clements   CAR 19985                     *
.  *            Added PRDTREFN and PRDTENCN                               *
.  *  V5.08.01  28/08/2000  J Habasque                                    *
.  *            Added PRDTRFPD - Referral Period                          *
.  *  V5.07.001 07/08/1998 Glenn  507 Changes                             *
.  *  V6.07.01  16/06/2000  J.Tan                                         *
.  *            Added a variable for Accounts payable flag                *
.  *            Added a new index                                         *
.  *            28/02/2000  Jill Habasque                                 *
.  *            GST Mods                                                  *
.  ************************************************************************
.Data File Definition
.--------------------
PRIDTRA1   IFILE SQL, FIXED=537, KEY="U1-8,9-16,17-22"
PRIDTRA2   IFILE SQL, FIXED=537, KEY="U33-40,1-8,9-16,17-22"
PRIDTRA3   IFILE SQL, FIXED=537, KEY="U23-30,31-32,9-16,17-22"
PRIDTRA4   IFILE SQL, FIXED=537, KEY="U9-16,33-40,17-22"
PRIDTRA5   IFILE SQL, FIXED=537, KEY="U288-288,33-40,1-8,9-16,17-22"
PRIDTRA6   IFILE SQL, FIXED=537, KEY="U315-315,23-30,31-32,9-16,17-22"
.  
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DPRDTUNQ  DIM       8      8        1     Unique Identifier
PRDTINVN  DIM       8      8        9     Invoice Number
DPRDTTRN  DIM       6      6        17    Transaction Number
.
PRDTDEBT  DIM       8      8        23    Debtor Number
DPRDTSCN  DIM       2      2        31    Scan Flag
.
PRDTSDAT  DIM       8      8        33    Service Date
PRDTSTIM  DIM       6      6        41    Service Time
.
PRDTDESC  DIM       30     30       47    Description (Item/Receipt/Journal)
PRDTAMNT  FORM     12.2    8        77    Total Amount (Item/Receipt/Journal)
.
PRDTPRAC  DIM       6      6        85    Medical Practice Code
PRDTDOCT  DIM       10     10       91    Service Doctor
PRDTSERV  FORM      5      4        101   Number of Services
PRDTREFD  DIM       10     10       105   Referring Doctor
PRDTREFT  DIM       50     50       115   Referring Details
PRDTCLAM  DIM       3      3        165   Claim Code (Category CL)
PRDTCODE  DIM       3      3        168   Patient Indicator (Category GI)
PRDTMESS  DIM       3      3        171   Message Code (PATMESG1)
.
PRDTRTYP  FORM      1      2        174   Transaction Record Type
.                                              1 = Item
.                                              2 = Cash Receipt
.                                              3 = Journals
.
PRDTIFLG  FORM      2      2        176   For Item Transactions
.                                            Item Flag
.                                              0 = MBS
.                                              1 = AMA
.                                              2 = IMC Details
.                                         For Receipt Transactions
.                                            Receipt Type
.                                              1 = From Patient
.                                              2 = From Health Fund
.                                              3 = From Insurance Company
.                                              4 = From Govt. Dept
PRDTITMN  DIM       9      9        178   For item transactions
.                                            Item Number
.                                         For Receipt Transactions
.                                            First 6 chars. = code for
.                                            health fund or ins. company
PRDTSUBN  DIM       3      3        187   Subitem number
PRDTSETC  DIM       3      3        190   Item Set Code (Misc. Item Grp-Cat FI)
.
PRDTRECN  DIM       8      8        193   Receipt Number
.
PRDTMETH  FORM      1      2        201   Payment Method
.                                              0 = Not Applicable
.                                              1 = Cash
.                                              2 = Cheque
.                                              3 = Credit Card
.                                              4 = Merchant Card (eg AMEX)
.                                              5 = Money Order
.                                              6 = EFTPOS
.                                              7 = BPAY
.                                              8 = Virtual Terminal (HICAPS)
.                                              9 = Medicare
.
PRDTTTYP  DIM       3      3        203   Transaction Type
.                                              BD = Bad Debt     
.                                              CR = Credit
.                                              WO = Write Off
.                                              PY = Payments
.                                              DB = Debit
PRDTINVP  FORM      1      2        206   Invoice Print Status
.                                              0 = Not Yet Printed
.                                              1 = Printed
.
.  The next two fields are automatically updated by the I/O for every
.  write and update
.
PRDTCDAT  DIM       8      8        208  Date This Record Last Changed(CCYYMMDD)
PRDTCTIM  DIM       8      8        216  Time This Record Last Changed(HH:MM:SS)
.
PRDTBATC  DIM       8      8        224   Batch Number (Item,Receipt,Journal)
.
PRDTUDF1  DIM       3      3        232   User Defined Field 1 (Category G1)
PRDTUDF2  DIM       3      3        235   User Defined Field 2 (Category G2)
PRDTUDF3  DIM       3      3        238   User Defined Field 3 (Category G3)
PRDTUDF4  DIM       3      3        241   User Defined Field 4 (Category G4)
.
PRDTADMN  DIM       3      3        244   Admission Class (Cat A)
PRDTMISG  DIM       3      3        247   For Receipt Transactions
.                                            Merchant Card Code (if applicable)
PRDTRDTE  DIM       8      8        250   Referral Date (CCYYMMDD)
PRDTIAMT  FORM     12.2    8        258   Item Amount
PRDTOPS   DIM       20     20       266   Operation Codes
PRDTMFLG  FORM      1      2        286   Multiple Service Code Flag
.                                            0 = No
.                                            1 = Yes
PRDTGLT   DIM       1      1        288   Transferred to G/L 1=Yes
PRDTMEDA  DIM       10     10       289   Medicare Assign Form Number
PRDTGSTA  FORM      1      2        299   Is GST Applicable to this item
PRDTGSTC  DIM       6      6        301   GST Payable Code
PRDTGSTM  FORM      12.2   8        307   GST Amount
DPRDTAPA  DIM       1      1        315   Accounts Payable flag
.                                         0 = Not applicable
.                                         1 = Invoice not balanced
.                                         2 = Waiting to be sent (balanced)
.                                         3 = Sent to Accounts payable
PRDTRFPD  DIM       3      3        316   Referral Period (Cat RF)
PRDTREFN  DIM       8      8        319   Referral/Encounter Number
PRDTENCN  DIM       8      8        327   Encounter Number
PRDTCNST  DIM       1      1        335   Credit Note Status
.                                         0-No Credit Note
.                                         1-Fully Credited
.                                         2-Credit by Item
PRDTPFLG  FORM      1      2        336   Pathology Flag    
.                                         0 = No
.                                         1 = Yes
PRDTS4B3  FORM      1      2        338   S4B3 Flag         
.                                         0 = No
.                                         1 = Yes
PRDTEFFD  DIM       8      8        340   Date Item assigned to Fees Invoiced
PRDTPCOD  DIM       3      3        348   Payment Code (Cat Py)
PRDTACOI  DIM       1      1        351   After Care Override Indicator
.                                          0 or Blank = No
.                                          1 = Yes
PRDTTDUR  DIM       3      3        352   Time Duration (mins)
PRDTRPER  DIM       2      2        355   Referral Period (months, 1-98)
.                                          (R-Justified)
PRDTROVR  DIM       3      3        357   Referral Override (Cat ro)
PRDTMPOV  DIM       1      1        360   Multi Procedure Override
.                                          0 or Blank = No
.					   1 = Yes
PRDTDSOV  DIM       1      1        361   Duplicate Service Override
.                                          0 or Blank = No
.					   1 = Yes
PRDTSTXT  DIM       100    100      362   Service Text
PRDTASPF  DIM       1      1        462   Claim Code Indicator
.                                          0 or Blank = No
.                                          1 = Yes
PRDTASPC  DIM       10     10       463   Alternate Service Provider HCP Code
.                                          (pmshcpaf)
PRDTAICF  DIM       1      1        473   Not used
PRDTAICV  DIM       3      3        474   Alternate IFC Issue Code Value
.                                          (Cat ic)
PRDTNMPT  DIM       2      2        477   Number of Patients
.                                          (R-Justified numeric)
PRDTLSPN  DIM       6      6        479   Location Specific Practice No. Value
PRDTSDCD  DIM       2      2        485   Self Deem Code (Cat Sd)
.                                          SD = Self Deemed
.                                          SS = Substituted Service
.                                          N  = Not Self Deemed
PRDTLVIS  DIM       8      8        487   Linked Visit Number
PRDTHOSI  DIM       1      1        495   Hospital Indicator
.                                          0 or Blank = No
.                                          1 = Yes
PRDTROVC  DIM       3      3        496   Restrictive Override Code (Cat Ro)
PRDTSPAR  DIM       38     38       499   Spare Variable
.
.End of Record                      537
.
.
. Redefine form fields from key
. -----------------------------
.
PRDTUNIQ  FORM      8
PRDTTRAN  FORM      6
PRDTSCAN  FORM      2
.
.
PRDTAPAY  FORM      1
