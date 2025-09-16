.
.         positional read
.
RSOTSDI1  RESET     KEY20
          READ      OUTSDIA1,KEY20;;
          RETURN
.
.         read to see if record exists
.
RAOTSDI1  MOVE      ZERO,OVRCD
          RESET     KEY20
          READ      OUTSDIA1,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDOTSDI1  MOVE      ZERO,OVRCD
          RESET     KEY20
          READ      OUTSDIA1,KEY20;OTDSSITE,OTDSCODE,OTDSEFDT,OTDSEDDT:
                                  OTDSDCOD,OTDSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read with a lock
.
RLOTSDI1  MOVE      ZERO,OVRCD
          RESET     KEY20
          READL     OUTSDIA1,KEY20;OTDSSITE,OTDSCODE,OTDSEFDT,OTDSEDDT:
                                  OTDSDCOD,OTDSSPAR
          GOTO      OVERLOCK IF LOCKED
          GOTO      OVERCOND IF OVER
          RETURN
.
.         next read
.
RKOTSDI1  MOVE      ZERO,OVRCD
          READKS    OUTSDIA1;OTDSSITE,OTDSCODE,OTDSEFDT,OTDSEDDT:
                                  OTDSDCOD,OTDSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read
.
RPOTSDI1  MOVE      ZERO,OVRCD
          READKP    OUTSDIA1;OTDSSITE,OTDSCODE,OTDSEFDT,OTDSEDDT:
                                  OTDSDCOD,OTDSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         update
.
UPOTSDI1  UPDATE    OUTSDIA1;OTDSSITE,OTDSCODE,OTDSEFDT,OTDSEDDT:
                                  OTDSDCOD,OTDSSPAR
          RETURN
.
.         write
.
WROTSDI1  RESET     KEY20
          WRITE     OUTSDIA1,KEY20;OTDSSITE,OTDSCODE,OTDSEFDT,OTDSEDDT:
                                  OTDSDCOD,OTDSSPAR
          RETURN
.
.         delete a record
.
DEOTSDI1  RESET     KEY20
          DELETE    OUTSDIA1,KEY20
          RETURN
.
.         unlock all locks one user has on the file
.
ULOTSDI1  UNLOCK    OUTSDIA1
          RETURN
.
.
.         positional read
.
RSOTSDI2  RESET     KEY23
          READ      OUTSDIA2,KEY23;;
          RETURN
.
.         read to see if record exists
.
RAOTSDI2  MOVE      ZERO,OVRCD
          RESET     KEY23
          READ      OUTSDIA2,KEY23;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDOTSDI2  MOVE      ZERO,OVRCD
          RESET     KEY23
          READ      OUTSDIA2,KEY23;OTDSSITE,OTDSCODE,OTDSEFDT,OTDSEDDT:
                                  OTDSDCOD,OTDSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read with a lock
.
RLOTSDI2  MOVE      ZERO,OVRCD
          RESET     KEY23
          READL     OUTSDIA2,KEY23;OTDSSITE,OTDSCODE,OTDSEFDT,OTDSEDDT:
                                  OTDSDCOD,OTDSSPAR
          GOTO      OVERLOCK IF LOCKED
          GOTO      OVERCOND IF OVER
          RETURN
.
.         next read
.
RKOTSDI2  MOVE      ZERO,OVRCD
          READKS    OUTSDIA2;OTDSSITE,OTDSCODE,OTDSEFDT,OTDSEDDT:
                                  OTDSDCOD,OTDSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read
.
RPOTSDI2  MOVE      ZERO,OVRCD
          READKP    OUTSDIA2;OTDSSITE,OTDSCODE,OTDSEFDT,OTDSEDDT:
                                  OTDSDCOD,OTDSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         update
.
UPOTSDI2  UPDATE    OUTSDIA2;OTDSSITE,OTDSCODE,OTDSEFDT,OTDSEDDT:
                                  OTDSDCOD,OTDSSPAR
          RETURN
.
.         write
.
WROTSDI2  RESET     KEY23
          WRITE     OUTSDIA2,KEY23;OTDSSITE,OTDSCODE,OTDSEFDT,OTDSEDDT:
                                  OTDSDCOD,OTDSSPAR
          RETURN
.
.         delete a record
.
DEOTSDI2  RESET     KEY23
          DELETE    OUTSDIA2,KEY23
          RETURN
.
.         unlock all locks one user has on the file
.
ULOTSDI2  UNLOCK    OUTSDIA2
          RETURN
.
.******************************************************************************
.         AUDITS
.
AWOUTSDI  RESET     KEY19
          WRITE     OUTAUDDS,KEY19;KEY19,OTDSAUDS,OTDSAUDO:
                                   OTDSSITE,OTDSCODE,OTDSEFDT:
                                   OTDSEDDT,OTDSDCOD,OTDSSPAR
          RETURN
.
AROUTSDI  RESET     KEY19
          READ      OUTAUDDS,KEY19;OTDSAUDD,OTDSAUDT,OTDSAUDP:
                                   OTDSAUDR,OTDSAUDS,OTDSAUDO:
                                   OTDSSITE,OTDSCODE,OTDSEFDT:
                                   OTDSEDDT,OTDSDCOD,OTDSSPAR
          RETURN
.
AKOUTSDI  RESET     KEY19
          READKS    OUTAUDDS;OTDSAUDD,OTDSAUDT,OTDSAUDP,OTDSAUDR:
                             OTDSAUDS,OTDSAUDO:
                             OTDSSITE,OTDSCODE,OTDSEFDT:
                             OTDSEDDT,OTDSDCOD,OTDSSPAR
          RETURN
.
