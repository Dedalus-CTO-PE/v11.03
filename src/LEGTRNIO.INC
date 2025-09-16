.*****************************************************************************
.*        LEGTRNFD.INC                                                       *
.* Mods:                                                                     *
.*        18/01/2008  Steve Armstrong  CAR 159429                            *
.*                    Added index 5 I/O routines for U/R merging             *
.*****************************************************************************
.
RSLGTRN1  RESET     KEY30
          READ      LEGTRAN1,KEY30;;
          RETURN
.
RALGTRN1  RESET     KEY30
          MOVE      ZERO,OVRCD
          READ      LEGTRAN1,KEY30;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGTRN1  RESET     KEY30
          MOVE      ZERO,OVRCD
          READ      LEGTRAN1,KEY30;LTWARD,LTBED,LTDATE,LTTIME:
                                  LTMOVE,LDTURNO,LDTADMN,LPTRRATF,LPTRRATG:
                                  LPTTRDIS,LPTTRALL,LTATYPE,LTADOCT,LPTRRATH:
                                  LPTRXTRA,LPTRADPA,LPTRADRE,LTRCDATE,LTRCTIME:
                                  LTRBTYP,LTRBEND,LTCHSTAT,LPTTREPS,LPTTRRNB:
                                  LPTTRLTY,LPTRLSPA,LPTRLSRE,LPTTRAEN,LPTTRAUA:
                                  LPTTRLTS,LPTTRSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDTURNO,LQTURNO
          MOVE      LQTURNO,LTURNO
          MOVE      LDTADMN,LQTADMN
          MOVE      LQTADMN,LTADMN
          MOVE      LTWARD,LSSTWARD
          MOVE      LTBED,LSSTBED
          MOVE      LTDATE,LSSTDATE
          MOVE      LTTIME,LSSTTIME
          MOVE      LTADMN,LSSTADMN
.
          MOVE      LPTRRATF,LTRATEF
          MOVE      LPTRRATG,LTRATEG
          MOVE      LPTTRDIS,LTDISC
          MOVE      LPTTRALL,LTALLW
          MOVE      LPTRRATH,LTRATEH
          MOVE      LPTRXTRA,LTEXTRA
          MOVE      LPTRADPA,LPTRADPT
          MOVE      LPTRADRE,LPTRADRB
          MOVE      LPTRLSPA,LPTRLSPT
          MOVE      LPTRLSRE,LPTRLSRB
          RETURN
.
RKLGTRN1  MOVE      ZERO,OVRCD
          READKS    LEGTRAN1;LTWARD,LTBED,LTDATE,LTTIME:
                                  LTMOVE,LDTURNO,LDTADMN,LPTRRATF,LPTRRATG:
                                  LPTTRDIS,LPTTRALL,LTATYPE,LTADOCT,LPTRRATH:
                                  LPTRXTRA,LPTRADPA,LPTRADRE,LTRCDATE,LTRCTIME:
                                  LTRBTYP,LTRBEND,LTCHSTAT,LPTTREPS,LPTTRRNB:
                                  LPTTRLTY,LPTRLSPA,LPTRLSRE,LPTTRAEN,LPTTRAUA:
                                  LPTTRLTS,LPTTRSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDTURNO,LQTURNO
          MOVE      LQTURNO,LTURNO
          MOVE      LDTADMN,LQTADMN
          MOVE      LQTADMN,LTADMN
          MOVE      LTWARD,LSSTWARD
          MOVE      LTBED,LSSTBED
          MOVE      LTDATE,LSSTDATE
          MOVE      LTTIME,LSSTTIME
          MOVE      LTADMN,LSSTADMN
.
          MOVE      LPTRRATF,LTRATEF
          MOVE      LPTRRATG,LTRATEG
          MOVE      LPTTRDIS,LTDISC
          MOVE      LPTTRALL,LTALLW
          MOVE      LPTRRATH,LTRATEH
          MOVE      LPTRXTRA,LTEXTRA
          MOVE      LPTRADPA,LPTRADPT
          MOVE      LPTRADRE,LPTRADRB
          MOVE      LPTRLSPA,LPTRLSPT
          MOVE      LPTRLSRE,LPTRLSRB
          RETURN
