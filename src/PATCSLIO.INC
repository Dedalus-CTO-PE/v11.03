.**************************************************************************
.*   Program : PATCSLIO.INC                                               *
.*   File    : patcslaf                                                   *
.*                                                                        *
.*   KEYS    : KEY11, KEY41                                               *
.*                                                                        *
.*   Mod's   :                                                            *
.*                                                                        *
.**************************************************************************
.
.I/O's for 1st Index
.
RSPTCSL1  RESET     KEY11
          READ      PATCSLA1,KEY11;;
          RETURN
.
RAPTCSL1  RESET     KEY11
          MOVE      ZERO,OVRCD
          READ      PATCSLA1,KEY11;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCSL1  RESET     KEY11
          MOVE      ZERO,OVRCD
          READ      PATCSLA1,KEY11;PTCLURNO,DPTCLUNI,PTCLDESC,PTCLSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTCLUNI,PTCLUNIQ
          RETURN
.
RKPTCSL1  MOVE      ZERO,OVRCD
          READKS    PATCSLA1;PTCLURNO,DPTCLUNI,PTCLDESC,PTCLSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTCLUNI,PTCLUNIQ
          RETURN
.
RPPTCSL1  MOVE      ZERO,OVRCD
          READKP    PATCSLA1;PTCLURNO,DPTCLUNI,PTCLDESC,PTCLSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTCLUNI,PTCLUNIQ
          RETURN
.
UPPTCSL1  MOVE      PTCLUNIQ,DPTCLUNI
          UPDATE    PATCSLA1;PTCLURNO,DPTCLUNI,PTCLDESC,PTCLSPAR
          RETURN
.
WRPTCSL1  MOVE      PTCLUNIQ,DPTCLUNI
          RESET     KEY11
          WRITE     PATCSLA1,KEY11;PTCLURNO,DPTCLUNI,PTCLDESC,PTCLSPAR
          RETURN
.
DEPTCSL1  RESET     KEY11
          DELETE    PATCSLA1,KEY11
          RETURN
.
.I/O's for 1st Index
.
RSPTCSL2  RESET     KEY41
          READ      PATCSLA2,KEY41;;
          RETURN
.
RAPTCSL2  RESET     KEY41
          MOVE      ZERO,OVRCD
          READ      PATCSLA2,KEY41;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCSL2  RESET     KEY41
          MOVE      ZERO,OVRCD
          READ      PATCSLA2,KEY41;PTCLURNO,DPTCLUNI,PTCLDESC,PTCLSPAR,PTCLUNIQ
          GOTO      OVERCOND IF OVER
          MOVE      DPTCLUNI,PTCLUNIQ
          RETURN
.
RKPTCSL2  MOVE      ZERO,OVRCD
          READKS    PATCSLA2;PTCLURNO,DPTCLUNI,PTCLDESC,PTCLSPAR,PTCLUNIQ
          GOTO      OVERCOND IF OVER
          MOVE      DPTCLUNI,PTCLUNIQ
          RETURN
.
RPPTCSL2  MOVE      ZERO,OVRCD
          READKP    PATCSLA2;PTCLURNO,DPTCLUNI,PTCLDESC,PTCLSPAR,PTCLUNIQ
          GOTO      OVERCOND IF OVER
          MOVE      DPTCLUNI,PTCLUNIQ
          RETURN
.
