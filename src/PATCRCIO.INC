.
. PATCRCIO.INC
. ------------
. Filenames       : patcrcaf
. Description     : Patient Management 'Cross Consulting File'
. Variables       : OVRCD   FORM   1        0 = NOT OVER
.                                           1 = OVER
.                   KEY31   DIM    31       KEY FOR PATCRCA1
.                   KEY39   DIM    39       KEY FOR PATCRCA2
.                   KEY39   DIM    39       KEY FOR PATCRCA3
.
. -----------------------------------------
. ------- I/O routines for PATCRCA1 -------
. -----------------------------------------
.
RSPTCRC1  RESET     KEY31
          READ      PATCRCA1,KEY31;;
          RETURN
.
RAPTCRC1  RESET     KEY31
          MOVE      ZERO,OVRCD
          READ      PATCRCA1,KEY31;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCRC1  RESET     KEY31
          MOVE      ZERO,OVRCD
          READ      PATCRCA1,KEY31;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                                   PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                                   PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                                   PTCRCOMM,PTCRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTCRBIL,PTCRBILL
          MOVE      DPTCRCNT,PTCRCNTR
          RETURN
.
RKPTCRC1  MOVE      ZERO,OVRCD
          READKS    PATCRCA1;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                             PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                             PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                             PTCRCOMM,PTCRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTCRBIL,PTCRBILL
          MOVE      DPTCRCNT,PTCRCNTR
          RETURN
.
RPPTCRC1  MOVE      ZERO,OVRCD
          READKP    PATCRCA1;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                             PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                             PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                             PTCRCOMM,PTCRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTCRBIL,PTCRBILL
          MOVE      DPTCRCNT,PTCRCNTR
          RETURN
.
UPPTCRC1  MOVE      PTCRBILL,DPTCRBIL
          MOVE      PTCRCNTR,DPTCRCNT
          UPDATE    PATCRCA1;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                             PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                             PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                             PTCRCOMM,PTCRSPAR
          RETURN
.
WRPTCRC1  RESET     KEY31
          MOVE      PTCRBILL,DPTCRBIL
          MOVE      PTCRCNTR,DPTCRCNT
          WRITE     PATCRCA1,KEY31;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                                   PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                                   PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                                   PTCRCOMM,PTCRSPAR
          RETURN
.
DEPTCRC1  RESET     KEY31
          DELETE    PATCRCA1,KEY31
          RETURN
.
. -----------------------------------------
. ------- I/O routines for PATCRCA2 -------
. -----------------------------------------
.
RSPTCRC2  RESET     KEY39
          READ      PATCRCA2,KEY39;;
          RETURN
.
RAPTCRC2  RESET     KEY39
          MOVE      ZERO,OVRCD
          READ      PATCRCA2,KEY39;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCRC2  RESET     KEY39
          MOVE      ZERO,OVRCD
          READ      PATCRCA2,KEY39;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                                   PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                                   PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                                   PTCRCOMM,PTCRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTCRBIL,PTCRBILL
          MOVE      DPTCRCNT,PTCRCNTR
          RETURN
.
RKPTCRC2  MOVE      ZERO,OVRCD
          READKS    PATCRCA2;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                             PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                             PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                             PTCRCOMM,PTCRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTCRBIL,PTCRBILL
          MOVE      DPTCRCNT,PTCRCNTR
          RETURN
.
RPPTCRC2  MOVE      ZERO,OVRCD
          READKP    PATCRCA2;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                             PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                             PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                             PTCRCOMM,PTCRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTCRBIL,PTCRBILL
          MOVE      DPTCRCNT,PTCRCNTR
          RETURN
.
UPPTCRC2  MOVE      PTCRBILL,DPTCRBIL
          MOVE      PTCRCNTR,DPTCRCNT
          UPDATE    PATCRCA2;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                             PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                             PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                             PTCRCOMM,PTCRSPAR
          RETURN
.
WRPTCRC2  RESET     KEY39
          MOVE      PTCRBILL,DPTCRBIL
          MOVE      PTCRCNTR,DPTCRCNT
          WRITE     PATCRCA2,KEY39;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                                   PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                                   PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                                   PTCRCOMM,PTCRSPAR
          RETURN
.
DEPTCRC2  RESET     KEY39
          DELETE    PATCRCA2,KEY39
          RETURN
.
. -----------------------------------------
. ------- I/O routines for PATCRCA3 -------
. -----------------------------------------
.
RSPTCRC3  RESET     KEY39
          READ      PATCRCA3,KEY39;;
          RETURN
.
RAPTCRC3  RESET     KEY39
          MOVE      ZERO,OVRCD
          READ      PATCRCA3,KEY39;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCRC3  RESET     KEY39
          MOVE      ZERO,OVRCD
          READ      PATCRCA3,KEY39;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                                   PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                                   PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                                   PTCRCOMM,PTCRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTCRBIL,PTCRBILL
          MOVE      DPTCRCNT,PTCRCNTR
          RETURN
.
RKPTCRC3  MOVE      ZERO,OVRCD
          READKS    PATCRCA3;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                             PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                             PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                             PTCRCOMM,PTCRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTCRBIL,PTCRBILL
          MOVE      DPTCRCNT,PTCRCNTR
          RETURN