.
RPLGTRN1  MOVE      ZERO,OVRCD
          READKP    LEGTRAN1;LTWARD,LTBED,LTDATE,LTTIME:
                                  LTMOVE,LDTURNO,LDTADMN,LPTRRATF,LPTRRATG:
                                  LPTTRDIS,LPTTRALL,LTATYPE,LTADOCT,LPTRRATH:
                                  LPTRXTRA,LPTRADPA,LPTRADRE,LTRCDATE,LTRCTIME:
                                  LTRBTYP,LTRBEND,LTCHSTAT,LPTTREPS,LPTTRRNB:
                                  LPTTRLTY,LPTRLSPA,LPTRLSRE,LPTTRAEN,LPTTRAUA:
                                  LPTTRLTS,LPTTRSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDTURNO,LQTURNO
          MOVE      LQTURNO,LTURNO
          MOVE      LDTADMN,LQTADMN
          MOVE      LQTADMN,LTADMN
          MOVE      LTWARD,LSSTWARD
          MOVE      LTBED,LSSTBED
          MOVE      LTDATE,LSSTDATE
          MOVE      LTTIME,LSSTTIME
          MOVE      LTADMN,LSSTADMN
.
          MOVE      LPTRRATF,LTRATEF
          MOVE      LPTRRATG,LTRATEG
          MOVE      LPTTRDIS,LTDISC
          MOVE      LPTTRALL,LTALLW
          MOVE      LPTRRATH,LTRATEH
          MOVE      LPTRXTRA,LTEXTRA
          MOVE      LPTRADPA,LPTRADPT
          MOVE      LPTRADRE,LPTRADRB
          MOVE      LPTRLSPA,LPTRLSPT
          MOVE      LPTRLSRE,LPTRLSRB
          RETURN
.
RSLGTRN2  RESET     KEY30
          READ      LEGTRAN2,KEY30;;
          RETURN
.
RALGTRN2  RESET     KEY30
          MOVE      ZERO,OVRCD
          READ      LEGTRAN2,KEY30;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGTRN2  RESET     KEY30
          MOVE      ZERO,OVRCD
          READ      LEGTRAN2,KEY30;LTWARD,LTBED,LTDATE,LTTIME:
                                  LTMOVE,LDTURNO,LDTADMN,LPTRRATF,LPTRRATG:
                                  LPTTRDIS,LPTTRALL,LTATYPE,LTADOCT,LPTRRATH:
                                  LPTRXTRA,LPTRADPA,LPTRADRE,LTRCDATE,LTRCTIME:
                                  LTRBTYP,LTRBEND,LTCHSTAT,LPTTREPS,LPTTRRNB:
                                  LPTTRLTY,LPTRLSPA,LPTRLSRE,LPTTRAEN,LPTTRAUA:
                                  LPTTRLTS,LPTTRSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDTURNO,LQTURNO
          MOVE      LQTURNO,LTURNO
          MOVE      LDTADMN,LQTADMN
          MOVE      LQTADMN,LTADMN
          MOVE      LTWARD,LSSTWARD
          MOVE      LTBED,LSSTBED
          MOVE      LTDATE,LSSTDATE
          MOVE      LTTIME,LSSTTIME
          MOVE      LTADMN,LSSTADMN
.
          MOVE      LPTRRATF,LTRATEF
          MOVE      LPTRRATG,LTRATEG
          MOVE      LPTTRDIS,LTDISC
          MOVE      LPTTRALL,LTALLW
          MOVE      LPTRRATH,LTRATEH
          MOVE      LPTRXTRA,LTEXTRA
          MOVE      LPTRADPA,LPTRADPT
          MOVE      LPTRADRE,LPTRADRB
          MOVE      LPTRLSPA,LPTRLSPT
          MOVE      LPTRLSRE,LPTRLSRB
          RETURN
.
RKLGTRN2  MOVE      ZERO,OVRCD
          READKS    LEGTRAN2;LTWARD,LTBED,LTDATE,LTTIME:
                                  LTMOVE,LDTURNO,LDTADMN,LPTRRATF,LPTRRATG:
                                  LPTTRDIS,LPTTRALL,LTATYPE,LTADOCT,LPTRRATH:
                                  LPTRXTRA,LPTRADPA,LPTRADRE,LTRCDATE,LTRCTIME:
                                  LTRBTYP,LTRBEND,LTCHSTAT,LPTTREPS,LPTTRRNB:
                                  LPTTRLTY,LPTRLSPA,LPTRLSRE,LPTTRAEN,LPTTRAUA:
                                  LPTTRLTS,LPTTRSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDTURNO,LQTURNO
          MOVE      LQTURNO,LTURNO
          MOVE      LDTADMN,LQTADMN
          MOVE      LQTADMN,LTADMN
          MOVE      LTWARD,LSSTWARD
          MOVE      LTBED,LSSTBED
          MOVE      LTDATE,LSSTDATE
          MOVE      LTTIME,LSSTTIME
          MOVE      LTADMN,LSSTADMN
