.
.         INC       AAEDE1IO.PBL
.
.         FILE  I/O REQUESTS FOR SESSIONS
.
.  MODIFICATIONS:   16/05/89 K.Peak      SRF  100530
.                   Changed ADAPREV to a dim3 from a dim1
.                   27/12/1991 Graeme Williams
.                   Added AEDAFUND, AEDATBLE, AEDAPVIS
.                   04/11/1993    Justin Coates
.                   Added AEDAGPPT
.                   18/04/1994    Rob Leonard     Taranaki Mods (3.5.1)
.                   Added AEDAPRTM
.                   01/09/1994    Max White  SRF 600791   Quote 8041     
.                   Added AEDARDOC
. *                 13/10/1995   Howellsy         suht  
. *                 added wtwmoper  
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.
.KEY8   DIM             8            KEY FOR ANEDETA1
.KEY16  DIM            16            KEY FOR ANEDETA2
.KEY21  DIM            21            KEY FOR ANEDETA3
.KEY27  DIM            27            KEY FOR ANEDETA4
.
.         NOTE:-
.                  RDAAAX  IS AAE READ CALL ON FILE AAEAAAX
.                  RDKAAAX  IS AAE READKS CALL
.                  WRAAAX  IS AAE WRITE CALL
.                  UPAAAX  IS AAE UPDATE CALL
.                  DEAAAX  IS AAE DELETE CALL
.
.       FIRST SESSIONS   I/O
.
RDADETA1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      AAEDE1A1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSDETA1  RESET     KEY8
          READ      AAEDE1A1,KEY8;;
          RETURN  
.
RDDETA1   MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      AAEDE1A1,KEY8;DADANUMB,ADADATE,ADATIME,ADAURNO,ADACOMP:
                                  ADACLASS,ADAINSUR,ADASRC,ADASIT,ADAMODE:
                                  ADAFILL,ADADOCT,ADASEEN,ADAADMIT,ADALOCK:
                                  ADADURN,ADAEMPL,ADAADD1,ADAADD2,ADASUBR:
                                  ADAADD4,ADAPOST,ADATELE,ADACONT,ADAUSR1:
                                  ADAUSR2,ADAUSR3,ADAUSR4,ADAUSR5,ADADIAG:
                                  ADAFIL2,ADAWAIT,ADASDTE,ADAPREV,AEDAFUND:
                                  AEDATBLE,DAEDAPVI,AEDARFGP,AEDAGPPC:
                                  DAEDANPN,AEDATIAS,AEDADTAT,AEDATESI:
                                  AEDAEMPL,AEDARTAS,AEDAINIT,AEDAPLIN:
                                  AEDADIAS,AEDARNEN,AEDACONS,AEDAGPPT:
                                  AEDAPRTM,AEDARDOC,ADAPRTY,AEDAOPER,AEDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DADANUMB,ADANUMB
          MOVE      ZERO,QAEDAPVI
          MOVE      DAEDAPVI,QAEDAPVI
          MOVE      QAEDAPVI,AEDAPVIS
          MOVE      DAEDANPN,AEDANPNA
.
          MOVE      ADANUMB,SADANUMB
          MOVE      ADATIME,SADATIME
          MOVE      ADADATE,SADADATE
          MOVE      ADAURNO,SADAURNO
          MOVE      ADADOCT,SADADOCT
          RETURN  
.
RLAEDEA1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READL     AAEDE1A1,KEY8;DADANUMB,ADADATE,ADATIME,ADAURNO,ADACOMP:
                                  ADACLASS,ADAINSUR,ADASRC,ADASIT,ADAMODE:
                                  ADAFILL,ADADOCT,ADASEEN,ADAADMIT,ADALOCK:
                                  ADADURN,ADAEMPL,ADAADD1,ADAADD2,ADASUBR:
                                  ADAADD4,ADAPOST,ADATELE,ADACONT,ADAUSR1:
                                  ADAUSR2,ADAUSR3,ADAUSR4,ADAUSR5,ADADIAG:
                                  ADAFIL2,ADAWAIT,ADASDTE,ADAPREV,AEDAFUND:
                                  AEDATBLE,DAEDAPVI,AEDARFGP,AEDAGPPC:
                                  DAEDANPN,AEDATIAS,AEDADTAT,AEDATESI:
                                  AEDAEMPL,AEDARTAS,AEDAINIT,AEDAPLIN:
                                  AEDADIAS,AEDARNEN,AEDACONS,AEDAGPPT:
                                  AEDAPRTM,AEDARDOC,ADAPRTY,AEDAOPER,AEDASPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DADANUMB,ADANUMB
          MOVE      ZERO,QAEDAPVI
          MOVE      DAEDAPVI,QAEDAPVI
          MOVE      QAEDAPVI,AEDAPVIS
          MOVE      DAEDANPN,AEDANPNA
