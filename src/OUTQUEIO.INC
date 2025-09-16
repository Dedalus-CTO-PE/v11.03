.*****************************************************************************
.*                        OUTQUEIO.INC
.*****************************************************************************
.
RSOTQUE1  RESET     KEY20
          READ      OUTQUEA1,KEY20;;
          RETURN
.
RAOTQUE1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      OUTQUEA1,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTQUE1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      OUTQUEA1,KEY20;DOTQUMES,OBASITE,OBACLIN,OBADATE,OBASTRT:
                                   OBASLOT,OBATIME,OBACTYP,OBAVISIT,OBAOUTNO:
                                   OBASESST,OBASRCR,OBACOMP,OBACLASS,OBAINS:
                                   OBAATTN,OBADOCT,OBACOMM,OTBBFUND,OTBBTBLE:
                                   OTBBPVIS,OTBBCLAL,OTBBSPAR,OBACAT,OBAPRTY:
                                   OBARSCHD,OBBBOOK,OBOUSR1,OBOUSR2,OBOUSR3:
                                   OBOUSR4,OBALADMN,OTBBDEPT,OTBBTRAN,OTBBLNGI:
                                   OTBBTMFS,OTBBTMBO,OTBBGPFA,OTBBECRA,OTBBRFGP:
                                   OTBBGPPC,OTBBADCS,OTBBCITM,OTBBASTM,OTBBDPTM:
                                   OTBBOUTC,OTBBSNDL,OTBBGPPT,OTBBDOFR,OBOUSR5:
                                   OBOUSR6,OBOUSR7,OBOUSR8,OTBBRANK,OTBBSPCA:
                                   OTBBCIND,OTBBFLUP,OTBBSCAR,OTBBGLDT,OTBBSNGL:
                                   OTBBNMDS,OTBBCART,OTBBSRVD,OTBBCLHR,OTBBCONT:
                                   OTBBTCOD:
                                   OPRSSITE,OPRSCLIN,OPRSDATE,OPRSSTRT,OPRSSLOT:
                                   OPRSTIME,OPRSOUTN,OPRSREAS,OPRSNCLI,OPRSNDAT:
                                   OPRSNSTR,OPRSNSLO,OPRSNTIM,OPRSNVIS,OPRSNTYP:
                                   OPRSVIST,OPRSCTYP,OPCNSITE,OPCNCLIN,OPCNDATE:
                                   OPCNSTRT,OPCNSLOT,OPCNTIME,OPCNOUTN,OPCNREAS:
                                   OPCNVTYP,OTMALTYP,OBASTAT,OTBBPURC,OTBBBKOV:
                                   OTBBBKPR,OTBBBKPM,OTBBBKBA,OTBBRDAT,OTTHSTAT:
                                   OTTHRSIT,OTTHRCOD,OTTHRADD,OTTHWURL,OTTHE164:
                                   OTQUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTQUMES,OTQUMESG
          RETURN
.
RKOTQUE1  MOVE      ZERO,OVRCD
          READKS    OUTQUEA1;DOTQUMES,OBASITE,OBACLIN,OBADATE,OBASTRT:
                             OBASLOT,OBATIME,OBACTYP,OBAVISIT,OBAOUTNO:
                             OBASESST,OBASRCR,OBACOMP,OBACLASS,OBAINS:
                             OBAATTN,OBADOCT,OBACOMM,OTBBFUND,OTBBTBLE:
                             OTBBPVIS,OTBBCLAL,OTBBSPAR,OBACAT,OBAPRTY:
                             OBARSCHD,OBBBOOK,OBOUSR1,OBOUSR2,OBOUSR3:
                             OBOUSR4,OBALADMN,OTBBDEPT,OTBBTRAN,OTBBLNGI:
                             OTBBTMFS,OTBBTMBO,OTBBGPFA,OTBBECRA,OTBBRFGP:
                             OTBBGPPC,OTBBADCS,OTBBCITM,OTBBASTM,OTBBDPTM:
                             OTBBOUTC,OTBBSNDL,OTBBGPPT,OTBBDOFR,OBOUSR5:
                             OBOUSR6,OBOUSR7,OBOUSR8,OTBBRANK,OTBBSPCA:
                             OTBBCIND,OTBBFLUP,OTBBSCAR,OTBBGLDT,OTBBSNGL:
                             OTBBNMDS,OTBBCART,OTBBSRVD,OTBBCLHR,OTBBCONT:
                             OTBBTCOD:
                             OPRSSITE,OPRSCLIN,OPRSDATE,OPRSSTRT,OPRSSLOT:
                             OPRSTIME,OPRSOUTN,OPRSREAS,OPRSNCLI,OPRSNDAT:
                             OPRSNSTR,OPRSNSLO,OPRSNTIM,OPRSNVIS,OPRSNTYP:
                             OPRSVIST,OPRSCTYP,OPCNSITE,OPCNCLIN,OPCNDATE:
                             OPCNSTRT,OPCNSLOT,OPCNTIME,OPCNOUTN,OPCNREAS:
                             OPCNVTYP,OTMALTYP,OBASTAT,OTBBPURC,OTBBBKOV:
                             OTBBBKPR,OTBBBKPM,OTBBBKBA,OTBBRDAT,OTTHSTAT: 
                             OTTHRSIT,OTTHRCOD,OTTHRADD,OTTHWURL,OTTHE164:
                             OTQUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTQUMES,OTQUMESG
          RETURN