.
          MOVE      LPTRRATF,LTRATEF
          MOVE      LPTRRATG,LTRATEG
          MOVE      LPTTRDIS,LTDISC
          MOVE      LPTTRALL,LTALLW
          MOVE      LPTRRATH,LTRATEH
          MOVE      LPTRXTRA,LTEXTRA
          MOVE      LPTRADPA,LPTRADPT
          MOVE      LPTRADRE,LPTRADRB
          MOVE      LPTRLSPA,LPTRLSPT
          MOVE      LPTRLSRE,LPTRLSRB
          RETURN
.
RPLGTRN2  MOVE      ZERO,OVRCD
          READKP    LEGTRAN2;LTWARD,LTBED,LTDATE,LTTIME:
                                  LTMOVE,LDTURNO,LDTADMN,LPTRRATF,LPTRRATG:
                                  LPTTRDIS,LPTTRALL,LTATYPE,LTADOCT,LPTRRATH:
                                  LPTRXTRA,LPTRADPA,LPTRADRE,LTRCDATE,LTRCTIME:
                                  LTRBTYP,LTRBEND,LTCHSTAT,LPTTREPS,LPTTRRNB:
                                  LPTTRLTY,LPTRLSPA,LPTRLSRE,LPTTRAEN,LPTTRAUA:
                                  LPTTRLTS,LPTTRSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDTURNO,LQTURNO
          MOVE      LQTURNO,LTURNO
          MOVE      LDTADMN,LQTADMN
          MOVE      LQTADMN,LTADMN
          MOVE      LTWARD,LSSTWARD
          MOVE      LTBED,LSSTBED
          MOVE      LTDATE,LSSTDATE
          MOVE      LTTIME,LSSTTIME
          MOVE      LTADMN,LSSTADMN
.
          MOVE      LPTRRATF,LTRATEF
          MOVE      LPTRRATG,LTRATEG
          MOVE      LPTTRDIS,LTDISC
          MOVE      LPTTRALL,LTALLW
          MOVE      LPTRRATH,LTRATEH
          MOVE      LPTRXTRA,LTEXTRA
          MOVE      LPTRADPA,LPTRADPT
          MOVE      LPTRADRE,LPTRADRB
          MOVE      LPTRLSPA,LPTRLSPT
          MOVE      LPTRLSRE,LPTRLSRB
          RETURN
.
RSLGTRN3  RESET     KEY36
          READ      LEGTRAN3,KEY36;;
          RETURN
.
RALGTRN3  RESET     KEY36
          MOVE      ZERO,OVRCD
          READ      LEGTRAN3,KEY36;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGTRN3  RESET     KEY36
          MOVE      ZERO,OVRCD
          READ      LEGTRAN3,KEY36;LTWARD,LTBED,LTDATE,LTTIME:
                                  LTMOVE,LDTURNO,LDTADMN,LPTRRATF,LPTRRATG:
                                  LPTTRDIS,LPTTRALL,LTATYPE,LTADOCT,LPTRRATH:
                                  LPTRXTRA,LPTRADPA,LPTRADRE,LTRCDATE,LTRCTIME:
                                  LTRBTYP,LTRBEND,LTCHSTAT,LPTTREPS,LPTTRRNB:
                                  LPTTRLTY,LPTRLSPA,LPTRLSRE,LPTTRAEN,LPTTRAUA:
                                  LPTTRLTS,LPTTRSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDTURNO,LQTURNO
          MOVE      LQTURNO,LTURNO
          MOVE      LDTADMN,LQTADMN
          MOVE      LQTADMN,LTADMN
          MOVE      LTWARD,LSSTWARD
          MOVE      LTBED,LSSTBED
          MOVE      LTDATE,LSSTDATE
          MOVE      LTTIME,LSSTTIME
          MOVE      LTADMN,LSSTADMN
