.         Include Name : OUTBB1IO.INC
.
.         I/O routines for Outpatients Booking Extension file
.
.OVRCD    FORM      1
.KEY8     DIM       8
.KEY16    DIM       16
.
. note : for audits IDDD is used to write the audit site - however OTBBSITE 
.        is used to read it in
.
.
.         1st index - OBAOUTNO
.
RDABOKB1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      OUTBB1A1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSBOKB1  RESET     KEY8
          READ      OUTBB1A1,KEY8;;
          RETURN
.
RDBOKB1   MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      OUTBB1A1,KEY8;DOBAOUTN,OBASRCR,OBACOMP,OBACLASS:
                                  OBAINS,OBAATTN,OBADOCT,OBACOMM:
                                  OTBBFUND,OTBBTBLE,DOTBBPVI,OTBBCLAL,OTBBSPAR:
                                  OBADATE,OBACAT,OBAPRTY,OBARSCHD:
                                  OBBPORT,OBBBOOK,OBBCTYP,OBOUSR1,OBOUSR2:
                                  OBOUSR3,OBOUSR4,OBALADMN,OTBBDEPT:
                                  OTBBTRAN,OTBBLNGI,OTBBTMFS,OTBBTMBO:
                                  OTBBGPFA,OTBBECRA,OTBBRFGP,OTBBGPPC:
                                  OTBBADCS,OTBBCITM,OTBBASTM,OTBBDPTM:
                                  OTBBOUTC,OTBBSNDL,OTBBGPPT,OTBBDOFR:
                                  OTBBOPER,OBOUSR5,OBOUSR6,OBOUSR7:
                                  OBOUSR8,OTBBRANK,OTBBSPCA,OTBBCIND,OTBBFLUP:
                                  OTBBSCAR,OTBBGLDT,OTBBSNGL,OTBBNMDS:
                                  OTBBCART,OTBBSRVD,OTBBCLHR,OTBBCONT,OTBBTCOD:
                                  OTBBPURC,OTBBBKOV,OTBBBKPR,OTBBBKPM,OTBBBKBA:
                                  OTBBRDAT,OTBBHCP1,OTBBHCP2,OTBBHCP3,OTBBHCP4:
                                  OTBBSPR1
          GOTO      OVERCOND IF OVER
          MOVE      DOBAOUTN,OBAOUTNO
          MOVE      DOTBBPVI,OTBBPVIS
          RETURN
.
UUOTBOB1  RESET     KEY8
          UNLOCK    OUTBB1A1
          RETURN
.
RLOTBOB1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READL     OUTBB1A1,KEY8;DOBAOUTN,OBASRCR,OBACOMP,OBACLASS:
                                  OBAINS,OBAATTN,OBADOCT,OBACOMM:
                                  OTBBFUND,OTBBTBLE,DOTBBPVI,OTBBCLAL,OTBBSPAR:
                                  OBADATE,OBACAT,OBAPRTY,OBARSCHD:
                                  OBBPORT,OBBBOOK,OBBCTYP,OBOUSR1,OBOUSR2:
                                  OBOUSR3,OBOUSR4,OBALADMN,OTBBDEPT:
                                  OTBBTRAN,OTBBLNGI,OTBBTMFS,OTBBTMBO:
                                  OTBBGPFA,OTBBECRA,OTBBRFGP,OTBBGPPC:
                                  OTBBADCS,OTBBCITM,OTBBASTM,OTBBDPTM:
                                  OTBBOUTC,OTBBSNDL,OTBBGPPT,OTBBDOFR:
                                  OTBBOPER,OBOUSR5,OBOUSR6,OBOUSR7:
                                  OBOUSR8,OTBBRANK,OTBBSPCA,OTBBCIND,OTBBFLUP:
                                  OTBBSCAR,OTBBGLDT,OTBBSNGL,OTBBNMDS:
                                  OTBBCART,OTBBSRVD,OTBBCLHR,OTBBCONT,OTBBTCOD:
                                  OTBBPURC,OTBBBKOV,OTBBBKPR,OTBBBKPM,OTBBBKBA:
                                  OTBBRDAT,OTBBHCP1,OTBBHCP2,OTBBHCP3,OTBBHCP4:
                                  OTBBSPR1
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOBAOUTN,OBAOUTNO
          MOVE      DOTBBPVI,OTBBPVIS
          RETURN
