. V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes 
. *****************************************************************************
. *                                                                           *
. * Include Name  : PATDSCFD.INC    - add variables to CLPATDSC               *
. *                                                                           *
. * Function      : File Definition include for Patient                       *
. *                 Discharges Details                                        *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : patdschf.dat                                              *
. *                                                                           *
. * Keys          : KEY 16, KEY 8                                             *
. *                                                                           *
. * Mods          :                                                           *
. *  **** Programmer Note **************                                      *
. *       Any changes to this FD may also need to be made in PMSQVIFD.        *
. *       Please check this before proceeding.                                *
. *                                                                           *
. *       V10.06.01 15/04/2015 Peter Vela         CAR 312723                  *
. *                 Added PTDSCLGP - Clinical Group                           *
. *       V10.03.01 11/11/2011 Mike Laming        CAR 251645                  *
. *                 Moved PTDSLSDN out of Spare - lengthened Spare            *
. *       V10.02.02 14/10/2011 Mike Laming        CAR 251645                  *
. *                 Added "Linked Stat Disch No." PTDSLSDN for WA Health      *
. *       V10.02.01 21/06/2011  Davin            CAR 242269                   *
. *                 Added field DPMN for WA Health                            *
. *       V9.06.01  28/06/2006 Jill Habasque CAR 69364                        *
. *                 Added PTDSPALD - Palliative care days                     *
. *       V9.03.01  16/02/2004 Davin         CAR 22654                        *
. *                 Added index 3 (u/r, ddate & admno)                        *
. *       V5.07.03  23/11/1999  Davin                                         *
. *                 Removed DDRG & DMDC                                       *
. *       V5.07.02  29/06/1999  Greg Horvat      99/00 PRS2 Mods              *
. *                 Added PTDSSREF - Separation referral                      *
. *                                                                           *
. *****************************************************************************
.
PATDSCH1  IFILE     SQL, FIXED=280, KEY="U9-16"
PATDSCH2  IFILE     SQL, FIXED=280, KEY="U17-24,9-16"
PATDSCH3  IFILE     SQL, FIXED=280, KEY="U1-8,17-24,9-16"
.
. NAME    TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----    ----   ------   --------  ----------   -----------
DURNO     DIM       8           8         1      U.R NO.
DDADMNO   DIM       8           8         9      ADMISSION NO.
DDATE     DIM       8           8        17      PATIENT DIS. DATE (CCYYMMDD)
DTIME     DIM       8           8        25      PATIENT DISCHARGE TIME
.
DSTAT     DIM       3           3        33      DISCHARGE STATUS      (CAT D )
DDEST     DIM       3           3        36      DISCHARGE DESTINATION (CAT DD)
.
DDIAG     DIM      50          50        39      DISCHARGE DIAGNOSIS
DDIAG2    DIM      50          50        89      DISCHARGE DIAGNOSIS (PART 2)
DUSD1     DIM       3           3       139      USER DEFINED FIELD 1 (CAT D1)
DUSD2     DIM       3           3       142      USER DEFINED FIELD 2 (CAT D2)
DUSD3     DIM       3           3       145      USER DEFINED FIELD 3 (CAT D3)
DUSD4     DIM       3           3       148      USER DEFINED FIELD 4 (CAT D4)
DUSD5     DIM       3           3       151      USER DEFINED FIELD 5 (CAT D5)
DFMBS     DIM       9           9       154      DISCHARGE DIAGNOSIS CODE
PTDSDMDC  DIM       4           4       163      MDC code
PTDSDDRG  DIM       4           4       167      DRG code
DWLREASN  DIM       3           3       171      Reason Discharged Patient was
.                                                put back on Waiting List (RW)
PTDSSIDX  DIM       1           1       174      DRG severity index
PTDSVOGU  DIM       3           3       175      Vers grouper used when grouping
PTDSOPER  DIM       4           4       178      Operator who discharged patie
PTDSUYN1  FORM      1           2       182      User Defined Y/N Field 1     
PTDSUYN2  FORM      1           2       184      User Defined Y/N Field 2     
PTDSUYN3  FORM      1           2       186      User Defined Y/N Field 3     
PTDSUYN4  FORM      1           2       188      User Defined Y/N Field 4     
PTDSDWRD  DIM       3           3       190      Discharge Ward               
PTDSDLOS  FORM      4           3       193      Length of Stay               
PTDSSREF  DIM       4           4       196      Separation referral
PTDSPALD  DIM       3           3       200      Palliative care days (PRS2)
PTDSDPMN  DIM       3           3       203      Departure Means (Cat SI)
PTDSLSDN  DIM       8           8       206      Linked Statistical Discharge No
PTDSCLGP  DIM      12          12       214      Clinical Group
DSPARE    DIM      54          54       226      SPARE 
.End of Record                          280
.
.
SDDATE    DIM          8            17      PATIENT DISCHARGE DATE (YYMMDD)
.
.  redefine form fields from key
.  -----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
DADMNO     FORM         8             9      ADMISSION NO.
.