.
          MOVE      LPTRRATF,LTRATEF
          MOVE      LPTRRATG,LTRATEG
          MOVE      LPTTRDIS,LTDISC
          MOVE      LPTTRALL,LTALLW
          MOVE      LPTRRATH,LTRATEH
          MOVE      LPTRXTRA,LTEXTRA
          MOVE      LPTRADPA,LPTRADPT
          MOVE      LPTRADRE,LPTRADRB
          MOVE      LPTRLSPA,LPTRLSPT
          MOVE      LPTRLSRE,LPTRLSRB
          RETURN
.
RKLGTRN3  MOVE      ZERO,OVRCD
          READKS    LEGTRAN3;LTWARD,LTBED,LTDATE,LTTIME:
                                  LTMOVE,LDTURNO,LDTADMN,LPTRRATF,LPTRRATG:
                                  LPTTRDIS,LPTTRALL,LTATYPE,LTADOCT,LPTRRATH:
                                  LPTRXTRA,LPTRADPA,LPTRADRE,LTRCDATE,LTRCTIME:
                                  LTRBTYP,LTRBEND,LTCHSTAT,LPTTREPS,LPTTRRNB:
                                  LPTTRLTY,LPTRLSPA,LPTRLSRE,LPTTRAEN,LPTTRAUA:
                                  LPTTRLTS,LPTTRSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDTURNO,LQTURNO
          MOVE      LQTURNO,LTURNO
          MOVE      LDTADMN,LQTADMN
          MOVE      LQTADMN,LTADMN
          MOVE      LTWARD,LSSTWARD
          MOVE      LTBED,LSSTBED
          MOVE      LTDATE,LSSTDATE
          MOVE      LTTIME,LSSTTIME
          MOVE      LTADMN,LSSTADMN
.
          MOVE      LPTRRATF,LTRATEF
          MOVE      LPTRRATG,LTRATEG
          MOVE      LPTTRDIS,LTDISC
          MOVE      LPTTRALL,LTALLW
          MOVE      LPTRRATH,LTRATEH
          MOVE      LPTRXTRA,LTEXTRA
          MOVE      LPTRADPA,LPTRADPT
          MOVE      LPTRADRE,LPTRADRB
          MOVE      LPTRLSPA,LPTRLSPT
          MOVE      LPTRLSRE,LPTRLSRB
          RETURN
.
RPLGTRN3  MOVE      ZERO,OVRCD
          READKP    LEGTRAN3;LTWARD,LTBED,LTDATE,LTTIME:
                                  LTMOVE,LDTURNO,LDTADMN,LPTRRATF,LPTRRATG:
                                  LPTTRDIS,LPTTRALL,LTATYPE,LTADOCT,LPTRRATH:
                                  LPTRXTRA,LPTRADPA,LPTRADRE,LTRCDATE,LTRCTIME:
                                  LTRBTYP,LTRBEND,LTCHSTAT,LPTTREPS,LPTTRRNB:
                                  LPTTRLTY,LPTRLSPA,LPTRLSRE,LPTTRAEN,LPTTRAUA:
                                  LPTTRLTS,LPTTRSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDTURNO,LQTURNO
          MOVE      LQTURNO,LTURNO
          MOVE      LDTADMN,LQTADMN
          MOVE      LQTADMN,LTADMN
          MOVE      LTWARD,LSSTWARD
          MOVE      LTBED,LSSTBED
          MOVE      LTDATE,LSSTDATE
          MOVE      LTTIME,LSSTTIME
          MOVE      LTADMN,LSSTADMN
.
          MOVE      LPTRRATF,LTRATEF
          MOVE      LPTRRATG,LTRATEG
          MOVE      LPTTRDIS,LTDISC
          MOVE      LPTTRALL,LTALLW
          MOVE      LPTRRATH,LTRATEH
          MOVE      LPTRXTRA,LTEXTRA
          MOVE      LPTRADPA,LPTRADPT
          MOVE      LPTRADRE,LPTRADRB
          MOVE      LPTRLSPA,LPTRLSPT
          MOVE      LPTRLSRE,LPTRLSRB
          RETURN
.
RSLGTRN4  RESET     KEY30
          READ      LEGTRAN4,KEY30;;
          RETURN
