.
.  Include  :  OUTMROIO.INC
.  File     :  patmroaf
.  Keys     :  KEY10, KEY19
.
RSOTMRO1  RESET     KEY10
          READ      OUTMROA1,KEY10;;
          RETURN
.
RAOTMRO1  RESET     KEY10
          MOVE      ZERO,OVRCD
          READ      OUTMROA1,KEY10;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTMRO1  RESET     KEY10
          MOVE      ZERO,OVRCD
          READ      OUTMROA1,KEY10;DOTMOADM:
                                  DOTMOREC,OTMOCODE:
                                  OTMOODAT,OTMOOSTM,OTMOOETM,OTMODATE,OTMOTIME:
                                  OTMOUSER,OTMOSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTMOADM,OTMOADMN
          MOVE      DOTMOREC,OTMORECN
          RETURN
.
RKOTMRO1  MOVE      ZERO,OVRCD
          READKS    OUTMROA1;DOTMOADM,DOTMOREC:
                                  OTMOCODE:
                                  OTMOODAT,OTMOOSTM,OTMOOETM,OTMODATE,OTMOTIME:
                                  OTMOUSER,OTMOSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTMOADM,OTMOADMN
          MOVE      DOTMOREC,OTMORECN
          RETURN
.
RPOTMRO1  MOVE      ZERO,OVRCD
          READKP    OUTMROA1;DOTMOADM,DOTMOREC:
                                  OTMOCODE:
                                  OTMOODAT,OTMOOSTM,OTMOOETM,OTMODATE,OTMOTIME:
                                  OTMOUSER,OTMOSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTMOADM,OTMOADMN
          MOVE      DOTMOREC,OTMORECN
          RETURN
.
UPOTMRO1  MOVE      OTMOADMN,DOTMOADM
          MOVE      OTMORECN,DOTMOREC
          UPDATE    OUTMROA1;DOTMOADM,DOTMOREC:
                                  OTMOCODE:
                                  OTMOODAT,OTMOOSTM,OTMOOETM,OTMODATE,OTMOTIME:
                                  OTMOUSER,OTMOSPAR
          RETURN
.
WROTMRO1  RESET     KEY10
          MOVE      OTMOADMN,DOTMOADM
          MOVE      OTMORECN,DOTMOREC
          WRITE     OUTMROA1,KEY10;DOTMOADM:
                                  DOTMOREC,OTMOCODE:
                                  OTMOODAT,OTMOOSTM,OTMOOETM,OTMODATE,OTMOTIME:
                                  OTMOUSER,OTMOSPAR
          RETURN
.
DEOTMRO1  RESET     KEY10
          DELETE    OUTMROA1,KEY10
          RETURN
.
RSOTMRO2  RESET     KEY19
          READ      OUTMROA2,KEY19;;
          RETURN
.
RAOTMRO2  RESET     KEY19
          MOVE      ZERO,OVRCD
          READ      OUTMROA2,KEY19;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTMRO2  RESET     KEY19
          MOVE      ZERO,OVRCD
          READ      OUTMROA2,KEY19;DOTMOADM:
                                  DOTMOREC,OTMOCODE:
                                  OTMOODAT,OTMOOSTM,OTMOOETM,OTMODATE,OTMOTIME:
                                  OTMOUSER,OTMOSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTMOADM,OTMOADMN
          MOVE      DOTMOREC,OTMORECN
          RETURN
.
RKOTMRO2  MOVE      ZERO,OVRCD
          READKS    OUTMROA2;DOTMOADM,DOTMOREC:
                                  OTMOCODE:
                                  OTMOODAT,OTMOOSTM,OTMOOETM,OTMODATE,OTMOTIME:
                                  OTMOUSER,OTMOSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTMOADM,OTMOADMN
          MOVE      DOTMOREC,OTMORECN
          RETURN
.
RPOTMRO2  MOVE      ZERO,OVRCD
          READKP    OUTMROA2;DOTMOADM,DOTMOREC:
                             OTMOCODE:
                                  OTMOODAT,OTMOOSTM,OTMOOETM,OTMODATE,OTMOTIME:
                                  OTMOUSER,OTMOSPAR
          MOVE      DOTMOADM,OTMOADMN
          MOVE      DOTMOREC,OTMORECN
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTMRO2  MOVE      OTMOADMN,DOTMOADM
          MOVE      OTMORECN,DOTMOREC
          UPDATE    OUTMROA2;DOTMOADM,DOTMOREC:
                                  OTMOCODE:
                                  OTMOODAT,OTMOOSTM,OTMOOETM,OTMODATE,OTMOTIME:
                                  OTMOUSER,OTMOSPAR
          RETURN
.
WROTMRO2  RESET     KEY19
          MOVE      OTMOADMN,DOTMOADM
          MOVE      OTMORECN,DOTMOREC
          WRITE     OUTMROA2,KEY19;DOTMOADM:
                                  DOTMOREC,OTMOCODE:
                                  OTMOODAT,OTMOOSTM,OTMOOETM,OTMODATE,OTMOTIME:
                                  OTMOUSER,OTMOSPAR
          RETURN
.
DEOTMRO2  RESET     KEY19
          DELETE    OUTMROA2,KEY19
          RETURN
.
