.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : PATWMAFD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for Patient                   *
.  *                    Motor Accident Board Claims                           *
.  *                                                                          *
.  *     File Type    : SQL                                                   *
.  *                                                                          *
.  *     File Name    : patwmabf.dat                                          *
.  *                                                                          *
.  *     Keys         : KEY 8                                                 *
.  *                    KEY 16                                                *
.  *                                                                          *
.  *     Modification :                                                       *
.  *     V10.04.01 06/01/2014  Don Nguyen     CAR 294450                      *
.  *               Increased record size for new spare variable size.         *
.  *               Moved PTWMICDE out of spare variable.                      *
.  *     V10.03.01 10/10/2012 Patrick Adair   CAR 273294                      *
.  *               Added Insurance Company Code                               *
.  *      V9.02.02 J.Tan   SRF 20178                                          *
.  *               Added index 3, visit date                                  *
.  *      V9.02.01 Peter Vela            SRF 18390                            * 
.  *               Added UR Number and KEY 16                                 *
.  *      V5.10.01 J.Tan                                                      *
.  *               Added TAC Claim Form Completed & Type field                *
.  *                                                                          *
.  ****************************************************************************
.
PATWMAB1   IFILE SQL, FIXED=454, KEY="U1-8"
PATWMAB2   IFILE SQL, FIXED=454, KEY="U382-389,1-8"
PATWMAB3   IFILE SQL, FIXED=454, KEY="U9-28,382-389,1-8,390-397"
.
. NAME     TYPE   LENGTH   PHYSICAL   START LOC.  DESCRIPTION
. ----     ----   ------   --------   ----------  -----------
DMADMNO    DIM       8          8           1     ADMISSION NUMBER
MREFNO     DIM      20         20           9     M.A.B. REFERENCE NUMBER
MPOLIC     DIM      20         20          29     POLICE STAT. ACCT REPORTED TO
MACDAT     DIM       8          8          49     DATE OF ACCIDENT (YYMMDD)
MSNAME     DIM      30         30          57     SOLICITOR NAME
MSTELE     DIM      12         12          87     SOLICITOR TELEPHONE
MCREGO     DIM      36         36          99     CAR REGO NUMBERS INVOLVED
MACLOC     DIM      40         40         135     ACCIDENT LOCATION
MDPINDIC   FORM      1          2         175     1= DRIVER, 2= PASSENGER
MENGAGED   DIM      20         20         177     WHILE ENG IN-FREE FORMAT ENTRY
MPINJURE   DIM      30         30         197     PATIENT INJURED WHEN
MMDTRANS   DIM      10         10         227     MODE OF TRANSPORT
MMECHSEV   DIM      30         30         237     MECHANISM OF SEVERIST INJURY
MREGNSEV   DIM      20         20         267     REGION OF SEVERIST INJURY
MOTHDET1   DIM      30         30         287     OTHER DRIVER DETAILS LINE 1
MOTHDET2   DIM      30         30         317       "     "      "     LINE 2
MOTHDET3   DIM      30         30         347       "     "      "     LINE 3
PTWMTACF   FORM      1          2         377     TAC CLAIM FORM COMPLETED ?
.                                                 0 = No, 1 = Yes
PTWMTYPE   DIM       3          3         379     Role in Accident (CAT RA)
PTWMURNO   DIM       8          8         382     UR Number
PTWMVDAT   DIM       8          8         390     Visit Date
PTWMICDE   DIM       6          6         398     INSURANCE COMPANY CODE
MSPARE     DIM      50         50         404     SPARE
.
.End of Record                            454
.
. redefine form fields from key
. -----------------------------
.NAME     TYPE    LENGTH     START LOC.   DESCRIPTION
.----     ----    ------     ----------   -----------
MADMNO    FORM        8             1     ADMISSION NUMBER
.
. The following field has been added into the spare variable
.
