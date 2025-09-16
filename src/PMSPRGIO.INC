.*****************************************************************************
.*        PMSPRGIO.INC                                                       *
.*****************************************************************************
.
RSPMPRG1  RESET     KEY8
          READ      PMSPRGA1,KEY8;;
          RETURN
.
RAPMPRG1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      PMSPRGA1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPRG1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      PMSPRGA1,KEY8;PMPGCODE,PMPGDESC,PMPGACTV,PMPGSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPRG1  MOVE      ZERO,OVRCD
          READKS    PMSPRGA1;PMPGCODE,PMPGDESC,PMPGACTV,PMPGSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPRG1  MOVE      ZERO,OVRCD
          READKP    PMSPRGA1;PMPGCODE,PMPGDESC,PMPGACTV,PMPGSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPRG1  UPDATE    PMSPRGA1;PMPGCODE,PMPGDESC,PMPGACTV,PMPGSPAR
          RETURN
.
WRPMPRG1  RESET     KEY8
          WRITE     PMSPRGA1,KEY8;PMPGCODE,PMPGDESC,PMPGACTV,PMPGSPAR
          RETURN
.
DEPMPRG1  RESET     KEY8
          DELETE    PMSPRGA1,KEY8
          RETURN
+
