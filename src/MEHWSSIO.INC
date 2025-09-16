.***************************************************************************
.*  File    :  MEHWSSIO.INC     (Ward Summary Statistics)                  *
.*          :  mehwssaf.dat                                                *
.*  Keys    :  KEY9                                                        *
.***************************************************************************
RSMHWSS1  RESET     KEY9
          READ      MEHWSSA1,KEY9;;
          RETURN
.
RAMHWSS1  RESET     KEY9
          MOVE      ZERO,OVRCD
          READ      MEHWSSA1,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHWSS1  RESET     KEY9
          MOVE      ZERO,OVRCD
          READ      MEHWSSA1,KEY9;MHWSDATE,MHWSWARD,MHWSBEDS,MHWSINST:
                                  MHWSSLST,MHWSADMI,MHWSADMS,MHWSADMC,MHWSTRNO:
                                  MHWSTRNI,MHWSRETH,MHWSRETT,MHWSRETA,MHWSLVEH:
                                  MHWSLVET,MHWSLVEA,MHWSDSCH,MHWSDEAD,MHWSINBD:
                                  MHWSSLBD,MHWSHLBD,MHWSTLBD,MHWSAWBD,MHWSSEPB:
                                  MHWSSSLB,MHWSDSCB,MHWSDSLB,MHWSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHWSS1  MOVE      ZERO,OVRCD
          READKS    MEHWSSA1;MHWSDATE,MHWSWARD,MHWSBEDS,MHWSINST:
                                  MHWSSLST,MHWSADMI,MHWSADMS,MHWSADMC,MHWSTRNO:
                                  MHWSTRNI,MHWSRETH,MHWSRETT,MHWSRETA,MHWSLVEH:
                                  MHWSLVET,MHWSLVEA,MHWSDSCH,MHWSDEAD,MHWSINBD:
                                  MHWSSLBD,MHWSHLBD,MHWSTLBD,MHWSAWBD,MHWSSEPB:
                                  MHWSSSLB,MHWSDSCB,MHWSDSLB,MHWSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHWSS1  MOVE      ZERO,OVRCD
          READKP    MEHWSSA1;MHWSDATE,MHWSWARD,MHWSBEDS,MHWSINST:
                                  MHWSSLST,MHWSADMI,MHWSADMS,MHWSADMC,MHWSTRNO:
                                  MHWSTRNI,MHWSRETH,MHWSRETT,MHWSRETA,MHWSLVEH:
                                  MHWSLVET,MHWSLVEA,MHWSDSCH,MHWSDEAD,MHWSINBD:
                                  MHWSSLBD,MHWSHLBD,MHWSTLBD,MHWSAWBD,MHWSSEPB:
                                  MHWSSSLB,MHWSDSCB,MHWSDSLB,MHWSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHWSS1  UPDATE    MEHWSSA1;MHWSDATE,MHWSWARD,MHWSBEDS,MHWSINST:
                                  MHWSSLST,MHWSADMI,MHWSADMS,MHWSADMC,MHWSTRNO:
                                  MHWSTRNI,MHWSRETH,MHWSRETT,MHWSRETA,MHWSLVEH:
                                  MHWSLVET,MHWSLVEA,MHWSDSCH,MHWSDEAD,MHWSINBD:
                                  MHWSSLBD,MHWSHLBD,MHWSTLBD,MHWSAWBD,MHWSSEPB:
                                  MHWSSSLB,MHWSDSCB,MHWSDSLB,MHWSSPAR
          RETURN
.
WRMHWSS1  RESET     KEY9
          WRITE     MEHWSSA1,KEY9;MHWSDATE,MHWSWARD,MHWSBEDS,MHWSINST:
                                  MHWSSLST,MHWSADMI,MHWSADMS,MHWSADMC,MHWSTRNO:
                                  MHWSTRNI,MHWSRETH,MHWSRETT,MHWSRETA,MHWSLVEH:
                                  MHWSLVET,MHWSLVEA,MHWSDSCH,MHWSDEAD,MHWSINBD:
                                  MHWSSLBD,MHWSHLBD,MHWSTLBD,MHWSAWBD,MHWSSEPB:
                                  MHWSSSLB,MHWSDSCB,MHWSDSLB,MHWSSPAR
          RETURN
.
DEMHWSS1  RESET     KEY9
          DELETE    MEHWSSA1,KEY9
          RETURN
.
