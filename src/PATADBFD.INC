. V5.07.001 27/08/1998 Glenn  507 Changes
. **********************************************************************
. *                                                                    *
. *     Include Name : PATADBFD.INC                                    *
. *                                                                    *
. *     Function     : File Definition include for Discharge Audit     *
. *                                                                    *
. *                                                                    *
. *     File Type    : ASCII                                           *
. *                                                                    *
. *     File Name    : patbaud.txt                                     *
. *                                                                    *
. *     Modifications:                                                 *
. *     V5.05.01   16/01/1998    Steve Armstrong   SRF 623548 (AUS)    *
. *                Added new discharge file variables                  *
. **********************************************************************
 IFGE     $$VER,7
PATBAUD     SFILE   ASCII, FIXED=256
 XIF
 IFEQ     $$VER,6
PATBAUD     FILE    ASCII, FIXED=256
 XIF
.
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
.SECTOR     FORM         5         1      NEXT AVAILABLE SECTOR
.
.End of Record
.
.    SECTOR          :
.
.NAME       TYPE    LENGTH         START      DESCRIPTION
.----       ----    ------         -----      -----------
.ADD        DIM          2             1      AUDIT DAY
.AMM        DIM          2             3      AUDIT MONTH
.ACC        DIM          2             5      audit century
.AYY        DIM          2             7      AUDIT YEAR
.TIMEIS     DIM          8             9      AUDIT TIME  (HH:MM:SS)
.ACTION     DIM          1            17      ACTION
.                                             A == ADDED
.                                             B == BEFORE CHANGE
.                                             C == CHANGED TO
.OPERCODE   DIM          4            18      OPERATOR CODE
.
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
SDURNO      DIM          8            22      U.R NO.
SDADMNO     FORM         8            30      PATIENT ADMISSION NO.
.SDDATE      DIM         8            38      patient discharge date (ccyymmdd)
SDTIME      DIM          8            46      PATIENT DISCHARGE TIME
.
SDSTAT      DIM          3            54      DISCHARGE STATUS
SDDEST      DIM          3            56      DISCHARGE DESTINATION
.
SDDIAG      DIM         50            60      DISCHARGE DIAGNOSIS
SDDIAG2     DIM         50           110      DISCHARGE DIAGNOSIS (PART 2)
SDUSD1      DIM          3           160      USER DEFINED FIELD 1 (CAT D1)
SDUSD2      DIM          3           163      USER DEFINED FIELD 2 (CAT D2)
SDUSD3      DIM          3           166      USER DEFINED FIELD 3 (CAT D3)
SDUSD4      DIM          3           169      USER DEFINED FIELD 4 (CAT D4)
SDUSD5      DIM          3           172      USER DEFINED FIELD 5 (CAT D5)
SDFMBS      DIM          9           175      DISCHARGE DIAGNOSIS CODE
SDMDC       DIM          4           184      MDC code
SDDRG       DIM          4           188      DRG code
SDWLREAS    DIM          3           192      Reason Discharged Patient was
.                                                put back on Waiting List (RW)
SPTDSSID    DIM          1           195      DRG severity index
SPTDSVOG    DIM          3           196      Vers grouper used when grouping
SPTDSOPE    DIM          4           199      Operator who discharged patie
SPTDSUY1    FORM         1           203      User Defined Y/N Field 1     
SPTDSUY2    FORM         1           204      User Defined Y/N Field 2     
SPTDSUY3    FORM         1           205      User Defined Y/N Field 3     
SPTDSUY4    FORM         1           206      User Defined Y/N Field 4     
SPTDSDWR    DIM          3           207      Discharge Ward               
SPTDSDLO    FORM         4           210      Length of Stay               
.
.End of Record                       214
