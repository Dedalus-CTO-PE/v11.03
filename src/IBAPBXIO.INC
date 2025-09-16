.
.         positional read
.
RSIBPBX1  RESET     KEY20
          READ      IBAPBXA1,KEY20;;
          RETURN
.
.         read to see if record exists
.
RAIBPBX1  MOVE      ZERO,OVRCD
          RESET     KEY20
          READ      IBAPBXA1,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDIBPBX1  MOVE      ZERO,OVRCD
          RESET     KEY20
          READ      IBAPBXA1,KEY20;IBPBEXTN,IBPBSDAT,IBPBSTIM,IBPBEDAT:
                                  IBPBETIM,IBPBPHNO,IBPBPULS,IBPBBILD,IBPBSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         next read
.
RKIBPBX1  MOVE      ZERO,OVRCD
          READKS    IBAPBXA1;IBPBEXTN,IBPBSDAT,IBPBSTIM,IBPBEDAT:
                                  IBPBETIM,IBPBPHNO,IBPBPULS,IBPBBILD,IBPBSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read
.
RPIBPBX1  MOVE      ZERO,OVRCD
          READKP    IBAPBXA1;IBPBEXTN,IBPBSDAT,IBPBSTIM,IBPBEDAT:
                                  IBPBETIM,IBPBPHNO,IBPBPULS,IBPBBILD,IBPBSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         update
.
UPIBPBX1  UPDATE    IBAPBXA1;IBPBEXTN,IBPBSDAT,IBPBSTIM,IBPBEDAT:
                                  IBPBETIM,IBPBPHNO,IBPBPULS,IBPBBILD,IBPBSPAR
          RETURN
.
.         write
.
WRIBPBX1  RESET     KEY20
          WRITE     IBAPBXA1,KEY20;IBPBEXTN,IBPBSDAT,IBPBSTIM,IBPBEDAT:
                                  IBPBETIM,IBPBPHNO,IBPBPULS,IBPBBILD,IBPBSPAR
          RETURN
.
.         delete a record
.
DEIBPBX1  RESET     KEY20
          DELETE    IBAPBXA1,KEY20
          RETURN
.
.
.         positional read
.
RSIBPBX2  RESET     KEY20
          READ      IBAPBXA2,KEY20;;
          RETURN
.
.         read to see if record exists
.
RAIBPBX2  MOVE      ZERO,OVRCD
          RESET     KEY20
          READ      IBAPBXA2,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDIBPBX2  MOVE      ZERO,OVRCD
          RESET     KEY20
          READ      IBAPBXA2,KEY20;IBPBEXTN,IBPBSDAT,IBPBSTIM,IBPBEDAT:
                                  IBPBETIM,IBPBPHNO,IBPBPULS,IBPBBILD,IBPBSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         next read
.
RKIBPBX2  MOVE      ZERO,OVRCD
          READKS    IBAPBXA2;IBPBEXTN,IBPBSDAT,IBPBSTIM,IBPBEDAT:
                                  IBPBETIM,IBPBPHNO,IBPBPULS,IBPBBILD,IBPBSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read
.
RPIBPBX2  MOVE      ZERO,OVRCD
          READKP    IBAPBXA2;IBPBEXTN,IBPBSDAT,IBPBSTIM,IBPBEDAT:
                                  IBPBETIM,IBPBPHNO,IBPBPULS,IBPBBILD,IBPBSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         update
.
UPIBPBX2  UPDATE    IBAPBXA2;IBPBEXTN,IBPBSDAT,IBPBSTIM,IBPBEDAT:
                                  IBPBETIM,IBPBPHNO,IBPBPULS,IBPBBILD,IBPBSPAR
          RETURN
.
.         write
.
WRIBPBX2  RESET     KEY20
          WRITE     IBAPBXA2,KEY20;IBPBEXTN,IBPBSDAT,IBPBSTIM,IBPBEDAT:
                                  IBPBETIM,IBPBPHNO,IBPBPULS,IBPBBILD,IBPBSPAR
          RETURN
.
.         delete a record
.
DEIBPBX2  RESET     KEY20
          DELETE    IBAPBXA2,KEY20
          RETURN
.
