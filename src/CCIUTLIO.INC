.
.            INCLUDE NAME : CCIUTLIO.INC
.
.            FILE I/O REQUESTS FOR PATIENT DATA FILE FOR CCI SYSTEM
.
.OVRCD       FORM        1                0=NOT OVER
.                                         1=OVER
.KEY42       DIM        42                KEY FOR CCIUTLL1
.
.
. ------- index one -------
.
RACCUTL1  MOVE        ZERO,OVRCD
          RESET       KEY42
          READ        CCIUTLL1,KEY42;ANS
          GOTO        OVERCOND IF OVER
          RETURN
.
RSCCUTL1  RESET       KEY42
          READ        CCIUTLL1,KEY42;;
          RETURN
.
RDCCUTL1  MOVE        ZERO,OVRCD
          RESET       KEY42
          READ        CCIUTLL1,KEY42;CCUTDATE,CCUTDEPT,DCCUTEVN,CCUTPROC:
                                     CCUTURNO,CCUTQUNT,CCUTPTYP,CCUTFSYR:
                                     CCUTFSPR,CCUTCOMM,CCUTSENT,DCCUTBAT:
                                     CCUTCHRG,CCUTORIG,CCUTHPRE,CCUTSIBA:
                                     CCUTORDD,CCUTSERV,CCUTSPAR
          GOTO        OVERCOND IF OVER
          MOVE        DCCUTEVN,CCUTEVNT
          MOVE        DCCUTBAT,CCUTBATN
          RETURN
.
RKCCUTL1  MOVE        ZERO,OVRCD
          READKS      CCIUTLL1;CCUTDATE,CCUTDEPT,DCCUTEVN,CCUTPROC:
                               CCUTURNO,CCUTQUNT,CCUTPTYP,CCUTFSYR:
                               CCUTFSPR,CCUTCOMM,CCUTSENT,DCCUTBAT:
                               CCUTCHRG,CCUTORIG,CCUTHPRE,CCUTSIBA:
                               CCUTORDD,CCUTSERV,CCUTSPAR
          GOTO        OVERCOND IF OVER
          MOVE        DCCUTEVN,CCUTEVNT
          MOVE        DCCUTBAT,CCUTBATN
          RETURN
.
RPCCUTL1  MOVE        ZERO,OVRCD
          READKP      CCIUTLL1;CCUTDATE,CCUTDEPT,DCCUTEVN,CCUTPROC:
                               CCUTURNO,CCUTQUNT,CCUTPTYP,CCUTFSYR:
                               CCUTFSPR,CCUTCOMM,CCUTSENT,DCCUTBAT:
                               CCUTCHRG,CCUTORIG,CCUTHPRE,CCUTSIBA:
                               CCUTORDD,CCUTSERV,CCUTSPAR
          GOTO        OVERCOND IF OVER
          MOVE        DCCUTEVN,CCUTEVNT
          MOVE        DCCUTBAT,CCUTBATN
          RETURN
.
WRCCUTL1  RESET       KEY42
          MOVE        CCUTEVNT,DCCUTEVN
          MOVE        CCUTBATN,DCCUTBAT
          WRITE       CCIUTLL1,KEY42;CCUTDATE,CCUTDEPT,DCCUTEVN,CCUTPROC:
                                     CCUTURNO,CCUTQUNT,CCUTPTYP,CCUTFSYR:
                                     CCUTFSPR,CCUTCOMM,CCUTSENT,DCCUTBAT:
                                     CCUTCHRG,CCUTORIG,CCUTHPRE,CCUTSIBA:
                                     CCUTORDD,CCUTSERV,CCUTSPAR
          RETURN
.
UPCCUTL1  MOVE        CCUTEVNT,DCCUTEVN
          MOVE        CCUTBATN,DCCUTBAT
          UPDATE      CCIUTLL1;CCUTDATE,CCUTDEPT,DCCUTEVN,CCUTPROC:
                               CCUTURNO,CCUTQUNT,CCUTPTYP,CCUTFSYR:
                               CCUTFSPR,CCUTCOMM,CCUTSENT,DCCUTBAT:
                               CCUTCHRG,CCUTORIG,CCUTHPRE,CCUTSIBA:
                               CCUTORDD,CCUTSERV,CCUTSPAR
          RETURN
