.*****************************************************************************
.*        PATW20IO.INC                                                       *
.*****************************************************************************
.
RSPT201   RESET     KEY4
          READ      PATW20A1,KEY4;;
          RETURN
.
RAPT201   RESET     KEY4
          MOVE      ZERO,OVRCD
          READ      PATW20A1,KEY4;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT201   RESET     KEY4
          MOVE      ZERO,OVRCD
          READ      PATW20A1,KEY4;PT20DRGC,PT20DRGD,PT20SDMT,PT20MVEL:
                                  PT20CPAY,PT20LIBP,PT20HIBP,PT20ILOS,PT20SDOD:
                                  PT20TSDW,PT20TODW,PT20TLOM,PT20TIMW,PT20THOM:
                                  PT20THIH,PT20SPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT201   MOVE      ZERO,OVRCD
          READKS    PATW20A1;PT20DRGC,PT20DRGD,PT20SDMT,PT20MVEL:
                                  PT20CPAY,PT20LIBP,PT20HIBP,PT20ILOS,PT20SDOD:
                                  PT20TSDW,PT20TODW,PT20TLOM,PT20TIMW,PT20THOM:
                                  PT20THIH,PT20SPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT201   MOVE      ZERO,OVRCD
          READKP    PATW20A1;PT20DRGC,PT20DRGD,PT20SDMT,PT20MVEL:
                                  PT20CPAY,PT20LIBP,PT20HIBP,PT20ILOS,PT20SDOD:
                                  PT20TSDW,PT20TODW,PT20TLOM,PT20TIMW,PT20THOM:
                                  PT20THIH,PT20SPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT201   UPDATE    PATW20A1;PT20DRGC,PT20DRGD,PT20SDMT,PT20MVEL:
                                  PT20CPAY,PT20LIBP,PT20HIBP,PT20ILOS,PT20SDOD:
                                  PT20TSDW,PT20TODW,PT20TLOM,PT20TIMW,PT20THOM:
                                  PT20THIH,PT20SPAR
          RETURN
.
WRPT201   RESET     KEY4
          WRITE     PATW20A1,KEY4;PT20DRGC,PT20DRGD,PT20SDMT,PT20MVEL:
                                  PT20CPAY,PT20LIBP,PT20HIBP,PT20ILOS,PT20SDOD:
                                  PT20TSDW,PT20TODW,PT20TLOM,PT20TIMW,PT20THOM:
                                  PT20THIH,PT20SPAR
          RETURN
.
DEPT201   RESET     KEY4
          DELETE    PATW20A1,KEY4
          RETURN
+
