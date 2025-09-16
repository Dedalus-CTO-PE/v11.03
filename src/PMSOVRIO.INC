.*****************************************************************************
.*        PMSOVRIO.INC                                                       *
.*****************************************************************************
.
RSPMOVR1  RESET     KEY26
          READ      PMSOVRA1,KEY26;;
          RETURN
.
RAPMOVR1  RESET     KEY26
          MOVE      ZERO,OVRCD
          READ      PMSOVRA1,KEY26;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMOVR1  RESET     KEY26
          MOVE      ZERO,OVRCD
          READ      PMSOVRA1,KEY26;PMORURNO,PMORDATE,PMORTIME,DPMORCNT:
                                  PMORHOSP,PMORTRID,PMORFNAM,PMORMEDN,PMORMEDR:
                                  PMORSTAT,PMOREROR,PMORSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMORCNT,PMORCNTR
          RETURN
.
RKPMOVR1  MOVE      ZERO,OVRCD
          READKS    PMSOVRA1;PMORURNO,PMORDATE,PMORTIME,DPMORCNT:
                                  PMORHOSP,PMORTRID,PMORFNAM,PMORMEDN,PMORMEDR:
                                  PMORSTAT,PMOREROR,PMORSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMORCNT,PMORCNTR
          RETURN
.
RPPMOVR1  MOVE      ZERO,OVRCD
          READKP    PMSOVRA1;PMORURNO,PMORDATE,PMORTIME,DPMORCNT:
                                  PMORHOSP,PMORTRID,PMORFNAM,PMORMEDN,PMORMEDR:
                                  PMORSTAT,PMOREROR,PMORSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMORCNT,PMORCNTR
          RETURN
.
UPPMOVR1  MOVE      PMORCNTR,DPMORCNT
          UPDATE    PMSOVRA1;PMORURNO,PMORDATE,PMORTIME,DPMORCNT:
                                  PMORHOSP,PMORTRID,PMORFNAM,PMORMEDN,PMORMEDR:
                                  PMORSTAT,PMOREROR,PMORSPAR
          RETURN
.
WRPMOVR1  RESET     KEY26
          MOVE      PMORCNTR,DPMORCNT
          WRITE     PMSOVRA1,KEY26;PMORURNO,PMORDATE,PMORTIME,DPMORCNT:
                                  PMORHOSP,PMORTRID,PMORFNAM,PMORMEDN,PMORMEDR:
                                  PMORSTAT,PMOREROR,PMORSPAR
          RETURN
.
DEPMOVR1  RESET     KEY26
          DELETE    PMSOVRA1,KEY26
          RETURN
.
RSPMOVR2  RESET     KEY29
          READ      PMSOVRA2,KEY29;;
          RETURN
.
RAPMOVR2  RESET     KEY29
          MOVE      ZERO,OVRCD
          READ      PMSOVRA2,KEY29;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMOVR2  RESET     KEY29
          MOVE      ZERO,OVRCD
          READ      PMSOVRA2,KEY29;PMORURNO,PMORDATE,PMORTIME,DPMORCNT:
                                  PMORHOSP,PMORTRID,PMORFNAM,PMORMEDN,PMORMEDR:
                                  PMORSTAT,PMOREROR,PMORSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMORCNT,PMORCNTR
          RETURN
.
RKPMOVR2  MOVE      ZERO,OVRCD
          READKS    PMSOVRA2;PMORURNO,PMORDATE,PMORTIME,DPMORCNT:
                                  PMORHOSP,PMORTRID,PMORFNAM,PMORMEDN,PMORMEDR:
                                  PMORSTAT,PMOREROR,PMORSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMORCNT,PMORCNTR
          RETURN
.
RPPMOVR2  MOVE      ZERO,OVRCD
          READKP    PMSOVRA2;PMORURNO,PMORDATE,PMORTIME,DPMORCNT:
                                  PMORHOSP,PMORTRID,PMORFNAM,PMORMEDN,PMORMEDR:
                                  PMORSTAT,PMOREROR,PMORSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMORCNT,PMORCNTR
          RETURN
.
UPPMOVR2  MOVE      PMORCNTR,DPMORCNT
          UPDATE    PMSOVRA2;PMORURNO,PMORDATE,PMORTIME,DPMORCNT:
                                  PMORHOSP,PMORTRID,PMORFNAM,PMORMEDN,PMORMEDR:
                                  PMORSTAT,PMOREROR,PMORSPAR
          RETURN
.
WRPMOVR2  RESET     KEY29
          MOVE      PMORCNTR,DPMORCNT
          WRITE     PMSOVRA2,KEY29;PMORURNO,PMORDATE,PMORTIME,DPMORCNT:
                                  PMORHOSP,PMORTRID,PMORFNAM,PMORMEDN,PMORMEDR:
                                  PMORSTAT,PMOREROR,PMORSPAR
          RETURN
.
DEPMOVR2  RESET     KEY29
          DELETE    PMSOVRA2,KEY29
          RETURN
+