.
DECCUTL1  RESET       KEY42
          DELETE      CCIUTLL1,KEY42
          RETURN
.
. ------- index two -------
.
RACCUTL2     MOVE        ZERO,OVRCD
             RESET       KEY42
             READ        CCIUTLL2,KEY42;ANS
             GOTO        OVERCOND IF OVER
             RETURN
.
RSCCUTL2     RESET       KEY42
             READ        CCIUTLL2,KEY42;;
             RETURN
.
RDCCUTL2     MOVE        ZERO,OVRCD
             RESET       KEY42
             READ        CCIUTLL2,KEY42;CCUTDATE,CCUTDEPT,DCCUTEVN,CCUTPROC:
                                        CCUTURNO,CCUTQUNT,CCUTPTYP,CCUTFSYR:
                                        CCUTFSPR,CCUTCOMM,CCUTSENT,DCCUTBAT:
                                        CCUTCHRG,CCUTORIG,CCUTHPRE,CCUTSIBA:
                                        CCUTORDD,CCUTSERV,CCUTSPAR
             GOTO        OVERCOND IF OVER
             MOVE        DCCUTEVN,CCUTEVNT
             MOVE        DCCUTBAT,CCUTBATN
             RETURN
.
RKCCUTL2     MOVE        ZERO,OVRCD
             READKS      CCIUTLL2;CCUTDATE,CCUTDEPT,DCCUTEVN,CCUTPROC:
                                        CCUTURNO,CCUTQUNT,CCUTPTYP,CCUTFSYR:
                                        CCUTFSPR,CCUTCOMM,CCUTSENT,DCCUTBAT:
                                        CCUTCHRG,CCUTORIG,CCUTHPRE,CCUTSIBA:
                                        CCUTORDD,CCUTSERV,CCUTSPAR
             GOTO        OVERCOND IF OVER
             MOVE        DCCUTEVN,CCUTEVNT
             MOVE        DCCUTBAT,CCUTBATN
             RETURN
.
RPCCUTL2  MOVE        ZERO,OVRCD
          READKP      CCIUTLL2;CCUTDATE,CCUTDEPT,DCCUTEVN,CCUTPROC:
                               CCUTURNO,CCUTQUNT,CCUTPTYP,CCUTFSYR:
                               CCUTFSPR,CCUTCOMM,CCUTSENT,DCCUTBAT:
                               CCUTCHRG,CCUTORIG,CCUTHPRE,CCUTSIBA:
                               CCUTORDD,CCUTSERV,CCUTSPAR
          GOTO        OVERCOND IF OVER
          MOVE        DCCUTEVN,CCUTEVNT
          MOVE        DCCUTBAT,CCUTBATN
          RETURN
.
.
RACCUTL3     MOVE        ZERO,OVRCD
             RESET       KEY42
             READ        CCIUTLL3,KEY42;ANS
             GOTO        OVERCOND IF OVER
             RETURN
.
RSCCUTL3     RESET       KEY42
             READ        CCIUTLL3,KEY42;;
             RETURN
.
RDCCUTL3     MOVE        ZERO,OVRCD
             RESET       KEY42
             READ        CCIUTLL3,KEY42;CCUTDATE,CCUTDEPT,DCCUTEVN,CCUTPROC:
                                        CCUTURNO,CCUTQUNT,CCUTPTYP,CCUTFSYR:
                                        CCUTFSPR,CCUTCOMM,CCUTSENT,DCCUTBAT:
                                        CCUTCHRG,CCUTORIG,CCUTHPRE,CCUTSIBA:
                                        CCUTORDD,CCUTSERV,CCUTSPAR
             GOTO        OVERCOND IF OVER
             MOVE        DCCUTEVN,CCUTEVNT
             MOVE        DCCUTBAT,CCUTBATN
             RETURN
.
RKCCUTL3     MOVE        ZERO,OVRCD
             READKS      CCIUTLL3;CCUTDATE,CCUTDEPT,DCCUTEVN,CCUTPROC:
                                        CCUTURNO,CCUTQUNT,CCUTPTYP,CCUTFSYR:
                                        CCUTFSPR,CCUTCOMM,CCUTSENT,DCCUTBAT:
                                        CCUTCHRG,CCUTORIG,CCUTHPRE,CCUTSIBA:
                                        CCUTORDD,CCUTSERV,CCUTSPAR
             GOTO        OVERCOND IF OVER
             MOVE        DCCUTEVN,CCUTEVNT
             MOVE        DCCUTBAT,CCUTBATN
             RETURN
