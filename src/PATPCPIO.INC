.*****************************************************************************
.*        PATPCPIO.INC                                                       *
.*****************************************************************************
.
.         Index 1
.
RSPTPCP1  RESET     KEY9
          READ      PATPCPA1,KEY9;;
          RETURN
.
RAPTPCP1  RESET     KEY9
          MOVE      ZERO,OVRCD
          READ      PATPCPA1,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTPCP1  RESET     KEY9
          MOVE      ZERO,OVRCD
          READ      PATPCPA1,KEY9;PTPPCODE,PTPPCPID,PTPPSCID,PTPPCVID:
                                  PTPPCNAM,PTPPCROL,PTPPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTPCP1  MOVE      ZERO,OVRCD
          READKS    PATPCPA1;PTPPCODE,PTPPCPID,PTPPSCID,PTPPCVID:
                                  PTPPCNAM,PTPPCROL,PTPPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTPCP1  MOVE      ZERO,OVRCD
          READKP    PATPCPA1;PTPPCODE,PTPPCPID,PTPPSCID,PTPPCVID:
                                  PTPPCNAM,PTPPCROL,PTPPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTPCP1  UPDATE    PATPCPA1;PTPPCODE,PTPPCPID,PTPPSCID,PTPPCVID:
                                  PTPPCNAM,PTPPCROL,PTPPSPAR
          RETURN
.
WRPTPCP1  RESET     KEY9
          WRITE     PATPCPA1,KEY9;PTPPCODE,PTPPCPID,PTPPSCID,PTPPCVID:
                                  PTPPCNAM,PTPPCROL,PTPPSPAR
          RETURN
.
DEPTPCP1  RESET     KEY9
          DELETE    PATPCPA1,KEY9
          RETURN
.
.         Index 2
.
RSPTPCP2  RESET     KEY9
          READ      PATPCPA2,KEY9;;
          RETURN
.
RAPTPCP2  RESET     KEY9
          MOVE      ZERO,OVRCD
          READ      PATPCPA2,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTPCP2  RESET     KEY9
          MOVE      ZERO,OVRCD
          READ      PATPCPA2,KEY9;PTPPCODE,PTPPCPID,PTPPSCID,PTPPCVID:
                                  PTPPCNAM,PTPPCROL,PTPPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTPCP2  MOVE      ZERO,OVRCD
          READKS    PATPCPA2;PTPPCODE,PTPPCPID,PTPPSCID,PTPPCVID:
                                  PTPPCNAM,PTPPCROL,PTPPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTPCP2  MOVE      ZERO,OVRCD
          READKP    PATPCPA2;PTPPCODE,PTPPCPID,PTPPSCID,PTPPCVID:
                                  PTPPCNAM,PTPPCROL,PTPPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
+
