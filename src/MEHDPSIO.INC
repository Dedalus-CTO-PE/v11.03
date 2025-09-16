.***************************************************************************
.*  File    :  MEHDPSIO.INC     (Department Summary Statistics)            *
.*          :  mehdpsaf.dat                                                *
.*  Keys    :  KEY9                                                        *
.***************************************************************************
RSMHDPS1  RESET     KEY9
          READ      MEHDPSA1,KEY9;;
          RETURN
.
RAMHDPS1  RESET     KEY9
          MOVE      ZERO,OVRCD
          READ      MEHDPSA1,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHDPS1  RESET     KEY9
          MOVE      ZERO,OVRCD
          READ      MEHDPSA1,KEY9;MHDPDATE,MHDPDEPT,MHDPBEDS,MHDPINST:
                                  MHDPSLST,MHDPADMI,MHDPADMS,MHDPADMC,MHDPTRNO:
                                  MHDPTRNI,MHDPRETH,MHDPRETT,MHDPRETA,MHDPLVEH:
                                  MHDPLVET,MHDPLVEA,MHDPDSCH,MHDPDEAD,MHDPINBD:
                                  MHDPSLBD,MHDPHLBD,MHDPTLBD,MHDPAWBD,MHDPSEPB:
                                  MHDPSSLB,MHDPDSCB,MHDPDSLB,MHDPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHDPS1  MOVE      ZERO,OVRCD
          READKS    MEHDPSA1;MHDPDATE,MHDPDEPT,MHDPBEDS,MHDPINST:
                                  MHDPSLST,MHDPADMI,MHDPADMS,MHDPADMC,MHDPTRNO:
                                  MHDPTRNI,MHDPRETH,MHDPRETT,MHDPRETA,MHDPLVEH:
                                  MHDPLVET,MHDPLVEA,MHDPDSCH,MHDPDEAD,MHDPINBD:
                                  MHDPSLBD,MHDPHLBD,MHDPTLBD,MHDPAWBD,MHDPSEPB:
                                  MHDPSSLB,MHDPDSCB,MHDPDSLB,MHDPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHDPS1  MOVE      ZERO,OVRCD
          READKP    MEHDPSA1;MHDPDATE,MHDPDEPT,MHDPBEDS,MHDPINST:
                                  MHDPSLST,MHDPADMI,MHDPADMS,MHDPADMC,MHDPTRNO:
                                  MHDPTRNI,MHDPRETH,MHDPRETT,MHDPRETA,MHDPLVEH:
                                  MHDPLVET,MHDPLVEA,MHDPDSCH,MHDPDEAD,MHDPINBD:
                                  MHDPSLBD,MHDPHLBD,MHDPTLBD,MHDPAWBD,MHDPSEPB:
                                  MHDPSSLB,MHDPDSCB,MHDPDSLB,MHDPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHDPS1  UPDATE    MEHDPSA1;MHDPDATE,MHDPDEPT,MHDPBEDS,MHDPINST:
                                  MHDPSLST,MHDPADMI,MHDPADMS,MHDPADMC,MHDPTRNO:
                                  MHDPTRNI,MHDPRETH,MHDPRETT,MHDPRETA,MHDPLVEH:
                                  MHDPLVET,MHDPLVEA,MHDPDSCH,MHDPDEAD,MHDPINBD:
                                  MHDPSLBD,MHDPHLBD,MHDPTLBD,MHDPAWBD,MHDPSEPB:
                                  MHDPSSLB,MHDPDSCB,MHDPDSLB,MHDPSPAR
          RETURN
.
WRMHDPS1  RESET     KEY9
          WRITE     MEHDPSA1,KEY9;MHDPDATE,MHDPDEPT,MHDPBEDS,MHDPINST:
                                  MHDPSLST,MHDPADMI,MHDPADMS,MHDPADMC,MHDPTRNO:
                                  MHDPTRNI,MHDPRETH,MHDPRETT,MHDPRETA,MHDPLVEH:
                                  MHDPLVET,MHDPLVEA,MHDPDSCH,MHDPDEAD,MHDPINBD:
                                  MHDPSLBD,MHDPHLBD,MHDPTLBD,MHDPAWBD,MHDPSEPB:
                                  MHDPSSLB,MHDPDSCB,MHDPDSLB,MHDPSPAR
          RETURN
.
DEMHDPS1  RESET     KEY9
          DELETE    MEHDPSA1,KEY9
          RETURN
.
