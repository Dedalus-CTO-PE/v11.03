. V10.11.01 14/07/2017  Tracey Nguyen     TSK 0835226
.           Added PTMCEHCP for Health Care Provider (Eclipse)
.---------------------------------------------------------------------------- 
. V10.01.01 25/11/2010  Mike Laming       CAR 233046
.           Moved PTMCACTV out of MSPARE, added PTMCHFTT (H/F Table Type) and
.           PTMCETDT (Effective to Date), removed MHFTAB (Health Fund Table),
.           modified Keys to use PTMCHFTT (not MHFTAB). New length = 186
.-----------------------------------------------------------------------------
. V10.00.01 29/04/2010  Steve Armstrong   CAR 220887
.           Added PTMCACTV
. V9.11.01  24/11/08 Ebon Clements CAR 183976
.           Added PTMCECEQ and PTMCECTS
. V9.10.01  30/05/08 J.Tan    CAR 168458
.           Added 4rd index
. V9.09.01  20/11/2007 Peter Vela CAR 155334
.           Added PTMCPRTR Prosthetic for tracking.
. V9.08.01  04/10/06 J.Tan    CAR 120000
.           Added 3rd index
. V9.07.01  07/09/06 J.Tan    CAR 103367
.           Added Alternate Category Group
. V9.04.01  03/08/05 J.Tan    CAR 62750
.           Removed redefined amount variables
. V9.03.01  27/08/2003  Lina Vo    CAR 36486 & 40497
.           Added PTMCCOBD, PTMCTACT, PTMCTACD, PTMCEFDT and extended spare 
.           variable.  Made PTMCEFDT part of the key.
. V9.02.01  14/04/2003  Davin  CAR/Quote 23297
.           Added PTMCKREB
. V5.09.B01 14/12/2000  Ebon Clements    509 Mods 
.           Added PTMCCFCY - Casemix funding chargeable
. V5.08.01 15/08/2000  Caleb Sharman                        
.           Changed Health Fund variables to be 8 chars     
. V5.08.01  07/07/2000  Greg Horvat
.           Added PTMCEDIE - EDI Equivalent
. V5.08.00  21/01/2000 Jill Habasque Added PTMCGSTA & PTMCGSTC
. V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes 
.  *************************************************************************
.  *                                                                       *
.  *     Include Name : PATMCHFD.INC                                       *
.  *                                                                       *
.  *     Function     : File Definition include for                        *
.  *                    MISCELLANEOUS CHARGES FILE                         *
.  *                                                                       *
.  *                                                                       *
.  *     File Type    : SQL                                                *
.  *                                                                       *
.  *     File Name    : patmchgf.dat                                       *
.  *                                                                       *
.  *                      1      2      3      4                           *
.  *     Keys         : KEY29, KEY59, KEY32, KEY29                         *
.  *                                                                       *
.  *     Mods         :                                                    *
.  *                                                                       *
.  *************************************************************************
.
PATMCHG1   IFILE SQL, FIXED=186, KEY="U1-3,4-9,10-12,13-21,104-111"
PATMCHG2   IFILE SQL, FIXED=186, KEY="U22-51,1-3,4-9,10-12,13-21,104-111"
PATMCHG3   IFILE SQL, FIXED=186, KEY="U1-3,4-9,10-12,54-56,104-111,13-21"
PATMCHG4   IFILE SQL, FIXED=186, KEY="U13-21,1-3,4-9,10-12,104-111"             
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
MCLMCOD    DIM         3         3         1      CLAIM CODE (Cat CL)
MHFUND     DIM         6         6         4      HEALTH FUND
PTMCHFTT   DIM         3         3        10      H/F Table Type (Cat."HT")
MCHARGE    DIM         9         9        13      CHARGE CODE
MDESC      DIM        30        30        22      DESCRIPTION
MITMTYP    FORM        1         2        52      CHARGE TYPE 
.                                                 2 = THEATRE FEE
.                                                 3 = MISC. ITEM
.
MMSCGRP    DIM         3         3        54      MISC CHRGE GROUP (CATEGORY FI)
MPATPOR    FORM     12.2         8        57      PATIENT PORTION    
MHFPOR     FORM     12.2         8        65      REBATE  PORTION
MNINV      FORM        1         2        73      NUMBER OF INVS - 1 or 2 ONLY
MINDIC     FORM        1         2        75      INDICATOR FOR CHANGING DESC.
.                                                 0 = NO
.                                                 1 = YES
PTMCGSTA   FORM        1         2        77      Is GST applicable to charge
.                                                 0 = GST free
.                                                 1 = GST payable
.                                                 2 = Either
PTMCGSTC   DIM         6         6        79      GST payable code from GST 
.                                                 rates table
PTMCEDIE   DIM        10        10        85      EDI Equivalent
PTMCCFCY   FORM        1         2        95      Casemix funding chargeable
PTMCKREB   DIM         1         1        97      KEYIN REBATE PORTION
.                                                 Y = YES
.                                                 OTHERWISE NO
PTMCCOBD   DIM         1         1        98      Charge on behalf of a doctor
.                                                 Y = Yes
.                                                 Otherwise No
PTMCTACT   DIM         1         1        99      TAC type
.                                                   A = AMA item
.                                                   P = Paramedical item
.                                                   T = TAC item
PTMCTACD   DIM         4         4       100      TAC duration (mins) - only
.                                                 required for paramedical items
PTMCEFDT   DIM         8         8       104      Effective Date CCYYMMDD
PTMCALGR   DIM         3         3       112      Alternate Misc Chrge Group(FN)
.                                                 for JH Invoice
PTMCPRTR   DIM         1         1       115      Prosthetic for tracking
.                                                 0 = NO
.                                                 1 = YES
PTMCECEQ   DIM        11        11       116      Eclipse Equivalent
PTMCECTS   DIM         2         2       127      Eclipse Type of Service
PTMCACTV   DIM         1         1       129      Active/Inactive Flag
.                                                   (Blank or 0 = Active)
.                                                   (1 = Inactive)
PTMCETDT   DIM         8         8       130      Effective to Date (CCYYMMDD)
PTMCEHCP   DIM         2         2       138      Health Care Provider (Eclipse)
PTMCSPAR   DIM        46        46       140      SPARE VARIABLE
.
.End of Record                           186
.
.
. Other field definitions
. -----------------------
.
. Fields used in PATMCHRD.PBL
.---------------------------
WKMCCODE   DIM         9                          Charge Code
WKMCACLM   DIM         3                          Claim Code from ACLAIM
WKMCAFND   DIM         6                          Health Fund from AFUNDH
WKMCAFTB   DIM         8                          HF Fund Table from AFNDTB
WKMCTYPE   DIM         3                          Table Type from AFNDTB
WKMCDATE   DIM         8                          Service Date
WKMCINAC   FORM        1                          Item Inactice flag
WKMCXXDT   FORM        1                          Date Range error flag
WKMCDEFL   FORM        1                          Default flag
.
WKMCCNTR   FORM        3                          Loop Counter
WKMCMHOS   DIM         3                          to come from PMVXMHOS
.
