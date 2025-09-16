.*****************************************************************************
.*        PATW18IO.INC                                                       *
.*****************************************************************************
.
RSPT181   RESET     KEY4
          READ      PATW18A1,KEY4;;
          RETURN
.
RAPT181   RESET     KEY4
          MOVE      ZERO,OVRCD
          READ      PATW18A1,KEY4;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT181   RESET     KEY4
          MOVE      ZERO,OVRCD
          READ      PATW18A1,KEY4;PT18DRGC,PT18DRGD,PT18SDMT,PT18MVEL:
                                  PT18CPAY,PT18LIBP,PT18HIBP,PT18ILOS,PT18SDOD:
                                  PT18TSDW,PT18TODW,PT18TLOM,PT18TIMW,PT18THOM:
                                  PT18THIH,PT18SPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT181   MOVE      ZERO,OVRCD
          READKS    PATW18A1;PT18DRGC,PT18DRGD,PT18SDMT,PT18MVEL:
                                  PT18CPAY,PT18LIBP,PT18HIBP,PT18ILOS,PT18SDOD:
                                  PT18TSDW,PT18TODW,PT18TLOM,PT18TIMW,PT18THOM:
                                  PT18THIH,PT18SPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT181   MOVE      ZERO,OVRCD
          READKP    PATW18A1;PT18DRGC,PT18DRGD,PT18SDMT,PT18MVEL:
                                  PT18CPAY,PT18LIBP,PT18HIBP,PT18ILOS,PT18SDOD:
                                  PT18TSDW,PT18TODW,PT18TLOM,PT18TIMW,PT18THOM:
                                  PT18THIH,PT18SPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT181   UPDATE    PATW18A1;PT18DRGC,PT18DRGD,PT18SDMT,PT18MVEL:
                                  PT18CPAY,PT18LIBP,PT18HIBP,PT18ILOS,PT18SDOD:
                                  PT18TSDW,PT18TODW,PT18TLOM,PT18TIMW,PT18THOM:
                                  PT18THIH,PT18SPAR
          RETURN
.
WRPT181   RESET     KEY4
          WRITE     PATW18A1,KEY4;PT18DRGC,PT18DRGD,PT18SDMT,PT18MVEL:
                                  PT18CPAY,PT18LIBP,PT18HIBP,PT18ILOS,PT18SDOD:
                                  PT18TSDW,PT18TODW,PT18TLOM,PT18TIMW,PT18THOM:
                                  PT18THIH,PT18SPAR
          RETURN
.
DEPT181   RESET     KEY4
          DELETE    PATW18A1,KEY4
          RETURN
+