.
RPCCUTL3  MOVE        ZERO,OVRCD
          READKP      CCIUTLL3;CCUTDATE,CCUTDEPT,DCCUTEVN,CCUTPROC:
                               CCUTURNO,CCUTQUNT,CCUTPTYP,CCUTFSYR:
                               CCUTFSPR,CCUTCOMM,CCUTSENT,DCCUTBAT:
                               CCUTCHRG,CCUTORIG,CCUTHPRE,CCUTSIBA:
                               CCUTORDD,CCUTSERV,CCUTSPAR
          GOTO        OVERCOND IF OVER
          MOVE        DCCUTEVN,CCUTEVNT
          MOVE        DCCUTBAT,CCUTBATN
          RETURN
.
UPCCUTL3     MOVE        ZERO,OVRCD
             MOVE        CCUTEVNT,DCCUTEVN
             MOVE        CCUTBATN,DCCUTBAT
             UPDATE      CCIUTLL3;CCUTDATE,CCUTDEPT,DCCUTEVN,CCUTPROC:
                                        CCUTURNO,CCUTQUNT,CCUTPTYP,CCUTFSYR:
                                        CCUTFSPR,CCUTCOMM,CCUTSENT,DCCUTBAT:
                                        CCUTCHRG,CCUTORIG,CCUTHPRE,CCUTSIBA:
                                        CCUTORDD,CCUTSERV,CCUTSPAR
             GOTO        OVERCOND IF OVER
             RETURN
.
. ---------- index 4 ----------
.
RACCUTL4     MOVE        ZERO,OVRCD
             RESET       KEY42
             READ        CCIUTLL4,KEY42;ANS
             GOTO        OVERCOND IF OVER
             RETURN
.
RSCCUTL4     RESET       KEY42
             READ        CCIUTLL4,KEY42;;
             RETURN
.
RDCCUTL4     MOVE        ZERO,OVRCD
             RESET       KEY42
             READ        CCIUTLL4,KEY42;CCUTDATE,CCUTDEPT,DCCUTEVN,CCUTPROC:
                                        CCUTURNO,CCUTQUNT,CCUTPTYP,CCUTFSYR:
                                        CCUTFSPR,CCUTCOMM,CCUTSENT,DCCUTBAT:
                                        CCUTCHRG,CCUTORIG,CCUTHPRE,CCUTSIBA:
                                        CCUTORDD,CCUTSERV,CCUTSPAR
             GOTO        OVERCOND IF OVER
             MOVE        DCCUTEVN,CCUTEVNT
             MOVE        DCCUTBAT,CCUTBATN
             RETURN
.
RKCCUTL4     MOVE        ZERO,OVRCD
             READKS      CCIUTLL4;CCUTDATE,CCUTDEPT,DCCUTEVN,CCUTPROC:
                                        CCUTURNO,CCUTQUNT,CCUTPTYP,CCUTFSYR:
                                        CCUTFSPR,CCUTCOMM,CCUTSENT,DCCUTBAT:
                                        CCUTCHRG,CCUTORIG,CCUTHPRE,CCUTSIBA:
                                        CCUTORDD,CCUTSERV,CCUTSPAR
             GOTO        OVERCOND IF OVER
             MOVE        DCCUTEVN,CCUTEVNT
             MOVE        DCCUTBAT,CCUTBATN
             RETURN
.
RPCCUTL4  MOVE        ZERO,OVRCD
          READKP      CCIUTLL4;CCUTDATE,CCUTDEPT,DCCUTEVN,CCUTPROC:
                               CCUTURNO,CCUTQUNT,CCUTPTYP,CCUTFSYR:
                               CCUTFSPR,CCUTCOMM,CCUTSENT,DCCUTBAT:
                               CCUTCHRG,CCUTORIG,CCUTHPRE,CCUTSIBA:
                               CCUTORDD,CCUTSERV,CCUTSPAR
          GOTO        OVERCOND IF OVER
          MOVE        DCCUTEVN,CCUTEVNT
          MOVE        DCCUTBAT,CCUTBATN
          RETURN
