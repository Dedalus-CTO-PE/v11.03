.
. **********************************************************
. *                                                        *
. *  Include Name :  PATFEEIO                              *
. *                                                        *
. *  Function     :  I/O for patfeep file                  *
. *                                                        *
. *  Keys         :  KEY1                                  *
. *                                                        *
. *  Modifications:  V5.00  15/03/94 Ian Rutt              *
. *                         Changed for record locking     * 
. *                                                        *
. **********************************************************
.
RDSFEEP1    READ    PATFEEP1,KEY1;;
            RETURN
.
RDAFEEP1    MOVE    ZERO,OVRCD
            RESET   KEY1 
            READ    PATFEEP1,KEY1;ANS
            GOTO    OVERCOND IF OVER
            RETURN
.
RDFEEP1     MOVE    ZERO,OVRCD
            RESET   KEY1 
            READ    PATFEEP1,KEY1;FEECAT,FEEDESC,FEEPCEN,FEESPARE
            GOTO    OVERCOND IF OVER
            RETURN
.
RLFEEP1     MOVE    ZERO,OVRCD
            RESET   KEY1 
            READL   PATFEEP1,KEY1;FEECAT,FEEDESC,FEEPCEN,FEESPARE
            GOTO    OVERCOND IF OVER
            GOTO    OVERLOCK IF LOCKED
            RETURN
.
RDKFEEP1    MOVE    ZERO,OVRCD
            READKS  PATFEEP1;FEECAT,FEEDESC,FEEPCEN,FEESPARE
            GOTO    OVERCOND IF OVER
            RETURN
.
UPFEEP1     UPDATE  PATFEEP1;FEECAT,FEEDESC,FEEPCEN,FEESPARE
            RETURN
.
ULFEEP1     UNLOCK  PATFEEP1
            RETURN
.
WRFEEP1     RESET   KEY1
            MOVE    ZERO,OVRCD
            TRAP    OVERLOCK IF IO
            WRITE   PATFEEP1,KEY1;FEECAT,FEEDESC,FEEPCEN,FEESPARE
            TRAPCLR IO 
            RETURN
.
DEFEEP1     DELETE  PATFEEP1,KEY1
            RETURN
.
