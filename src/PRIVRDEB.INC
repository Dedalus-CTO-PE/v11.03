+
.        V10.13.01 26/07/2018  J.Tan            TSK 0848506
.                  Changed PP Doctor from DIM6 to DIM10
.        V10.08.01 07/09/2016 J.Tan      TSK 0822590
.                  Changed VDEBADD to DIM 35
.        V10.04.01 21/01/2014  Patrick Adair    CAR 265844
.                  Increase PRA address and phone field lengths and add
.                  new fields for State and mobile phone
.        V9.08.01 14/05/2007 Peter Vela CAR 136586
.                 Added work variable for referral period
.        V6.00.01 07/10/93 J.Tan  SRF 125349
.                 Changed person responsible for account name to be 40 chars.
.         V6.01.01  19/01/1994  Greg Horvat      SRF 127350                   
.                   Fixed problem where medical provider no. is also printed
.                   as referring doctor provider no.
.         V6.01.02  05/10/1995  Steve Armstrong
.                   Added DEBTNUM & ALTFORM2
.******************************************************************************
.
.         Variables for use with PRIKYDEB include.
.
.------------------------------------------------------------------------------
.
ALTFORM2  FORM      2
DEBTNUM   DIM       8[19]
FNGNAME   DIM       30            * Given name string for formatting routine
FNSNAME   DIM       30            * Surname string for formatting routine
FNFNAME   DIM       30            * Formatted name string produced from above
.
PNTITLE   DIM       4             * Title string for 2nd formatting routine
PNSNAME   DIM       30            * Surname string for 2nd formatting routine
PNGNAME   DIM       30            * Given name string for 2nd formatting routine
PNFNAME   DIM       30            * Formatted name string produced from above
.
SAVADMN   FORM      8             * Save variable for Admission number
SAVURNO   FORM      8             * Save variable for U/R number
SSSNAME   DIM       20            * Surname (surname search)
SSGNAME   DIM       14            * Given name (surname search)
SSSEX     DIM       1             * Sex (surname search)
SSDATE    DIM       6             * Date of birth (surname search)
SSFOUND   FORM      1             * Records found flag (surname search)
SSCREEN   FORM      1             * Screen restore flag
.                                       0 = no restore
.                                       1 = restore
ZED8      INIT      "zzzzzzzz"
.
VDIM8     DIM       8
VDIM9     DIM       9
VDIM15    DIM       15
VFORM6    FORM      6
VFORM8    FORM      8
VFORM9    FORM      9
VSP14     INIT      "              "
VSVDOCT   DIM       10           ** Keyed in Service Doctor's code          **
VSVDCNAM  DIM       30            * Formatted Service Doctor's name
VDEBTOR   DIM       8            ** Keyed in Debtor's number                **
VDEBNAME  DIM       30            * Formatted Debtor's name
VBADEBT   FORM      1             * Bad debt indicator
.                                     0 = No, 1 = Yes
VDEBADD1  DIM       35            * Debtors address line 1
VDEBADD2  DIM       35            * Debtors address line 2
VDEBADD3  DIM       35            * Debtors address line 3
VDEBADD4  DIM       35            * Debtors address line 4
VDEBPOST  DIM       4             * Debtors postcode
VDEBTELP  DIM       12            * Debtors telephone (Private)
VDEBTELB  DIM       12            * Debtors telephone (Business)
VPRANAME  DIM       40            * Person Responsible for Account name
VPRAADD1  DIM       35            * P.R.A. address line 1
VPRAADD2  DIM       35            * P.R.A. address line 2
VPRAADD3  DIM       35            * P.R.A. address line 3
VPRAADD4  DIM       35            * P.R.A. address line 4
VPRAPOST  DIM       8             * P.R.A. postcode
VPRATELP  DIM       20            * P.R.A. telephone (Private)
VPRATELB  DIM       20            * P.R.A. telephone (Business)
VPRAMPHN  DIM       20            * P.R.A. mobile phone           
VPRARELP  DIM       10            * P.R.A. relationship
VCOMPCD   DIM       3            ** Keyed in Compensation code              **
VCOMPDSC  DIM       20            * Description for compensation code
VRFDOCT   DIM       10           ** Keyed in Referring Doctor's code        **
VRFDCNAM  DIM       30            * Formatted Referring Doctor's name
VREFERD   DIM       50           ** Keyed in Referral details               **
VRFDPROV  DIM       10           * Provider no. for printing referring doctors
VMESGCD   DIM       3            ** Keyed in Message code                   **
VMESGDSC  DIM       35            * Description for message code
VSRVDTE   DIM       6            ** Keyed in Service date                   **
VSRVTIM   DIM       8            ** Keyed in Service time                   **
VSERVS    FORM      2            ** No. of Services rendered                **
VSVDPROV  DIM       10           * Provider no. for printing med. service doc's
VITEMCD   DIM       9            ** Keyed in Item code                      **
VITEMDSC  DIM       30           ** Description for item code               **
VAMOUNT   FORM      8.2          ** Keyed/Read in Item amount               **
VRMALPHA  INIT      "A0B0C0D0E0F0G0H0I0J0K0L0M0N0O0P0Q0R0S0T0U0V0W0X0Y0Z0"
VSCANPMI  FORM      2             * 0=Check debtor file, 1=Check PMI file
VDOB      DIM       10           ** Formatted Date of Birth (DD/MM/CCYY)
VCVERT    FORM      2
VCCOL     FORM      2
VREFRPER  DIM       20           ** Referral Period Description
.
