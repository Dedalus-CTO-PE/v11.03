.*****************************************************************************
.*        PATW19IO.INC                                                       *
.*****************************************************************************
.
RSPT191   RESET     KEY4
          READ      PATW19A1,KEY4;;
          RETURN
.
RAPT191   RESET     KEY4
          MOVE      ZERO,OVRCD
          READ      PATW19A1,KEY4;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT191   RESET     KEY4
          MOVE      ZERO,OVRCD
          READ      PATW19A1,KEY4;PT19DRGC,PT19DRGD,PT19SDMT,PT19MVEL:
                                  PT19CPAY,PT19LIBP,PT19HIBP,PT19ILOS,PT19SDOD:
                                  PT19TSDW,PT19TODW,PT19TLOM,PT19TIMW,PT19THOM:
                                  PT19THIH,PT19SPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT191   MOVE      ZERO,OVRCD
          READKS    PATW19A1;PT19DRGC,PT19DRGD,PT19SDMT,PT19MVEL:
                                  PT19CPAY,PT19LIBP,PT19HIBP,PT19ILOS,PT19SDOD:
                                  PT19TSDW,PT19TODW,PT19TLOM,PT19TIMW,PT19THOM:
                                  PT19THIH,PT19SPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT191   MOVE      ZERO,OVRCD
          READKP    PATW19A1;PT19DRGC,PT19DRGD,PT19SDMT,PT19MVEL:
                                  PT19CPAY,PT19LIBP,PT19HIBP,PT19ILOS,PT19SDOD:
                                  PT19TSDW,PT19TODW,PT19TLOM,PT19TIMW,PT19THOM:
                                  PT19THIH,PT19SPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT191   UPDATE    PATW19A1;PT19DRGC,PT19DRGD,PT19SDMT,PT19MVEL:
                                  PT19CPAY,PT19LIBP,PT19HIBP,PT19ILOS,PT19SDOD:
                                  PT19TSDW,PT19TODW,PT19TLOM,PT19TIMW,PT19THOM:
                                  PT19THIH,PT19SPAR
          RETURN
.
WRPT191   RESET     KEY4
          WRITE     PATW19A1,KEY4;PT19DRGC,PT19DRGD,PT19SDMT,PT19MVEL:
                                  PT19CPAY,PT19LIBP,PT19HIBP,PT19ILOS,PT19SDOD:
                                  PT19TSDW,PT19TODW,PT19TLOM,PT19TIMW,PT19THOM:
                                  PT19THIH,PT19SPAR
          RETURN
.
DEPT191   RESET     KEY4
          DELETE    PATW19A1,KEY4
          RETURN
+
