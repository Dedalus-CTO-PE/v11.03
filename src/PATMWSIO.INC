.
. Include   :  PATMWSIO.INC
.
. File      :  patmwsaf.dat
. Keys      :  KEY14
.
. Mods      :  27/02/1998  Steve Armstrong   Dgate
.              Added broadcast messages for Dgate
.
RSPTMWS1  RESET     KEY14
          READ      PATMWSA1,KEY14;;
          RETURN
.
RAPTMWS1  RESET     KEY14
          MOVE      ZERO,OVRCD
          READ      PATMWSA1,KEY14;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTMWS1  RESET     KEY14
          MOVE      ZERO,OVRCD
          READ      PATMWSA1,KEY14;PTMWURNO,PTMWCLSS,DPTMWCNT,PTMWDATE:
                                  PTMWTEXT,PTMWMARC,PTMWHOSP,PTMWDOCT,PTMWSYS:
                                  PTMWCODE,PTMWLUPD,PTMWSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTMWCNT,PTMWCNT
          RETURN
.
RKPTMWS1  MOVE      ZERO,OVRCD
          READKS    PATMWSA1;PTMWURNO,PTMWCLSS,DPTMWCNT,PTMWDATE:
                                  PTMWTEXT,PTMWMARC,PTMWHOSP,PTMWDOCT,PTMWSYS:
                                  PTMWCODE,PTMWLUPD,PTMWSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTMWCNT,PTMWCNT
          RETURN
.
RPPTMWS1  MOVE      ZERO,OVRCD
          READKP    PATMWSA1;PTMWURNO,PTMWCLSS,DPTMWCNT,PTMWDATE:
                                  PTMWTEXT,PTMWMARC,PTMWHOSP,PTMWDOCT,PTMWSYS:
                                  PTMWCODE,PTMWLUPD,PTMWSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTMWCNT,PTMWCNT
          RETURN
.
UPPTMWS1  MOVE      PTMWCNT,DPTMWCNT
          UPDATE    PATMWSA1;PTMWURNO,PTMWCLSS,DPTMWCNT,PTMWDATE:
                                  PTMWTEXT,PTMWMARC,PTMWHOSP,PTMWDOCT,PTMWSYS:
                                  PTMWCODE,PTMWLUPD,PTMWSPAR
          RETURN
.
WRPTMWS1  RESET     KEY14
          MOVE      PTMWCNT,DPTMWCNT
          WRITE     PATMWSA1,KEY14;PTMWURNO,PTMWCLSS,DPTMWCNT,PTMWDATE:
                                  PTMWTEXT,PTMWMARC,PTMWHOSP,PTMWDOCT,PTMWSYS:
                                  PTMWCODE,PTMWLUPD,PTMWSPAR
          RETURN
.
DEPTMWS1  RESET     KEY14
          DELETE    PATMWSA1,KEY14
          RETURN
.
