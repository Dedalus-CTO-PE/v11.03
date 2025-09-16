.*****************************************************************************
.*                  PATCLCIO.INC                                             *
.*****************************************************************************
.
RSPTCLC1  RESET     KEY22
          READ      PATCLCA1,KEY22;;
          RETURN
.
RAPTCLC1  RESET     KEY22
          MOVE      ZERO,OVRCD
          READ      PATCLCA1,KEY22;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCLC1  RESET     KEY22
          MOVE      ZERO,OVRCD
          READ      PATCLCA1,KEY22;PTCLURNO,PTCLTYPE,PTCLFDAT,DPTCLLCN:
                                   PTCLTEXT,PTCLSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTCLLCN,PTCLLCNT
          RETURN
.
RKPTCLC1  MOVE      ZERO,OVRCD
          READKS    PATCLCA1;PTCLURNO,PTCLTYPE,PTCLFDAT,DPTCLLCN:
                             PTCLTEXT,PTCLSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTCLLCN,PTCLLCNT
          RETURN
.
RPPTCLC1  MOVE      ZERO,OVRCD
          READKP    PATCLCA1;PTCLURNO,PTCLTYPE,PTCLFDAT,DPTCLLCN:
                             PTCLTEXT,PTCLSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTCLLCN,PTCLLCNT
          RETURN
.
UPPTCLC1  MOVE      PTCLLCNT,DPTCLLCN
          UPDATE    PATCLCA1;PTCLURNO,PTCLTYPE,PTCLFDAT,DPTCLLCN:
                             PTCLTEXT,PTCLSPAR
          RETURN
.
WRPTCLC1  RESET     KEY22
          MOVE      PTCLLCNT,DPTCLLCN
          WRITE     PATCLCA1,KEY22;PTCLURNO,PTCLTYPE,PTCLFDAT,DPTCLLCN:
                                   PTCLTEXT,PTCLSPAR
          RETURN
.
DEPTCLC1  RESET     KEY22
          DELETE    PATCLCA1,KEY22
          RETURN
+