.
RDKBOKB1  MOVE      ZERO,OVRCD
          READKS    OUTBB1A1;DOBAOUTN,OBASRCR,OBACOMP,OBACLASS:
                             OBAINS,OBAATTN,OBADOCT,OBACOMM:
                             OTBBFUND,OTBBTBLE,DOTBBPVI,OTBBCLAL,OTBBSPAR:
                             OBADATE,OBACAT,OBAPRTY,OBARSCHD:
                             OBBPORT,OBBBOOK,OBBCTYP,OBOUSR1,OBOUSR2:
                             OBOUSR3,OBOUSR4,OBALADMN,OTBBDEPT:
                             OTBBTRAN,OTBBLNGI,OTBBTMFS,OTBBTMBO:
                             OTBBGPFA,OTBBECRA,OTBBRFGP,OTBBGPPC:
                             OTBBADCS,OTBBCITM,OTBBASTM,OTBBDPTM:
                             OTBBOUTC,OTBBSNDL,OTBBGPPT,OTBBDOFR:
                             OTBBOPER,OBOUSR5,OBOUSR6,OBOUSR7:
                             OBOUSR8,OTBBRANK,OTBBSPCA,OTBBCIND,OTBBFLUP:
                             OTBBSCAR,OTBBGLDT,OTBBSNGL,OTBBNMDS:
                             OTBBCART,OTBBSRVD,OTBBCLHR,OTBBCONT,OTBBTCOD:
                             OTBBPURC,OTBBBKOV,OTBBBKPR,OTBBBKPM,OTBBBKBA:
                             OTBBRDAT,OTBBHCP1,OTBBHCP2,OTBBHCP3,OTBBHCP4:
                             OTBBSPR1
          GOTO      OVERCOND IF OVER
          MOVE      DOBAOUTN,OBAOUTNO
          MOVE      DOTBBPVI,OTBBPVIS
          RETURN
.
WRBOKB1   RESET     KEY8
          MOVE      OTBBPVIS,DOTBBPVI
          MOVE      PASSCODE,OTBBOPER
          WRITE     OUTBB1A1,KEY8;DOBAOUTN,OBASRCR,OBACOMP,OBACLASS:
                                  OBAINS,OBAATTN,OBADOCT,OBACOMM:
                                  OTBBFUND,OTBBTBLE,DOTBBPVI,OTBBCLAL,OTBBSPAR:
                                  OBADATE,OBACAT,OBAPRTY,OBARSCHD:
                                  OBBPORT,OBBBOOK,OBBCTYP,OBOUSR1,OBOUSR2:
                                  OBOUSR3,OBOUSR4,OBALADMN,OTBBDEPT:
                                  OTBBTRAN,OTBBLNGI,OTBBTMFS,OTBBTMBO:
                                  OTBBGPFA,OTBBECRA,OTBBRFGP,OTBBGPPC:
                                  OTBBADCS,OTBBCITM,OTBBASTM,OTBBDPTM:
                                  OTBBOUTC,OTBBSNDL,OTBBGPPT,OTBBDOFR:
                                  OTBBOPER,OBOUSR5,OBOUSR6,OBOUSR7:
                                  OBOUSR8,OTBBRANK,OTBBSPCA,OTBBCIND,OTBBFLUP:
                                  OTBBSCAR,OTBBGLDT,OTBBSNGL,OTBBNMDS:
                                  OTBBCART,OTBBSRVD,OTBBCLHR,OTBBCONT,OTBBTCOD:
                                  OTBBPURC,OTBBBKOV,OTBBBKPR,OTBBBKPM,OTBBBKBA:
                                  OTBBRDAT,OTBBHCP1,OTBBHCP2,OTBBHCP3,OTBBHCP4:
                                  OTBBSPR1
          RETURN
.
UPBOKB1   MOVE      OBAOUTNO,DOBAOUTN
          MOVE      OTBBPVIS,DOTBBPVI
          UPDATE    OUTBB1A1;DOBAOUTN,OBASRCR,OBACOMP,OBACLASS:
                             OBAINS,OBAATTN,OBADOCT,OBACOMM:
                             OTBBFUND,OTBBTBLE,DOTBBPVI,OTBBCLAL,OTBBSPAR:
                             OBADATE,OBACAT,OBAPRTY,OBARSCHD:
                             OBBPORT,OBBBOOK,OBBCTYP,OBOUSR1,OBOUSR2:
                             OBOUSR3,OBOUSR4,OBALADMN,OTBBDEPT:
                             OTBBTRAN,OTBBLNGI,OTBBTMFS,OTBBTMBO:
                             OTBBGPFA,OTBBECRA,OTBBRFGP,OTBBGPPC:
                             OTBBADCS,OTBBCITM,OTBBASTM,OTBBDPTM:
                             OTBBOUTC,OTBBSNDL,OTBBGPPT,OTBBDOFR:
                             OTBBOPER,OBOUSR5,OBOUSR6,OBOUSR7:
                             OBOUSR8,OTBBRANK,OTBBSPCA,OTBBCIND,OTBBFLUP:
                             OTBBSCAR,OTBBGLDT,OTBBSNGL,OTBBNMDS:
                             OTBBCART,OTBBSRVD,OTBBCLHR,OTBBCONT,OTBBTCOD:
                             OTBBPURC,OTBBBKOV,OTBBBKPR,OTBBBKPM,OTBBBKBA:
                             OTBBRDAT,OTBBHCP1,OTBBHCP2,OTBBHCP3,OTBBHCP4:
                             OTBBSPR1
          RETURN
