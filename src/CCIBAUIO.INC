.
.            INCLUDE NAME : CCIBAUIO.INC
.
.            FILE I/O REQUESTS FOR BATCH AUDIT FILE FOR CCI SYSTEM
.
.OVRCD       FORM        1                0=NOT OVER
.                                         1=OVER
.KEY16        DIM        16                KEY FOR CCIBAUA1
.
.
RACCBAU1     MOVE        ZERO,OVRCD
             RESET       KEY16
             READ        CCIBAUA1,KEY16;ANS
             GOTO        OVERCOND IF OVER
             RETURN
.
RSCCBAU1     RESET       KEY16
             READ        CCIBAUA1,KEY16;;
             RETURN
.
RDCCBAU1     MOVE        ZERO,OVRCD
             RESET       KEY16
             READ        CCIBAUA1,KEY16;DCCBABAT,CCBADATE,CCBAOPER,CCBATRXT:
                                       CCBAEVNT,CCBAPROC,CCBAURNO,CCBAPTYP:
                                       CCBAQNTY,CCBAORDD,CCBASERV,CCBASPAR
             GOTO        OVERCOND IF OVER
             MOVE        DCCBABAT,CCBABATN
             RETURN
.
RKCCBAU1     MOVE        ZERO,OVRCD
             READKS      CCIBAUA1;DCCBABAT,CCBADATE,CCBAOPER,CCBATRXT:
                                  CCBAEVNT,CCBAPROC,CCBAURNO,CCBAPTYP:
                                  CCBAQNTY,CCBAORDD,CCBASERV,CCBASPAR
             GOTO        OVERCOND IF OVER
             MOVE        DCCBABAT,CCBABATN
             RETURN

RPCCBAU1     MOVE        ZERO,OVRCD
             READKP      CCIBAUA1;DCCBABAT,CCBADATE,CCBAOPER,CCBATRXT:
                                  CCBAEVNT,CCBAPROC,CCBAURNO,CCBAPTYP:
                                  CCBAQNTY,CCBAORDD,CCBASERV,CCBASPAR
             GOTO        OVERCOND IF OVER
             MOVE        DCCBABAT,CCBABATN
             RETURN
.
WRCCBAU1     RESET       KEY16
             MOVE        CCBABATN,DCCBABAT
             WRITE       CCIBAUA1,KEY16;DCCBABAT,CCBADATE,CCBAOPER,CCBATRXT:
                                       CCBAEVNT,CCBAPROC,CCBAURNO,CCBAPTYP:
                                       CCBAQNTY,CCBAORDD,CCBASERV,CCBASPAR
             RETURN
.
UPCCBAU1     UPDATE      CCIBAUA1;DCCBABAT,CCBADATE,CCBAOPER,CCBATRXT:
                                  CCBAEVNT,CCBAPROC,CCBAURNO,CCBAPTYP:
                                  CCBAQNTY,CCBAORDD,CCBASERV,CCBASPAR
             RETURN
