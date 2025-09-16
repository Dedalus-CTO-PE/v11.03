.*****************************************************************************
.*        DGTRPLIO.INC           Datagate Reply File                         *
.*****************************************************************************
.
RSDGRPL1  RESET     KEY69
          READ      DGTRPLA1,KEY69;;
          RETURN
.
RADGRPL1  RESET     KEY69
          MOVE      ZERO,OVRCD
          READ      DGTRPLA1,KEY69;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDGRPL1  RESET     KEY69
          MOVE      ZERO,OVRCD
          READ      DGTRPLA1,KEY69;DGRPRPLY,DGRPSTAT,DGRPERRD,DGRPPAS1:
                                  DGRPPAS2,DGRPPAS3,DGRPURNO,DGRPNHSN,DGRPDATE:
                                  DGRPTIME,DGRPPROG,DGRPUSER,DGRPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDGRPL1  MOVE      ZERO,OVRCD
          READKS    DGTRPLA1;DGRPRPLY,DGRPSTAT,DGRPERRD,DGRPPAS1:
                                  DGRPPAS2,DGRPPAS3,DGRPURNO,DGRPNHSN,DGRPDATE:
                                  DGRPTIME,DGRPPROG,DGRPUSER,DGRPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDGRPL1  MOVE      ZERO,OVRCD
          READKP    DGTRPLA1;DGRPRPLY,DGRPSTAT,DGRPERRD,DGRPPAS1:
                                  DGRPPAS2,DGRPPAS3,DGRPURNO,DGRPNHSN,DGRPDATE:
                                  DGRPTIME,DGRPPROG,DGRPUSER,DGRPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDGRPL1  UPDATE    DGTRPLA1;DGRPRPLY,DGRPSTAT,DGRPERRD,DGRPPAS1:
                                  DGRPPAS2,DGRPPAS3,DGRPURNO,DGRPNHSN,DGRPDATE:
                                  DGRPTIME,DGRPPROG,DGRPUSER,DGRPSPAR
          RETURN
.
WRDGRPL1  RESET     KEY69
          WRITE     DGTRPLA1,KEY69;DGRPRPLY,DGRPSTAT,DGRPERRD,DGRPPAS1:
                                  DGRPPAS2,DGRPPAS3,DGRPURNO,DGRPNHSN,DGRPDATE:
                                  DGRPTIME,DGRPPROG,DGRPUSER,DGRPSPAR
          RETURN
.
DEDGRPL1  RESET     KEY69
          DELETE    DGTRPLA1,KEY69
          RETURN
