.
.         positional read
.
RSPREX1   RESET     KEY25
          READ      PRIEXCA1,KEY25;;
          RETURN
.
.         read to see if record exists
.
RAPREX1   MOVE      ZERO,OVRCD
          RESET     KEY25
          READ      PRIEXCA1,KEY25;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDPREX1   MOVE      ZERO,OVRCD
          RESET     KEY25
          READ      PRIEXCA1,KEY25;PREXCLM,DPREXFLG,PREXITMN,PREXSUBN:
                                  PREXDAT1,PREXCHRG,PREXDAT2,PREXSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPREXFLG,PREXFLAG
          RETURN
.
.         next read
.
RKPREX1   MOVE      ZERO,OVRCD
          READKS    PRIEXCA1;PREXCLM,DPREXFLG,PREXITMN,PREXSUBN:
                                  PREXDAT1,PREXCHRG,PREXDAT2,PREXSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPREXFLG,PREXFLAG
          RETURN
.
.         previous read
.
RPPREX1   MOVE      ZERO,OVRCD
          READKP    PRIEXCA1;PREXCLM,DPREXFLG,PREXITMN,PREXSUBN:
                                  PREXDAT1,PREXCHRG,PREXDAT2,PREXSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPREXFLG,PREXFLAG
          RETURN
.
.         update
.
UPPREX1   MOVE      PREXFLAG,DPREXFLG
          UPDATE    PRIEXCA1;PREXCLM,DPREXFLG,PREXITMN,PREXSUBN:
                                  PREXDAT1,PREXCHRG,PREXDAT2,PREXSPAR
          RETURN
.
.         write
.
WRPREX1   RESET     KEY25
          MOVE      PREXFLAG,DPREXFLG
          WRITE     PRIEXCA1,KEY25;PREXCLM,DPREXFLG,PREXITMN,PREXSUBN:
                                  PREXDAT1,PREXCHRG,PREXDAT2,PREXSPAR
          RETURN
.
.         delete a record
.
DEPREX1   RESET     KEY25
          DELETE    PRIEXCA1,KEY25
          RETURN
.
.         Audit I/O routines
.
ASPREX    RESET     KEY19
          READ      PRIAUDEX,KEY19;;
          RETURN
.
AKPREX    MOVE      ZERO,OVRCD
          READKS    PRIAUDEX;PREXAUDD,PREXAUDT,PREXAUDP,PREXAUDR:
                                  PREXAUDS,PREXAUDO:
                                  PREXCLM,DPREXFLG,PREXITMN,PREXSUBN:
                                  PREXDAT1,PREXCHRG,PREXDAT2,PREXSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPREXFLG,PREXFLAG
          RETURN
.
AUPREX    MOVE      PREXFLAG,DPREXFLG
          UPDATE    PRIAUDEX;PREXAUDD,PREXAUDT,PREXAUDP,PREXAUDR:
                                  PREXAUDS,PREXAUDO:
                                  PREXCLM,DPREXFLG,PREXITMN,PREXSUBN:
                                  PREXDAT1,PREXCHRG,PREXDAT2,PREXSPAR
          RETURN
.
AWPREX    RESET     KEY19
          MOVE      PREXFLAG,DPREXFLG
          WRITE     PRIAUDEX,KEY19;KEY19:
                                  PREXAUDS,PREXAUDO:
                                  PREXCLM,DPREXFLG,PREXITMN,PREXSUBN:
                                  PREXDAT1,PREXCHRG,PREXDAT2,PREXSPAR
          RETURN
.
ADPREX    RESET     KEY19
          DELETE    PRIAUDEX,KEY19
          RETURN
.
