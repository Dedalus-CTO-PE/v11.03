.*****************************************************************************
.*        PMSQITIO.INC                                                       *
.*****************************************************************************
.
RSPMQIT1  RESET     KEY20
          READ      PMSQITA1,KEY20;;
          RETURN
.
RAPMQIT1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      PMSQITA1,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMQIT1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      PMSQITA1,KEY20;DPMQIMES,PMQITRAN,PMQIITEM,PMQITDAT:
                                   PMQISERV,PMQITTYP,PMQIDOCT,PMQISESS:
                                   PMQIAMNT,PMQIGSTC,PMQIHFND,PMQISTIM,PMQISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMQIMES,PMQIMESI
          RETURN
.
RKPMQIT1  MOVE      ZERO,OVRCD
          READKS    PMSQITA1;DPMQIMES,PMQITRAN,PMQIITEM,PMQITDAT:
                             PMQISERV,PMQITTYP,PMQIDOCT,PMQISESS:
                             PMQIAMNT,PMQIGSTC,PMQIHFND,PMQISTIM,PMQISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMQIMES,PMQIMESI
          RETURN
.
RPPMQIT1  MOVE      ZERO,OVRCD
          READKP    PMSQITA1;DPMQIMES,PMQITRAN,PMQIITEM,PMQITDAT:
                             PMQISERV,PMQITTYP,PMQIDOCT,PMQISESS:
                             PMQIAMNT,PMQIGSTC,PMQIHFND,PMQISTIM,PMQISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMQIMES,PMQIMESI
          RETURN
.
UPPMQIT1  MOVE      PMQIMESI,DPMQIMES
          UPDATE    PMSQITA1;DPMQIMES,PMQITRAN,PMQIITEM,PMQITDAT:
                             PMQISERV,PMQITTYP,PMQIDOCT,PMQISESS:
                             PMQIAMNT,PMQIGSTC,PMQIHFND,PMQISTIM,PMQISPAR
          RETURN
.
WRPMQIT1  MOVE      PMQIMESI,DPMQIMES
          RESET     KEY20
          WRITE     PMSQITA1,KEY20;DPMQIMES,PMQITRAN,PMQIITEM,PMQITDAT:
                                   PMQISERV,PMQITTYP,PMQIDOCT,PMQISESS:
                                   PMQIAMNT,PMQIGSTC,PMQIHFND,PMQISTIM,PMQISPAR
          RETURN
.
DEPMQIT1  RESET     KEY20
          DELETE    PMSQITA1,KEY20
          RETURN
+
