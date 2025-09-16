.
RDAMCHG1  MOVE      ZERO,OVRCD
          RESET     KEY29
          READ      PATMCHG1,KEY29;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSMCHG1  RESET     KEY29
          READ      PATMCHG1,KEY29;;
          RETURN
.
RDMCHG1   MOVE      ZERO,OVRCD
          RESET     KEY29
          READ      PATMCHG1,KEY29;MCLMCOD,MHFUND,PTMCHFTT,MCHARGE,MDESC:
                                   MITMTYP,MMSCGRP,MPATPOR,MHFPOR,MNINV:
                                   MINDIC,PTMCGSTA,PTMCGSTC,PTMCEDIE:
                                   PTMCCFCY,PTMCKREB,PTMCCOBD,PTMCTACT:
                                   PTMCTACD,PTMCEFDT,PTMCALGR,PTMCPRTR:
                                   PTMCECEQ,PTMCECTS,PTMCACTV:
                                   PTMCETDT,PTMCEHCP,PTMCSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RDKMCHG1  MOVE      ZERO,OVRCD
          READKS    PATMCHG1;MCLMCOD,MHFUND,PTMCHFTT,MCHARGE,MDESC:
                             MITMTYP,MMSCGRP,MPATPOR,MHFPOR,MNINV:
                             MINDIC,PTMCGSTA,PTMCGSTC,PTMCEDIE:
                             PTMCCFCY,PTMCKREB,PTMCCOBD,PTMCTACT:
                             PTMCTACD,PTMCEFDT,PTMCALGR,PTMCPRTR:
                             PTMCECEQ,PTMCECTS,PTMCACTV:
                             PTMCETDT,PTMCEHCP,PTMCSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCHG1  MOVE      ZERO,OVRCD
          READKP    PATMCHG1;MCLMCOD,MHFUND,PTMCHFTT,MCHARGE,MDESC:
                             MITMTYP,MMSCGRP,MPATPOR,MHFPOR,MNINV:
                             MINDIC,PTMCGSTA,PTMCGSTC,PTMCEDIE:
                             PTMCCFCY,PTMCKREB,PTMCCOBD,PTMCTACT:
                             PTMCTACD,PTMCEFDT,PTMCALGR,PTMCPRTR:
                             PTMCECEQ,PTMCECTS,PTMCACTV:
                             PTMCETDT,PTMCEHCP,PTMCSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRMCHG1   RESET     KEY29
          WRITE     PATMCHG1,KEY29;MCLMCOD,MHFUND,PTMCHFTT,MCHARGE,MDESC:
                                   MITMTYP,MMSCGRP,MPATPOR,MHFPOR,MNINV:
                                   MINDIC,PTMCGSTA,PTMCGSTC,PTMCEDIE:
                                   PTMCCFCY,PTMCKREB,PTMCCOBD,PTMCTACT:
                                   PTMCTACD,PTMCEFDT,PTMCALGR,PTMCPRTR:
                                   PTMCECEQ,PTMCECTS,PTMCACTV:
                                   PTMCETDT,PTMCEHCP,PTMCSPAR
          RETURN
.
UPMCHG1   MOVE      ZERO,OVRCD
          UPDATE    PATMCHG1;MCLMCOD,MHFUND,PTMCHFTT,MCHARGE,MDESC:
                             MITMTYP,MMSCGRP,MPATPOR,MHFPOR,MNINV:
                             MINDIC,PTMCGSTA,PTMCGSTC,PTMCEDIE:
                             PTMCCFCY,PTMCKREB,PTMCCOBD,PTMCTACT:
                             PTMCTACD,PTMCEFDT,PTMCALGR,PTMCPRTR:
                             PTMCECEQ,PTMCECTS,PTMCACTV:
                             PTMCETDT,PTMCEHCP,PTMCSPAR
          RETURN
.
DEMCHG1   RESET     KEY29
          DELETE    PATMCHG1,KEY29
          RETURN
.
.
RDAMCHG2  RESET     KEY59    
          READ      PATMCHG2,KEY59;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSMCHG2  RESET     KEY59
          READ      PATMCHG2,KEY59;;
          RETURN
