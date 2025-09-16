.*****************************************************************************
.*        ALLHDTIO.INC                                                       *
.*****************************************************************************
.
RSALHDT1  RESET     KEY42
          READ      ALLHDTA1,KEY42;;
          RETURN
.
RAALHDT1  RESET     KEY42
          MOVE      ZERO,OVRCD
          READ      ALLHDTA1,KEY42;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALHDT1  RESET     KEY42
          MOVE      ZERO,OVRCD
          READ      ALLHDTA1,KEY42;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALHDT1  MOVE      ZERO,OVRCD
          READKS    ALLHDTA1;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR

          GOTO      OVERCOND IF OVER
          RETURN
.
RPALHDT1  MOVE      ZERO,OVRCD
          READKP    ALLHDTA1;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR

          GOTO      OVERCOND IF OVER
          RETURN
.
UPALHDT1  UPDATE    ALLHDTA1;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          RETURN
.
WRALHDT1  RESET     KEY42
          WRITE     ALLHDTA1,KEY42;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          RETURN
.
DEALHDT1  RESET     KEY42
          DELETE    ALLHDTA1,KEY42
          RETURN
.
RSALHDT2  RESET     KEY62
          READ      ALLHDTA2,KEY62;;
          RETURN
.
RAALHDT2  RESET     KEY62
          MOVE      ZERO,OVRCD
          READ      ALLHDTA2,KEY62;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALHDT2  RESET     KEY62
          MOVE      ZERO,OVRCD
          READ      ALLHDTA2,KEY62;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALHDT2  MOVE      ZERO,OVRCD
          READKS    ALLHDTA2;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALHDT2  MOVE      ZERO,OVRCD
          READKP    ALLHDTA2;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALHDT2  UPDATE    ALLHDTA2;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          RETURN
.
WRALHDT2  RESET     KEY62
          WRITE     ALLHDTA2,KEY62;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          RETURN
.
DEALHDT2  RESET     KEY62
          DELETE    ALLHDTA2,KEY62
          RETURN
.
RSALHDT3  RESET     KEY42
          READ      ALLHDTA3,KEY42;;
          RETURN
.
RAALHDT3  RESET     KEY42
          MOVE      ZERO,OVRCD
          READ      ALLHDTA3,KEY42;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALHDT3  RESET     KEY42
          MOVE      ZERO,OVRCD
          READ      ALLHDTA3,KEY42;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALHDT3  MOVE      ZERO,OVRCD
          READKS    ALLHDTA3;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALHDT3  MOVE      ZERO,OVRCD
          READKP    ALLHDTA3;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALHDT3  UPDATE    ALLHDTA3;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          RETURN
.
WRALHDT3  RESET     KEY42
          WRITE     ALLHDTA3,KEY42;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          RETURN
.
DEALHDT3  RESET     KEY42
          DELETE    ALLHDTA3,KEY42
          RETURN
.
RSALHDT4  RESET     KEY42
          READ      ALLHDTA4,KEY42;;
          RETURN
.
RAALHDT4  RESET     KEY42
          MOVE      ZERO,OVRCD
          READ      ALLHDTA4,KEY42;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALHDT4  RESET     KEY42
          MOVE      ZERO,OVRCD
          READ      ALLHDTA4,KEY42;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALHDT4  MOVE      ZERO,OVRCD
          READKS    ALLHDTA4;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALHDT4  MOVE      ZERO,OVRCD
          READKP    ALLHDTA4;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALHDT4  UPDATE    ALLHDTA4;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          RETURN
.
WRALHDT4  RESET     KEY42
          WRITE     ALLHDTA4,KEY42;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          RETURN
.
DEALHDT4  RESET     KEY42
          DELETE    ALLHDTA4,KEY42
          RETURN
.
RSALHDT5  RESET     KEY49
          READ      ALLHDTA5,KEY49;;
          RETURN
.
RAALHDT5  RESET     KEY49
          MOVE      ZERO,OVRCD
          READ      ALLHDTA5,KEY49;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALHDT5  RESET     KEY49
          MOVE      ZERO,OVRCD
          READ      ALLHDTA5,KEY49;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALHDT5  MOVE      ZERO,OVRCD
          READKS    ALLHDTA5;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALHDT5  MOVE      ZERO,OVRCD
          READKP    ALLHDTA5;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALHDT5  UPDATE    ALLHDTA5;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          RETURN
