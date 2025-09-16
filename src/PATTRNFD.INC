. *****************************************************************************
. *                                                                           *
. * Include Name  : PATTRNFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Patient                       *
. *                 Transfer Details                                          *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : pattranf.dat                                              *
. *                                                                           *
. * Keys          : KEY 30 ,KEY31                                             *
. *                                                                           *
. * Modification  :                                                           *
. *  **** Programmer Note **************                                      *
. *       Any changes to this FD may also need to be made in PMSQVIFD.        *
. *       Please check this before proceeding.                                *
. *                                                                           *
. *       V10.12.01 08/03/2018  Jill Parkinson   TSK 0848131                  *
. *                 Added index 6                                             *
. *       V10.08.01 01/04/2016  Steve Armstrong  TSK 0296379                  *
. *                 Added PTTRFSRC, PTTRHFND, PTTRFTBL, PTTRHFMN & PTTRHFCN   *
. *****************************************************************************
. *       V10.07.01 19/10/2015  Don Nguyen       CAR 316625                   *
. *                 Added PTTRCASE - Case Team                                *
. *****************************************************************************
. *       V10.03.01 08/05/2012  Steve Armstrong  CAR 236804                   *
. *                 Added Index 5                                             *
. *****************************************************************************
. *       V10.02.01 21/06/2011  Davin            CAR 242269                   *
. *                 Added fields TRTY to RESI for WA Health                   *
. *****************************************************************************
. *       V10.01.02 02/12/2010  Peter Vela       CAR 233924                   *
. *                 Added PTTRCLTY - Claim Type (Cat CL)                      *
. *       V10.01.01 24/11/2010  Peter Vela       CAR 233148                   *
. *                 Added PTTRUCID - Web User ID who Created Record           *
. *                 Added PTTRUUID - Web User ID who Updated Record           *
. *****************************************************************************
. *       V9.04.02  28/07/2005  Peter Vela       CAR 67306                    *
. *                 Added PTTRLTSC - Leave Transfer Source                    *
. *       V9.04.01  03/08/05 J.Tan    CAR 62750                               *
. *                 Removed redefined amount variables                        *
. *       V9.03.01  10/12/2003  Ebon Clements    CAR 46022                    *
. *                 Changed length to 261 and added created date,time and user*
. *       V9.02.02  30/04/2002  J.Tan                                         *
. *                 Added pttrauat                                            *
. *       V9.02.01  06/12/2001  Tonii                                         *
. *                 Remove Episode type                                       *
. *                 V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes        *
. *                 V5.07.002 23/02/99 J.Tan  Added variables for casemix     *
. *                 V5.07.003 02/09/99 J.Tan  Added Nursing home code (SPARE) *
. *                 V5.07.004 22/11/99 J.Tan  Added Operator Id               *
. *****************************************************************************
.
PATTRAN1  IFILE     SQL, FIXED=393, KEY="U1-3,4-6,7-14,15-22,32-39"
PATTRAN2  IFILE     SQL, FIXED=393, KEY="U32-39,7-14,15-22,1-3,4-6"
PATTRAN3  IFILE     SQL, FIXED=393, KEY="U75-80,7-14,15-22,1-3,4-6,32-39"
PATTRAN4  IFILE     SQL, FIXED=393, KEY="U1-3,7-14,15-22,4-6,32-39"
PATTRAN5  IFILE     SQL, FIXED=393, KEY="U7-14,15-22,23-23,1-3,4-6,32-39"
PATTRAN6  IFILE     SQL, FIXED=393, KEY="U191-198,199-206,32-39,7-14,15-22,1-3,4-6"
.
. Name    Type      Length   Phys.  Start  Description
. ----    ----      ------   -----  -----  -----------
TWARD     DIM       3            3      1  TRANSFER WARD NUMBER
TBED      DIM       3            3      4  TRANSFER BED NUMBER
TDATE     DIM       8            8      7  TRANSFER DATE (CCYYMMDD)
TTIME     DIM       8            8     15  TRANSFER TIME (HH:MM)
TMOVE     DIM       1            1     23  MOVEMENT TYPE
.                                             A - ADMISSION
.                                             D - DISCHARGE
.                                             C - CHANGE RECORD
.                                             L - ON LEAVE
.                                             R - RETURN FROM LEAVE
TURNO     DIM       8            8     24  PATIENT U/R  NUMBER
DTADMN    DIM       8            8     32  PATIENT ADMISSION  NUMBER
TRATEF    FORM     12.2          8     40  PAT PORTION OF DAILY CHARGE
.                                             Daily rate = TRATEF + TRATEH
.                                                          - TDISC - TALLW
.                                          Accommodation Charge - Nursing Home
TRATEG    FORM     12.2          8     48  GOVERNMENT  CHARGEABLE
TDISC     FORM     12.2          8     56  PAT DISC (SUB FROM TRATEF)
TALLW     FORM     12.2          8     64  PAT ALLOW (SUB FROM TRATEF)
TATYPE    DIM       3            3     72  ADMISSION TYPE
TADOCT    DIM       6            6     75  ATTENDING DOCTOR
TRATEH    FORM     12.2          8     81  H/FND PORTION OF DAILY CHARGE
TEXTRA    FORM     12.2          8     89  EXTRA CHGE PER DAY (PUB HOSP)
PTTRITFS  FORM     12.2          8     97  Nursing Home Income Tested fee
TFORM12A  FORM     12.2          8    105  SPARE FORM 12.2
.
TRCDATE   DIM       8            8    113  DATE THIS RECORD LAST CHANGED
TRCTIME   DIM       8            8    121  TIME THIS RECORD LAST CHANGED
.
TRBTYP    DIM       3            3    129  E.F.R. BED TYPE FOR THIS BED
TRBEND    FORM      3            3    132  END DAY IN RNGE FOR THIS RATE
TCHSTAT   DIM       3            3    135  CHRGEABLE STATUS (USER DEF.2)
.                                          (PUBLIC HOSPITAL ONLY)
.
TDEPT     DIM       3            3    138  DEPARTMENT CODE (CAT AC)
PTTRLTYP  DIM       3            3    141  Type of Patient leave (Cat TL)
DPTTREPN  DIM       2            2    144  Episode number
PTTREPSD  FORM      1            2    146  Manual Stepdown            
.                                           0 - Normal
.                                           1 - Forced Stepdown
.                                           2 - Bed Fee Update 
PTTRLSPT  FORM     12.2          8    148  Patient portion of lumpsum
PTTRLSRB  FORM     12.2          8    156  Rebate portion of lumpsum
PTTRAEND  FORM      4            3    164  End day for additional rate
PTTRADPT  FORM     12.2          8    167  Additional dialy rate - pat.
.                                          Resident contribution - Nursing Home
PTTRADRB  FORM     12.2          8    175  Additional daily rate - rebate
PTTRNHAC  DIM        3           3    183  Nursing Home Account code (Catg NH)
PTTROPER  DIM        4           4    186  Operator Id
PTTRAUAT  DIM        1           1    190  Auto update of admission type
PTTRCDAT  DIM        8           8    191  Date Record Created (CCYYMMDD)
PTTRCTIM  DIM        8           8    199  Time Record Created (hh:mm:ss)
PTTRCUID  DIM        4           4    207  Passcode Created 
PTTRLTSC  DIM        5           5    211  Leave Transfer Source  
PTTRUCID  DIM       10          10    216  Web User Id who Created Record
PTTRUUID  DIM       10          10    226  Web User Id who Updated Record
PTTRCLTY  DIM        3           3    236  Claim Type (Cat CL)
PTTRTRTY  DIM        3           3    239  Transfer Type (Cat RB)
PTTRTEAM  DIM        5           5    242  Team
PTTRRSTR  DIM       10          10    247  Registrar
PTTRRESI  DIM       10          10    257  Resident
PTTRCASE  DIM       10          10    267  Case Team (allcasaf)
PTTRFSRC  DIM       3           3     277  Funding Source (Cat cx)
PTTRHFND  DIM       6           6     280  Health Fund Code (patfn1af)
PTTRFTBL  DIM       8           8     286  Health Fund Table (patfn1af)
PTTRHFMN  DIM       19          19    294  Health Fund Membership Number
PTTRHFCN  DIM       40          40    313  Health Fund Contributor Name
PTTRSPAR  DIM       40          40    353  Spare variable
.
.End of Record                        393
.
.         SPARE VARIABLES
.
STWARD    DIM       3         * TRANSFER WARD NUMBER
STBED     DIM       3         * TRANSFER BED NUMBER
STDATE    DIM       8         * TRANSFER DATE (CCYYMMDD)
STTIME    DIM       8         * TRANSFER TIME (HH:MM)
STMOVE    DIM       1         * MOVEMENT TYPE
STURNO    DIM       8         * PATIENT U/R  NUMBER
STADMN    FORM      8         * PATIENT ADMISSION  NUMBER
STRATEF   FORM      12.2      * PATIENT FEE CHARGEABLE
STRATEG   FORM      12.2      * GOVERNMENT  CHARGEABLE
STDISC    FORM      12.2      * PATIENT DISCOUNT
STALLW    FORM      12.2      * PATIENT ALLOWANCE
STATYPE   DIM       3         * ADMISSION TYPE
STACLM    DIM       3         * CLAIM TYPE
STADOCT   DIM       6         * ATTENDING DOCTOR
STRATEH   FORM      12.2      * HEALTH FUND PORTION
STEXTRA   FORM      12.2      * SPARE FORM 12.2
STRBTYP   DIM       3         * E.F.R. BED TYPE FOR THIS BED
STRBEND   FORM      3         * END DAY IN RANGE FOR THIS RATE
STCHSTAT  DIM       3         * CHARGEABLE STATUS
STDEPT    DIM       3         * DEPARTMENT CODE
STEPNO    FORM      2         * EPISODE NUMBER
SPTTRADP  FORM      12.2      * Additional daily rate - patient
SPTTRADR  FORM      12.2      * Additional daily rate - rebate
SPTTRLSP  FORM      12.2      * Patient portion of lumpsum
SPTTRLSR  FORM      12.2      * Rebate portion of lumpsum
SPTTREPS  FORM      1         * Casemix funded indicator
SPTTRAEN  FORM      4         * End day for additional rate
SPTTRITF  FORM      12.2      * Income tested fee
SPTTRNHA  DIM        3        * Nursing Home Account code (Catg NH)
.
.         Extra Variables used just for the I/O include to handle key changes
.
SSTWARD   DIM       3         * TRANSFER WARD NUMBER
SSTBED    DIM       3         * TRANSFER BED NUMBER
SSTDATE   DIM       8         * TRANSFER DATE (CCYYMMDD)
SSTTIME   DIM       8         * TRANSFER TIME (HH:MM)
SSTADMN   FORM      8         * PATIENT ADMISSION  NUMBER

.  redefine FORM fields from key
.  -----------------------------
. NAME    TYPE      LENGTH  START  DESCRIPTION
. ----    ----      ------  -----  -----------
TADMN     FORM      8          30  PATIENT ADMISSION  NUMBER
PTTREPNO  FORM      2              Episode number
.
