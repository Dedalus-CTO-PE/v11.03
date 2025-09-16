.
.  Mods : 08/10/92  Steve Armstrong
.         Modified PRTHDEBT for change from FORM to DIM in FD
.         04/06/1994  Graeme Williams
.         Added PRTHNUMB
.--------------------------------------------------------------
RSPRTH1   RESET     KEY37
          READ      PRITHIS1,KEY37;;
          RETURN
.
RAPRTH1   RESET     KEY37
          MOVE      ZERO,OVRCD
          READ      PRITHIS1,KEY37;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRTH1   RESET     KEY37
          MOVE      ZERO,OVRCD
          READ      PRITHIS1,KEY37;PRTHDEBT,DPRTHSCN,PRTHDATE,PRTHTIME:
                                   DPRTHFLG,PRTHITEM,PRTHSUBN,PRTHNUMB:
                                   PRTHSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPRTHSCN,PRTHSCAN
          MOVE      DPRTHFLG,PRTHFLAG
          RETURN
.
RKPRTH1   MOVE      ZERO,OVRCD
          READKS    PRITHIS1;PRTHDEBT,DPRTHSCN,PRTHDATE,PRTHTIME:
                             DPRTHFLG,PRTHITEM,PRTHSUBN,PRTHNUMB:
                             PRTHSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPRTHSCN,PRTHSCAN
          MOVE      DPRTHFLG,PRTHFLAG
          RETURN
.
RPPRTH1   MOVE      ZERO,OVRCD
          READKP    PRITHIS1;PRTHDEBT,DPRTHSCN,PRTHDATE,PRTHTIME:
                             DPRTHFLG,PRTHITEM,PRTHSUBN,PRTHNUMB:
                             PRTHSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPRTHSCN,PRTHSCAN
          MOVE      DPRTHFLG,PRTHFLAG
          RETURN
.
UPPRTH1   MOVE      PRTHSCAN,DPRTHSCN
          MOVE      DPRTHFLG,PRTHFLAG
          UPDATE    PRITHIS1;PRTHDEBT,DPRTHSCN,PRTHDATE,PRTHTIME:
                             DPRTHFLG,PRTHITEM,PRTHSUBN,PRTHNUMB:
                             PRTHSPAR
          RETURN
.
WRPRTH1   RESET     KEY37
          MOVE      PRTHSCAN,DPRTHSCN
          WRITE     PRITHIS1,KEY37;KEY37,PRTHNUMB:
                                   PRTHSPAR
          RETURN
.
DEPRTH1   RESET     KEY37
          DELETE    PRITHIS1,KEY37
          RETURN
.