.
RPOTQUE1  MOVE      ZERO,OVRCD
          READKP    OUTQUEA1;DOTQUMES,OBASITE,OBACLIN,OBADATE,OBASTRT:
                             OBASLOT,OBATIME,OBACTYP,OBAVISIT,OBAOUTNO:
                             OBASESST,OBASRCR,OBACOMP,OBACLASS,OBAINS:
                             OBAATTN,OBADOCT,OBACOMM,OTBBFUND,OTBBTBLE:
                             OTBBPVIS,OTBBCLAL,OTBBSPAR,OBACAT,OBAPRTY:
                             OBARSCHD,OBBBOOK,OBOUSR1,OBOUSR2,OBOUSR3:
                             OBOUSR4,OBALADMN,OTBBDEPT,OTBBTRAN,OTBBLNGI:
                             OTBBTMFS,OTBBTMBO,OTBBGPFA,OTBBECRA,OTBBRFGP:
                             OTBBGPPC,OTBBADCS,OTBBCITM,OTBBASTM,OTBBDPTM:
                             OTBBOUTC,OTBBSNDL,OTBBGPPT,OTBBDOFR,OBOUSR5:
                             OBOUSR6,OBOUSR7,OBOUSR8,OTBBRANK,OTBBSPCA:
                             OTBBCIND,OTBBFLUP,OTBBSCAR,OTBBGLDT,OTBBSNGL:
                             OTBBNMDS,OTBBCART,OTBBSRVD,OTBBCLHR,OTBBCONT:
                             OTBBTCOD:
                             OPRSSITE,OPRSCLIN,OPRSDATE,OPRSSTRT,OPRSSLOT:
                             OPRSTIME,OPRSOUTN,OPRSREAS,OPRSNCLI,OPRSNDAT:
                             OPRSNSTR,OPRSNSLO,OPRSNTIM,OPRSNVIS,OPRSNTYP:
                             OPRSVIST,OPRSCTYP,OPCNSITE,OPCNCLIN,OPCNDATE:
                             OPCNSTRT,OPCNSLOT,OPCNTIME,OPCNOUTN,OPCNREAS:
                             OPCNVTYP,OTMALTYP,OBASTAT,OTBBPURC,OTBBBKOV:
                             OTBBBKPR,OTBBBKPM,OTBBBKBA,OTBBRDAT,OTTHSTAT:
                             OTTHRSIT,OTTHRCOD,OTTHRADD,OTTHWURL,OTTHE164:
                             OTQUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTQUMES,OTQUMESG
          RETURN
