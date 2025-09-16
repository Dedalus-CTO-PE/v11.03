.*****************************************************************************
.*        PATW16IO.INC                                                       *
.*****************************************************************************
.
RSPT161   RESET     KEY4
          READ      PATW16A1,KEY4;;
          RETURN
.
RAPT161   RESET     KEY4
          MOVE      ZERO,OVRCD
          READ      PATW16A1,KEY4;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT161   RESET     KEY4
          MOVE      ZERO,OVRCD
          READ      PATW16A1,KEY4;PT16DRGC,PT16DRGD,PT16SDMT,PT16MVEL:
                                  PT16CPAY,PT16LIBP,PT16HIBP,PT16ILOS,PT16SDOD:
                                  PT16TSDW,PT16TODW,PT16TLOM,PT16TIMW,PT16THOM:
                                  PT16THIH,PT16SPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT161   MOVE      ZERO,OVRCD
          READKS    PATW16A1;PT16DRGC,PT16DRGD,PT16SDMT,PT16MVEL:
                                  PT16CPAY,PT16LIBP,PT16HIBP,PT16ILOS,PT16SDOD:
                                  PT16TSDW,PT16TODW,PT16TLOM,PT16TIMW,PT16THOM:
                                  PT16THIH,PT16SPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT161   MOVE      ZERO,OVRCD
          READKP    PATW16A1;PT16DRGC,PT16DRGD,PT16SDMT,PT16MVEL:
                                  PT16CPAY,PT16LIBP,PT16HIBP,PT16ILOS,PT16SDOD:
                                  PT16TSDW,PT16TODW,PT16TLOM,PT16TIMW,PT16THOM:
                                  PT16THIH,PT16SPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT161   UPDATE    PATW16A1;PT16DRGC,PT16DRGD,PT16SDMT,PT16MVEL:
                                  PT16CPAY,PT16LIBP,PT16HIBP,PT16ILOS,PT16SDOD:
                                  PT16TSDW,PT16TODW,PT16TLOM,PT16TIMW,PT16THOM:
                                  PT16THIH,PT16SPAR
          RETURN
.
WRPT161   RESET     KEY4
          WRITE     PATW16A1,KEY4;PT16DRGC,PT16DRGD,PT16SDMT,PT16MVEL:
                                  PT16CPAY,PT16LIBP,PT16HIBP,PT16ILOS,PT16SDOD:
                                  PT16TSDW,PT16TODW,PT16TLOM,PT16TIMW,PT16THOM:
                                  PT16THIH,PT16SPAR
          RETURN
.
DEPT161   RESET     KEY4
          DELETE    PATW16A1,KEY4
          RETURN
+
