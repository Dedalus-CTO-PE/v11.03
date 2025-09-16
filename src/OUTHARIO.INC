.
. OUTHARIO.INC
. ------------
. Filenames       : outharaf
. Description     : Outpatients Hong Kong Attendance Register file
. Variables       : OVRCD   FORM   1        0 = NOT OVER
.                                           1 = OVER
.                   KEY28   DIM    28       KEY FOR OUTHARA1
.                   KEY33   DIM    33       KEY FOR OUTHARA2
.
. -----------------------------------------
. ------- I/O routines for OUTHARA1 -------
. -----------------------------------------
.
RSOTHAR1  RESET     KEY28
          READ      OUTHARA1,KEY28;;
          RETURN
.
RAOTHAR1  RESET     KEY28
          MOVE      ZERO,OVRCD
          READ      OUTHARA1,KEY28;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTHAR1  RESET     KEY28
          MOVE      ZERO,OVRCD
          READ      OUTHARA1,KEY28;OTHASITE,OTHACLIN,OTHADATE,OTHASTRT,DOTHASLO:
                                   OTHAATTM,OTHASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTHASLO,OTHASLOT
          RETURN
.
RKOTHAR1  MOVE      ZERO,OVRCD
          READKS    OUTHARA1;OTHASITE,OTHACLIN,OTHADATE,OTHASTRT,DOTHASLO:
                             OTHAATTM,OTHASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTHASLO,OTHASLOT
          RETURN
.
RPOTHAR1  MOVE      ZERO,OVRCD
          READKP    OUTHARA1;OTHASITE,OTHACLIN,OTHADATE,OTHASTRT,DOTHASLO:
                             OTHAATTM,OTHASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTHASLO,OTHASLOT
          RETURN
.
UPOTHAR1  MOVE      OTHASLOT,DOTHASLO
          UPDATE    OUTHARA1;OTHASITE,OTHACLIN,OTHADATE,OTHASTRT,DOTHASLO:
                             OTHAATTM,OTHASPAR
          RETURN
.
WROTHAR1  RESET     KEY28
          MOVE      OTHASLOT,DOTHASLO
          WRITE     OUTHARA1,KEY28;OTHASITE,OTHACLIN,OTHADATE,OTHASTRT,DOTHASLO:
                                   OTHAATTM,OTHASPAR
          RETURN
.
DEOTHAR1  RESET     KEY28
          DELETE    OUTHARA1,KEY28
          RETURN
.
. -----------------------------------------
. ------- I/O routines for OUTHARA2 -------
. -----------------------------------------
.
RSOTHAR2  RESET     KEY33
          READ      OUTHARA2,KEY33;;
          RETURN
.
RAOTHAR2  RESET     KEY33
          MOVE      ZERO,OVRCD
          READ      OUTHARA2,KEY33;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTHAR2  RESET     KEY33
          MOVE      ZERO,OVRCD
          READ      OUTHARA2,KEY33;OTHASITE,OTHACLIN,OTHADATE,OTHASTRT,DOTHASLO:
                                   OTHAATTM,OTHASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTHASLO,OTHASLOT
          RETURN
.
RKOTHAR2  MOVE      ZERO,OVRCD
          READKS    OUTHARA2;OTHASITE,OTHACLIN,OTHADATE,OTHASTRT,DOTHASLO:
                             OTHAATTM,OTHASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTHASLO,OTHASLOT
          RETURN
.
RPOTHAR2  MOVE      ZERO,OVRCD
          READKP    OUTHARA2;OTHASITE,OTHACLIN,OTHADATE,OTHASTRT,DOTHASLO:
                             OTHAATTM,OTHASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTHASLO,OTHASLOT
          RETURN
...............................................................................
