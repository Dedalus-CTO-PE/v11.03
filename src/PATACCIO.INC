.
. PATACCIO.INC
. ------------
. Filename     : pataccaf
. Description  : PRS2 Account Status File
. Variables    : OVRCD    FORM    1
.                KEY9     DIM     9 
.
RAPTACC1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATACCA1,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTACC1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATACCA1,KEY9;;
          RETURN
.
RDPTACC1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATACCA1,KEY9;PTASCLAM,PTASATYP,DPTASDAY,PTASACCS:
                                  PTASPRAC,PTASSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTASDAY,PTASHDAY
          RETURN
.
RKPTACC1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READKS    PATACCA1;PTASCLAM,PTASATYP,DPTASDAY,PTASACCS:
                             PTASPRAC,PTASSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTASDAY,PTASHDAY
          RETURN
.
RPPTACC1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READKP    PATACCA1;PTASCLAM,PTASATYP,DPTASDAY,PTASACCS:
                             PTASPRAC,PTASSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTASDAY,PTASHDAY
          RETURN
.
WRPTACC1  MOVE      ZERO,OVRCD
          RESET     KEY9
          WRITE     PATACCA1,KEY9;KEY9,PTASACCS,PTASPRAC,PTASSPAR
          RETURN
.
UPPTACC1  MOVE      PTASHDAY,DPTASDAY
          UPDATE    PATACCA1;PTASCLAM,PTASATYP,DPTASDAY,PTASACCS:
                             PTASPRAC,PTASSPAR
          RETURN
.
DEPTACC1  RESET     KEY9
          DELETE    PATACCA1,KEY9
          RETURN
.
