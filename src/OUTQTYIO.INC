RSOTQTY1  RESET     KEY20
          READ      OUTQTYA1,KEY20;;
          RETURN
.
RAOTQTY1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      OUTQTYA1,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTQTY1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      OUTQTYA1,KEY20;DOTQTMES,OCTSITE,OCTCTYP,OCTGRP:
                                  OCTDESC,OCTXBOK,OCTXATT,OCTBKT,OCTATT:
                                  OCTACT,OCTVACS,OCTWUNIT,OCTUSDF1,OCTUSDF2:
                                  OTQTSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTQTMES,OTQTMESI
          RETURN
.
RKOTQTY1  MOVE      ZERO,OVRCD
          READKS    OUTQTYA1;DOTQTMES,OCTSITE,OCTCTYP,OCTGRP:
                                  OCTDESC,OCTXBOK,OCTXATT,OCTBKT,OCTATT:
                                  OCTACT,OCTVACS,OCTWUNIT,OCTUSDF1,OCTUSDF2:
                                  OTQTSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTQTMES,OTQTMESI
          RETURN
.
RPOTQTY1  MOVE      ZERO,OVRCD
          READKP    OUTQTYA1;DOTQTMES,OCTSITE,OCTCTYP,OCTGRP:
                                  OCTDESC,OCTXBOK,OCTXATT,OCTBKT,OCTATT:
                                  OCTACT,OCTVACS,OCTWUNIT,OCTUSDF1,OCTUSDF2:
                                  OTQTSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTQTMES,OTQTMESI
          RETURN
.
UPOTQTY1  MOVE      OTQTMESI,DOTQTMES
          UPDATE    OUTQTYA1;DOTQTMES,OCTSITE,OCTCTYP,OCTGRP:
                                  OCTDESC,OCTXBOK,OCTXATT,OCTBKT,OCTATT:
                                  OCTACT,OCTVACS,OCTWUNIT,OCTUSDF1,OCTUSDF2:
                                  OTQTSPAR
          RETURN
.
WROTQTY1  RESET     KEY20
          MOVE      OTQTMESI,DOTQTMES
          WRITE     OUTQTYA1,KEY20;DOTQTMES,OCTSITE,OCTCTYP,OCTGRP:
                                  OCTDESC,OCTXBOK,OCTXATT,OCTBKT,OCTATT:
                                  OCTACT,OCTVACS,OCTWUNIT,OCTUSDF1,OCTUSDF2:
                                  OTQTSPAR
          RETURN
.
DEOTQTY1  RESET     KEY20
          DELETE    OUTQTYA1,KEY20
          RETURN
.