.
RALGTRN4  RESET     KEY30
          MOVE      ZERO,OVRCD
          READ      LEGTRAN4,KEY30;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGTRN4  RESET     KEY30
          MOVE      ZERO,OVRCD
          READ      LEGTRAN4,KEY30;LTWARD,LTBED,LTDATE,LTTIME:
                                  LTMOVE,LDTURNO,LDTADMN,LPTRRATF,LPTRRATG:
                                  LPTTRDIS,LPTTRALL,LTATYPE,LTADOCT,LPTRRATH:
                                  LPTRXTRA,LPTRADPA,LPTRADRE,LTRCDATE,LTRCTIME:
                                  LTRBTYP,LTRBEND,LTCHSTAT,LPTTREPS,LPTTRRNB:
                                  LPTTRLTY,LPTRLSPA,LPTRLSRE,LPTTRAEN,LPTTRAUA:
                                  LPTTRLTS,LPTTRSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDTURNO,LQTURNO
          MOVE      LQTURNO,LTURNO
          MOVE      LDTADMN,LQTADMN
          MOVE      LQTADMN,LTADMN
          MOVE      LTWARD,LSSTWARD
          MOVE      LTBED,LSSTBED
          MOVE      LTDATE,LSSTDATE
          MOVE      LTTIME,LSSTTIME
          MOVE      LTADMN,LSSTADMN
.
          MOVE      LPTRRATF,LTRATEF
          MOVE      LPTRRATG,LTRATEG
          MOVE      LPTTRDIS,LTDISC
          MOVE      LPTTRALL,LTALLW
          MOVE      LPTRRATH,LTRATEH
          MOVE      LPTRXTRA,LTEXTRA
          MOVE      LPTRADPA,LPTRADPT
          MOVE      LPTRADRE,LPTRADRB
          MOVE      LPTRLSPA,LPTRLSPT
          MOVE      LPTRLSRE,LPTRLSRB
          RETURN
.
RKLGTRN4  MOVE      ZERO,OVRCD
          READKS    LEGTRAN4;LTWARD,LTBED,LTDATE,LTTIME:
                                  LTMOVE,LDTURNO,LDTADMN,LPTRRATF,LPTRRATG:
                                  LPTTRDIS,LPTTRALL,LTATYPE,LTADOCT,LPTRRATH:
                                  LPTRXTRA,LPTRADPA,LPTRADRE,LTRCDATE,LTRCTIME:
                                  LTRBTYP,LTRBEND,LTCHSTAT,LPTTREPS,LPTTRRNB:
                                  LPTTRLTY,LPTRLSPA,LPTRLSRE,LPTTRAEN,LPTTRAUA:
                                  LPTTRLTS,LPTTRSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDTURNO,LQTURNO
          MOVE      LQTURNO,LTURNO
          MOVE      LDTADMN,LQTADMN
          MOVE      LQTADMN,LTADMN
          MOVE      LTWARD,LSSTWARD
          MOVE      LTBED,LSSTBED
          MOVE      LTDATE,LSSTDATE
          MOVE      LTTIME,LSSTTIME
          MOVE      LTADMN,LSSTADMN
.
          MOVE      LPTRRATF,LTRATEF
          MOVE      LPTRRATG,LTRATEG
          MOVE      LPTTRDIS,LTDISC
          MOVE      LPTTRALL,LTALLW
          MOVE      LPTRRATH,LTRATEH
          MOVE      LPTRXTRA,LTEXTRA
          MOVE      LPTRADPA,LPTRADPT
          MOVE      LPTRADRE,LPTRADRB
          MOVE      LPTRLSPA,LPTRLSPT
          MOVE      LPTRLSRE,LPTRLSRB
          RETURN
.
RPLGTRN4  MOVE      ZERO,OVRCD
          READKP    LEGTRAN4;LTWARD,LTBED,LTDATE,LTTIME:
                                  LTMOVE,LDTURNO,LDTADMN,LPTRRATF,LPTRRATG:
                                  LPTTRDIS,LPTTRALL,LTATYPE,LTADOCT,LPTRRATH:
                                  LPTRXTRA,LPTRADPA,LPTRADRE,LTRCDATE,LTRCTIME:
                                  LTRBTYP,LTRBEND,LTCHSTAT,LPTTREPS,LPTTRRNB:
                                  LPTTRLTY,LPTRLSPA,LPTRLSRE,LPTTRAEN,LPTTRAUA:
                                  LPTTRLTS,LPTTRSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDTURNO,LQTURNO
          MOVE      LQTURNO,LTURNO
          MOVE      LDTADMN,LQTADMN
          MOVE      LQTADMN,LTADMN
          MOVE      LTWARD,LSSTWARD
          MOVE      LTBED,LSSTBED
          MOVE      LTDATE,LSSTDATE
          MOVE      LTTIME,LSSTTIME
          MOVE      LTADMN,LSSTADMN
