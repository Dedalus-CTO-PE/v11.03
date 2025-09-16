.
.  Mods : 08/10/92  Steve Armstrong
.         Modified PRLHDEBT for change from FORM to DIM in FD
.--------------------------------------------------------------
RSPRLH1   RESET     KEY21
          READ      PRILHIS1,KEY21;;
          RETURN
.
RAPRLH1   RESET     KEY21
          MOVE      ZERO,OVRCD
          READ      PRILHIS1,KEY21;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRLH1   RESET     KEY21
          MOVE      ZERO,OVRCD
          READ      PRILHIS1,KEY21;PRLHDEBT,DPRLHSCN,PRLHDATE,DPRLHNUM:
                                  PRLHSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPRLHSCN,PRLHSCAN
          MOVE      DPRLHNUM,PRLHNUMB
          RETURN
.
RKPRLH1   MOVE      ZERO,OVRCD
          READKS    PRILHIS1;PRLHDEBT,DPRLHSCN,PRLHDATE,DPRLHNUM:
                                  PRLHSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPRLHSCN,PRLHSCAN
          MOVE      DPRLHNUM,PRLHNUMB
          RETURN
.
RPPRLH1   MOVE      ZERO,OVRCD
          READKP    PRILHIS1;PRLHDEBT,DPRLHSCN,PRLHDATE,DPRLHNUM:
                                  PRLHSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPRLHSCN,PRLHSCAN
          MOVE      DPRLHNUM,PRLHNUMB
          RETURN
.
UPPRLH1   MOVE      PRLHSCAN,DPRLHSCN
          MOVE      PRLHNUMB,DPRLHNUM
          UPDATE    PRILHIS1;PRLHDEBT,DPRLHSCN,PRLHDATE,DPRLHNUM:
                                  PRLHSPAR
          RETURN
.
WRPRLH1   RESET     KEY21
          WRITE     PRILHIS1,KEY21;KEY21,PRLHSPAR
          RETURN
.
DEPRLH1   RESET     KEY21
          DELETE    PRILHIS1,KEY21
          RETURN
.
