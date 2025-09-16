.***************************************************************************
.*  File    :  MEHLVSIO.INC     (Leave Summary Statistics)                 *
.*          :  mehlvsaf.dat                                                *
.*  Keys    :  KEY9                                                        *
.***************************************************************************
RSMHLVS1  RESET     KEY9
          READ      MEHLVSA1,KEY9;;
          RETURN
.
RAMHLVS1  RESET     KEY9
          MOVE      ZERO,OVRCD
          READ      MEHLVSA1,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHLVS1  RESET     KEY9
          MOVE      ZERO,OVRCD
          READ      MEHLVSA1,KEY9;MHLVDATE,MHLVSTAT,MHLVSTRT,mHLVLEAV:
                         MHLVRETN,MHLVDSCH,MHLVDEAD,MHLVLDAY,MHLVRDAY,MHLVSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHLVS1  MOVE      ZERO,OVRCD
          READKS    MEHLVSA1;MHLVDATE,MHLVSTAT,MHLVSTRT,mHLVLEAV:
                          MHLVRETN,MHLVDSCH,MHLVDEAD,MHLVLDAY,MHLVRDAY,MHLVSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHLVS1  MOVE      ZERO,OVRCD
          READKP    MEHLVSA1;MHLVDATE,MHLVSTAT,MHLVSTRT,mHLVLEAV:
                          MHLVRETN,MHLVDSCH,MHLVDEAD,MHLVLDAY,MHLVRDAY,MHLVSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHLVS1  UPDATE    MEHLVSA1;MHLVDATE,MHLVSTAT,MHLVSTRT,mHLVLEAV:
                         MHLVRETN,MHLVDSCH,MHLVDEAD,MHLVLDAY,MHLVRDAY,MHLVSPAR
          RETURN
.
WRMHLVS1  RESET     KEY9
          WRITE     MEHLVSA1,KEY9;MHLVDATE,MHLVSTAT,MHLVSTRT,MHLVLEAV:
                          MHLVRETN,MHLVDSCH,MHLVDEAD,MHLVLDAY,MHLVRDAY,MHLVSPAR
          RETURN
.
DEMHLVS1  RESET     KEY9
          DELETE    MEHLVSA1,KEY9
          RETURN
.