.
          MOVE      LPTRRATF,LTRATEF
          MOVE      LPTRRATG,LTRATEG
          MOVE      LPTTRDIS,LTDISC
          MOVE      LPTTRALL,LTALLW
          MOVE      LPTRRATH,LTRATEH
          MOVE      LPTRXTRA,LTEXTRA
          MOVE      LPTRADPA,LPTRADPT
          MOVE      LPTRADRE,LPTRADRB
          MOVE      LPTRLSPA,LPTRLSPT
          MOVE      LPTRLSRE,LPTRLSRB
          RETURN
.
RSLGTRN5  RESET     KEY38
          READ      LEGTRAN5,KEY38;;
          RETURN
.
RKLGTRN5  MOVE      ZERO,OVRCD
          READKS    LEGTRAN5;LTWARD,LTBED,LTDATE,LTTIME:
                                  LTMOVE,LDTURNO,LDTADMN,LPTRRATF,LPTRRATG:
                                  LPTTRDIS,LPTTRALL,LTATYPE,LTADOCT,LPTRRATH:
                                  LPTRXTRA,LPTRADPA,LPTRADRE,LTRCDATE,LTRCTIME:
                                  LTRBTYP,LTRBEND,LTCHSTAT,LPTTREPS,LPTTRRNB:
                                  LPTTRLTY,LPTRLSPA,LPTRLSRE,LPTTRAEN,LPTTRAUA:
                                  LPTTRLTS,LPTTRSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDTURNO,LQTURNO
          MOVE      LQTURNO,LTURNO
          MOVE      LDTADMN,LQTADMN
          MOVE      LQTADMN,LTADMN
          MOVE      LTWARD,LSSTWARD
          MOVE      LTBED,LSSTBED
          MOVE      LTDATE,LSSTDATE
          MOVE      LTTIME,LSSTTIME
          MOVE      LTADMN,LSSTADMN
.
          MOVE      LPTRRATF,LTRATEF
          MOVE      LPTRRATG,LTRATEG
          MOVE      LPTTRDIS,LTDISC
          MOVE      LPTTRALL,LTALLW
          MOVE      LPTRRATH,LTRATEH
          MOVE      LPTRXTRA,LTEXTRA
          MOVE      LPTRADPA,LPTRADPT
          MOVE      LPTRADRE,LPTRADRB
          MOVE      LPTRLSPA,LPTRLSPT
          MOVE      LPTRLSRE,LPTRLSRB
          MOVE      LPTTRDIS,LTDISC
          MOVE      LPTTRALL,LTALLW
          MOVE      LPTRRATH,LTRATEH
          MOVE      LPTRXTRA,LTEXTRA
          MOVE      LPTRADPA,LPTRADPT
          MOVE      LPTRADRE,LPTRADRB
          MOVE      LPTRLSPA,LPTRLSPT
          MOVE      LPTRLSRE,LPTRLSRB
          RETURN
.
UPLGTRN5  MOVE      LTURNO,LDTURNO
          MOVE      LTADMN,LDTADMN
          UPDATE    LEGTRAN5;LTWARD,LTBED,LTDATE,LTTIME:
                                  LTMOVE,LDTURNO,LDTADMN,LPTRRATF,LPTRRATG:
                                  LPTTRDIS,LPTTRALL,LTATYPE,LTADOCT,LPTRRATH:
                                  LPTRXTRA,LPTRADPA,LPTRADRE,LTRCDATE,LTRCTIME:
                                  LTRBTYP,LTRBEND,LTCHSTAT,LPTTREPS,LPTTRRNB:
                                  LPTTRLTY,LPTRLSPA,LPTRLSRE,LPTTRAEN,LPTTRAUA:
                                  LPTTRLTS,LPTTRSPA
          RETURN
