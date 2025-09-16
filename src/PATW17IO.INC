.*****************************************************************************
.*        PATW17IO.INC                                                       *
.*****************************************************************************
.
RSPT171   RESET     KEY4
          READ      PATW17A1,KEY4;;
          RETURN
.
RAPT171   RESET     KEY4
          MOVE      ZERO,OVRCD
          READ      PATW17A1,KEY4;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT171   RESET     KEY4
          MOVE      ZERO,OVRCD
          READ      PATW17A1,KEY4;PT17DRGC,PT17DRGD,PT17SDMT,PT17MVEL:
                                  PT17CPAY,PT17LIBP,PT17HIBP,PT17ILOS,PT17SDOD:
                                  PT17TSDW,PT17TODW,PT17TLOM,PT17TIMW,PT17THOM:
                                  PT17THIH,PT17SPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT171   MOVE      ZERO,OVRCD
          READKS    PATW17A1;PT17DRGC,PT17DRGD,PT17SDMT,PT17MVEL:
                                  PT17CPAY,PT17LIBP,PT17HIBP,PT17ILOS,PT17SDOD:
                                  PT17TSDW,PT17TODW,PT17TLOM,PT17TIMW,PT17THOM:
                                  PT17THIH,PT17SPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT171   MOVE      ZERO,OVRCD
          READKP    PATW17A1;PT17DRGC,PT17DRGD,PT17SDMT,PT17MVEL:
                                  PT17CPAY,PT17LIBP,PT17HIBP,PT17ILOS,PT17SDOD:
                                  PT17TSDW,PT17TODW,PT17TLOM,PT17TIMW,PT17THOM:
                                  PT17THIH,PT17SPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT171   UPDATE    PATW17A1;PT17DRGC,PT17DRGD,PT17SDMT,PT17MVEL:
                                  PT17CPAY,PT17LIBP,PT17HIBP,PT17ILOS,PT17SDOD:
                                  PT17TSDW,PT17TODW,PT17TLOM,PT17TIMW,PT17THOM:
                                  PT17THIH,PT17SPAR
          RETURN
.
WRPT171   RESET     KEY4
          WRITE     PATW17A1,KEY4;PT17DRGC,PT17DRGD,PT17SDMT,PT17MVEL:
                                  PT17CPAY,PT17LIBP,PT17HIBP,PT17ILOS,PT17SDOD:
                                  PT17TSDW,PT17TODW,PT17TLOM,PT17TIMW,PT17THOM:
                                  PT17THIH,PT17SPAR
          RETURN
.
DEPT171   RESET     KEY4
          DELETE    PATW17A1,KEY4
          RETURN
+