.
WRALHDT5  RESET     KEY49
          WRITE     ALLHDTA5,KEY49;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          RETURN
.
DEALHDT5  RESET     KEY49
          DELETE    ALLHDTA5,KEY49
          RETURN
.
RSALHDT6  RESET     KEY49
          READ      ALLHDTA6,KEY49;;
          RETURN
.
RAALHDT6  RESET     KEY49
          MOVE      ZERO,OVRCD
          READ      ALLHDTA6,KEY49;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALHDT6  RESET     KEY49
          MOVE      ZERO,OVRCD
          READ      ALLHDTA6,KEY49;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALHDT6  MOVE      ZERO,OVRCD
          READKS    ALLHDTA6;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALHDT6  MOVE      ZERO,OVRCD
          READKP    ALLHDTA6;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALHDT6  UPDATE    ALLHDTA6;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          RETURN
.
WRALHDT6  RESET     KEY49
          WRITE     ALLHDTA6,KEY49;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          RETURN
.
DEALHDT6  RESET     KEY49
          DELETE    ALLHDTA6,KEY49
          RETURN
.
RSALHDT7  RESET     KEY42
          READ      ALLHDTA7,KEY42;;
          RETURN
.
RAALHDT7  RESET     KEY42
          MOVE      ZERO,OVRCD
          READ      ALLHDTA7,KEY42;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALHDT7  RESET     KEY42
          MOVE      ZERO,OVRCD
          READ      ALLHDTA7,KEY42;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALHDT7  MOVE      ZERO,OVRCD
          READKS    ALLHDTA7;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALHDT7  MOVE      ZERO,OVRCD
          READKP    ALLHDTA7;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALHDT7  UPDATE    ALLHDTA7;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          RETURN
.
WRALHDT7  RESET     KEY42
          WRITE     ALLHDTA7,KEY42;ALHDSTAT,ALHDURNO,ALHDDTTM,ALHDVISN:
                                  ALHDCONT,ALHDBNUM,ALHDMESI,ALHDRTYP,ALHDACTN:
                                  ALHDVFLG,ALHDMTYP,ALHDSRCE,ALHDDEPT,ALHDPRGM:
                                  ALHDWEBU,ALHDCRST,ALHDCAVL,ALHDLARR,ALHDUACC:
                                  ALHDMREL,ALHDDTHP,ALHDOURN,ALHDRDAT,ALHDOTRR:
                                  ALHDOTRC,ALHDOUTC,ALHDCLUC,ALHDCRDT,ALHDRADT:
                                  ALHDLINK,ALHDSDAT,ALHDEDAT,ALHDFCFL,ALHDCPPT:
                                  ALHDIODT,ALHDACDD,ALHDCPDD,ALHDFABD,ALHDHDDT:
                                  ALHDFNAD,ALHDENDR,ALHDMFLG,ALHDCTYP,ALHDEEPR:
                                  ALHDCOMP,ALHDPGRP,ALHDPGR1,ALHDPGR2,ALHDPGR3:
                                  ALHDPGR4,ALHDDATE,ALHDTIME,ALHDPURP,ALHDSTYP:
                                  ALHDPRES,ALHDDMOD,ALHDDSET,ALHDPOFC,ALHDPDPL:
                                  ALHDCMOD,ALHDIFLG,ALHDSPCP,ALHDCSET,ALHDCEPR:
                                  ALHDRODT,ALHDSERT,ALHDPLAC,ALHDRCNT,ALHDPSIT:
                                  ALHDUDT1,ALHDCLID,ALHDTRGS,ALHDTRGD,ALHDSDEP:
                                  ALHDUDT2,ALHDCEDT,ALHDCETM,ALHDRSTA,ALHDDCAN:
                                  ALHDRIRD,ALHDRIRS,ALHDRITS,ALHDSRDT,ALHDDCLO:
                                  ALHDSPAR
          RETURN
.
DEALHDT7  RESET     KEY42
          DELETE    ALLHDTA7,KEY42
          RETURN
+