.
DEBOKB1   RESET     KEY8
          DELETE    OUTBB1A1,KEY8
          RETURN
.
.         2nd index - OBADATE, OBAOUTNO
.
RDABOKB2  MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      OUTBB1A2,KEY16;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSBOKB2  RESET     KEY16
          READ      OUTBB1A2,KEY16;;
          RETURN
.
RDBOKB2   MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      OUTBB1A2,KEY16;DOBAOUTN,OBASRCR,OBACOMP,OBACLASS:
                                   OBAINS,OBAATTN,OBADOCT,OBACOMM:
                                   OTBBFUND,OTBBTBLE,DOTBBPVI,OTBBCLAL,OTBBSPAR:
                                   OBADATE,OBACAT,OBAPRTY,OBARSCHD:
                                   OBBPORT,OBBBOOK,OBBCTYP,OBOUSR1,OBOUSR2:
                                   OBOUSR3,OBOUSR4,OBALADMN,OTBBDEPT:
                                   OTBBTRAN,OTBBLNGI,OTBBTMFS,OTBBTMBO:
                                   OTBBGPFA,OTBBECRA,OTBBRFGP,OTBBGPPC:
                                   OTBBADCS,OTBBCITM,OTBBASTM,OTBBDPTM:
                                   OTBBOUTC,OTBBSNDL,OTBBGPPT,OTBBDOFR:
                                   OTBBOPER,OBOUSR5,OBOUSR6,OBOUSR7:
                                   OBOUSR8,OTBBRANK,OTBBSPCA,OTBBCIND,OTBBFLUP:
                                   OTBBSCAR,OTBBGLDT,OTBBSNGL,OTBBNMDS:
                                   OTBBCART,OTBBSRVD,OTBBCLHR,OTBBCONT,OTBBTCOD:
                                   OTBBPURC,OTBBBKOV,OTBBBKPR,OTBBBKPM,OTBBBKBA:
                                   OTBBRDAT,OTBBHCP1,OTBBHCP2,OTBBHCP3,OTBBHCP4:
                                   OTBBSPR1
          GOTO      OVERCOND IF OVER
          MOVE      DOBAOUTN,OBAOUTNO
          MOVE      DOTBBPVI,OTBBPVIS
          RETURN
.
RLOTBOB2  MOVE      ZERO,OVRCD
          RESET     KEY16
          READL     OUTBB1A2,KEY16;DOBAOUTN,OBASRCR,OBACOMP,OBACLASS:
                                   OBAINS,OBAATTN,OBADOCT,OBACOMM:
                                   OTBBFUND,OTBBTBLE,DOTBBPVI,OTBBCLAL,OTBBSPAR:
                                   OBADATE,OBACAT,OBAPRTY,OBARSCHD:
                                   OBBPORT,OBBBOOK,OBBCTYP,OBOUSR1,OBOUSR2:
                                   OBOUSR3,OBOUSR4,OBALADMN,OTBBDEPT:
                                   OTBBTRAN,OTBBLNGI,OTBBTMFS,OTBBTMBO:
                                   OTBBGPFA,OTBBECRA,OTBBRFGP,OTBBGPPC:
                                   OTBBADCS,OTBBCITM,OTBBASTM,OTBBDPTM:
                                   OTBBOUTC,OTBBSNDL,OTBBGPPT,OTBBDOFR:
                                   OTBBOPER,OBOUSR5,OBOUSR6,OBOUSR7:
                                   OBOUSR8,OTBBRANK,OTBBSPCA,OTBBCIND,OTBBFLUP:
                                   OTBBSCAR,OTBBGLDT,OTBBSNGL,OTBBNMDS:
                                   OTBBCART,OTBBSRVD,OTBBCLHR,OTBBCONT,OTBBTCOD:
                                   OTBBPURC,OTBBBKOV,OTBBBKPR,OTBBBKPM,OTBBBKBA:
                                   OTBBRDAT,OTBBHCP1,OTBBHCP2,OTBBHCP3,OTBBHCP4:
                                   OTBBSPR1
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOBAOUTN,OBAOUTNO
          MOVE      DOTBBPVI,OTBBPVIS
          RETURN
