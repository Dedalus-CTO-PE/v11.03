.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PRICONFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Control File for  *
.  *                        Private Practice System                       *
.  *                                                                      *
.  *  File Type         :   ASCII                                         *
.  *                                                                      *
.  *  File Name         :   controlf.txt                                  *
.  *                                                                      *
.  *  Keys              :   KEY                                           *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *         V10.08.06 08/09/2016  J.Tan         TSK 0825673              *
.  *                   Added PRCNZITM-Print zero amt Item (Lingard format)*
.  *         V10.04.01 31/03/2014  Peter Vela     CAR 285260              *
.  *                   Added PRCNPJCI - Print Journal Code on Invoice     *
.  *         V10.03.02 27/09/2012  J.Tan          CAR 272436              *
.  *                   Added PRCNCJRN - Journal Code for Transfer payment *
.  *         V10.03.01 17/11/2011 J.Tan      CAR 252423                   *
.  *                   Added parameter to group PP items on G/L interface *
.  *         V9.10.01  26/08/2008 J.Tan      CAR                          *
.  *                   Mods PRCNLAYT 2 for Cabrini instead of HRH         *
.  *         V9.09.01  24/07/2007 J.Tan      CAR 145426                   *
.  *                   Added PRCNNRND - No Rounding on adjustment         *
.  *         V9.08.01  15/05/2007 Peter Vela CAR 136586                   *
.  *                   Changed PRCNLAYT=1 to SJOG                         *
.  *         V9.03.01  18/03/2004 Lina Vo                                 *
.  *                   Added PRCNCRNO - Next Credit Note Number           *
.  *         V9.02.01  05/11/2000 J.Tan                                   *
.  *                   Mods PRCNUPRA - default PRA from master rec.for U/R*
.  *         V5.08.03  06/06/2000 Steve Downing                           *
.  *                   Added fields for Doctor charges to Accounts Payable*
.  *         V5.08.02  08/06/2000  Davin                                  *
.  *                   Added PRCNPRIH & PRCNPRIT for user defined invoice *
.  *                   headers/tails                                      *
.  *         V5.06.01  14/09/1998  J.Tan    SRF 627407                    *
.  *                   Added PRCNCADM                                     *
.  *         V5.04.00  05/09/1997  Steve Armstrong                        *
.  *                   Added PRCNHRHF & PRCNRUDF for global recompile bugs*
.  ************************************************************************
.  *                        V6.01  16/03/92  DIG                          *
.  *                               Removed PRCNSIZE parameter thus        *
.  *                               creating free space.                   *
.  *                        V6.02  20/07/92  Whirlpool                    *
.  *                               added PRCNOSYS                         *
.  *                        V6.03  12/08/92  DIG                          *
.  *                               Added PRCNGLIN and PRCNGLPA for the    *
.  *                               General Ledger Interface               *
.  *                        V6.04  25/01/1993  Steve Armstrong            *
.  *                               SRF 120122   Quote 7558                *
.  *                               Added PRCNRDOC                         *
.  *                        V6.05  19/05/1993  Gabrielle Q7583 SRF 119837 *
.  *                               New Invoice layout No.5 (Lingard)      *
.  *      V6.00.06  09/08/1993  Glenn Berry                SRF 122353     *
.  *                Added PRCNGENB & PRCNNXBA                             *
.  *      V6.00.07  17/11/1993  Greg Horvat                SRF 124924     *
.  *                Added invoice layouts for Modbury & St.Edmonds        *
.  *      V6.01.01  15/07/1994  Graeme Williams   SRF 130824              *
.  *                Added PRCNS4B3 - Item for S4B3 exemptions             *
.  *      V6.03.01  02/05/1995  Gabrielle       Mt Wilga                      *
.  *                Changed description of St Edmunds invoice layout to Alpha,*
.  *                Removed printing the heading description from either      *
.  *                controlf of pripracf file using prcnaddr paramater        *
.  *      V6.03.02  19/05/1995  Greg Horvat      SRF 136506                   *
.  *                Added PRCNTCOD - Special character for test codes         *
.  *      V6.03.03  27/05/1995  Graeme Williams                               *
.  *                Added PRCNUPRA - How to default PRA for U/R numbers       *
.  *      V6.03.01  03/01/1996  Greg Horvat                                   *
.  *                Commented out the menu program, security key, IBA screen  *
.  *                password & data directory variables                       *
.  *      V9.02.00  10/01/2002 J.Tan                                          *
.  *                Added type of fees allocation                             *
.  *                                                                          *
.  ****************************************************************************
.
.  *** Sector 33 ***
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.....PRCNMENU  DIM       8      8        1     Menu
.....PRCNSECU  DIM       6      6        9     Security Code
.....PRCNDATA  DIM       20     20       15    Data Directory
.....PRCNSECR  DIM       8      8        35    System Parameter Password
PRCNINVN  FORM      8      8        43    Next Invoice Number
.
.         Audit fields (0 = flag set for audit)
.                      (1 = flag not set for audit)
.
PRCNAUDA  FORM      1      1        51    Audit A (Not Used)
PRCNAUDB  FORM      1      1        52    Audit B (Not Used)
PRCNAUDC  FORM      1      1        53    Doctor File Audit
PRCNAUDD  FORM      1      1        54    Debtor File Audit
PRCNAUDE  FORM      1      1        55    Medical Practice File Audit
PRCNAUDF  FORM      1      1        56    Audit F (Not Used)
PRCNAUDG  FORM      1      1        57    Special Pathology Test Audit
PRCNAUDH  FORM      1      1        58    Exception Charges File Audit
PRCNAUDI  FORM      1      1        59    Item File Audit    
.
PRCNDATE  DIM       8      8        60    Fee's Invoiced Report Date (CCYYMMDD)
.
PRCNAUDJ  FORM      1      1        68    Doctor charge audit
.******   This Space is Spare  ******                                      
.
PRCNNAME  DIM       30     30       71    Clinic Name on Invoice
PRCNTELE  DIM       12     12       101   Telephone Number on Invoice
PRCNADDR  FORM      1      1        113   Use Medical Practice Name on Invoice
.                                              0 = No
.                                              1 = Yes
PRCNJOUR  FORM      1      1        114   Print Journals on Invoice
.                                              0 = No
.                                              1 = Yes
PRCNAUTO  FORM      1      1        115   Generate Debtor Number Automatically
.                                              0 = No 
.                                              1 = Yes
PRCNDETN  FORM      8      8        116   Next Debtor Number to be Generated
.
.         User Defined Fields - Billing (0 = No, 1 = Yes)
.
PRCNUDF1  FORM      1      1        124   Using User Defined Field 1 (Code G1)
PRCNMAN1  FORM      1      1        125   User Defined Field 1 Mandatory
PRCNUDF2  FORM      1      1        126   Using User Defined Field 2 (Code G2)
PRCNMAN2  FORM      1      1        127   User Defined Field 2 Mandatory
PRCNUDF3  FORM      1      1        128   Using User Defined Field 3 (Code G3)
PRCNMAN3  FORM      1      1        129   User Defined Field 3 Mandatory
PRCNUDF4  FORM      1      1        130   Using User Defined Field 4 (Code G4)
PRCNMAN4  FORM      1      1        131   User Defined Field 4 Mandatory
.
.         User Defined Fields - Debtor (0 = No, 1 = Yes)
.
PRCNUDF5  FORM      1      1        132   Using User Defined Field 5 (Code G5)
PRCNMAN5  FORM      1      1        133   User Defined Field 5 Mandatory
PRCNUDF6  FORM      1      1        134   Using User Defined Filed 6 (Code G6)
PRCNMAN6  FORM      1      1        135   User Defined Field 6 Mandatory
PRCNUDF7  FORM      1      1        136   Using User Defined Field 7 (Code G7)
PRCNMAN7  FORM      1      1        137   User Defined Field 7 Mandatory
PRCNUDF8  FORM      1      1        138   Using User Defined Field 8 (Code G8)
PRCNMAN8  FORM      1      1        139   User Defined Field 8 Mandatory
.
.         User Defined Fields - M.A.B. (0 = No, 1 = Yes)
.
PRCNUDFA  FORM      1      1        140   Using User Defined Field   (Code MO)
PRCNMANA  FORM      1      1        141   User Defined Field 9 Mandatory
PRCNUDFB  FORM      1      1        142   Using User Defined Field   (Code MP)
PRCNMANB  FORM      1      1        143   User Defined Field 10 Mandatory
.
PRCNWCOM  DIM       6      6        144   Insurance Company Code for W/Comp.
PRCNMABI  DIM       6      6        150   Insurance Company Code for M.A.B.
PRCNVAIN  DIM       6      6        156   Insurance Company Code for V.A.
PRCNHFUN  FORM      1      1        162   Use Health Funds ?
.                                              0 = No
.                                              1 = Yes
PRCNDOCM  FORM      1      1        163   Referring Doctor Mandatory ?
.                                              0 = No
.                                              1 = Yes
PRCNSDAT  DIM       6      6        164   Start of Year Date (DDMMYY)
PRCNLAYT  FORM      1      1        170   Invoice Layout
.                                              0 = Standard (S.A.W.M.)
.                                              1 = SJOG
.                                              2 = Cabrini
.                                              3 = Melbourne Clinic
.                                              4 = RCH
.                                              5 = Lingard
.                                              6 = Modbury
.                                              7 = Alpha Pacific
.                                              8 = West Wimmera 
.                                              9 = SVHM
PRCNATBL  FORM      1      1        171   Aged Trial Balance Layout
.                                              0 = Normal Full Report
.                                              1 = W.C.H. Full Report
.                                              2 = Mercy Full Report
PRCNUNIQ  FORM      8      8        172   Next Unique Identifier
PRCNURCH  DIM       1      1        180   Special Character to signify keyin
.                                         of U/R
PRCNPSYS  FORM      1      1        181   Linked to patient system
.                                            0 = No
.                                            1 = Yes
PRCNUNCL  FORM      8      8        182   Next unique claims number
PRCNBBCL  FORM      8      8        190   Next claim number for bulk billing
PRCNJDAT  FORM      1      1        198   Keyin journal date
.                                            0 = No
.                                            1 = Yes
PRCNOSYS  FORM      1      1        199   Using Outpatient system
.                                            0 = No
.                                            1 = Yes
PRCNRDOC  FORM      1      1        200   Referring doctor on transaction screen
.                                            0 = No
.                                            1 = Yes
PRCNS4B3  DIM       9      9        201   S4B3 Exemption item
PRCNUPRA  FORM      1      1        212   Default value for PRA for U/R's
.                                            0 = Patient
.                                            1 = From last Inpatient Admission
.                                            2 = From last Priv. Pract. Invoice
.                                            3 = From Current Master/Debtor rec.
PRCNDAPS  FORM      1      1        213   Import Doctor charges to Accounts
.                                         Payable system ?
.                                         0 = No, 1 = Yes
PRCNLPAY  DIM       2      2        214   Ledger for Private Practice Payment
PRCNAPAY  DIM      12     12        216   Account Code for PP Payment
PRCNLCOM  DIM       2      2        228   Ledger for Commission
PRCNACOM  DIM      12     12        230   Account Code for Commission
.
.End of Record                      242
.
.*****************************************************************
.
.     SECTOR 34
.
PRCNHTYP  FORM      1      1        1     Hospital Type
.                                              0 = Private
.                                              1 = Public
PRCNADD1  DIM       25     25       2     Hospital Postal Address Line 1
PRCNADD2  DIM       25     25       27    Hospital Postal Address Line 2
PRCNADD3  DIM       25     25       52    Hospital Postal Address Line 3
PRCNPOST  DIM       4      4        77    Hospital Postcode
.
PRCNPAID  FORM      1      1        81    Include "Paid" column in ATB
.                                              0 = No
.                                              1 = Yes
PRCNPER1  FORM      3      3        82    Period 1 days for ATB
PRCNNAM1  DIM       11     11       85    Period 1 column header for ATB
PRCNPER2  FORM      3      3        96    Period 2 days for ATB
PRCNNAM2  DIM       11     11       99    Period 2 column header for ATB
PRCNPER3  FORM      3      3       110    Period 3 days for ATB
PRCNNAM3  DIM       11     11      113    Period 3 column header for ATB
PRCNPER4  FORM      3      3       124    Period 4 days for ATB
PRCNNAM4  DIM       11     11      127    Period 4 column header for ATB
PRCNPER5  FORM      3      3       138    Period 5 days for ATB
PRCNNAM5  DIM       11     11      141    Period 5 column header for ATB
PRCNPER6  FORM      3      3       152    Period 6 days for ATB
PRCNNAM6  DIM       11     11      155    Period 6 column header for ATB
PRCNGLIN  FORM      1      1       166    Running General Ledger Interface ?
.                                              0 = No
.                                              1 = Yes
PRCNGLPA  DIM       20     20      167    Path of General Ledger Data Directory
.
PRCNGENB  FORM      1      1       187    Generate Batch Numbers in IBAPRI04?
.                                         0 = No, 1 = Yes
PRCNNXBA  FORM      8      8       188    Next Generated Batch Number in
.                                           IBAPRI04
PRCNTCOD  DIM       1      1       196    Special character for test codes
.                                     
PRCNHRHF  FORM      1      1       197   Interface for HRH
.                                            0 = No
.                                            1 = Yes
PRCNRUDF  FORM      1      1       198   UDF being used for referral length
PRCNAFEE  FORM      1      1       199   Type of fees allocation
.                                            0 = Normal
.                                            1 = Doctor Percentage
.Spare
PRCNCADM  FORM      1      1       205   Print batch inv.for current admis.?
.                                            0 = No
.                                            1 = Yes
PRCNPRIH  DIM       6      6       206    PRI Invoice Header Code (templated)
PRCNPRIT  DIM       6      6       212    PRI Invoice Tail Code (templated)
PRCNCRNO  FORM      8      8       218    Next Credit Note Number           
PRCNNRND  DIM       1      1       226    No Rounding on Adjustment calculation
.                                            0 = No
.                                            1 = Yes
PRCNGITM  DIM       1      1       227    Group Items on G/L interface file
.                                            0 = No
.                                            1 = Yes
PRCNCJRN  DIM       3      3       228    Journal code for transfer payment
PRCNPJCI  DIM       1      1       231    Print Journal Code on Invoice
.                                            0 = No
.                                            1 = Yes
PRCNZITM  DIM       1      1       232    Print zero amt Item (Lingard format)
.                                            0 = No (default)
.                                            1 = Yes
.
.End of record                     250
