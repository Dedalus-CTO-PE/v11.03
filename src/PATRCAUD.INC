. PATRCAUD.PBL
. ------------
.
.          FILE               :  PATRCAUD.TXT
.          DESCRIPTION        :  PATIENT BILLING RATE CHANGE AUDIT FILE
.          RECORD LENGTH      :  128
.
 IFGE     $$VER,7
PATRCAUD   SFILE   ASCII, FIXED=256
 XIF
 IFEQ     $$VER,6
PATRCAUD   FILE    ASCII, FIXED=256
 XIF

.       SECTOR ZER0
.       -----------
.
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
.SECTOR    FORM          5             1     NEXT AVAILABLE SECTOR
RSTATUS    FORM          1             6     AUDIT FILE STATUS INDICATOR
.                                             0 = FREE
.                                             1 = INPUTING
.                                             2 = PRINTING
RPORT      DIM           2             7     PORT NUMBER USING FILE
.
.        SECTOR ONE ONWARDS
.        ------------------
.
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
RADMNO     FORM         8             1      ADMISSION  NUMBER
RNAME      DIM         22             9      PATIENTS SURNAME (X.XXXXXXXXXX)
RCLAIM     DIM          3            31      PATIENTS CLAIM CODE (CATEGORY CL)
RFUND      DIM          6            34      PATIENTS HEALTH FUND
RHFTAB     DIM          8            40      PATIENTS HEALTH FUND TABLE
RBTYPE     DIM          3            48      BED TYPE
.                                            1 = Private Room
.                                            2 = Shared Room
RNPAT      FORM       8.2            51      NEW RATE - PATIENT PORTION
.                                            (After Discount & Allowance)
RNFUND     FORM       8.2            62      NEW RATE - FUND PORTION
RCGPAT     FORM       8.2            73      COMPUTER GENERATE RATE
.                                                     - PATIENT PORTION
RCGHF      FORM       8.2            84      COMPUTER GENERATE RATE
.                                                     - HEALTH FUND PORTION
RDATE      DIM          6            95      EFFECTIVE DATE (YYMMDD)
REDAYS     FORM         3           101      NUMBER OF DAYS EFFECTIVE
RATYPE     DIM          3           104      ADMISSION TYPE
ROPAT      FORM       8.2           107      OLD RATE  (PUBLIC HOSPITAL ONLY)
RCLSS      DIM          3           118      PATIENT CATEGORY (PUBLIC HOSP)
RCHST      DIM          3           121      CHARGEABLE STATUS (PUBLIC HOSP)
ROPER      DIM          4           124      OPERATOR CODE
.END OF SECTOR                      128
