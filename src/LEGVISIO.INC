.*****************************************************************************
.*                        LEGVISIO.INC                                       *
.* Mods:  18/01/2008  Steve Armstrong   CAR 159429                           *
.*                    Added UPLGVIS2 for U/R merging                         *
.*****************************************************************************
.
RSLGVIS1  RESET     KEY8
          READ      LEGVISA1,KEY8;;
          RETURN
.
RALGVIS1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      LEGVISA1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGVIS1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      LEGVISA1,KEY8;LVIURNO,LVIDATE,DLVIBILL,LVITYPE:
                                  LVIDOCT,LVISTAT,LVITRAN,LVILOCK,LVISITE:
                                  LVILETT,LVISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DLVIBILL,LVIBILL
          MOVE      LVIURNO,SLVIURNO
          MOVE      LVIBILL,SLVIBILL
          MOVE      LVIDATE,SLVIDATE
          RETURN
.
RKLGVIS1  MOVE      ZERO,OVRCD
          READKS    LEGVISA1;LVIURNO,LVIDATE,DLVIBILL,LVITYPE:
                                  LVIDOCT,LVISTAT,LVITRAN,LVILOCK,LVISITE:
                                  LVILETT,LVISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DLVIBILL,LVIBILL
          MOVE      LVIURNO,SLVIURNO
          MOVE      LVIBILL,SLVIBILL
          MOVE      LVIDATE,SLVIDATE
          RETURN
.
RPLGVIS1  MOVE      ZERO,OVRCD
          READKP    LEGVISA1;LVIURNO,LVIDATE,DLVIBILL,LVITYPE:
                                  LVIDOCT,LVISTAT,LVITRAN,LVILOCK,LVISITE:
                                  LVILETT,LVISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DLVIBILL,LVIBILL
          MOVE      LVIURNO,SLVIURNO
          MOVE      LVIBILL,SLVIBILL
          MOVE      LVIDATE,SLVIDATE
          RETURN
.
RSLGVIS2  RESET     KEY24
          READ      LEGVISA2,KEY24;;
          RETURN
.
RALGVIS2  RESET     KEY24
          MOVE      ZERO,OVRCD
          READ      LEGVISA2,KEY24;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGVIS2  RESET     KEY24
          MOVE      ZERO,OVRCD
          READ      LEGVISA2,KEY24;LVIURNO,LVIDATE,DLVIBILL,LVITYPE:
                                  LVIDOCT,LVISTAT,LVITRAN,LVILOCK,LVISITE:
                                  LVILETT,LVISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DLVIBILL,LVIBILL
          MOVE      LVIURNO,SLVIURNO
          MOVE      LVIBILL,SLVIBILL
          MOVE      LVIDATE,SLVIDATE
          RETURN
.
RKLGVIS2  MOVE      ZERO,OVRCD
          READKS    LEGVISA2;LVIURNO,LVIDATE,DLVIBILL,LVITYPE:
                                  LVIDOCT,LVISTAT,LVITRAN,LVILOCK,LVISITE:
                                  LVILETT,LVISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DLVIBILL,LVIBILL
          MOVE      LVIURNO,SLVIURNO
          MOVE      LVIBILL,SLVIBILL
          MOVE      LVIDATE,SLVIDATE
          RETURN
.
RPLGVIS2  MOVE      ZERO,OVRCD
          READKP    LEGVISA2;LVIURNO,LVIDATE,DLVIBILL,LVITYPE:
                                  LVIDOCT,LVISTAT,LVITRAN,LVILOCK,LVISITE:
                                  LVILETT,LVISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DLVIBILL,LVIBILL
          MOVE      LVIURNO,SLVIURNO
          MOVE      LVIBILL,SLVIBILL
          MOVE      LVIDATE,SLVIDATE
          RETURN
.
UPLGVIS2  MOVE      LVIBILL,DLVIBILL
          UPDATE    LEGVISA2;LVIURNO,LVIDATE,DLVIBILL,LVITYPE:
                             LVIDOCT,LVISTAT,LVITRAN,LVILOCK,LVISITE:
                             LVILETT,LVISPAR
          RETURN
.
RSLGVIS3  RESET     KEY22
          READ      LEGVISA3,KEY22;;
          RETURN
.
RALGVIS3  RESET     KEY22
          MOVE      ZERO,OVRCD
          READ      LEGVISA3,KEY22;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGVIS3  RESET     KEY22
          MOVE      ZERO,OVRCD
          READ      LEGVISA3,KEY22;LVIURNO,LVIDATE,DLVIBILL,LVITYPE:
                                  LVIDOCT,LVISTAT,LVITRAN,LVILOCK,LVISITE:
                                  LVILETT,LVISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DLVIBILL,LVIBILL
          MOVE      LVIURNO,SLVIURNO
          MOVE      LVIBILL,SLVIBILL
          MOVE      LVIDATE,SLVIDATE
          RETURN
.
RKLGVIS3  MOVE      ZERO,OVRCD
          READKS    LEGVISA3;LVIURNO,LVIDATE,DLVIBILL,LVITYPE:
                                  LVIDOCT,LVISTAT,LVITRAN,LVILOCK,LVISITE:
                                  LVILETT,LVISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DLVIBILL,LVIBILL
          MOVE      LVIURNO,SLVIURNO
          MOVE      LVIBILL,SLVIBILL
          MOVE      LVIDATE,SLVIDATE
          RETURN
.
RPLGVIS3  MOVE      ZERO,OVRCD
          READKP    LEGVISA3;LVIURNO,LVIDATE,DLVIBILL,LVITYPE:
                                  LVIDOCT,LVISTAT,LVITRAN,LVILOCK,LVISITE:
                                  LVILETT,LVISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DLVIBILL,LVIBILL
          MOVE      LVIURNO,SLVIURNO
          MOVE      LVIBILL,SLVIBILL
          MOVE      LVIDATE,SLVIDATE
          RETURN
