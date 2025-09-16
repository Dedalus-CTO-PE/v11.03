.*****************************************************************************
.*        PATW15IO.INC                                                       *
.*****************************************************************************
.
RSPT151   RESET     KEY4
          READ      PATW15A1,KEY4;;
          RETURN
.
RAPT151   RESET     KEY4
          MOVE      ZERO,OVRCD
          READ      PATW15A1,KEY4;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT151   RESET     KEY4
          MOVE      ZERO,OVRCD
          READ      PATW15A1,KEY4;PT15DRGC,PT15DRGD,PT15SDMT,PT15MVEL:
                                  PT15CPAY,PT15LIBP,PT15HIBP,PT15ILOS,PT15SDOD:
                                  PT15TSDW,PT15TODW,PT15TLOM,PT15TIMW,PT15THOM:
                                  PT15THIH,PT15SPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT151   MOVE      ZERO,OVRCD
          READKS    PATW15A1;PT15DRGC,PT15DRGD,PT15SDMT,PT15MVEL:
                                  PT15CPAY,PT15LIBP,PT15HIBP,PT15ILOS,PT15SDOD:
                                  PT15TSDW,PT15TODW,PT15TLOM,PT15TIMW,PT15THOM:
                                  PT15THIH,PT15SPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT151   MOVE      ZERO,OVRCD
          READKP    PATW15A1;PT15DRGC,PT15DRGD,PT15SDMT,PT15MVEL:
                                  PT15CPAY,PT15LIBP,PT15HIBP,PT15ILOS,PT15SDOD:
                                  PT15TSDW,PT15TODW,PT15TLOM,PT15TIMW,PT15THOM:
                                  PT15THIH,PT15SPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT151   UPDATE    PATW15A1;PT15DRGC,PT15DRGD,PT15SDMT,PT15MVEL:
                                  PT15CPAY,PT15LIBP,PT15HIBP,PT15ILOS,PT15SDOD:
                                  PT15TSDW,PT15TODW,PT15TLOM,PT15TIMW,PT15THOM:
                                  PT15THIH,PT15SPAR
          RETURN
.
WRPT151   RESET     KEY4
          WRITE     PATW15A1,KEY4;PT15DRGC,PT15DRGD,PT15SDMT,PT15MVEL:
                                  PT15CPAY,PT15LIBP,PT15HIBP,PT15ILOS,PT15SDOD:
                                  PT15TSDW,PT15TODW,PT15TLOM,PT15TIMW,PT15THOM:
                                  PT15THIH,PT15SPAR
          RETURN
.
DEPT151   RESET     KEY4
          DELETE    PATW15A1,KEY4
          RETURN
+
