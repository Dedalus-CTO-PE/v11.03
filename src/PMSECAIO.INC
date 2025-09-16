.*****************************************************************************
.*        PMSECHIO.INC                                                       *
.*****************************************************************************
.
.         First Index
.
RSPMECA1  RESET     KEY26
          READ      PMSECAA1,KEY26;;
          RETURN
.
RAPMECA1  RESET     KEY26
          MOVE      ZERO,OVRCD
          READ      PMSECAA1,KEY26;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMECA1  RESET     KEY26
          MOVE      ZERO,OVRCD
          READ      PMSECAA1,KEY26;PMEAINVN,PMEADATE,PMEATIME,PMEABATN:
                                   PMEASTAT,PMEATYPE,PMEAOPER,PMEATRID:
                                   PMEAEROR,PMEAEROT,PMEASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMECA1  MOVE      ZERO,OVRCD
          READKS    PMSECAA1;PMEAINVN,PMEADATE,PMEATIME,PMEABATN:
                             PMEASTAT,PMEATYPE,PMEAOPER,PMEATRID:
                             PMEAEROR,PMEAEROT,PMEASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMECA1  MOVE      ZERO,OVRCD
          READKP    PMSECAA1;PMEAINVN,PMEADATE,PMEATIME,PMEABATN:
                             PMEASTAT,PMEATYPE,PMEAOPER,PMEATRID:
                             PMEAEROR,PMEAEROT,PMEASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMECA1  UPDATE    PMSECAA1;PMEAINVN,PMEADATE,PMEATIME,PMEABATN:
                             PMEASTAT,PMEATYPE,PMEAOPER,PMEATRID:
                             PMEAEROR,PMEAEROT,PMEASPAR
          RETURN
.
WRPMECA1  RESET     KEY26
          WRITE     PMSECAA1,KEY26;PMEAINVN,PMEADATE,PMEATIME,PMEABATN:
                                   PMEASTAT,PMEATYPE,PMEAOPER,PMEATRID:
                                   PMEAEROR,PMEAEROT,PMEASPAR
          RETURN
.
DEPMECA1  RESET     KEY26
          DELETE    PMSECAA1,KEY26
          RETURN
.
.         Second Index
.
RSPMECA2  RESET     KEY26
          READ      PMSECAA2,KEY26;;
          RETURN
.
RAPMECA2  RESET     KEY26
          MOVE      ZERO,OVRCD
          READ      PMSECAA2,KEY26;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMECA2  RESET     KEY26
          MOVE      ZERO,OVRCD
          READ      PMSECAA2,KEY26;PMEAINVN,PMEADATE,PMEATIME,PMEABATN:
                                   PMEASTAT,PMEATYPE,PMEAOPER,PMEATRID:
                                   PMEAEROR,PMEAEROT,PMEASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMECA2  MOVE      ZERO,OVRCD
          READKS    PMSECAA2;PMEAINVN,PMEADATE,PMEATIME,PMEABATN:
                             PMEASTAT,PMEATYPE,PMEAOPER,PMEATRID:
                             PMEAEROR,PMEAEROT,PMEASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMECA2  MOVE      ZERO,OVRCD
          READKP    PMSECAA2;PMEAINVN,PMEADATE,PMEATIME,PMEABATN:
                             PMEASTAT,PMEATYPE,PMEAOPER,PMEATRID:
                             PMEAEROR,PMEAEROT,PMEASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         Third Index
.
RSPMECA3  RESET     KEY26
          READ      PMSECAA3,KEY34;;
          RETURN
.
RAPMECA3  RESET     KEY26
          MOVE      ZERO,OVRCD
          READ      PMSECAA3,KEY34;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMECA3  RESET     KEY26
          MOVE      ZERO,OVRCD
          READ      PMSECAA3,KEY34;PMEAINVN,PMEADATE,PMEATIME,PMEABATN:
                                   PMEASTAT,PMEATYPE,PMEAOPER,PMEATRID:
                                   PMEAEROR,PMEAEROT,PMEASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMECA3  MOVE      ZERO,OVRCD
          READKS    PMSECAA3;PMEAINVN,PMEADATE,PMEATIME,PMEABATN:
                             PMEASTAT,PMEATYPE,PMEAOPER,PMEATRID:
                             PMEAEROR,PMEAEROT,PMEASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMECA3  MOVE      ZERO,OVRCD
          READKP    PMSECAA3;PMEAINVN,PMEADATE,PMEATIME,PMEABATN:
                             PMEASTAT,PMEATYPE,PMEAOPER,PMEATRID:
                             PMEAEROR,PMEAEROT,PMEASPAR
          GOTO      OVERCOND IF OVER
          RETURN
+