.
          MOVE      ADANUMB,SADANUMB
          MOVE      ADATIME,SADATIME
          MOVE      ADADATE,SADADATE
          MOVE      ADAURNO,SADAURNO
          MOVE      ADADOCT,SADADOCT
          RETURN  
.
UUAEDEA1  UNLOCK    AAEDE1A1
          RETURN
.
RDKDETA1  MOVE      ZERO,OVRCD
          READKS    AAEDE1A1;DADANUMB,ADADATE,ADATIME,ADAURNO,ADACOMP:
                             ADACLASS,ADAINSUR,ADASRC,ADASIT,ADAMODE:
                             ADAFILL,ADADOCT,ADASEEN,ADAADMIT,ADALOCK:
                             ADADURN,ADAEMPL,ADAADD1,ADAADD2,ADASUBR:
                             ADAADD4,ADAPOST,ADATELE,ADACONT,ADAUSR1:
                             ADAUSR2,ADAUSR3,ADAUSR4,ADAUSR5,ADADIAG:
                             ADAFIL2,ADAWAIT,ADASDTE,ADAPREV,AEDAFUND:
                             AEDATBLE,DAEDAPVI,AEDARFGP,AEDAGPPC:
                             DAEDANPN,AEDATIAS,AEDADTAT,AEDATESI:
                             AEDAEMPL,AEDARTAS,AEDAINIT,AEDAPLIN:
                             AEDADIAS,AEDARNEN,AEDACONS,AEDAGPPT:
                             AEDAPRTM,AEDARDOC,ADAPRTY,AEDAOPER,AEDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DADANUMB,ADANUMB
          MOVE      ZERO,QAEDAPVI
          MOVE      DAEDAPVI,QAEDAPVI
          MOVE      QAEDAPVI,AEDAPVIS
          MOVE      DAEDANPN,AEDANPNA
.
          MOVE      ADANUMB,SADANUMB
          MOVE      ADATIME,SADATIME
          MOVE      ADADATE,SADADATE
          MOVE      ADAURNO,SADAURNO
          MOVE      ADADOCT,SADADOCT
          RETURN  
.
WRDETA1   MOVE      ADANUMB,DADANUMB
          MOVE      AEDAPVIS,QAEDAPVI
          MOVE      QAEDAPVI,DAEDAPVI
          MOVE      AEDANPNA,DAEDANPN
          RESET     KEY8
          MOVE      SP2,ADALOCK
          MOVE      PASSCODE,AEDAOPER
          WRITE     AAEDE1A1,KEY8;DADANUMB,ADADATE,ADATIME,ADAURNO,ADACOMP:
                                  ADACLASS,ADAINSUR,ADASRC,ADASIT,ADAMODE:
                                  ADAFILL,ADADOCT,ADASEEN,ADAADMIT,ADALOCK:
                                  ADADURN,ADAEMPL,ADAADD1,ADAADD2,ADASUBR:
                                  ADAADD4,ADAPOST,ADATELE,ADACONT,ADAUSR1:
                                  ADAUSR2,ADAUSR3,ADAUSR4,ADAUSR5,ADADIAG:
                                  ADAFIL2,ADAWAIT,ADASDTE,ADAPREV,AEDAFUND:
                                  AEDATBLE,DAEDAPVI,AEDARFGP,AEDAGPPC:
                                  DAEDANPN,AEDATIAS,AEDADTAT,AEDATESI:
                                  AEDAEMPL,AEDARTAS,AEDAINIT,AEDAPLIN:
                                  AEDADIAS,AEDARNEN,AEDACONS,AEDAGPPT:
                                  AEDAPRTM,AEDARDOC,ADAPRTY,AEDAOPER,AEDASPAR
          RETURN  
