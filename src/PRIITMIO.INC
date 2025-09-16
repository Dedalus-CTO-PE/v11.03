RSPRIT1   RESET     KEY22
          READ      PRIITEM1,KEY22;;
          RETURN
.
RAPRIT1   RESET     KEY22
          MOVE      ZERO,OVRCD
          READ      PRIITEM1,KEY22;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRIT1   RESET     KEY22
          MOVE      ZERO,OVRCD
          READ      PRIITEM1,KEY22;DPRITFLG,PRITITMN,PRITSUBN,PRITDAT1,PRITDESC:
                                  PRITKEYI,PRITSFEE,PRITSETC,PRITDAT2:
                                  PRITICAT,PRITIGRP,PRITSGRP,PRITFTYP,PRITPTYP:
                                  PRITPATH,PRITMAXR,PRITDAYS:
                                  PRITSTEP,PRITSTSB,PRITFIXD,PRITGSTA,PRITGSTC:
                                  PRITSF75,PRITSF85,PRITSAFE,PRITPDTI:
                                  PRITSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPRITFLG,PRITFLAG
          RETURN
.
RKPRIT1   MOVE      ZERO,OVRCD
          READKS    PRIITEM1;DPRITFLG,PRITITMN,PRITSUBN,PRITDAT1,PRITDESC:
                                  PRITKEYI,PRITSFEE,PRITSETC,PRITDAT2:
                                  PRITICAT,PRITIGRP,PRITSGRP,PRITFTYP,PRITPTYP:
                                  PRITPATH,PRITMAXR,PRITDAYS:
                                  PRITSTEP,PRITSTSB,PRITFIXD,PRITGSTA,PRITGSTC:
                                  PRITSF75,PRITSF85,PRITSAFE,PRITPDTI:
                                  PRITSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPRITFLG,PRITFLAG
          RETURN
.
RPPRIT1   MOVE      ZERO,OVRCD
          READKP    PRIITEM1;DPRITFLG,PRITITMN,PRITSUBN,PRITDAT1,PRITDESC:
                                  PRITKEYI,PRITSFEE,PRITSETC,PRITDAT2:
                                  PRITICAT,PRITIGRP,PRITSGRP,PRITFTYP,PRITPTYP:
                                  PRITPATH,PRITMAXR,PRITDAYS:
                                  PRITSTEP,PRITSTSB,PRITFIXD,PRITGSTA,PRITGSTC:
                                  PRITSF75,PRITSF85,PRITSAFE,PRITPDTI:
                                  PRITSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPRITFLG,PRITFLAG
          RETURN
.
UPPRIT1   MOVE      PRITFLAG,DPRITFLG
          UPDATE    PRIITEM1;DPRITFLG,PRITITMN,PRITSUBN,PRITDAT1,PRITDESC:
                                  PRITKEYI,PRITSFEE,PRITSETC,PRITDAT2:
                                  PRITICAT,PRITIGRP,PRITSGRP,PRITFTYP,PRITPTYP:
                                  PRITPATH,PRITMAXR,PRITDAYS:
                                  PRITSTEP,PRITSTSB,PRITFIXD,PRITGSTA,PRITGSTC:
                                  PRITSF75,PRITSF85,PRITSAFE,PRITPDTI:
                                  PRITSPAR
          RETURN
.
WRPRIT1   RESET     KEY22
          MOVE      PRITFLAG,DPRITFLG
          WRITE     PRIITEM1,KEY22;KEY22,PRITDESC:
                                  PRITKEYI,PRITSFEE,PRITSETC,PRITDAT2:
                                  PRITICAT,PRITIGRP,PRITSGRP,PRITFTYP,PRITPTYP:
                                  PRITPATH,PRITMAXR,PRITDAYS:
                                  PRITSTEP,PRITSTSB,PRITFIXD,PRITGSTA,PRITGSTC:
                                  PRITSF75,PRITSF85,PRITSAFE,PRITPDTI:
                                  PRITSPAR
          RETURN
.
DEPRIT1   RESET     KEY22
          DELETE    PRIITEM1,KEY22
          RETURN
.
RSPRIT2   RESET     KEY52
          READ      PRIITEM2,KEY52;;
          RETURN
.
RAPRIT2   RESET     KEY52
          MOVE      ZERO,OVRCD
          READ      PRIITEM2,KEY52;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRIT2   RESET     KEY52
          MOVE      ZERO,OVRCD
          READ      PRIITEM2,KEY52;DPRITFLG,PRITITMN,PRITSUBN,PRITDAT1,PRITDESC:
                                  PRITKEYI,PRITSFEE,PRITSETC,PRITDAT2:
                                  PRITICAT,PRITIGRP,PRITSGRP,PRITFTYP,PRITPTYP:
                                  PRITPATH,PRITMAXR,PRITDAYS:
                                  PRITSTEP,PRITSTSB,PRITFIXD,PRITGSTA,PRITGSTC:
                                  PRITSF75,PRITSF85,PRITSAFE,PRITPDTI:
                                  PRITSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPRITFLG,PRITFLAG
          RETURN
