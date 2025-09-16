.
.         positional read
.
RSIBSLO1  RESET     KEY5
          READ      IBASLOA1,KEY5;;
          RETURN
.
.         read to see if record exists
.
RAIBSLO1  MOVE      ZERO,OVRCD
          RESET     KEY5
          READ      IBASLOA1,KEY5;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDIBSLO1  MOVE      ZERO,OVRCD
          RESET     KEY5
          READ      IBASLOA1,KEY5;IBSLUSER,IBSLPASS,IBSLIBAS,IBSLDESC:
                                  IBSLDATE,IBSLSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RLIBSLO1  MOVE      ZERO,OVRCD
          RESET     KEY5
          READ      IBASLOA1,KEY5;IBSLUSER,IBSLPASS,IBSLIBAS,IBSLDESC:
                                  IBSLDATE,IBSLSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
.         next read
.
RKIBSLO1  MOVE      ZERO,OVRCD
          READKS    IBASLOA1;IBSLUSER,IBSLPASS,IBSLIBAS,IBSLDESC:
                                  IBSLDATE,IBSLSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read
.
RPIBSLO1  MOVE      ZERO,OVRCD
          READKP    IBASLOA1;IBSLUSER,IBSLPASS,IBSLIBAS,IBSLDESC:
                                  IBSLDATE,IBSLSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         update
.
UPIBSLO1  UPDATE    IBASLOA1;IBSLUSER,IBSLPASS,IBSLIBAS,IBSLDESC:
                                  IBSLDATE,IBSLSPAR
          RETURN
.
.         write
.
WRIBSLO1  RESET     KEY5
          WRITE     IBASLOA1,KEY5;IBSLUSER,IBSLPASS,IBSLIBAS,IBSLDESC:
                                  IBSLDATE,IBSLSPAR
          RETURN
.
.         delete a record
.
DEIBSLO1  RESET     KEY5
          DELETE    IBASLOA1,KEY5
          RETURN
.