.
RPPTCRC3  MOVE      ZERO,OVRCD
          READKP    PATCRCA3;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                             PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                             PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                             PTCRCOMM,PTCRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTCRBIL,PTCRBILL
          MOVE      DPTCRCNT,PTCRCNTR
          RETURN
.
UPPTCRC3  MOVE      PTCRBILL,DPTCRBIL
          MOVE      PTCRCNTR,DPTCRCNT
          UPDATE    PATCRCA3;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                             PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                             PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                             PTCRCOMM,PTCRSPAR
          RETURN
.
WRPTCRC3  RESET     KEY39
          MOVE      PTCRBILL,DPTCRBIL
          MOVE      PTCRCNTR,DPTCRCNT
          WRITE     PATCRCA3,KEY39;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                                   PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                                   PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                                   PTCRCOMM,PTCRSPAR
          RETURN
.
DEPTCRC3  RESET     KEY39
          DELETE    PATCRCA3,KEY39
          RETURN
. -----------------------------------------
. ------- I/O routines for PATCRCA4 -------
. -----------------------------------------
.
RSPTCRC4  RESET     KEY39
          READ      PATCRCA4,KEY39;;
          RETURN
.
RAPTCRC4  RESET     KEY39
          MOVE      ZERO,OVRCD
          READ      PATCRCA4,KEY39;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCRC4  RESET     KEY39
          MOVE      ZERO,OVRCD
          READ      PATCRCA4,KEY39;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                                   PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                                   PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                                   PTCRCOMM,PTCRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTCRBIL,PTCRBILL
          MOVE      DPTCRCNT,PTCRCNTR
          RETURN
.
RKPTCRC4  MOVE      ZERO,OVRCD
          READKS    PATCRCA4;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                             PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                             PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                             PTCRCOMM,PTCRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTCRBIL,PTCRBILL
          MOVE      DPTCRCNT,PTCRCNTR
          RETURN
.
RPPTCRC4  MOVE      ZERO,OVRCD
          READKP    PATCRCA4;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                             PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                             PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                             PTCRCOMM,PTCRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTCRBIL,PTCRBILL
          MOVE      DPTCRCNT,PTCRCNTR
          RETURN
.
UPPTCRC4  MOVE      PTCRBILL,DPTCRBIL
          MOVE      PTCRCNTR,DPTCRCNT
          UPDATE    PATCRCA4;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                             PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                             PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                             PTCRCOMM,PTCRSPAR
          RETURN
.
WRPTCRC4  RESET     KEY39
          MOVE      PTCRBILL,DPTCRBIL
          MOVE      PTCRCNTR,DPTCRCNT
          WRITE     PATCRCA4,KEY39;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                                   PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                                   PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                                   PTCRCOMM,PTCRSPAR
          RETURN
.
DEPTCRC4  RESET     KEY39
          DELETE    PATCRCA4,KEY39
          RETURN
.
. -----------------------------------------
. ------- I/O routines for PATCRCA5 -------
. -----------------------------------------
.
RSPTCRC5  RESET     KEY39
          READ      PATCRCA5,KEY39;;
          RETURN
.
RAPTCRC5  RESET     KEY39
          MOVE      ZERO,OVRCD
          READ      PATCRCA5,KEY39;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCRC5  RESET     KEY39
          MOVE      ZERO,OVRCD
          READ      PATCRCA5,KEY39;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                                   PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                                   PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                                   PTCRCOMM,PTCRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTCRBIL,PTCRBILL
          MOVE      DPTCRCNT,PTCRCNTR
          RETURN
.
RKPTCRC5  MOVE      ZERO,OVRCD
          READKS    PATCRCA5;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                             PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                             PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                             PTCRCOMM,PTCRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTCRBIL,PTCRBILL
          MOVE      DPTCRCNT,PTCRCNTR
          RETURN
.
RPPTCRC5  MOVE      ZERO,OVRCD
          READKP    PATCRCA5;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                             PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                             PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                             PTCRCOMM,PTCRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTCRBIL,PTCRBILL
          MOVE      DPTCRCNT,PTCRCNTR
          RETURN
.
UPPTCRC5  MOVE      PTCRBILL,DPTCRBIL
          MOVE      PTCRCNTR,DPTCRCNT
          UPDATE    PATCRCA5;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                             PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                             PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                             PTCRCOMM,PTCRSPAR
          RETURN
.
WRPTCRC5  RESET     KEY39
          MOVE      PTCRBILL,DPTCRBIL
          MOVE      PTCRCNTR,DPTCRCNT
          WRITE     PATCRCA5,KEY39;DPTCRBIL,PTCRDOCT,PTCRREFD,DPTCRCNT:
                                   PTCRCMNT,PTCRDATE,PTCRAMNT,PTCRMISC:
                                   PTCRSPEC,PTCRTIME,PTCRACTN,PTCRUNIT:
                                   PTCRCOMM,PTCRSPAR
          RETURN
.
DEPTCRC5  RESET     KEY39
          DELETE    PATCRCA5,KEY39
          RETURN
.
..............................................................................