.
RDMCHG2   RESET     KEY59
          MOVE      ZERO,OVRCD
          READ      PATMCHG2,KEY59;MCLMCOD,MHFUND,PTMCHFTT,MCHARGE,MDESC:
                                   MITMTYP,MMSCGRP,MPATPOR,MHFPOR,MNINV:
                                   MINDIC,PTMCGSTA,PTMCGSTC,PTMCEDIE:
                                   PTMCCFCY,PTMCKREB,PTMCCOBD,PTMCTACT:
                                   PTMCTACD,PTMCEFDT,PTMCALGR,PTMCPRTR:
                                   PTMCECEQ,PTMCECTS,PTMCACTV:
                                   PTMCETDT,PTMCEHCP,PTMCSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RDKMCHG2  MOVE      ZERO,OVRCD
          READKS    PATMCHG2;MCLMCOD,MHFUND,PTMCHFTT,MCHARGE,MDESC:
                             MITMTYP,MMSCGRP,MPATPOR,MHFPOR,MNINV:
                             MINDIC,PTMCGSTA,PTMCGSTC,PTMCEDIE:
                             PTMCCFCY,PTMCKREB,PTMCCOBD,PTMCTACT:
                             PTMCTACD,PTMCEFDT,PTMCALGR,PTMCPRTR:
                             PTMCECEQ,PTMCECTS,PTMCACTV:
                             PTMCETDT,PTMCEHCP,PTMCSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCHG2  MOVE      ZERO,OVRCD
          READKP    PATMCHG2;MCLMCOD,MHFUND,PTMCHFTT,MCHARGE,MDESC:
                             MITMTYP,MMSCGRP,MPATPOR,MHFPOR,MNINV:
                             MINDIC,PTMCGSTA,PTMCGSTC,PTMCEDIE:
                             PTMCCFCY,PTMCKREB,PTMCCOBD,PTMCTACT:
                             PTMCTACD,PTMCEFDT,PTMCALGR,PTMCPRTR:
                             PTMCECEQ,PTMCECTS,PTMCACTV:
                             PTMCETDT,PTMCEHCP,PTMCSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMCHG3  MOVE      ZERO,OVRCD
          RESET     KEY32
          READ      PATMCHG3,KEY32;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSMCHG3  RESET     KEY32
          READ      PATMCHG3,KEY32;;
          RETURN
.
RDMCHG3   MOVE      ZERO,OVRCD
          RESET     KEY32
          READ      PATMCHG3,KEY32;MCLMCOD,MHFUND,PTMCHFTT,MCHARGE,MDESC:
                                   MITMTYP,MMSCGRP,MPATPOR,MHFPOR,MNINV:
                                   MINDIC,PTMCGSTA,PTMCGSTC,PTMCEDIE:
                                   PTMCCFCY,PTMCKREB,PTMCCOBD,PTMCTACT:
                                   PTMCTACD,PTMCEFDT,PTMCALGR,PTMCPRTR:
                                   PTMCECEQ,PTMCECTS,PTMCACTV:
                                   PTMCETDT,PTMCEHCP,PTMCSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RDKMCHG3  MOVE      ZERO,OVRCD
          READKS    PATMCHG3;MCLMCOD,MHFUND,PTMCHFTT,MCHARGE,MDESC:
                             MITMTYP,MMSCGRP,MPATPOR,MHFPOR,MNINV:
                             MINDIC,PTMCGSTA,PTMCGSTC,PTMCEDIE:
                             PTMCCFCY,PTMCKREB,PTMCCOBD,PTMCTACT:
                             PTMCTACD,PTMCEFDT,PTMCALGR,PTMCPRTR:
                             PTMCECEQ,PTMCECTS,PTMCACTV:
                             PTMCETDT,PTMCEHCP,PTMCSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCHG3  MOVE      ZERO,OVRCD
          READKP    PATMCHG3;MCLMCOD,MHFUND,PTMCHFTT,MCHARGE,MDESC:
                             MITMTYP,MMSCGRP,MPATPOR,MHFPOR,MNINV:
                             MINDIC,PTMCGSTA,PTMCGSTC,PTMCEDIE:
                             PTMCCFCY,PTMCKREB,PTMCCOBD,PTMCTACT:
                             PTMCTACD,PTMCEFDT,PTMCALGR,PTMCPRTR:
                             PTMCECEQ,PTMCECTS,PTMCACTV:
                             PTMCETDT,PTMCEHCP,PTMCSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRMCHG3   RESET     KEY32
          WRITE     PATMCHG3,KEY32;MCLMCOD,MHFUND,PTMCHFTT,MCHARGE,MDESC:
                                   MITMTYP,MMSCGRP,MPATPOR,MHFPOR,MNINV:
                                   MINDIC,PTMCGSTA,PTMCGSTC,PTMCEDIE:
                                   PTMCCFCY,PTMCKREB,PTMCCOBD,PTMCTACT:
                                   PTMCTACD,PTMCEFDT,PTMCALGR,PTMCPRTR:
                                   PTMCECEQ,PTMCECTS,PTMCACTV:
                                   PTMCETDT,PTMCEHCP,PTMCSPAR
          RETURN
