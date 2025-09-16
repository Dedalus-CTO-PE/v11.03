.*****************************************************************************
.*        PMSRPTIO.INC                                                       *
.*****************************************************************************
.
.         Index 1
.
RSPMRPT1  RESET     KEY20
          READ      PMSRPTA1,KEY20;;
          RETURN
.
RAPMRPT1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      PMSRPTA1,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMRPT1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      PMSRPTA1,KEY20;DPMRPMES,PMRPURNO,PMRPTITL,PMRPSNAM:
                                   PMRPGNAM,PMRPADD1,PMRPADD2,PMRPADD3,PMRPADD4:
                                   PMRPPOST,PMRPTELP,PMRPTELB,PMRPPSEX,PMRPPDOB:
                                   PMRPMEDI,PMRPCEAS,PMRPDOFD,PMRPALID,PMRPMOBL:
                                   PMRPUSID,PMRPEXPD,PMRPCONS,PMRPRFGP,PMRPMEXP:
                                   PMRPPAD1,PMRPPAD2,PMRPPAD3,PMRPPAD4,PMRPPPCD:
                                   PMRPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMRPMES,PMRPMESI
          RETURN
.
RKPMRPT1  MOVE      ZERO,OVRCD
          READKS    PMSRPTA1;DPMRPMES,PMRPURNO,PMRPTITL,PMRPSNAM:
                             PMRPGNAM,PMRPADD1,PMRPADD2,PMRPADD3,PMRPADD4:
                             PMRPPOST,PMRPTELP,PMRPTELB,PMRPPSEX,PMRPPDOB:
                             PMRPMEDI,PMRPCEAS,PMRPDOFD,PMRPALID,PMRPMOBL:
                             PMRPUSID,PMRPEXPD,PMRPCONS,PMRPRFGP,PMRPMEXP:
                             PMRPPAD1,PMRPPAD2,PMRPPAD3,PMRPPAD4,PMRPPPCD:
                             PMRPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMRPMES,PMRPMESI
          RETURN
.
RPPMRPT1  MOVE      ZERO,OVRCD
          READKP    PMSRPTA1;DPMRPMES,PMRPURNO,PMRPTITL,PMRPSNAM:
                             PMRPGNAM,PMRPADD1,PMRPADD2,PMRPADD3,PMRPADD4:
                             PMRPPOST,PMRPTELP,PMRPTELB,PMRPPSEX,PMRPPDOB:
                             PMRPMEDI,PMRPCEAS,PMRPDOFD,PMRPALID,PMRPMOBL:
                             PMRPUSID,PMRPEXPD,PMRPCONS,PMRPRFGP,PMRPMEXP:
                             PMRPPAD1,PMRPPAD2,PMRPPAD3,PMRPPAD4,PMRPPPCD:
                             PMRPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMRPMES,PMRPMESI
          RETURN
.
UPPMRPT1  MOVE      PMRPMESI,DPMRPMES
          UPDATE    PMSRPTA1;DPMRPMES,PMRPURNO,PMRPTITL,PMRPSNAM:
                             PMRPGNAM,PMRPADD1,PMRPADD2,PMRPADD3,PMRPADD4:
                             PMRPPOST,PMRPTELP,PMRPTELB,PMRPPSEX,PMRPPDOB:
                             PMRPMEDI,PMRPCEAS,PMRPDOFD,PMRPALID,PMRPMOBL:
                             PMRPUSID,PMRPEXPD,PMRPCONS,PMRPRFGP,PMRPMEXP:
                             PMRPPAD1,PMRPPAD2,PMRPPAD3,PMRPPAD4,PMRPPPCD:
                             PMRPSPAR
          RETURN
.
WRPMRPT1  MOVE      PMRPMESI,DPMRPMES
          RESET     KEY20
          WRITE     PMSRPTA1,KEY20;DPMRPMES,PMRPURNO,PMRPTITL,PMRPSNAM:
                                   PMRPGNAM,PMRPADD1,PMRPADD2,PMRPADD3,PMRPADD4:
                                   PMRPPOST,PMRPTELP,PMRPTELB,PMRPPSEX,PMRPPDOB:
                                   PMRPMEDI,PMRPCEAS,PMRPDOFD,PMRPALID,PMRPMOBL:
                                   PMRPUSID,PMRPEXPD,PMRPCONS,PMRPRFGP,PMRPMEXP:
                                   PMRPPAD1,PMRPPAD2,PMRPPAD3,PMRPPAD4,PMRPPPCD:
                                   PMRPSPAR
          RETURN
.
DEPMRPT1  RESET     KEY20
          DELETE    PMSRPTA1,KEY20
          RETURN
.
.         Index 2
.
RSPMRPT2  RESET     KEY28
          READ      PMSRPTA2,KEY28;;
          RETURN
.
RAPMRPT2  RESET     KEY28
          MOVE      ZERO,OVRCD
          READ      PMSRPTA2,KEY28;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMRPT2  RESET     KEY28
          MOVE      ZERO,OVRCD
          READ      PMSRPTA2,KEY28;DPMRPMES,PMRPURNO,PMRPTITL,PMRPSNAM:
                                   PMRPGNAM,PMRPADD1,PMRPADD2,PMRPADD3,PMRPADD4:
                                   PMRPPOST,PMRPTELP,PMRPTELB,PMRPPSEX,PMRPPDOB:
                                   PMRPMEDI,PMRPCEAS,PMRPDOFD,PMRPALID,PMRPMOBL:
                                   PMRPUSID,PMRPEXPD,PMRPCONS,PMRPRFGP,PMRPMEXP:
                                   PMRPPAD1,PMRPPAD2,PMRPPAD3,PMRPPAD4,PMRPPPCD:
                                   PMRPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMRPMES,PMRPMESI
          RETURN
.
RKPMRPT2  MOVE      ZERO,OVRCD
          READKS    PMSRPTA2;DPMRPMES,PMRPURNO,PMRPTITL,PMRPSNAM:
                             PMRPGNAM,PMRPADD1,PMRPADD2,PMRPADD3,PMRPADD4:
                             PMRPPOST,PMRPTELP,PMRPTELB,PMRPPSEX,PMRPPDOB:
                             PMRPMEDI,PMRPCEAS,PMRPDOFD,PMRPALID,PMRPMOBL:
                             PMRPUSID,PMRPEXPD,PMRPCONS,PMRPRFGP,PMRPMEXP:
                             PMRPPAD1,PMRPPAD2,PMRPPAD3,PMRPPAD4,PMRPPPCD:
                             PMRPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMRPMES,PMRPMESI
          RETURN
.
RPPMRPT2  MOVE      ZERO,OVRCD
          READKP    PMSRPTA2;DPMRPMES,PMRPURNO,PMRPTITL,PMRPSNAM:
                             PMRPGNAM,PMRPADD1,PMRPADD2,PMRPADD3,PMRPADD4:
                             PMRPPOST,PMRPTELP,PMRPTELB,PMRPPSEX,PMRPPDOB:
                             PMRPMEDI,PMRPCEAS,PMRPDOFD,PMRPALID,PMRPMOBL:
                             PMRPUSID,PMRPEXPD,PMRPCONS,PMRPRFGP,PMRPMEXP:
                             PMRPPAD1,PMRPPAD2,PMRPPAD3,PMRPPAD4,PMRPPPCD:
                             PMRPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMRPMES,PMRPMESI
          RETURN
