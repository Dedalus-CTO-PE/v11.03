.*****************************************************************************
.*        PATPARIO.INC                                                       *
.*****************************************************************************
.
.         Index 1
.
RSPTPAR1  RESET     KEY3
          READ      PATPARA1,KEY3;;
          RETURN
.
RAPTPAR1  RESET     KEY3
          MOVE      ZERO,OVRCD
          READ      PATPARA1,KEY3;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTPAR1  RESET     KEY3
          MOVE      ZERO,OVRCD
          READ      PATPARA1,KEY3;PTPRCODE,PTPRTYPE,PTPRNAME,PTPRCNUM:
                                  PTPRDUPD,PTPRSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTPAR1  MOVE      ZERO,OVRCD
          READKS    PATPARA1;PTPRCODE,PTPRTYPE,PTPRNAME,PTPRCNUM:
                             PTPRDUPD,PTPRSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTPAR1  MOVE      ZERO,OVRCD
          READKP    PATPARA1;PTPRCODE,PTPRTYPE,PTPRNAME,PTPRCNUM:
                             PTPRDUPD,PTPRSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTPAR1  UPDATE    PATPARA1;PTPRCODE,PTPRTYPE,PTPRNAME,PTPRCNUM:
                             PTPRDUPD,PTPRSPAR
          RETURN
.
WRPTPAR1  RESET     KEY3
          WRITE     PATPARA1,KEY3;PTPRCODE,PTPRTYPE,PTPRNAME,PTPRCNUM:
                                  PTPRDUPD,PTPRSPAR
          RETURN
.
DEPTPAR1  RESET     KEY3
          DELETE    PATPARA1,KEY3
          RETURN
.
.         Index 2
.
RSPTPAR2  RESET     KEY43
          READ      PATPARA2,KEY43;;
          RETURN
.
RAPTPAR2  RESET     KEY43
          MOVE      ZERO,OVRCD
          READ      PATPARA2,KEY43;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTPAR2  RESET     KEY43
          MOVE      ZERO,OVRCD
          READ      PATPARA2,KEY43;PTPRCODE,PTPRTYPE,PTPRNAME,PTPRCNUM:
                                   PTPRDUPD,PTPRSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTPAR2  MOVE      ZERO,OVRCD
          READKS    PATPARA2;PTPRCODE,PTPRTYPE,PTPRNAME,PTPRCNUM:
                             PTPRDUPD,PTPRSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTPAR2  MOVE      ZERO,OVRCD
          READKP    PATPARA2;PTPRCODE,PTPRTYPE,PTPRNAME,PTPRCNUM:
                             PTPRDUPD,PTPRSPAR
          GOTO      OVERCOND IF OVER
          RETURN
+
