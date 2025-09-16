.*****************************************************************************
.*        PATW21IO.INC                                                       *
.*****************************************************************************
.
RSPT211   RESET     KEY4
          READ      PATW21A1,KEY4;;
          RETURN
.
RAPT211   RESET     KEY4
          MOVE      ZERO,OVRCD
          READ      PATW21A1,KEY4;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT211   RESET     KEY4
          MOVE      ZERO,OVRCD
          READ      PATW21A1,KEY4;PT21DRGC,PT21DRGD,PT21SDMT,PT21MVEL:
                                  PT21CPAY,PT21LIBP,PT21HIBP,PT21ILOS,PT21SDOD:
                                  PT21TSDW,PT21TODW,PT21TLOM,PT21TIMW,PT21THOM:
                                  PT21THIH,PT21SPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT211   MOVE      ZERO,OVRCD
          READKS    PATW21A1;PT21DRGC,PT21DRGD,PT21SDMT,PT21MVEL:
                                  PT21CPAY,PT21LIBP,PT21HIBP,PT21ILOS,PT21SDOD:
                                  PT21TSDW,PT21TODW,PT21TLOM,PT21TIMW,PT21THOM:
                                  PT21THIH,PT21SPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT211   MOVE      ZERO,OVRCD
          READKP    PATW21A1;PT21DRGC,PT21DRGD,PT21SDMT,PT21MVEL:
                                  PT21CPAY,PT21LIBP,PT21HIBP,PT21ILOS,PT21SDOD:
                                  PT21TSDW,PT21TODW,PT21TLOM,PT21TIMW,PT21THOM:
                                  PT21THIH,PT21SPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT211   UPDATE    PATW21A1;PT21DRGC,PT21DRGD,PT21SDMT,PT21MVEL:
                                  PT21CPAY,PT21LIBP,PT21HIBP,PT21ILOS,PT21SDOD:
                                  PT21TSDW,PT21TODW,PT21TLOM,PT21TIMW,PT21THOM:
                                  PT21THIH,PT21SPAR
          RETURN
.
WRPT211   RESET     KEY4
          WRITE     PATW21A1,KEY4;PT21DRGC,PT21DRGD,PT21SDMT,PT21MVEL:
                                  PT21CPAY,PT21LIBP,PT21HIBP,PT21ILOS,PT21SDOD:
                                  PT21TSDW,PT21TODW,PT21TLOM,PT21TIMW,PT21THOM:
                                  PT21THIH,PT21SPAR
          RETURN
.
DEPT211   RESET     KEY4
          DELETE    PATW21A1,KEY4
          RETURN
+
