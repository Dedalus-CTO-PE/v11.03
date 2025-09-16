.
.            INCLUDE NAME : CCIBTRIO.INC
.
.            FILE I/O REQUESTS FOR BATCH TRANSACTION FILE FOR CCI SYSTEM
.
. Mods :
.         V5.03.01  22/03/1996  Greg Horvat      SRF 614630
.                   Added the 3rd index
.
.OVRCD       FORM        1                0=NOT OVER
.                                         1=OVER
.KEY46       DIM         46               KEY FOR CCIBTRA1
.KEY46       DIM         46               KEY FOR CCIBTRA2
.
.
RACCBTR1     MOVE        ZERO,OVRCD
             RESET       KEY46
             READ        CCIBTRA1,KEY46;ANS
             GOTO        OVERCOND IF OVER
             RETURN
.
RSCCBTR1     RESET       KEY46
             READ        CCIBTRA1,KEY46;;
             RETURN
.
RDCCBTR1     MOVE        ZERO,OVRCD
             RESET       KEY46
             READ        CCIBTRA1,KEY46;DCCBTBAT,CCBTUNIQ,CCBTSDAT,CCBTDEPT:
                                        CCBTEVNT,CCBTPROC,CCBTURNO,CCBTQNTY:
                                        CCBTPTYP,CCBTWARN,CCBTCOMM,CCBTFSYR:
                                        CCBTFSPR,CCBTORDD,CCBTSERV,CCBTSPAR
             GOTO        OVERCOND IF OVER
             MOVE        DCCBTBAT,CCBTBATN
             RETURN
.
RKCCBTR1     MOVE        ZERO,OVRCD
             READKS      CCIBTRA1;DCCBTBAT,CCBTUNIQ,CCBTSDAT,CCBTDEPT:
                                  CCBTEVNT,CCBTPROC,CCBTURNO,CCBTQNTY:
                                  CCBTPTYP,CCBTWARN,CCBTCOMM,CCBTFSYR:
                                  CCBTFSPR,CCBTORDD,CCBTSERV,CCBTSPAR
             GOTO        OVERCOND IF OVER
             MOVE        DCCBTBAT,CCBTBATN
             RETURN

RPCCBTR1     MOVE        ZERO,OVRCD
             READKP      CCIBTRA1;DCCBTBAT,CCBTUNIQ,CCBTSDAT,CCBTDEPT:
                                  CCBTEVNT,CCBTPROC,CCBTURNO,CCBTQNTY:
                                  CCBTPTYP,CCBTWARN,CCBTCOMM,CCBTFSYR:
                                  CCBTFSPR,CCBTORDD,CCBTSERV,CCBTSPAR
             GOTO        OVERCOND IF OVER
             MOVE        DCCBTBAT,CCBTBATN
             RETURN
.
WRCCBTR1     RESET       KEY46
             MOVE        CCBTBATN,DCCBTBAT
             WRITE       CCIBTRA1,KEY46;DCCBTBAT,CCBTUNIQ,CCBTSDAT,CCBTDEPT:
                                        CCBTEVNT,CCBTPROC,CCBTURNO,CCBTQNTY:
                                        CCBTPTYP,CCBTWARN,CCBTCOMM,CCBTFSYR:
                                        CCBTFSPR,CCBTORDD,CCBTSERV,CCBTSPAR
             RETURN
.
UPCCBTR1     MOVE        CCBTBATN,DCCBTBAT
             UPDATE      CCIBTRA1;DCCBTBAT,CCBTUNIQ,CCBTSDAT,CCBTDEPT:
                                  CCBTEVNT,CCBTPROC,CCBTURNO,CCBTQNTY:
                                  CCBTPTYP,CCBTWARN,CCBTCOMM,CCBTFSYR:
                                  CCBTFSPR,CCBTORDD,CCBTSERV,CCBTSPAR
             RETURN
.
DECCBTR1     RESET       KEY46
             DELETE      CCIBTRA1,KEY46
             RETURN
.
.
. Index 2
.
RACCBTR2     MOVE        ZERO,OVRCD
             RESET       KEY46
             READ        CCIBTRA2,KEY46;ANS
             GOTO        OVERCOND IF OVER
             RETURN