.
UPDETA1   MOVE      ADANUMB,DADANUMB
          MOVE      AEDAPVIS,QAEDAPVI
          MOVE      QAEDAPVI,DAEDAPVI
          MOVE      AEDANPNA,DAEDANPN
          MOVE      SP2,ADALOCK
          UPDATE    AAEDE1A1;DADANUMB,ADADATE,ADATIME,ADAURNO,ADACOMP:
                             ADACLASS,ADAINSUR,ADASRC,ADASIT,ADAMODE:
                             ADAFILL,ADADOCT,ADASEEN,ADAADMIT,ADALOCK:
                             ADADURN,ADAEMPL,ADAADD1,ADAADD2,ADASUBR:
                             ADAADD4,ADAPOST,ADATELE,ADACONT,ADAUSR1:
                             ADAUSR2,ADAUSR3,ADAUSR4,ADAUSR5,ADADIAG:
                             ADAFIL2,ADAWAIT,ADASDTE,ADAPREV,AEDAFUND:
                             AEDATBLE,DAEDAPVI,AEDARFGP,AEDAGPPC:
                             DAEDANPN,AEDATIAS,AEDADTAT,AEDATESI:
                             AEDAEMPL,AEDARTAS,AEDAINIT,AEDAPLIN:
                             AEDADIAS,AEDARNEN,AEDACONS,AEDAGPPT:
                             AEDAPRTM,AEDARDOC,ADAPRTY,AEDAOPER,AEDASPAR
          RETURN
.
DEDETA1   RESET     KEY8
          DELETE    AAEDE1A1,KEY8
          RETURN
.
.       SECOND SESSIONS   I/O
.
RDSDETA2  RESET     KEY16
          READ      AAEDE1A2,KEY16;;
          RETURN  
.
RDDETA2   MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      AAEDE1A2,KEY16;DADANUMB,ADADATE,ADATIME,ADAURNO,ADACOMP:
                                   ADACLASS,ADAINSUR,ADASRC,ADASIT,ADAMODE:
                                   ADAFILL,ADADOCT,ADASEEN,ADAADMIT,ADALOCK:
                                   ADADURN,ADAEMPL,ADAADD1,ADAADD2,ADASUBR:
                                   ADAADD4,ADAPOST,ADATELE,ADACONT,ADAUSR1:
                                   ADAUSR2,ADAUSR3,ADAUSR4,ADAUSR5,ADADIAG:
                                   ADAFIL2,ADAWAIT,ADASDTE,ADAPREV,AEDAFUND:
                                   AEDATBLE,DAEDAPVI,AEDARFGP,AEDAGPPC:
                                   DAEDANPN,AEDATIAS,AEDADTAT,AEDATESI:
                                   AEDAEMPL,AEDARTAS,AEDAINIT,AEDAPLIN:
                                   AEDADIAS,AEDARNEN,AEDACONS,AEDAGPPT:
                                   AEDAPRTM,AEDARDOC,ADAPRTY,AEDAOPER,AEDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DADANUMB,ADANUMB
          MOVE      ZERO,QAEDAPVI
          MOVE      DAEDAPVI,QAEDAPVI
          MOVE      QAEDAPVI,AEDAPVIS
          MOVE      DAEDANPN,AEDANPNA
          RETURN  
.
RDKDETA2  MOVE      ZERO,OVRCD
          READKS    AAEDE1A2;DADANUMB,ADADATE,ADATIME,ADAURNO,ADACOMP:
                             ADACLASS,ADAINSUR,ADASRC,ADASIT,ADAMODE:
                             ADAFILL,ADADOCT,ADASEEN,ADAADMIT,ADALOCK:
                             ADADURN,ADAEMPL,ADAADD1,ADAADD2,ADASUBR:
                             ADAADD4,ADAPOST,ADATELE,ADACONT,ADAUSR1:
                             ADAUSR2,ADAUSR3,ADAUSR4,ADAUSR5,ADADIAG:
                             ADAFIL2,ADAWAIT,ADASDTE,ADAPREV,AEDAFUND:
                             AEDATBLE,DAEDAPVI,AEDARFGP,AEDAGPPC:
                             DAEDANPN,AEDATIAS,AEDADTAT,AEDATESI:
                             AEDAEMPL,AEDARTAS,AEDAINIT,AEDAPLIN:
                             AEDADIAS,AEDARNEN,AEDACONS,AEDAGPPT:
                             AEDAPRTM,AEDARDOC,ADAPRTY,AEDAOPER,AEDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DADANUMB,ADANUMB
          MOVE      ZERO,QAEDAPVI
          MOVE      DAEDAPVI,QAEDAPVI
          MOVE      QAEDAPVI,AEDAPVIS
          MOVE      DAEDANPN,AEDANPNA
          RETURN  
