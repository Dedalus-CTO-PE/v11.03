.*****************************************************************************
.*        HICRCHIO.INC                                                       *
.*****************************************************************************
.
RSHCRCH1  RESET     KEY8
          READ      HICRCHA1,KEY8;;
          RETURN
.
RAHCRCH1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      HICRCHA1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCRCH1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      HICRCHA1,KEY8;HCRHRNUM,HCRHCNTR,HCRHCNUM:
                                  HCRHPMCI,HCRHSAMT,HCRHFNAM:
                                  HCRHSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCRCH1  MOVE      ZERO,OVRCD
          READKS    HICRCHA1;HCRHRNUM,HCRHCNTR,HCRHCNUM:
                             HCRHPMCI,HCRHSAMT,HCRHFNAM:
                             HCRHSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCRCH1  MOVE      ZERO,OVRCD
          READKP    HICRCHA1;HCRHRNUM,HCRHCNTR,HCRHCNUM:
                             HCRHPMCI,HCRHSAMT,HCRHFNAM:
                             HCRHSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCRCH1  UPDATE    HICRCHA1;HCRHRNUM,HCRHCNTR,HCRHCNUM:
                             HCRHPMCI,HCRHSAMT,HCRHFNAM:
                             HCRHSPAR
          RETURN
.
WRHCRCH1  RESET     KEY8
          WRITE     HICRCHA1,KEY8;HCRHRNUM,HCRHCNTR,HCRHCNUM:
                                  HCRHPMCI,HCRHSAMT,HCRHFNAM:
                                  HCRHSPAR
          RETURN
.
DEHCRCH1  RESET     KEY8
          DELETE    HICRCHA1,KEY8
          RETURN
.