.
UUOTBOB2  RESET     KEY8
          UNLOCK    OUTBB1A2
          RETURN
.
RDKBOKB2  MOVE      ZERO,OVRCD
          READKS    OUTBB1A2;DOBAOUTN,OBASRCR,OBACOMP,OBACLASS:
                             OBAINS,OBAATTN,OBADOCT,OBACOMM:
                             OTBBFUND,OTBBTBLE,DOTBBPVI,OTBBCLAL,OTBBSPAR:
                             OBADATE,OBACAT,OBAPRTY,OBARSCHD:
                             OBBPORT,OBBBOOK,OBBCTYP,OBOUSR1,OBOUSR2:
                             OBOUSR3,OBOUSR4,OBALADMN,OTBBDEPT:
                             OTBBTRAN,OTBBLNGI,OTBBTMFS,OTBBTMBO:
                             OTBBGPFA,OTBBECRA,OTBBRFGP,OTBBGPPC:
                             OTBBADCS,OTBBCITM,OTBBASTM,OTBBDPTM:
                             OTBBOUTC,OTBBSNDL,OTBBGPPT,OTBBDOFR:
                             OTBBOPER,OBOUSR5,OBOUSR6,OBOUSR7:
                             OBOUSR8,OTBBRANK,OTBBSPCA,OTBBCIND,OTBBFLUP:
                             OTBBSCAR,OTBBGLDT,OTBBSNGL,OTBBNMDS:
                             OTBBCART,OTBBSRVD,OTBBCLHR,OTBBCONT,OTBBTCOD:
                             OTBBPURC,OTBBBKOV,OTBBBKPR,OTBBBKPM,OTBBBKBA:
                             OTBBRDAT,OTBBHCP1,OTBBHCP2,OTBBHCP3,OTBBHCP4:
                             OTBBSPR1
          GOTO      OVERCOND IF OVER
          MOVE      DOBAOUTN,OBAOUTNO
          MOVE      DOTBBPVI,OTBBPVIS
          RETURN
.
.
. audit io routines
.
ASOTBOB   RESET      KEY19
          READ       OUTAUBB1,KEY19;;
          RETURN  
.
AKOTBOB   MOVE       ZERO,OVRCD
          READKS     OUTAUBB1;OTBBAUDD,OTBBAUDT,OTBBAUDP,OTBBAUDR,OTBBAUDS:
                              OTBBAUDO,OTBBSITE,DOBAOUTN,OBASRCR,OBACOMP:
                              OBACLASS,OBAINS,OBAATTN,OBADOCT,OBACOMM:
                              OTBBFUND,OTBBTBLE,DOTBBPVI,OTBBCLAL,OTBBSPAR:
                              OBADATE,OBACAT,OBAPRTY,OBARSCHD,OBBPORT,OBBBOOK:
                              OBBCTYP,OBOUSR1,OBOUSR2,OBOUSR3,OBOUSR4:
                              OBALADMN,OTBBDEPT:
                              OTBBTRAN,OTBBLNGI,OTBBTMFS,OTBBTMBO:
                              OTBBGPFA,OTBBECRA,OTBBRFGP,OTBBGPPC:
                              OTBBADCS,OTBBCITM,OTBBASTM,OTBBDPTM:
                              OTBBOUTC,OTBBSNDL,OTBBGPPT,OTBBDOFR:
                              OTBBOPER,OBOUSR5,OBOUSR6,OBOUSR7:
                              OBOUSR8,OTBBRANK,OTBBSPCA,OTBBCIND,OTBBFLUP:
                              OTBBSCAR,OTBBGLDT,OTBBSNGL,OTBBNMDS:
                              OTBBCART,OTBBSRVD,OTBBCLHR,OTBBCONT,OTBBTCOD:
                              OTBBPURC,OTBBBKOV,OTBBBKPR,OTBBBKPM,OTBBBKBA:
                              OTBBRDAT,OTBBHCP1,OTBBHCP2,OTBBHCP3,OTBBHCP4:
                              OTBBSPR1