.
RDPDETA2  MOVE      ZERO,OVRCD
          READKP    AAEDE1A2;DADANUMB,ADADATE,ADATIME,ADAURNO,ADACOMP:
                             ADACLASS,ADAINSUR,ADASRC,ADASIT,ADAMODE:
                             ADAFILL,ADADOCT,ADASEEN,ADAADMIT,ADALOCK:
                             ADADURN,ADAEMPL,ADAADD1,ADAADD2,ADASUBR:
                             ADAADD4,ADAPOST,ADATELE,ADACONT,ADAUSR1:
                             ADAUSR2,ADAUSR3,ADAUSR4,ADAUSR5,ADADIAG:
                             ADAFIL2,ADAWAIT,ADASDTE,ADAPREV,AEDAFUND:
                             AEDATBLE,DAEDAPVI,AEDARFGP,AEDAGPPC:
                             DAEDANPN,AEDATIAS,AEDADTAT,AEDATESI:
                             AEDAEMPL,AEDARTAS,AEDAINIT,AEDAPLIN:
                             AEDADIAS,AEDARNEN,AEDACONS,AEDAGPPT:
                             AEDAPRTM,AEDARDOC,ADAPRTY,AEDAOPER,AEDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DADANUMB,ADANUMB
          MOVE      ZERO,QAEDAPVI
          MOVE      DAEDAPVI,QAEDAPVI
          MOVE      QAEDAPVI,AEDAPVIS
          MOVE      DAEDANPN,AEDANPNA
          RETURN  
.
.        THIRD SESSIONS  FILE I/O
.
RDSDETA3  RESET     KEY21
          READ      AAEDE1A3,KEY21;;
          RETURN
.
RDDETA3   MOVE      ZERO,OVRCD
          RESET     KEY21
          READ      AAEDE1A3,KEY21;DADANUMB,ADADATE,ADATIME,ADAURNO,ADACOMP:
                                   ADACLASS,ADAINSUR,ADASRC,ADASIT,ADAMODE:
                                   ADAFILL,ADADOCT,ADASEEN,ADAADMIT,ADALOCK:
                                   ADADURN,ADAEMPL,ADAADD1,ADAADD2,ADASUBR:
                                   ADAADD4,ADAPOST,ADATELE,ADACONT,ADAUSR1:
                                   ADAUSR2,ADAUSR3,ADAUSR4,ADAUSR5,ADADIAG:
                                   ADAFIL2,ADAWAIT,ADASDTE,ADAPREV,AEDAFUND:
                                   AEDATBLE,DAEDAPVI,AEDARFGP,AEDAGPPC:
                                   DAEDANPN,AEDATIAS,AEDADTAT,AEDATESI:
                                   AEDAEMPL,AEDARTAS,AEDAINIT,AEDAPLIN:
                                   AEDADIAS,AEDARNEN,AEDACONS,AEDAGPPT:
                                   AEDAPRTM,AEDARDOC,ADAPRTY,AEDAOPER,AEDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DADANUMB,ADANUMB
          MOVE      ZERO,QAEDAPVI
          MOVE      DAEDAPVI,QAEDAPVI
          MOVE      QAEDAPVI,AEDAPVIS
          MOVE      DAEDANPN,AEDANPNA
          RETURN  
