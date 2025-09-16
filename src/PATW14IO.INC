.*****************************************************************************
.*        PATW14IO.INC                                                       *
.*****************************************************************************
.
RSPT141   RESET     KEY4
          READ      PATW14A1,KEY4;;
          RETURN
.
RAPT141   RESET     KEY4
          MOVE      ZERO,OVRCD
          READ      PATW14A1,KEY4;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT141   RESET     KEY4
          MOVE      ZERO,OVRCD
          READ      PATW14A1,KEY4;PT14DRGC,PT14DRGD,PT14SDMT,PT14MVEL:
                                  PT14CPAY,PT14LIBP,PT14HIBP,PT14ILOS,PT14SDOD:
                                  PT14TSDW,PT14TODW,PT14TLOM,PT14TIMW,PT14THOM:
                                  PT14THIH,PT14SPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT141   MOVE      ZERO,OVRCD
          READKS    PATW14A1;PT14DRGC,PT14DRGD,PT14SDMT,PT14MVEL:
                                  PT14CPAY,PT14LIBP,PT14HIBP,PT14ILOS,PT14SDOD:
                                  PT14TSDW,PT14TODW,PT14TLOM,PT14TIMW,PT14THOM:
                                  PT14THIH,PT14SPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT141   MOVE      ZERO,OVRCD
          READKP    PATW14A1;PT14DRGC,PT14DRGD,PT14SDMT,PT14MVEL:
                                  PT14CPAY,PT14LIBP,PT14HIBP,PT14ILOS,PT14SDOD:
                                  PT14TSDW,PT14TODW,PT14TLOM,PT14TIMW,PT14THOM:
                                  PT14THIH,PT14SPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT141   UPDATE    PATW14A1;PT14DRGC,PT14DRGD,PT14SDMT,PT14MVEL:
                                  PT14CPAY,PT14LIBP,PT14HIBP,PT14ILOS,PT14SDOD:
                                  PT14TSDW,PT14TODW,PT14TLOM,PT14TIMW,PT14THOM:
                                  PT14THIH,PT14SPAR
          RETURN
.
WRPT141   RESET     KEY4
          WRITE     PATW14A1,KEY4;PT14DRGC,PT14DRGD,PT14SDMT,PT14MVEL:
                                  PT14CPAY,PT14LIBP,PT14HIBP,PT14ILOS,PT14SDOD:
                                  PT14TSDW,PT14TODW,PT14TLOM,PT14TIMW,PT14THOM:
                                  PT14THIH,PT14SPAR
          RETURN
.
DEPT141   RESET     KEY4
          DELETE    PATW14A1,KEY4
          RETURN
+
