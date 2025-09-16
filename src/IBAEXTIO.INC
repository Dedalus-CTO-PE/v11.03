.
.         positional read
.
RSIBEXT1  RESET     KEY4
          READ      IBAEXTA1,KEY4;;
          RETURN
.
.         read to see if record exists
.
RAIBEXT1  MOVE      ZERO,OVRCD
          RESET     KEY4
          READ      IBAEXTA1,KEY4;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDIBEXT1  MOVE      ZERO,OVRCD
          RESET     KEY4
          READ      IBAEXTA1,KEY4;IBEXEXTN,IBEXDESC,IBEXCHRG,IBEXETYP:
                                  IBEXDEBT,IBEXPTYP,IBEXLEVL,IBEXSRVL:
                                  DIBEXTEN,IBEXLVLD,IBEXSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DIBEXTEN,IBEXTENN
          RETURN
.
.         next read
.
RKIBEXT1  MOVE      ZERO,OVRCD
          READKS    IBAEXTA1;IBEXEXTN,IBEXDESC,IBEXCHRG,IBEXETYP:
                                  IBEXDEBT,IBEXPTYP,IBEXLEVL,IBEXSRVL:
                                  DIBEXTEN,IBEXLVLD,IBEXSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DIBEXTEN,IBEXTENN
          RETURN
.
.         previous read
.
RPIBEXT1  MOVE      ZERO,OVRCD
          READKP    IBAEXTA1;IBEXEXTN,IBEXDESC,IBEXCHRG,IBEXETYP:
                                  IBEXDEBT,IBEXPTYP,IBEXLEVL,IBEXSRVL:
                                  DIBEXTEN,IBEXLVLD,IBEXSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DIBEXTEN,IBEXTENN
          RETURN
.
.         update
.
UPIBEXT1  MOVE      IBEXTENN,DIBEXTEN
          UPDATE    IBAEXTA1;IBEXEXTN,IBEXDESC,IBEXCHRG,IBEXETYP:
                                  IBEXDEBT,IBEXPTYP,IBEXLEVL,IBEXSRVL:
                                  DIBEXTEN,IBEXLVLD,IBEXSPAR
          RETURN
.
.         write
.
WRIBEXT1  RESET     KEY4
          MOVE      IBEXTENN,DIBEXTEN
          WRITE     IBAEXTA1,KEY4;IBEXEXTN,IBEXDESC,IBEXCHRG,IBEXETYP:
                                  IBEXDEBT,IBEXPTYP,IBEXLEVL,IBEXSRVL:
                                  DIBEXTEN,IBEXLVLD,IBEXSPAR
          RETURN
.
.         delete a record
.
DEIBEXT1  RESET     KEY4
          DELETE    IBAEXTA1,KEY4
          RETURN
.
.
.         positional read
.
RSIBEXT2  RESET     KEY12
          READ      IBAEXTA2,KEY12;;
          RETURN
.
.         read to see if record exists
.
RAIBEXT2  MOVE      ZERO,OVRCD
          RESET     KEY12
          READ      IBAEXTA2,KEY12;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDIBEXT2  MOVE      ZERO,OVRCD
          RESET     KEY12
          READ      IBAEXTA2,KEY12;IBEXEXTN,IBEXDESC,IBEXCHRG,IBEXETYP:
                                  IBEXDEBT,IBEXPTYP,IBEXLEVL,IBEXSRVL:
                                  DIBEXTEN,IBEXLVLD,IBEXSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DIBEXTEN,IBEXTENN
          RETURN
.
.         next read
.
RKIBEXT2  MOVE      ZERO,OVRCD
          READKS    IBAEXTA2;IBEXEXTN,IBEXDESC,IBEXCHRG,IBEXETYP:
                                  IBEXDEBT,IBEXPTYP,IBEXLEVL,IBEXSRVL:
                                  DIBEXTEN,IBEXLVLD,IBEXSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DIBEXTEN,IBEXTENN
          RETURN
.
.         previous read
.
RPIBEXT2  MOVE      ZERO,OVRCD
          READKP    IBAEXTA2;IBEXEXTN,IBEXDESC,IBEXCHRG,IBEXETYP:
                                  IBEXDEBT,IBEXPTYP,IBEXLEVL,IBEXSRVL:
                                  DIBEXTEN,IBEXLVLD,IBEXSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DIBEXTEN,IBEXTENN
          RETURN
.
.         update
.
UPIBEXT2  MOVE      IBEXTENN,DIBEXTEN
          UPDATE    IBAEXTA2;IBEXEXTN,IBEXDESC,IBEXCHRG,IBEXETYP:
                                  IBEXDEBT,IBEXPTYP,IBEXLEVL,IBEXSRVL:
                                  DIBEXTEN,IBEXLVLD,IBEXSPAR
          RETURN
.
.         write
.
WRIBEXT2  RESET     KEY12
          MOVE      IBEXTENN,DIBEXTEN
          WRITE     IBAEXTA2,KEY12;IBEXEXTN,IBEXDESC,IBEXCHRG,IBEXETYP:
                                  IBEXDEBT,IBEXPTYP,IBEXLEVL,IBEXSRVL:
                                  DIBEXTEN,IBEXLVLD,IBEXSPAR
          RETURN
.
.         delete a record
.
DEIBEXT2  RESET     KEY12
          DELETE    IBAEXTA2,KEY12
          RETURN
.
