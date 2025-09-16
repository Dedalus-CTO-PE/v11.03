.*****************************************************************************
.*        HICEFPIO.INC                                                       *
.*****************************************************************************
.
RSHCEFP1  RESET     KEY18
          READ      HICEFPA1,KEY18;;
          RETURN
.
RAHCEFP1  RESET     KEY18
          MOVE      ZERO,OVRCD
          READ      HICEFPA1,KEY18;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCEFP1  RESET     KEY18
          MOVE      ZERO,OVRCD
          READ      HICEFPA1,KEY18;HCEPPRUN,HCEPCNTR,HCEPPYEE,HCEPNCLM,HCEPBSBN:
                                   HCEPACCN,HCEPANAM,HCEPDAMT,HCEPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCEFP1  MOVE      ZERO,OVRCD
          READKS    HICEFPA1;HCEPPRUN,HCEPCNTR,HCEPPYEE,HCEPNCLM,HCEPBSBN:
                             HCEPACCN,HCEPANAM,HCEPDAMT,HCEPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCEFP1  MOVE      ZERO,OVRCD
          READKP    HICEFPA1;HCEPPRUN,HCEPCNTR,HCEPPYEE,HCEPNCLM,HCEPBSBN:
                             HCEPACCN,HCEPANAM,HCEPDAMT,HCEPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCEFP1  UPDATE    HICEFPA1;HCEPPRUN,HCEPCNTR,HCEPPYEE,HCEPNCLM,HCEPBSBN:
                             HCEPACCN,HCEPANAM,HCEPDAMT,HCEPSPAR
          RETURN
.
WRHCEFP1  RESET     KEY18
          WRITE     HICEFPA1,KEY18;HCEPPRUN,HCEPCNTR,HCEPPYEE,HCEPNCLM,HCEPBSBN:
                                   HCEPACCN,HCEPANAM,HCEPDAMT,HCEPSPAR
          RETURN
.
DEHCEFP1  RESET     KEY18
          DELETE    HICEFPA1,KEY18
          RETURN
.
