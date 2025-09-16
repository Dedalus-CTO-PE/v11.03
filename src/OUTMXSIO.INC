.
. OUTMXSIO.INC
. ------------
. Filenames       : outmxsaf
. Description     : Outpatient Clinic Master Extra Staff file
.
.         positional read
.
RSOTMXS1  RESET     KEY20
          READ      OUTMXSA1,KEY20;;
          RETURN
.
.         read to see if record exists
.
RAOTMXS1  MOVE      ZERO,OVRCD
          RESET     KEY20
          READ      OUTMXSA1,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDOTMXS1  MOVE      ZERO,OVRCD
          RESET     KEY20
          READ      OUTMXSA1,KEY20;OTXSSITE,OTXSCLIN,DOTXSDAY,OTXSTIME,DOTXSCNT:
                                   OTXSDOCT,OTXSSPEC,OTXCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTXSDAY,OTXSDAY
          MOVE      DOTXSCNT,OTXSCNT
          RETURN
.
.         full read with a lock
.
RLOTMXS1  MOVE      ZERO,OVRCD
          RESET     KEY20
          READL     OUTMXSA1,KEY20;OTXSSITE,OTXSCLIN,DOTXSDAY,OTXSTIME,DOTXSCNT:
                                   OTXSDOCT,OTXSSPEC,OTXCSPAR
          GOTO      OVERLOCK IF LOCKED
          GOTO      OVERCOND IF OVER
          MOVE      DOTXSDAY,OTXSDAY
          MOVE      DOTXSCNT,OTXSCNT
          RETURN
.
.         next read
.
RKOTMXS1  MOVE      ZERO,OVRCD
          READKS    OUTMXSA1;OTXSSITE,OTXSCLIN,DOTXSDAY,OTXSTIME,DOTXSCNT:
                             OTXSDOCT,OTXSSPEC,OTXCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTXSDAY,OTXSDAY
          MOVE      DOTXSCNT,OTXSCNT
          RETURN
.
.         previous read
.
RPOTMXS1  MOVE      ZERO,OVRCD
          READKP    OUTMXSA1;OTXSSITE,OTXSCLIN,DOTXSDAY,OTXSTIME,DOTXSCNT:
                             OTXSDOCT,OTXSSPEC,OTXCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTXSDAY,OTXSDAY
          MOVE      DOTXSCNT,OTXSCNT
          RETURN
.
.         update
.
UPOTMXS1  MOVE      OTXSDAY,DOTXSDAY
          MOVE      OTXSCNT,DOTXSCNT
          UPDATE    OUTMXSA1;OTXSSITE,OTXSCLIN,DOTXSDAY,OTXSTIME,DOTXSCNT:
                             OTXSDOCT,OTXSSPEC,OTXCSPAR
          RETURN
.
.         write
.
WROTMXS1  RESET     KEY20
          MOVE      OTXSDAY,DOTXSDAY
          MOVE      OTXSCNT,DOTXSCNT
          WRITE     OUTMXSA1,KEY20;OTXSSITE,OTXSCLIN,DOTXSDAY,OTXSTIME,DOTXSCNT:
                                   OTXSDOCT,OTXSSPEC,OTXCSPAR
          RETURN
.
.         delete a record
.
DEOTMXS1  RESET     KEY20
          DELETE    OUTMXSA1,KEY20
          RETURN
.
.         unlock all locks one user has on the file
.
ULOTMXS1  UNLOCK    OUTMXSA1
          RETURN
.
