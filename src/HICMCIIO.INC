.*****************************************************************************
.*                            HICMCIIO.INC                                   *
.*****************************************************************************
.
RSHCMCI1  RESET     KEY8
          READ      HICMCIA1,KEY8;;
          RETURN
.
RAHCMCI1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      HICMCIA1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCMCI1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      HICMCIA1,KEY8;HCMCMCID,HCMCCNTR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCMCI1  MOVE      ZERO,OVRCD
          READKS    HICMCIA1;HCMCMCID,HCMCCNTR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCMCI1  MOVE      ZERO,OVRCD
          READKP    HICMCIA1;HCMCMCID,HCMCCNTR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCMCI1  UPDATE    HICMCIA1;HCMCMCID,HCMCCNTR
          RETURN
.
WRHCMCI1  RESET     KEY8
          WRITE     HICMCIA1,KEY8;HCMCMCID,HCMCCNTR
          RETURN
.
DEHCMCI1  RESET     KEY8
          DELETE    HICMCIA1,KEY8
          RETURN
.