.
UPOTQUE1  MOVE      OTQUMESG,DOTQUMES
          UPDATE    OUTQUEA1;DOTQUMES,OBASITE,OBACLIN,OBADATE,OBASTRT:
                             OBASLOT,OBATIME,OBACTYP,OBAVISIT,OBAOUTNO:
                             OBASESST,OBASRCR,OBACOMP,OBACLASS,OBAINS:
                             OBAATTN,OBADOCT,OBACOMM,OTBBFUND,OTBBTBLE:
                             OTBBPVIS,OTBBCLAL,OTBBSPAR,OBACAT,OBAPRTY:
                             OBARSCHD,OBBBOOK,OBOUSR1,OBOUSR2,OBOUSR3:
                             OBOUSR4,OBALADMN,OTBBDEPT,OTBBTRAN,OTBBLNGI:
                             OTBBTMFS,OTBBTMBO,OTBBGPFA,OTBBECRA,OTBBRFGP:
                             OTBBGPPC,OTBBADCS,OTBBCITM,OTBBASTM,OTBBDPTM:
                             OTBBOUTC,OTBBSNDL,OTBBGPPT,OTBBDOFR,OBOUSR5:
                             OBOUSR6,OBOUSR7,OBOUSR8,OTBBRANK,OTBBSPCA:
                             OTBBCIND,OTBBFLUP,OTBBSCAR,OTBBGLDT,OTBBSNGL:
                             OTBBNMDS,OTBBCART,OTBBSRVD,OTBBCLHR,OTBBCONT:
                             OTBBTCOD:
                             OPRSSITE,OPRSCLIN,OPRSDATE,OPRSSTRT,OPRSSLOT:
                             OPRSTIME,OPRSOUTN,OPRSREAS,OPRSNCLI,OPRSNDAT:
                             OPRSNSTR,OPRSNSLO,OPRSNTIM,OPRSNVIS,OPRSNTYP:
                             OPRSVIST,OPRSCTYP,OPCNSITE,OPCNCLIN,OPCNDATE:
                             OPCNSTRT,OPCNSLOT,OPCNTIME,OPCNOUTN,OPCNREAS:
                             OPCNVTYP,OTMALTYP,OBASTAT,OTBBPURC,OTBBBKOV:
                             OTBBBKPR,OTBBBKPM,OTBBBKBA,OTBBRDAT,OTTHSTAT: 
                             OTTHRSIT,OTTHRCOD,OTTHRADD,OTTHWURL,OTTHE164:
                             OTQUSPAR
          RETURN
.
WROTQUE1  RESET     KEY20
          MOVE      OTQUMESG,DOTQUMES
          WRITE     OUTQUEA1,KEY20;DOTQUMES,OBASITE,OBACLIN,OBADATE,OBASTRT:
                                   OBASLOT,OBATIME,OBACTYP,OBAVISIT,OBAOUTNO:
                                   OBASESST,OBASRCR,OBACOMP,OBACLASS,OBAINS:
                                   OBAATTN,OBADOCT,OBACOMM,OTBBFUND,OTBBTBLE:
                                   OTBBPVIS,OTBBCLAL,OTBBSPAR,OBACAT,OBAPRTY:
                                   OBARSCHD,OBBBOOK,OBOUSR1,OBOUSR2,OBOUSR3:
                                   OBOUSR4,OBALADMN,OTBBDEPT,OTBBTRAN,OTBBLNGI:
                                   OTBBTMFS,OTBBTMBO,OTBBGPFA,OTBBECRA,OTBBRFGP:
                                   OTBBGPPC,OTBBADCS,OTBBCITM,OTBBASTM,OTBBDPTM:
                                   OTBBOUTC,OTBBSNDL,OTBBGPPT,OTBBDOFR,OBOUSR5:
                                   OBOUSR6,OBOUSR7,OBOUSR8,OTBBRANK,OTBBSPCA:
                                   OTBBCIND,OTBBFLUP,OTBBSCAR,OTBBGLDT,OTBBSNGL:
                                   OTBBNMDS,OTBBCART,OTBBSRVD,OTBBCLHR,OTBBCONT:
                                   OTBBTCOD:
                                   OPRSSITE,OPRSCLIN,OPRSDATE,OPRSSTRT,OPRSSLOT:
                                   OPRSTIME,OPRSOUTN,OPRSREAS,OPRSNCLI,OPRSNDAT:
                                   OPRSNSTR,OPRSNSLO,OPRSNTIM,OPRSNVIS,OPRSNTYP:
                                   OPRSVIST,OPRSCTYP,OPCNSITE,OPCNCLIN,OPCNDATE:
                                   OPCNSTRT,OPCNSLOT,OPCNTIME,OPCNOUTN,OPCNREAS:
                                   OPCNVTYP,OTMALTYP,OBASTAT,OTBBPURC,OTBBBKOV:
                                   OTBBBKPR,OTBBBKPM,OTBBBKBA,OTBBRDAT,OTTHSTAT:
                                   OTTHRSIT,OTTHRCOD,OTTHRADD,OTTHWURL,OTTHE164:
                                   OTQUSPAR 
          RETURN
.
DEOTQUE1  RESET     KEY20
          DELETE    OUTQUEA1,KEY20
          RETURN
