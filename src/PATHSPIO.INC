.
. Include   : PATHSPIO.INC
. File      : pathspaf.dat
. Keys      : KEY3
.
RSPTHSP1  RESET     KEY3
          READ      PATHSPA1,KEY3;;
          RETURN
.
RAPTHSP1  RESET     KEY3
          MOVE      ZERO,OVRCD
          READ      PATHSPA1,KEY3;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTHSP1  RESET     KEY3
          MOVE      ZERO,OVRCD
          READ      PATHSPA1,KEY3;PTHSHOSP,PTHSNAME,PTHSADD1,PTHSADD2:
                                  PTHSADD3,PTHSADD4,PTHSPCOD,PTHSTELE:
                                  PTHSFAXN,PTHSUNIT,PTHSHDPC,PTHSMRPR:
                                  PTHSPACT,PTHSHSNO,PTHSPMBS,PTHSTFEE:
                                  PTHSHLOC,PTHSRCTY,PTHSVOLM,PTHSSTAT:
                                  PTHSDCLM,PTHSAPPR,PTHSUFMS,PTHSABNN:
                                  PTHSHSID,PTHSHCEN,PTHSPTIN,PTHSSPID:
                                  PTHSEDIP,PTHSORID,PTHSMORG,PTHSCHOT:
                                  PTHSCHOD,PTHSHOST,PTHSUDVA,PTHSLOCN:
                                  PTHSERRE,PTHSERCD,PTHSERCA,PTHSCFCD:
                                  PTHSEMAL,PTHSERSR,PTHSSNAM,PTHSTORD:
                                  PTHSHHOS,PTHSCRSR,PTHSRCOP,PTHSHBID:
                                  PTHSDCDT,PTHSHPIO,PTHSCFST,PTHSHDHB:
                                  PTHSAGNC,PTHSUCRG,PTHSHSST,PTHSACTR:
                                  PTHSAGEL,PTHSAGEH,PTHSMAPH,PTHSSPAR
          GOTO      OVERCOND IF OVER
          MOVE      PTHSHSNO,PTHSNUMB
          RETURN
.
RLPTHSP1  RESET     KEY3
          MOVE      ZERO,OVRCD
          READL     PATHSPA1,KEY3;PTHSHOSP,PTHSNAME,PTHSADD1,PTHSADD2:
                                  PTHSADD3,PTHSADD4,PTHSPCOD,PTHSTELE:
                                  PTHSFAXN,PTHSUNIT,PTHSHDPC,PTHSMRPR:
                                  PTHSPACT,PTHSHSNO,PTHSPMBS,PTHSTFEE:
                                  PTHSHLOC,PTHSRCTY,PTHSVOLM,PTHSSTAT:
                                  PTHSDCLM,PTHSAPPR,PTHSUFMS,PTHSABNN:
                                  PTHSHSID,PTHSHCEN,PTHSPTIN,PTHSSPID:
                                  PTHSEDIP,PTHSORID,PTHSMORG,PTHSCHOT:
                                  PTHSCHOD,PTHSHOST,PTHSUDVA,PTHSLOCN:
                                  PTHSERRE,PTHSERCD,PTHSERCA,PTHSCFCD:
                                  PTHSEMAL,PTHSERSR,PTHSSNAM,PTHSTORD:
                                  PTHSHHOS,PTHSCRSR,PTHSRCOP,PTHSHBID:
                                  PTHSDCDT,PTHSHPIO,PTHSCFST,PTHSHDHB:
                                  PTHSAGNC,PTHSUCRG,PTHSHSST,PTHSACTR:
                                  PTHSAGEL,PTHSAGEH,PTHSMAPH,PTHSSPAR
          GOTO      OVERLOCK IF LOCKED
          GOTO      OVERCOND IF OVER
          MOVE      PTHSHSNO,PTHSNUMB
          RETURN
.
RKPTHSP1  MOVE      ZERO,OVRCD
          READKS    PATHSPA1;PTHSHOSP,PTHSNAME,PTHSADD1,PTHSADD2:
                             PTHSADD3,PTHSADD4,PTHSPCOD,PTHSTELE:
                             PTHSFAXN,PTHSUNIT,PTHSHDPC,PTHSMRPR:
                             PTHSPACT,PTHSHSNO,PTHSPMBS,PTHSTFEE:
                             PTHSHLOC,PTHSRCTY,PTHSVOLM,PTHSSTAT:
                             PTHSDCLM,PTHSAPPR,PTHSUFMS,PTHSABNN:
                             PTHSHSID,PTHSHCEN,PTHSPTIN,PTHSSPID:
                             PTHSEDIP,PTHSORID,PTHSMORG,PTHSCHOT:
                             PTHSCHOD,PTHSHOST,PTHSUDVA,PTHSLOCN:
                             PTHSERRE,PTHSERCD,PTHSERCA,PTHSCFCD:
                             PTHSEMAL,PTHSERSR,PTHSSNAM,PTHSTORD:
                             PTHSHHOS,PTHSCRSR,PTHSRCOP,PTHSHBID:
                             PTHSDCDT,PTHSHPIO,PTHSCFST,PTHSHDHB:
                             PTHSAGNC,PTHSUCRG,PTHSHSST,PTHSACTR:
                             PTHSAGEL,PTHSAGEH,PTHSMAPH,PTHSSPAR
          GOTO      OVERCOND IF OVER
          MOVE      PTHSHSNO,PTHSNUMB
          RETURN