.
RDKDETA3  MOVE      ZERO,OVRCD
          READKS    AAEDE1A3;DADANUMB,ADADATE,ADATIME,ADAURNO,ADACOMP:
                             ADACLASS,ADAINSUR,ADASRC,ADASIT,ADAMODE:
                             ADAFILL,ADADOCT,ADASEEN,ADAADMIT,ADALOCK:
                             ADADURN,ADAEMPL,ADAADD1,ADAADD2,ADASUBR:
                             ADAADD4,ADAPOST,ADATELE,ADACONT,ADAUSR1:
                             ADAUSR2,ADAUSR3,ADAUSR4,ADAUSR5,ADADIAG:
                             ADAFIL2,ADAWAIT,ADASDTE,ADAPREV,AEDAFUND:
                             AEDATBLE,DAEDAPVI,AEDARFGP,AEDAGPPC:
                             DAEDANPN,AEDATIAS,AEDADTAT,AEDATESI:
                             AEDAEMPL,AEDARTAS,AEDAINIT,AEDAPLIN:
                             AEDADIAS,AEDARNEN,AEDACONS,AEDAGPPT:
                             AEDAPRTM,AEDARDOC,ADAPRTY,AEDAOPER,AEDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DADANUMB,ADANUMB
          MOVE      ZERO,QAEDAPVI
          MOVE      DAEDAPVI,QAEDAPVI
          MOVE      QAEDAPVI,AEDAPVIS
          MOVE      DAEDANPN,AEDANPNA
          RETURN  
.
.        FOURTH FILE I/O
.
RDSDETA4  RESET     KEY27
          READ      AAEDE1A4,KEY27;;
          RETURN
.
RDDETA4   MOVE      ZERO,OVRCD
          RESET     KEY27
          READ      AAEDE1A4,KEY27;DADANUMB,ADADATE,ADATIME,ADAURNO,ADACOMP:
                                   ADACLASS,ADAINSUR,ADASRC,ADASIT,ADAMODE:
                                   ADAFILL,ADADOCT,ADASEEN,ADAADMIT,ADALOCK:
                                   ADADURN,ADAEMPL,ADAADD1,ADAADD2,ADASUBR:
                                   ADAADD4,ADAPOST,ADATELE,ADACONT,ADAUSR1:
                                   ADAUSR2,ADAUSR3,ADAUSR4,ADAUSR5,ADADIAG:
                                   ADAFIL2,ADAWAIT,ADASDTE,ADAPREV,AEDAFUND:
                                   AEDATBLE,DAEDAPVI,AEDARFGP,AEDAGPPC:
                                   DAEDANPN,AEDATIAS,AEDADTAT,AEDATESI:
                                   AEDAEMPL,AEDARTAS,AEDAINIT,AEDAPLIN:
                                   AEDADIAS,AEDARNEN,AEDACONS,AEDAGPPT:
                                   AEDAPRTM,AEDARDOC,ADAPRTY,AEDAOPER,AEDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DADANUMB,ADANUMB
          MOVE      ZERO,QAEDAPVI
          MOVE      DAEDAPVI,QAEDAPVI
          MOVE      QAEDAPVI,AEDAPVIS
          MOVE      DAEDANPN,AEDANPNA
          RETURN  
.
RDKDETA4  MOVE      ZERO,OVRCD
          READKS    AAEDE1A4;DADANUMB,ADADATE,ADATIME,ADAURNO,ADACOMP:
                             ADACLASS,ADAINSUR,ADASRC,ADASIT,ADAMODE:
                             ADAFILL,ADADOCT,ADASEEN,ADAADMIT,ADALOCK:
                             ADADURN,ADAEMPL,ADAADD1,ADAADD2,ADASUBR:
                             ADAADD4,ADAPOST,ADATELE,ADACONT,ADAUSR1:
                             ADAUSR2,ADAUSR3,ADAUSR4,ADAUSR5,ADADIAG:
                             ADAFIL2,ADAWAIT,ADASDTE,ADAPREV,AEDAFUND:
                             AEDATBLE,DAEDAPVI,AEDARFGP,AEDAGPPC:
                             DAEDANPN,AEDATIAS,AEDADTAT,AEDATESI:
                             AEDAEMPL,AEDARTAS,AEDAINIT,AEDAPLIN:
                             AEDADIAS,AEDARNEN,AEDACONS,AEDAGPPT:
                             AEDAPRTM,AEDARDOC,ADAPRTY,AEDAOPER,AEDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DADANUMB,ADANUMB
          MOVE      ZERO,QAEDAPVI
          MOVE      DAEDAPVI,QAEDAPVI
          MOVE      QAEDAPVI,AEDAPVIS
          MOVE      DAEDANPN,AEDANPNA
          RETURN  
.