.
UPMCHG3   MOVE      ZERO,OVRCD
          UPDATE    PATMCHG3;MCLMCOD,MHFUND,PTMCHFTT,MCHARGE,MDESC:
                             MITMTYP,MMSCGRP,MPATPOR,MHFPOR,MNINV:
                             MINDIC,PTMCGSTA,PTMCGSTC,PTMCEDIE:
                             PTMCCFCY,PTMCKREB,PTMCCOBD,PTMCTACT:
                             PTMCTACD,PTMCEFDT,PTMCALGR,PTMCPRTR:
                             PTMCECEQ,PTMCECTS,PTMCACTV:
                             PTMCETDT,PTMCEHCP,PTMCSPAR
          RETURN
.
DEMCHG3   RESET     KEY32
          DELETE    PATMCHG3,KEY32
          RETURN
.
RDAMCHG4  MOVE      ZERO,OVRCD
          RESET     KEY29
          READ      PATMCHG4,KEY29;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSMCHG4  RESET     KEY29
          READ      PATMCHG4,KEY29;;
          RETURN
.
RDMCHG4   MOVE      ZERO,OVRCD
          RESET     KEY29
          READ      PATMCHG4,KEY29;MCLMCOD,MHFUND,PTMCHFTT,MCHARGE,MDESC:
                                   MITMTYP,MMSCGRP,MPATPOR,MHFPOR,MNINV:
                                   MINDIC,PTMCGSTA,PTMCGSTC,PTMCEDIE:
                                   PTMCCFCY,PTMCKREB,PTMCCOBD,PTMCTACT:
                                   PTMCTACD,PTMCEFDT,PTMCALGR,PTMCPRTR:
                                   PTMCECEQ,PTMCECTS,PTMCACTV: 
                                   PTMCETDT,PTMCEHCP,PTMCSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RDKMCHG4  MOVE      ZERO,OVRCD
          READKS    PATMCHG4;MCLMCOD,MHFUND,PTMCHFTT,MCHARGE,MDESC:
                             MITMTYP,MMSCGRP,MPATPOR,MHFPOR,MNINV:
                             MINDIC,PTMCGSTA,PTMCGSTC,PTMCEDIE:
                             PTMCCFCY,PTMCKREB,PTMCCOBD,PTMCTACT:
                             PTMCTACD,PTMCEFDT,PTMCALGR,PTMCPRTR:
                             PTMCECEQ,PTMCECTS,PTMCACTV: 
                             PTMCETDT,PTMCEHCP,PTMCSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCHG4  MOVE      ZERO,OVRCD
          READKP    PATMCHG4;MCLMCOD,MHFUND,PTMCHFTT,MCHARGE,MDESC:
                             MITMTYP,MMSCGRP,MPATPOR,MHFPOR,MNINV:
                             MINDIC,PTMCGSTA,PTMCGSTC,PTMCEDIE:
                             PTMCCFCY,PTMCKREB,PTMCCOBD,PTMCTACT:
                             PTMCTACD,PTMCEFDT,PTMCALGR,PTMCPRTR:
                             PTMCECEQ,PTMCECTS,PTMCACTV: 
                             PTMCETDT,PTMCEHCP,PTMCSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRMCHG4   RESET     KEY29
          WRITE     PATMCHG4,KEY29;MCLMCOD,MHFUND,PTMCHFTT,MCHARGE,MDESC:
                                   MITMTYP,MMSCGRP,MPATPOR,MHFPOR,MNINV:
                                   MINDIC,PTMCGSTA,PTMCGSTC,PTMCEDIE:
                                   PTMCCFCY,PTMCKREB,PTMCCOBD,PTMCTACT:
                                   PTMCTACD,PTMCEFDT,PTMCALGR,PTMCPRTR:
                                   PTMCECEQ,PTMCECTS,PTMCACTV: 
                                   PTMCETDT,PTMCEHCP,PTMCSPAR
          RETURN
.
UPMCHG4   MOVE      ZERO,OVRCD
          UPDATE    PATMCHG4;MCLMCOD,MHFUND,PTMCHFTT,MCHARGE,MDESC:
                             MITMTYP,MMSCGRP,MPATPOR,MHFPOR,MNINV:
                             MINDIC,PTMCGSTA,PTMCGSTC,PTMCEDIE:
                             PTMCCFCY,PTMCKREB,PTMCCOBD,PTMCTACT:
                             PTMCTACD,PTMCEFDT,PTMCALGR,PTMCPRTR:
                             PTMCECEQ,PTMCECTS,PTMCACTV:
                             PTMCETDT,PTMCEHCP,PTMCSPAR
          RETURN
.
DEMCHG4   RESET     KEY29
          DELETE    PATMCHG4,KEY29
          RETURN
.
+
