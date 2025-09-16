.***************************************************************************
.*  File    :  MEHLSSIO.INC     (Legal Status Summary Statistics)          *
.*          :  mehlssaf.dat                                                *
.*  Keys    :  KEY9                                                        *
.***************************************************************************
RSMHLSS1  RESET     KEY9
          READ      MEHLSSA1,KEY9;;
          RETURN
.
RAMHLSS1  RESET     KEY9
          MOVE      ZERO,OVRCD
          READ      MEHLSSA1,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHLSS1  RESET     KEY9
          MOVE      ZERO,OVRCD
          READ      MEHLSSA1,KEY9;MHLSDATE,MHLSSTAT,MHLSINST,MHLSSLST:
                                  MHLSADMN,MHLSCHGF,MHLSCHGT,MHLSRETN,MHLSRETA:
                                  MHLSLVES,MHLSLVEA,MHLSDSCH,MHLSDEAD,MHLSINBD:
                                  MHLSSLBD,MHLSLVBD,MHLSAWBD,MHLSSEPB,MHLSSSLB:
                                  MHLSDSCB,MHLSDSLB,MHLSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHLSS1  MOVE      ZERO,OVRCD
          READKS    MEHLSSA1;MHLSDATE,MHLSSTAT,MHLSINST,MHLSSLST:
                                  MHLSADMN,MHLSCHGF,MHLSCHGT,MHLSRETN,MHLSRETA:
                                  MHLSLVES,MHLSLVEA,MHLSDSCH,MHLSDEAD,MHLSINBD:
                                  MHLSSLBD,MHLSLVBD,MHLSAWBD,MHLSSEPB,MHLSSSLB:
                                  MHLSDSCB,MHLSDSLB,MHLSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHLSS1  MOVE      ZERO,OVRCD
          READKP    MEHLSSA1;MHLSDATE,MHLSSTAT,MHLSINST,MHLSSLST:
                                  MHLSADMN,MHLSCHGF,MHLSCHGT,MHLSRETN,MHLSRETA:
                                  MHLSLVES,MHLSLVEA,MHLSDSCH,MHLSDEAD,MHLSINBD:
                                  MHLSSLBD,MHLSLVBD,MHLSAWBD,MHLSSEPB,MHLSSSLB:
                                  MHLSDSCB,MHLSDSLB,MHLSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHLSS1  UPDATE    MEHLSSA1;MHLSDATE,MHLSSTAT,MHLSINST,MHLSSLST:
                                  MHLSADMN,MHLSCHGF,MHLSCHGT,MHLSRETN,MHLSRETA:
                                  MHLSLVES,MHLSLVEA,MHLSDSCH,MHLSDEAD,MHLSINBD:
                                  MHLSSLBD,MHLSLVBD,MHLSAWBD,MHLSSEPB,MHLSSSLB:
                                  MHLSDSCB,MHLSDSLB,MHLSSPAR
          RETURN
.
WRMHLSS1  RESET     KEY9
          WRITE     MEHLSSA1,KEY9;MHLSDATE,MHLSSTAT,MHLSINST,MHLSSLST:
                                  MHLSADMN,MHLSCHGF,MHLSCHGT,MHLSRETN,MHLSRETA:
                                  MHLSLVES,MHLSLVEA,MHLSDSCH,MHLSDEAD,MHLSINBD:
                                  MHLSSLBD,MHLSLVBD,MHLSAWBD,MHLSSEPB,MHLSSSLB:
                                  MHLSDSCB,MHLSDSLB,MHLSSPAR
          RETURN
.
DEMHLSS1  RESET     KEY9
          DELETE    MEHLSSA1,KEY9
          RETURN
.