.
RKPRIT2   MOVE      ZERO,OVRCD
          READKS    PRIITEM2;DPRITFLG,PRITITMN,PRITSUBN,PRITDAT1,PRITDESC:
                                  PRITKEYI,PRITSFEE,PRITSETC,PRITDAT2:
                                  PRITICAT,PRITIGRP,PRITSGRP,PRITFTYP,PRITPTYP:
                                  PRITPATH,PRITMAXR,PRITDAYS:
                                  PRITSTEP,PRITSTSB,PRITFIXD,PRITGSTA,PRITGSTC:
                                  PRITSF75,PRITSF85,PRITSAFE,PRITPDTI:
                                  PRITSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPRITFLG,PRITFLAG
          RETURN
.
RPPRIT2   MOVE      ZERO,OVRCD
          READKP    PRIITEM2;DPRITFLG,PRITITMN,PRITSUBN,PRITDAT1,PRITDESC:
                                  PRITKEYI,PRITSFEE,PRITSETC,PRITDAT2:
                                  PRITICAT,PRITIGRP,PRITSGRP,PRITFTYP,PRITPTYP:
                                  PRITPATH,PRITMAXR,PRITDAYS:
                                  PRITSTEP,PRITSTSB,PRITFIXD,PRITGSTA,PRITGSTC:
                                  PRITSF75,PRITSF85,PRITSAFE,PRITPDTI:
                                  PRITSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPRITFLG,PRITFLAG
          RETURN
.
ASPRIT    RESET     KEY19
          READ      PRIAUDIT,KEY19;;
          RETURN
.
AKPRIT    MOVE      ZERO,OVRCD
          READKS    PRIAUDIT;PRITAUDD,PRITAUDT,PRITAUDP,PRITAUDR:
                                  PRITAUDS,PRITAUDO,DPRITFLG,PRITITMN,PRITSUBN:
                                  PRITDAT1,PRITDESC,PRITKEYI,PRITSFEE,PRITSETC:
                                  PRITDAT2,PRITICAT,PRITIGRP,PRITSGRP,PRITFTYP:
                                  PRITPTYP,PRITPATH,PRITMAXR,PRITDAYS:
                                  PRITSTEP,PRITSTSB,PRITFIXD,PRITGSTA,PRITGSTC:
                                  PRITSF75,PRITSF85,PRITSAFE,PRITPDTI:
                                  PRITSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPRITFLG,PRITFLAG
          RETURN
.
AUPRIT    MOVE      PRITFLAG,DPRITFLG
          UPDATE    PRIAUDIT;PRITAUDD,PRITAUDT,PRITAUDP,PRITAUDR:
                                  PRITAUDS,PRITAUDO,DPRITFLG,PRITITMN,PRITSUBN:
                                  PRITDAT1,PRITDESC,PRITKEYI,PRITSFEE,PRITSETC:
                                  PRITDAT2,PRITICAT,PRITIGRP,PRITSGRP,PRITFTYP:
                                  PRITPTYP,PRITPATH,PRITMAXR,PRITDAYS:
                                  PRITSTEP,PRITSTSB,PRITFIXD,PRITGSTA,PRITGSTC:
                                  PRITSF75,PRITSF85,PRITSAFE,PRITPDTI:
                                  PRITSPAR
          RETURN
.
AWPRIT    RESET     KEY19
          MOVE      PRITFLAG,DPRITFLG
          WRITE     PRIAUDIT,KEY19;PRITAUDD,PRITAUDT,PRITAUDP,PRITAUDR:
                                  PRITAUDS,PRITAUDO,DPRITFLG,PRITITMN,PRITSUBN:
                                  PRITDAT1,PRITDESC,PRITKEYI,PRITSFEE,PRITSETC:
                                  PRITDAT2,PRITICAT,PRITIGRP,PRITSGRP,PRITFTYP:
                                  PRITPTYP,PRITPATH,PRITMAXR,PRITDAYS:
                                  PRITSTEP,PRITSTSB,PRITFIXD,PRITGSTA,PRITGSTC:
                                  PRITSF75,PRITSF85,PRITSAFE,PRITPDTI:
                                  PRITSPAR
          RETURN
.
ADPRIT    RESET     KEY19
          DELETE    PRIAUDIT,KEY19
          RETURN
.
