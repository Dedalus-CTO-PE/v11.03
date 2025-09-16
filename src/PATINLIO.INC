.
. PATINLIO.INC
. ------------
. Filenames       : patinlaf 
. Description     : Patient 'Invoice Loss of Revenue file'
.
. -----------------------------------------
. ------- I/O routines for PATINLA1 -------
. -----------------------------------------
.
RSPTINL1  RESET     KEY21
          READ      PATINLA1,KEY21;;
          RETURN
.
RAPTINL1  RESET     KEY21
          MOVE      ZERO,OVRCD
          READ      PATINLA1,KEY21;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTINL1  RESET     KEY21
          MOVE      ZERO,OVRCD
          READ      PATINLA1,KEY21;PTILINVN,PTILTYPE,PTILGRP,PTILCODE:
                                  PTILACTL,PTILLOSS,PTILSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTINL1  MOVE      ZERO,OVRCD
          READKS    PATINLA1;PTILINVN,PTILTYPE,PTILGRP,PTILCODE:
                                  PTILACTL,PTILLOSS,PTILSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTINL1  MOVE      ZERO,OVRCD
          READKP    PATINLA1;PTILINVN,PTILTYPE,PTILGRP,PTILCODE:
                                  PTILACTL,PTILLOSS,PTILSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTINL1  UPDATE    PATINLA1;PTILINVN,PTILTYPE,PTILGRP,PTILCODE:
                                  PTILACTL,PTILLOSS,PTILSPAR
          RETURN
.
WRPTINL1  RESET     KEY21
          WRITE     PATINLA1,KEY21;PTILINVN,PTILTYPE,PTILGRP,PTILCODE:
                                  PTILACTL,PTILLOSS,PTILSPAR
          RETURN
.
DEPTINL1  RESET     KEY21
          DELETE    PATINLA1,KEY21
          RETURN
..........................................................................
