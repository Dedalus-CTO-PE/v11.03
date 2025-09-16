.*****************************************************************************
.*        HICEFCIO.INC                                                       *
.*****************************************************************************
.
RSHCEFC1  RESET     KEY13
          READ      HICEFCA1,KEY13;;
          RETURN
.
RAHCEFC1  RESET     KEY13
          MOVE      ZERO,OVRCD
          READ      HICEFCA1,KEY13;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCEFC1  RESET     KEY13
          MOVE      ZERO,OVRCD
          READ      HICEFCA1,KEY13;HCECBTCH,HCECRNUM,HCECCNTR,HCECTDAT:
                                  HCECDAMT,HCECSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCEFC1  MOVE      ZERO,OVRCD
          READKS    HICEFCA1;HCECBTCH,HCECRNUM,HCECCNTR,HCECTDAT:
                             HCECDAMT,HCECSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCEFC1  MOVE      ZERO,OVRCD
          READKP    HICEFCA1;HCECBTCH,HCECRNUM,HCECCNTR,HCECTDAT:
                             HCECDAMT,HCECSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCEFC1  UPDATE    HICEFCA1;HCECBTCH,HCECRNUM,HCECCNTR,HCECTDAT:
                             HCECDAMT,HCECSPAR
          RETURN
.
WRHCEFC1  RESET     KEY13
          WRITE     HICEFCA1,KEY13;HCECBTCH,HCECRNUM,HCECCNTR,HCECTDAT:
                                  HCECDAMT,HCECSPAR
          RETURN
.
DEHCEFC1  RESET     KEY13
          DELETE    HICEFCA1,KEY13
          RETURN
.
RSHCEFC2  RESET     KEY13
          READ      HICEFCA2,KEY13;;
          RETURN
.
RAHCEFC2  RESET     KEY13
          MOVE      ZERO,OVRCD
          READ      HICEFCA2,KEY13;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCEFC2  RESET     KEY13
          MOVE      ZERO,OVRCD
          READ      HICEFCA2,KEY13;HCECBTCH,HCECRNUM,HCECCNTR,HCECTDAT:
                                  HCECDAMT,HCECSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCEFC2  MOVE      ZERO,OVRCD
          READKS    HICEFCA2;HCECBTCH,HCECRNUM,HCECCNTR,HCECTDAT:
                             HCECDAMT,HCECSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCEFC2  MOVE      ZERO,OVRCD
          READKP    HICEFCA2;HCECBTCH,HCECRNUM,HCECCNTR,HCECTDAT:
                             HCECDAMT,HCECSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCEFC2  UPDATE    HICEFCA2;HCECBTCH,HCECRNUM,HCECCNTR,HCECTDAT:
                             HCECDAMT,HCECSPAR
          RETURN
.
WRHCEFC2  RESET     KEY13
          WRITE     HICEFCA2,KEY13;HCECBTCH,HCECRNUM,HCECCNTR,HCECTDAT:
                                  HCECDAMT,HCECSPAR
+
