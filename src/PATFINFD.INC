. V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes 
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATFINFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Financial Summary                               *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patfinsf.dat  (Invoice financial file)          *
.  *                    patfigaf.dat  (GST financial file)              *
.  *                                                                    *
.  *     Keys         : KEY 28                                          *
.  *                                                                    *
.  *     Modification :                                                 *
.  *        V11.01.01 25/08/2021 J.Tan TSK 0903454                      *
.  *                  Added Claim code to lumpsum/Daily for CACCFEE=4   *
.  *        V10.14.01 20/11/2019 J.Tan TSK 0857392                      *
.  *                  Added Booked Outpatient for Inv.pending only      *
.  *        V10.12.01 11/01/2018 J.Tan TSK 0848146                      *
.  *                  Added group by 'Claim Type' for Accommodation rec.*
.  *        V9.11.01  31/12/2008   Steve Armstrong   CAR 183976         *
.  *                  Added EHXXXXXX & ECXXX to FINCODE for Eclipse     *
.  *                  payments                                          *
.  *        V9.04.02  03/08/05 J.Tan    CAR 62750                       *
.  *                  Removed redefined amount variables                *
.  *        V9.04.01  17/08/2004 Lina Vo CAR 52746                      *
.  *                  Added Hospital ID and 2nd index with Hospital ID  *
.  *                  first. Changed 1st index to include Hospital ID.  * 
.  *        V9.03.01  13/10/2003 J.Tan                                  *
.  *                  Mods for credit note                              *
.  *        V9.02.00  18/10/2001 J.Tan                                  *
.  *                  Modified descriptions for casemix                 *
.  *        V5.09.00  27/11/00 J Habasque                               *
.  *                  Changed from 3&5 for episode type to daycase 0,1  *
.  *                    15/02/00 J.Tan                                  *
.  *                    Added patfigaf for GST                          *
.  *                    18/02/99 J.Tan                                  *
.  *                    Added casemix payment                           *
.  *                    02/09/99 J.Tan                                  *
.  *                    Added financial code   for nursing home         *
.  *                                                                    *
.  **********************************************************************
.
PATFINS1   IFILE SQL, FIXED=156, KEY="U1-1,2-7,8-11,12-12,13-25,146-148"
PATFINS2   IFILE SQL, FIXED=156, KEY="U146-148,1-1,2-7,8-11,12-12,13-25"
.
. NAME     TYPE   LENGTH   PHYSICAL   START LOC.   DESCRIPTION
. ----     ----   ------   --------   ----------   -----------
DFINSYS     DIM       1          1          1      SYSTEM INDICATOR
.                                                   1 = A + E
.                                                   2 = Outpatient
.                                                   3 = Inpatient
.                                                   4 = Other Financial
.                                                   5 = Day Centre     
.                                (Inv.Pending Only) 6 = ABF Booked Outpatient
FINSITE     DIM       6          6          2      OUTPATIENT SITE
FINYEAR     DIM       4          4          8      FINANCIAL YEAR
FINTYPE     DIM       1          1         12      FINANCIAL TYPE
.                                                   A - FEES GENERATED  
.                                                   B - CASH RECEIVED
.                                                   C - JOURNALS
.                                                   D - MERCHANT CARDS - CLAIMED
.                                                   E - MERCHANT CARDS - PAID
.                                                   F - MERCHANT CARDS - COMMIS
.                                                   G - MERCHANT CARDS - JOUR
FINCODE     DIM       13         13        13      FINANCE CODE
.                                                 FOR FEES INVOICED
.                                                   Accommodation Non-Casemix...
.                                                   -------------------------
.                                                   AXXXYYY  - I/P ACCOMMODATION
.                                                   NXXXYYY  - Credit Note Accm.
.                                      CACCFEE=0       XXX - ADMISS TYPE
.                                                            OR WARD OR CLAIMTYP
.                                                      YYY - BLANK OR
.                                                            CLAIM TYPE
.
.                                                   AXXXYYYZ - I/P ACCOMODATION
.                                                   NXXXYYYZ - Credit Note
.                                                      XXX - CLAIM TYPE
.                                                      YYY - ADMISS TYPE
.                                                      Z   - EXTRA CHRG
.                                                            (0 = Other)
.                                                            (1 = Extra)
.                                                   AXXXXXX  - O/P CHARGE
.                                                   NXXXXXX  - Credit Note O/P
.                                                      XXXXXX - CLINIC
.
.                                                   Accommodation Casemix....
.                                                   -------------------------
.                                   LUMPSUM         CXYYYZZZ - Lumpsum (Casemix)
.                                                   HXYYY - Credit Note Lumpsum
.                                                    X   - Daycase/Overnight
.                                                      (0 - Overnight,1-Daycase)
.                                                    YYY - Adm.Type or ClaimTyp
.                                      CACCFEE=4     YYY - Adm.Type
.                                                    ZZZ - ClaimType
.
.                                   DAILY CHARGE    DXXXZZZ - Daily charge
.                                                            (Casemix)
.                                                   XXX - Ward or ClaimType
.                                      CACCFEE=4    XXX - Ward
.                                                   ZZZ - ClaimType
.
.                                                   JXXX - Credit Note Daily Chg
.                                                      XXX - Ward or ClaimType
.             <Nursing Home is not use anymore>
.                                                   Accommodation Nursing Home..
.                                                   -------------------------
.                                                   RXXX - Resident Contribution
.                                                    XXX - NH Account code
.                                                   A    - Accommodation charge
.                                                   I    - Income tested fee
.
.                                                   Miscellaneous Casemix....
.                                                   -------------------------
.                                                   TXYYYZZZ - Misc items(Csmix)
.                                                   PXYYYZZZ - Crd.Note Cmx Misc
.                                                    X   - Episode Type
.                                                        0 - MSO ,1 - Daycase
.                                                    YYY - Misc.Item group
.                                                    ZZZ - Misc.Item code
.                                                   or
.                                      PTCNMFEE=1   TXYYYZZZ - Misc items(Csmix)
.                                                   PXYYYZZZ - Crd.Note Cmx Misc
.                                                    X   - Episode Type
.                                                        0 - MSO ,1 - Daycase
.                                                    YYY - Claim code
.                                                    ZZZ - Misc.Item group
.
.                                                   Miscellaneous Non-Casemix...
.                                                   -------------------------
.                                                   MXXXYYYY - MISC ITEMS 
.                                                   QXXXYYYY - Credit Note Misc.
.                                                             XXX - MIS ITM GRP
.                                                             YYYY - MIS ITM CDE
.                                                   or
.                                      PTCNMFEE=1   MXXXYYYY - MISC ITEMS (CL)
.                                                   QXXXYYYY - Credit Note
.                                                             XXX - CLAIM CODE
.                                                             YYYY - MIS GRP CDE
.
.                                                   G        - GOVERNMENT SUBSID
.                                                   S        - Credit Note
.
.                                                 FOR RECEIPTS
.                                                 -------------
.                                                   A        - FROM PATIENT
.                                                   BXXXXXX  - FROM HEALTH FUND
.                                                   C        - FROM GOVT SUBSIDY
.                                                   DXXX     - DEPOSITS
.                                                   EHXXXXX  - Eclipse payments
.                                                              XXXXXX - H. Fund
.                                                   ECXXX    - Eclipse payments
.                                                              XXX - Claim Code
.                                                   IXXXXXX  - FROM INSURANCE CO.
.                                                   MXXX     - FROM PATIENT
.                                                              VIA MERC CARDS
.                                                 FOR  JOURNALS
.                                                 -------------
.                                                   XX       - JOURNAL CODE
.                                      PTCNJFEE=1   XXXYY    - JOURNAL CODE (CL)
.                                                              XXX - CLAIM CODE
.                                                              YY - JOURNAL CODE
.                                                   WCXXX    - MERCHANT COMMISS
.                                                              XXX - MERC CODE
.                                                   WJXXX    - MERCHANT JOURNAL
.                                                              XXX - MERC CODE
.                                                 FOR  MERCHANT CARDS
.                                                 -------------------
.                                                   XXX       - MERCHANT CODE
FINPER      FORM   12.2          8         26      PERIOD AMOUNT
FINMTH1     FORM   12.2          8         34      AMOUNT FOR MONTH 1
FINMTH2     FORM   12.2          8         42      AMOUNT FOR MONTH 2
FINMTH3     FORM   12.2          8         50      AMOUNT FOR MONTH 3
FINMTH4     FORM   12.2          8         58      AMOUNT FOR MONTH 4
FINMTH5     FORM   12.2          8         66      AMOUNT FOR MONTH 5
FINMTH6     FORM   12.2          8         74      AMOUNT FOR MONTH 6
FINMTH7     FORM   12.2          8         82      AMOUNT FOR MONTH 7
FINMTH8     FORM   12.2          8         90      AMOUNT FOR MONTH 8
FINMTH9     FORM   12.2          8         98      AMOUNT FOR MONTH 9
FINMTH10    FORM   12.2          8        106      AMOUNT FOR MONTH 10
FINMTH11    FORM   12.2          8        114      AMOUNT FOR MONTH 11
FINMTH12    FORM   12.2          8        122      AMOUNT FOR MONTH 12
FINMTH13    FORM   12.2          8        130      AMOUNT FOR MONTH 13 (!)
FLSTYR      FORM   12.2          8        138      LAST YEAR AMT SINCE LAST YEAR
FINHOSP     DIM       3          3        146      Hospital ID (pathspaf)
FSPARE      DIM       7          7        149      SPARE
.
.End of Record                            156
.
.    WORK FIELDS USED IN PATCALFN
.
FINDATE     DIM        8                * Date to be posted (CCYYMMDD)
FINAMT      FORM       12.2             * Amount to be posted
FINWRK      FORM       12.2             * Work variable for LOAD/STORE
FOFFSET     FORM       2                * Month offset in file
.
.  redefines form fields for key
.  -----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
FINSYS     FORM          1             1     SYSTEM INDICATOR