.
RSCCBTR2     RESET       KEY46
             READ        CCIBTRA2,KEY46;;
             RETURN
.
RDCCBTR2     MOVE        ZERO,OVRCD
             RESET       KEY46
             READ        CCIBTRA2,KEY46;DCCBTBAT,CCBTUNIQ,CCBTSDAT,CCBTDEPT:
                                        CCBTEVNT,CCBTPROC,CCBTURNO,CCBTQNTY:
                                        CCBTPTYP,CCBTWARN,CCBTCOMM,CCBTFSYR:
                                        CCBTFSPR,CCBTORDD,CCBTSERV,CCBTSPAR
             GOTO        OVERCOND IF OVER
             MOVE        DCCBTBAT,CCBTBATN
             RETURN
.
RKCCBTR2     MOVE        ZERO,OVRCD
             READKS      CCIBTRA2;DCCBTBAT,CCBTUNIQ,CCBTSDAT,CCBTDEPT:
                                  CCBTEVNT,CCBTPROC,CCBTURNO,CCBTQNTY:
                                  CCBTPTYP,CCBTWARN,CCBTCOMM,CCBTFSYR:
                                  CCBTFSPR,CCBTORDD,CCBTSERV,CCBTSPAR
             GOTO        OVERCOND IF OVER
             MOVE        DCCBTBAT,CCBTBATN
             RETURN

RPCCBTR2     MOVE        ZERO,OVRCD
             READKP      CCIBTRA2;DCCBTBAT,CCBTUNIQ,CCBTSDAT,CCBTDEPT:
                                  CCBTEVNT,CCBTPROC,CCBTURNO,CCBTQNTY:
                                  CCBTPTYP,CCBTWARN,CCBTCOMM,CCBTFSYR:
                                  CCBTFSPR,CCBTORDD,CCBTSERV,CCBTSPAR
             GOTO        OVERCOND IF OVER
             MOVE        DCCBTBAT,CCBTBATN
             RETURN
.
.
. Index 3
.
RACCBTR3     MOVE        ZERO,OVRCD
             RESET       KEY46
             READ        CCIBTRA3,KEY46;ANS
             GOTO        OVERCOND IF OVER
             RETURN
.
RSCCBTR3     RESET       KEY46
             READ        CCIBTRA3,KEY46;;
             RETURN
.
RDCCBTR3     MOVE        ZERO,OVRCD
             RESET       KEY46
             READ        CCIBTRA3,KEY46;DCCBTBAT,CCBTUNIQ,CCBTSDAT,CCBTDEPT:
                                        CCBTEVNT,CCBTPROC,CCBTURNO,CCBTQNTY:
                                        CCBTPTYP,CCBTWARN,CCBTCOMM,CCBTFSYR:
                                        CCBTFSPR,CCBTORDD,CCBTSERV,CCBTSPAR
             GOTO        OVERCOND IF OVER
             MOVE        DCCBTBAT,CCBTBATN
             RETURN
.
RKCCBTR3     MOVE        ZERO,OVRCD
             READKS      CCIBTRA3;DCCBTBAT,CCBTUNIQ,CCBTSDAT,CCBTDEPT:
                                  CCBTEVNT,CCBTPROC,CCBTURNO,CCBTQNTY:
                                  CCBTPTYP,CCBTWARN,CCBTCOMM,CCBTFSYR:
                                  CCBTFSPR,CCBTORDD,CCBTSERV,CCBTSPAR
             GOTO        OVERCOND IF OVER
             MOVE        DCCBTBAT,CCBTBATN
             RETURN

RPCCBTR3     MOVE        ZERO,OVRCD
             READKP      CCIBTRA3;DCCBTBAT,CCBTUNIQ,CCBTSDAT,CCBTDEPT:
                                  CCBTEVNT,CCBTPROC,CCBTURNO,CCBTQNTY:
                                  CCBTPTYP,CCBTWARN,CCBTCOMM,CCBTFSYR:
                                  CCBTFSPR,CCBTORDD,CCBTSERV,CCBTSPAR
             GOTO        OVERCOND IF OVER
             MOVE        DCCBTBAT,CCBTBATN
             RETURN
.