.
RPPTHSP1  MOVE      ZERO,OVRCD
          READKP    PATHSPA1;PTHSHOSP,PTHSNAME,PTHSADD1,PTHSADD2:
                             PTHSADD3,PTHSADD4,PTHSPCOD,PTHSTELE:
                             PTHSFAXN,PTHSUNIT,PTHSHDPC,PTHSMRPR:
                             PTHSPACT,PTHSHSNO,PTHSPMBS,PTHSTFEE:
                             PTHSHLOC,PTHSRCTY,PTHSVOLM,PTHSSTAT:
                             PTHSDCLM,PTHSAPPR,PTHSUFMS,PTHSABNN:
                             PTHSHSID,PTHSHCEN,PTHSPTIN,PTHSSPID:
                             PTHSEDIP,PTHSORID,PTHSMORG,PTHSCHOT:
                             PTHSCHOD,PTHSHOST,PTHSUDVA,PTHSLOCN: 
                             PTHSERRE,PTHSERCD,PTHSERCA,PTHSCFCD:
                             PTHSEMAL,PTHSERSR,PTHSSNAM,PTHSTORD:
                             PTHSHHOS,PTHSCRSR,PTHSRCOP,PTHSHBID:
                             PTHSDCDT,PTHSHPIO,PTHSCFST,PTHSHDHB:
                             PTHSAGNC,PTHSUCRG,PTHSHSST,PTHSACTR:
                             PTHSAGEL,PTHSAGEH,PTHSMAPH,PTHSSPAR
          GOTO      OVERCOND IF OVER
          MOVE      PTHSHSNO,PTHSNUMB
          RETURN
.
UPPTHSP1  MOVE      PTHSNUMB,PTHSHSNO
          UPDATE    PATHSPA1;PTHSHOSP,PTHSNAME,PTHSADD1,PTHSADD2:
                             PTHSADD3,PTHSADD4,PTHSPCOD,PTHSTELE:
                             PTHSFAXN,PTHSUNIT,PTHSHDPC,PTHSMRPR:
                             PTHSPACT,PTHSHSNO,PTHSPMBS,PTHSTFEE:
                             PTHSHLOC,PTHSRCTY,PTHSVOLM,PTHSSTAT:
                             PTHSDCLM,PTHSAPPR,PTHSUFMS,PTHSABNN:
                             PTHSHSID,PTHSHCEN,PTHSPTIN,PTHSSPID:
                             PTHSEDIP,PTHSORID,PTHSMORG,PTHSCHOT:
                             PTHSCHOD,PTHSHOST,PTHSUDVA,PTHSLOCN:
                             PTHSERRE,PTHSERCD,PTHSERCA,PTHSCFCD:
                             PTHSEMAL,PTHSERSR,PTHSSNAM,PTHSTORD:
                             PTHSHHOS,PTHSCRSR,PTHSRCOP,PTHSHBID:
                             PTHSDCDT,PTHSHPIO,PTHSCFST,PTHSHDHB:
                             PTHSAGNC,PTHSUCRG,PTHSHSST,PTHSACTR:
                             PTHSAGEL,PTHSAGEH,PTHSMAPH,PTHSSPAR
          RETURN
.
ULPTHSP1  UNLOCK    PATHSPA1
          RETURN
.
WRPTHSP1  MOVE      ZERO,OVRCD
          RESET     KEY3
          TRAP      OVERLOCK IF IO
          MOVE      PTHSNUMB,PTHSHSNO
          WRITE     PATHSPA1,KEY3;PTHSHOSP,PTHSNAME,PTHSADD1,PTHSADD2:
                                  PTHSADD3,PTHSADD4,PTHSPCOD,PTHSTELE:
                                  PTHSFAXN,PTHSUNIT,PTHSHDPC,PTHSMRPR:
                                  PTHSPACT,PTHSHSNO,PTHSPMBS,PTHSTFEE:
                                  PTHSHLOC,PTHSRCTY,PTHSVOLM,PTHSSTAT:
                                  PTHSDCLM,PTHSAPPR,PTHSUFMS,PTHSABNN:
                                  PTHSHSID,PTHSHCEN,PTHSPTIN,PTHSSPID:
                                  PTHSEDIP,PTHSORID,PTHSMORG,PTHSCHOT:
                                  PTHSCHOD,PTHSHOST,PTHSUDVA,PTHSLOCN:
                                  PTHSERRE,PTHSERCD,PTHSERCA,PTHSCFCD:
                                  PTHSEMAL,PTHSERSR,PTHSSNAM,PTHSTORD:
                                  PTHSHHOS,PTHSCRSR,PTHSRCOP,PTHSHBID:
                                  PTHSDCDT,PTHSHPIO,PTHSCFST,PTHSHDHB:
                                  PTHSAGNC,PTHSUCRG,PTHSHSST,PTHSACTR:
                                  PTHSAGEL,PTHSAGEH,PTHSMAPH,PTHSSPAR
          TRAPCLR   IO
          RETURN
.
DEPTHSP1  RESET     KEY3
          DELETE    PATHSPA1,KEY3
          RETURN
.