.
         GOTO      OVERCOND IF OVER
         MOVE      DOBAOUTN,OBAOUTNO
         RETURN  
.
AWOTBOB   MOVE      OBAOUTNO,DOBAOUTN
          RESET     KEY19
          MOVE      PASSCODE,OTBBOPER
          WRITE      OUTAUBB1,KEY19;KEY19,OTBBAUDS:
                              OTBBAUDO,OTBBSITE,DOBAOUTN,OBASRCR,OBACOMP:
                              OBACLASS,OBAINS,OBAATTN,OBADOCT,OBACOMM:
                              OTBBFUND,OTBBTBLE,DOTBBPVI,OTBBCLAL,OTBBSPAR:
                              OBADATE,OBACAT,OBAPRTY,OBARSCHD,OBBPORT,OBBBOOK:
                              OBBCTYP,OBOUSR1,OBOUSR2,OBOUSR3,OBOUSR4:
                              OBALADMN,OTBBDEPT:
                              OTBBTRAN,OTBBLNGI,OTBBTMFS,OTBBTMBO:
                              OTBBGPFA,OTBBECRA,OTBBRFGP,OTBBGPPC:
                              OTBBADCS,OTBBCITM,OTBBASTM,OTBBDPTM:
                              OTBBOUTC,OTBBSNDL,OTBBGPPT,OTBBDOFR:
                              OTBBOPER,OBOUSR5,OBOUSR6,OBOUSR7:
                              OBOUSR8,OTBBRANK,OTBBSPCA,OTBBCIND,OTBBFLUP:
                              OTBBSCAR,OTBBGLDT,OTBBSNGL,OTBBNMDS:
                              OTBBCART,OTBBSRVD,OTBBCLHR,OTBBCONT,OTBBTCOD:
                              OTBBPURC,OTBBBKOV,OTBBBKPR,OTBBBKPM,OTBBBKBA:
                              OTBBRDAT,OTBBHCP1,OTBBHCP2,OTBBHCP3,OTBBHCP4:
                              OTBBSPR1
          RETURN
.
ADOTBOB   MOVE      ZERO,OVRCD
          RESET     KEY19
          DELETE    OUTAUBB1,KEY19
          RETURN
.
AUOTBOB   MOVE      OBAOUTNO,DOBAOUTN
          UPDATE     OUTAUBB1;OTBBAUDD,OTBBAUDT,OTBBAUDP,OTBBAUDR,OTBBAUDS:
                              OTBBAUDO,OTBBSITE,DOBAOUTN,OBASRCR,OBACOMP:
                              OBACLASS,OBAINS,OBAATTN,OBADOCT,OBACOMM:
                              OTBBFUND,OTBBTBLE,DOTBBPVI,OTBBCLAL,OTBBSPAR:
                              OBADATE,OBACAT,OBAPRTY,OBARSCHD,OBBPORT,OBBBOOK:
                              OBBCTYP,OBOUSR1,OBOUSR2,OBOUSR3,OBOUSR4:
                              OBALADMN,OTBBDEPT:
                              OTBBTRAN,OTBBLNGI,OTBBTMFS,OTBBTMBO:
                              OTBBGPFA,OTBBECRA,OTBBRFGP,OTBBGPPC:
                              OTBBADCS,OTBBCITM,OTBBASTM,OTBBDPTM:
                              OTBBOUTC,OTBBSNDL,OTBBGPPT,OTBBDOFR:
                              OTBBOPER,OBOUSR5,OBOUSR6,OBOUSR7:
                              OBOUSR8,OTBBRANK,OTBBSPCA,OTBBCIND,OTBBFLUP:
                              OTBBSCAR,OTBBGLDT,OTBBSNGL,OTBBNMDS:
                              OTBBCART,OTBBSRVD,OTBBCLHR,OTBBCONT,OTBBTCOD:
                              OTBBPURC,OTBBBKOV,OTBBBKPR,OTBBBKPM,OTBBBKBA:
                              OTBBRDAT,OTBBHCP1,OTBBHCP2,OTBBHCP3,OTBBHCP4:
                              OTBBSPR1
          RETURN
.
OPOTBB11  RESET     CFNAME,3
          APPEND    FILBB1A1,CFNAME
          RESET     CFNAME
          OPEN      OUTBB1A1,CFNAME     
          RETURN
.
OPOTBB12  RESET     CFNAME,3
          APPEND    FILBB1A2,CFNAME
          RESET     CFNAME
          OPEN      OUTBB1A2,CFNAME     
          RETURN
+
.
