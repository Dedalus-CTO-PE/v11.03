.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PRICONTD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Private Practice    *
.  *                    Control File CGI variables  & PRICONTM vars     *
.  *                                                                    *
.  *     Sectors      : 33 & 34                                         *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                                                                    *
.  *      V10.08.01 08/09/2016  J.Tan          TSK 0825673              *
.  *                Added PRICN235 - Print zero amt of item for Lingard *
.  *      V10.04.01 31/03/2014  Peter Vela     CAR 285260               *
.  *                Added PRICN234 - Print Journal Code on Invoice      *
.  *      V10.03.02 27/09/2012  J.Tan          CAR 272436               *
.  *                Added PRICN233 -Journal Code for PP Transfer payment*
.  *      V10.03.01 17/11/2011 J.Tan      CAR 252423                    *
.  *                Added PRICN232 - group PP items on G/L interface    *
.  *      V9.09.01  24.07.2007 J.Tan   CAR 145426                       *
.  *                Added PRICN231 - No rounding on Adjustment          *
.  *      V9.03.01  19.03.2004 Lina Vo                                  *
.  *                Added PRICN230 - Next Credit Note Number            *
.  *      V9.03.00  10.11.2003 Pat Dirito    CAR 44128                  *
.  *                Created include                                     *
.  **********************************************************************
.  ****************************************************************************
.  *** Vars ***
.
HEADCOD   DIM       6
INSUR     DIM       6
LEDGER    DIM       2
.
.  ****************************************************************************
.  *** Sector 33 ***
.
PRICN005  DIM       8      * Next Invoice Number
PRICN006  DIM       1      * Audit A (Not Used)
PRICN007  DIM       1      * Audit B (Not Used)
PRICN008  DIM       1      * Doctor File Audit
PRICN009  DIM       1      * Debtor File Audit
PRICN010  DIM       1      * Medical Practice File Audit
PRICN011  DIM       1      * Audit F (Not Used)
PRICN012  DIM       1      * Special Pathology Test Audit
PRICN013  DIM       1      * Exception Charges File Audit
PRICN014  DIM       1      * Item File Audit    
PRICN015  DIM       8      * Fee's Invoiced Report Date (CCYYMMDD)
PRICN016  DIM       1      * Doctor charge audit
PRICN017  DIM       30     * Clinic Name on Invoice
PRICN018  DIM       12     * Telephone Number on Invoice
PRICN019  DIM       1      * Use Medical Practice Name on Invoice
PRICN020  DIM       1      * Print Journals on Invoice
PRICN021  DIM       1      * Generate Debtor Number Automatically
PRICN022  DIM       8      * Next Debtor Number to be Generated
PRICN023  DIM       1      * Using User Defined Field 1 (Code G1)
PRICN024  DIM       1      * User Defined Field 1 Mandatory
PRICN025  DIM       1      * Using User Defined Field 2 (Code G2)
PRICN026  DIM       1      * User Defined Field 2 Mandatory
PRICN027  DIM       1      * Using User Defined Field 3 (Code G3)
PRICN028  DIM       1      * User Defined Field 3 Mandatory
PRICN029  DIM       1      * Using User Defined Field 4 (Code G4)
PRICN030  DIM       1      * User Defined Field 4 Mandatory
PRICN031  DIM       1      * Using User Defined Field 5 (Code G5)
PRICN032  DIM       1      * User Defined Field 5 Mandatory
PRICN033  DIM       1      * Using User Defined Filed 6 (Code G6)
PRICN034  DIM       1      * User Defined Field 6 Mandatory
PRICN035  DIM       1      * Using User Defined Field 7 (Code G7)
PRICN036  DIM       1      * User Defined Field 7 Mandatory
PRICN037  DIM       1      * Using User Defined Field 8 (Code G8)
PRICN038  DIM       1      * User Defined Field 8 Mandatory
PRICN039  DIM       1      * Using User Defined Field   (Code MO)
PRICN040  DIM       1      * User Defined Field 9 Mandatory
PRICN041  DIM       1      * Using User Defined Field   (Code MP)
PRICN042  DIM       1      * User Defined Field 10 Mandatory
PRICN043  DIM       6      * Insurance Company Code for W/Comp.
PRICN044  DIM       6      * Insurance Company Code for M.A.B.
PRICN045  DIM       6      * Insurance Company Code for V.A.
PRICN046  DIM       1      * Use Health Funds ?
PRICN047  DIM       1      * Referring Doctor Mandatory ?
PRICN048  DIM       6      * Start of Year Date (DDMMYY)
PRICN049  DIM       1      * Invoice Layout
PRICN050  DIM       1      * Aged Trial Balance Layout
PRICN051  DIM       8      * Next Unique Identifier
PRICN052  DIM       1      * Special Character to signify keyin
PRICN053  DIM       1      * Linked to patient system
PRICN054  DIM       8      * Next unique claims number
PRICN055  DIM       8      * Next claim number for bulk billing
PRICN056  DIM       1      * Keyin journal date
PRICN057  DIM       1      * Using Outpatient system
PRICN058  DIM       1      * Referring doctor on transaction screen
PRICN059  DIM       9      * S4B3 Exemption item
PRICN060  DIM       1      * Default value for PRA for U/R's
PRICN061  DIM       1      * Import Doctor charges to Accounts
PRICN062  DIM       2      * Ledger for Private Practice Payment
PRICN063  DIM      12      * Account Code for PP Payment
PRICN064  DIM       2      * Ledger for Commission
PRICN065  DIM      12      * Account Code for Commission
.
.*****************************************************************
.     SECTOR 34
.
PRICN201  DIM       1      * Hospital Type
PRICN202  DIM       25     * Hospital Postal Address Line 1
PRICN203  DIM       25     * Hospital Postal Address Line 2
PRICN204  DIM       25     * Hospital Postal Address Line 3
PRICN205  DIM       4      * Hospital Postcode
PRICN206  DIM       1      * Include "Paid" column in ATB
PRICN207  DIM       3      * Period 1 days for ATB
PRICN208  DIM       11     * Period 1 column header for ATB
PRICN209  DIM       3      * Period 2 days for ATB
PRICN210  DIM       11     * Period 2 column header for ATB
PRICN211  DIM       3      * Period 3 days for ATB
PRICN212  DIM       11     * Period 3 column header for ATB
PRICN213  DIM       3      * Period 4 days for ATB
PRICN214  DIM       11     * Period 4 column header for ATB
PRICN215  DIM       3      * Period 5 days for ATB
PRICN216  DIM       11     * Period 5 column header for ATB
PRICN217  DIM       3      * Period 6 days for ATB
PRICN218  DIM       11     * Period 6 column header for ATB
PRICN219  DIM       1      * Running General Ledger Interface ?
PRICN220  DIM       20     * Path of General Ledger Data Directory
PRICN221  DIM       1      * Generate Batch Numbers in IBAPRI04?
PRICN222  DIM       8      * Next Generated Batch Number in
PRICN223  DIM       1      * Special character for test codes
PRICN224  DIM       1      * Interface for HRH
PRICN225  DIM       1      * UDF being used for referral length
PRICN226  DIM       1      * Type of fees allocation
PRICN227  DIM       1      * Print batch inv.for current admis.?
PRICN228  DIM       6      * PRI Invoice Header Code (templated)
PRICN229  DIM       6      * PRI Invoice Tail Code (templated)
PRICN230  DIM       8      * Next Credit Note Number
PRICN231  DIM       1      * No Rounding on Adjustment calculation
PRICN232  DIM       1      * Group Item by Set Code on G/L Interface
PRICN233  DIM       3      * Journal Code for Transfer payment
PRICN234  DIM       1      * Print Journal Code on Invoice
PRICN235  DIM       1      * Print Zero amt item on Lingard format
