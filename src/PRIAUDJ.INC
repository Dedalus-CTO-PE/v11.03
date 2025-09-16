.****************************************************************************
.
. PRIAUDJ.INC
. -----------
.
.          FILE               :  PRIAUJnn
.          DESCRIPTION        :  PATIENT BILLING JOURNALS AUDIT FILE
.          RECORD LENGTH      :  150
.
.          INCLUDE            :  PRIAUJIO
.
.          Include copied and modified from PPPAUDJ.INC    22/07/91
.           
. Mods  :  07/10/92  Steve Armstrong  
.                    Modified for alphanumeric debtor number
.
.****************************************************************************
.
PRIAUJXX   FILE      ASCII, FIXED=256
.
.       SECTOR ZER0
.       -----------
.
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
.SECTOR    FORM          5             1     NEXT AVAILABLE SECTOR
AJSTAT     FORM          1             6     AUDIT STATUS INDICATOR
.                                             0 = FREE
.                                             1 = INPUTING
.                                             2 = PRINTING
.        SECTOR ONE ONWARDS
.        ------------------
.
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
AJRECCD    DIM          2             1      RECORD TYPE
.                                             HD - HEADER
.                                             ZZ - DETAIL
AJBATCH    DIM          8             3      BATCH NUMBER
AJBATOT    FORM       6.2            11      BATCH TOTAL
AJDESC     DIM         20            20      BATCH DESCRIPTION
AJOPER     DIM          4            40      OPERATOR ID
AJDEBT     DIM          8            44      DEBTOR NUMBER
AJNAME     DIM         30            52      PATIENT NAME (A.JONES)
AJDATE     DIM          8            82      JOURNAL DATE (ddmmyy)
AJTIME     DIM          8            90      JOURNAL TIME
AJINVNO    DIM          8            98      INVOICE NUMBER
AJAMT      FORM       6.2           106      JOURNAL AMOUNT
AJTYPE     DIM          3           115      JOURNAL TYPE
.                                             BD - BAD DEBT      
.                                             CR - CREDIT
.                                             WO - WRITE OFF
.                                             MD - MATERNITY
.                                             AA - ADDIT ACCOM.
.                                             PY - PAYMENTS 
.                                             GS - GOV. SUBSIDY
.                                             DB - BED DAYS 
AJTDESC    DIM         30           118      TYPE DESCRIPTION
AJSCAN     FORM         2           148      SCAN 0 = DEBTOR FILE
.                                                 1 = PMI
.END OF SECTOR                      150
