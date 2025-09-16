.
. DEPCATIO.INC
. ------------
. Filename     : depcataf
. Description  : Patient Dependency Patient Category File
. Variables    : OVRCD    FORM    1          0 = NOT OVER
.                                            1 = OVER
.                KEY3     DIM     3          KEY FOR DEPCATA1
.
RADPCAT1  MOVE      ZERO,OVRCD
          RESET     KEY3
          READ      DEPCATA1,KEY3;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSDPCAT1  RESET     KEY3
          READ      DEPCATA1,KEY3;;
          RETURN
.
RDDPCAT1  MOVE      ZERO,OVRCD
          RESET     KEY3
          READ      DEPCATA1,KEY3;DPCPATCA,DPCDESC,DPCLVAL,DPCHVAL,DPCAVRG:
                                  DPCTSPRE
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDPCAT1  MOVE      ZERO,OVRCD
          READKS    DEPCATA1;DPCPATCA,DPCDESC,DPCLVAL,DPCHVAL,DPCAVRG,DPCTSPRE
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDPCAT1  MOVE      ZERO,OVRCD
          READKP    DEPCATA1;DPCPATCA,DPCDESC,DPCLVAL,DPCHVAL,DPCAVRG,DPCTSPRE
          GOTO      OVERCOND IF OVER
          RETURN
.
WRDPCAT1  MOVE      ZERO,OVRCD
          RESET     KEY3
          WRITE     DEPCATA1,KEY3;KEY3,DPCDESC,DPCLVAL,DPCHVAL,DPCAVRG,DPCTSPRE
          RETURN
.
UPDPCAT1  UPDATE    DEPCATA1;DPCPATCA,DPCDESC,DPCLVAL,DPCHVAL,DPCAVRG,DPCTSPRE
          RETURN
.
DEDPCAT1  RESET     KEY3
          DELETE    DEPCATA1,KEY3
          RETURN
.