.
. ------- index five-------
.
RACCUTL5  MOVE        ZERO,OVRCD
          RESET       KEY42
          READ        CCIUTLL5,KEY42;ANS
          GOTO        OVERCOND IF OVER
          RETURN
.
RSCCUTL5  RESET       KEY42
          READ        CCIUTLL5,KEY42;;
          RETURN
.
RDCCUTL5  MOVE        ZERO,OVRCD
          RESET       KEY42
          READ        CCIUTLL5,KEY42;CCUTDATE,CCUTDEPT,DCCUTEVN,CCUTPROC:
                                     CCUTURNO,CCUTQUNT,CCUTPTYP,CCUTFSYR:
                                     CCUTFSPR,CCUTCOMM,CCUTSENT,DCCUTBAT:
                                     CCUTCHRG,CCUTORIG,CCUTHPRE,CCUTSIBA:
                                     CCUTORDD,CCUTSERV,CCUTSPAR
          GOTO        OVERCOND IF OVER
          MOVE        DCCUTEVN,CCUTEVNT
          MOVE        DCCUTBAT,CCUTBATN
          RETURN
.
RKCCUTL5  MOVE        ZERO,OVRCD
          READKS      CCIUTLL5;CCUTDATE,CCUTDEPT,DCCUTEVN,CCUTPROC:
                               CCUTURNO,CCUTQUNT,CCUTPTYP,CCUTFSYR:
                               CCUTFSPR,CCUTCOMM,CCUTSENT,DCCUTBAT:
                               CCUTCHRG,CCUTORIG,CCUTHPRE,CCUTSIBA:
                               CCUTORDD,CCUTSERV,CCUTSPAR
          GOTO        OVERCOND IF OVER
          MOVE        DCCUTEVN,CCUTEVNT
          MOVE        DCCUTBAT,CCUTBATN
          RETURN
.
RPCCUTL5  MOVE        ZERO,OVRCD
          READKP      CCIUTLL5;CCUTDATE,CCUTDEPT,DCCUTEVN,CCUTPROC:
                               CCUTURNO,CCUTQUNT,CCUTPTYP,CCUTFSYR:
                               CCUTFSPR,CCUTCOMM,CCUTSENT,DCCUTBAT:
                               CCUTCHRG,CCUTORIG,CCUTHPRE,CCUTSIBA:
                               CCUTORDD,CCUTSERV,CCUTSPAR
          GOTO        OVERCOND IF OVER
          MOVE        DCCUTEVN,CCUTEVNT
          MOVE        DCCUTBAT,CCUTBATN
          RETURN
.
WRCCUTL5  RESET       KEY42
          MOVE        CCUTEVNT,DCCUTEVN
          MOVE        CCUTBATN,DCCUTBAT
          WRITE       CCIUTLL5,KEY42;CCUTDATE,CCUTDEPT,DCCUTEVN,CCUTPROC:
                                     CCUTURNO,CCUTQUNT,CCUTPTYP,CCUTFSYR:
                                     CCUTFSPR,CCUTCOMM,CCUTSENT,DCCUTBAT:
                                     CCUTCHRG,CCUTORIG,CCUTHPRE,CCUTSIBA:
                                     CCUTORDD,CCUTSERV,CCUTSPAR
          RETURN
.
UPCCUTL5  MOVE        CCUTEVNT,DCCUTEVN
          MOVE        CCUTBATN,DCCUTBAT
          UPDATE      CCIUTLL5;CCUTDATE,CCUTDEPT,DCCUTEVN,CCUTPROC:
                               CCUTURNO,CCUTQUNT,CCUTPTYP,CCUTFSYR:
                               CCUTFSPR,CCUTCOMM,CCUTSENT,DCCUTBAT:
                               CCUTCHRG,CCUTORIG,CCUTHPRE,CCUTSIBA:
                               CCUTORDD,CCUTSERV,CCUTSPAR
          RETURN
.
DECCUTL5  RESET       KEY42
          DELETE      CCIUTLL5,KEY42
          RETURN
.............................................................................
