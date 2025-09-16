RSPTFL1   RESET     KEY6
          READ      PATFLET1,KEY6;;
          RETURN
.
RAPTFL1   RESET     KEY6
          MOVE      ZERO,OVRCD
          READ      PATFLET1,KEY6;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTFL1   RESET     KEY6
          MOVE      ZERO,OVRCD
          READ      PATFLET1,KEY6;DPTFLLTN,DPTFLLIN,PTFLTEXT,PTFLLVAR:
                                  PTFLPBOT,PTFLPTOP,PTFLPPAG,PTFLPTAB,PTFLACTV:
                                  PTFLSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTFLLTN,PTFLLTNO
          MOVE      DPTFLLIN,PTFLLINO
          RETURN
.
RLPTFL1   RESET     KEY6
          MOVE      ZERO,OVRCD
          READL     PATFLET1,KEY6;DPTFLLTN,DPTFLLIN,PTFLTEXT,PTFLLVAR:
                                  PTFLPBOT,PTFLPTOP,PTFLPPAG,PTFLPTAB,PTFLACTV:
                                  PTFLSPAR
          GOTO      OVERLOCK IF LOCKED
          GOTO      OVERCOND IF OVER
          MOVE      DPTFLLTN,PTFLLTNO
          MOVE      DPTFLLIN,PTFLLINO
          RETURN
.
RKPTFL1   MOVE      ZERO,OVRCD
          READKS    PATFLET1;DPTFLLTN,DPTFLLIN,PTFLTEXT,PTFLLVAR:
                                  PTFLPBOT,PTFLPTOP,PTFLPPAG,PTFLPTAB,PTFLACTV:
                                  PTFLSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTFLLTN,PTFLLTNO
          MOVE      DPTFLLIN,PTFLLINO
          RETURN
.
RPPTFL1   MOVE      ZERO,OVRCD
          READKP    PATFLET1;DPTFLLTN,DPTFLLIN,PTFLTEXT,PTFLLVAR:
                                  PTFLPBOT,PTFLPTOP,PTFLPPAG,PTFLPTAB,PTFLACTV:
                                  PTFLSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTFLLTN,PTFLLTNO
          MOVE      DPTFLLIN,PTFLLINO
          RETURN
.
ULPTFL1   UNLOCK    PATFLET1
          RETURN
.
UPPTFL1   MOVE      PTFLLTNO,DPTFLLTN
          MOVE      PTFLLINO,DPTFLLIN
          UPDATE    PATFLET1;DPTFLLTN,DPTFLLIN,PTFLTEXT,PTFLLVAR:
                                  PTFLPBOT,PTFLPTOP,PTFLPPAG,PTFLPTAB,PTFLACTV:
                                  PTFLSPAR
          RETURN
.
WRPTFL1   MOVE      ZERO,OVRCD
          RESET     KEY6
          MOVE      PTFLLTNO,DPTFLLTN
          MOVE      PTFLLINO,DPTFLLIN
          TRAP      OVERLOCK IF IO
          WRITE     PATFLET1,KEY6;DPTFLLTN,DPTFLLIN,PTFLTEXT,PTFLLVAR:
                                  PTFLPBOT,PTFLPTOP,PTFLPPAG,PTFLPTAB,PTFLACTV:
                                  PTFLSPAR
          TRAPCLR   IO
          RETURN
.
DEPTFL1   RESET     KEY6
          DELETE    PATFLET1,KEY6
          RETURN
.
RSPTFL2   RESET     KEY6
          READ      PATFLET2,KEY6;;
          RETURN
.
RAPTFL2   RESET     KEY6
          MOVE      ZERO,OVRCD
          READ      PATFLET2,KEY6;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTFL2   RESET     KEY6
          MOVE      ZERO,OVRCD
          READ      PATFLET2,KEY6;DPTFLLTN,DPTFLLIN,PTFLTEXT,PTFLLVAR:
                                  PTFLPBOT,PTFLPTOP,PTFLPPAG,PTFLPTAB,PTFLACTV:
                                  PTFLSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTFLLTN,PTFLLTNO
          MOVE      DPTFLLIN,PTFLLINO
          RETURN
.
RKPTFL2   MOVE      ZERO,OVRCD
          READKS    PATFLET2;DPTFLLTN,DPTFLLIN,PTFLTEXT,PTFLLVAR:
                                  PTFLPBOT,PTFLPTOP,PTFLPPAG,PTFLPTAB,PTFLACTV:
                                  PTFLSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTFLLTN,PTFLLTNO
          MOVE      DPTFLLIN,PTFLLINO
          RETURN
.
RPPTFL2   MOVE      ZERO,OVRCD
          READKP    PATFLET2;DPTFLLTN,DPTFLLIN,PTFLTEXT,PTFLLVAR:
                                  PTFLPBOT,PTFLPTOP,PTFLPPAG,PTFLPTAB,PTFLACTV:
                                  PTFLSPAR
          MOVE      DPTFLLTN,PTFLLTNO
          MOVE      DPTFLLIN,PTFLLINO
          GOTO      OVERCOND IF OVER
          RETURN
