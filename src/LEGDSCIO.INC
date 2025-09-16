.*****************************************************************************
.*        LEGDSCIO.INC                                                       *
.* Mods:                                                                     *
.*        18/01/2008  Steve Armstrong  CAR 159429                            *
.*                    Added index 3 I/O routines for U/R merging             *
.*****************************************************************************
.
RSLGDSC1  RESET     KEY8
          READ      LEGDSCH1,KEY8;;
          RETURN
.
RALGDSC1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      LEGDSCH1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGDSC1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      LEGDSCH1,KEY8;LDDURNO,LDDADMNO,LDDATE,LDTIME:
                                  LDSTAT,LDDEST,LDDIAG,LDDIAG2,LDUSD1:
                                  LDUSD2,LDUSD3,LDUSD4,LDUSD5,LDFMBS:
                                  LPDSDMDC,LPDSDDRG,LPDSSIDX,LPDSVOGU,LPDSSREF:
                                  LDSPARE
          GOTO      OVERCOND IF OVER
          MOVE      LDDADMNO,LQDADMNO
          MOVE      LQDADMNO,LDADMNO
          MOVE      LDDURNO,LQDURNO
          MOVE      LQDURNO,LDURNO
          MOVE      LDDATE,LSDDATE
          RETURN
.
RKLGDSC1  MOVE      ZERO,OVRCD
          READKS    LEGDSCH1;LDDURNO,LDDADMNO,LDDATE,LDTIME:
                                  LDSTAT,LDDEST,LDDIAG,LDDIAG2,LDUSD1:
                                  LDUSD2,LDUSD3,LDUSD4,LDUSD5,LDFMBS:
                                  LPDSDMDC,LPDSDDRG,LPDSSIDX,LPDSVOGU,LPDSSREF:
                                  LDSPARE
          GOTO      OVERCOND IF OVER
          MOVE      LDDADMNO,LQDADMNO
          MOVE      LQDADMNO,LDADMNO
          MOVE      LDDURNO,LQDURNO
          MOVE      LQDURNO,LDURNO
          MOVE      LDDATE,LSDDATE
          RETURN
.
RPLGDSC1  MOVE      ZERO,OVRCD
          READKP    LEGDSCH1;LDDURNO,LDDADMNO,LDDATE,LDTIME:
                                  LDSTAT,LDDEST,LDDIAG,LDDIAG2,LDUSD1:
                                  LDUSD2,LDUSD3,LDUSD4,LDUSD5,LDFMBS:
                                  LPDSDMDC,LPDSDDRG,LPDSSIDX,LPDSVOGU,LPDSSREF:
                                  LDSPARE
          GOTO      OVERCOND IF OVER
          MOVE      LDDADMNO,LQDADMNO
          MOVE      LQDADMNO,LDADMNO
          MOVE      LDDURNO,LQDURNO
          MOVE      LQDURNO,LDURNO
          MOVE      LDDATE,LSDDATE
          RETURN
.
RSLGDSC2  RESET     KEY16
          READ      LEGDSCH2,KEY16;;
          RETURN
.
RALGDSC2  RESET     KEY16
          MOVE      ZERO,OVRCD
          READ      LEGDSCH2,KEY16;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGDSC2  RESET     KEY16
          MOVE      ZERO,OVRCD
          READ      LEGDSCH2,KEY16;LDDURNO,LDDADMNO,LDDATE,LDTIME:
                                  LDSTAT,LDDEST,LDDIAG,LDDIAG2,LDUSD1:
                                  LDUSD2,LDUSD3,LDUSD4,LDUSD5,LDFMBS:
                                  LPDSDMDC,LPDSDDRG,LPDSSIDX,LPDSVOGU,LPDSSREF:
                                  LDSPARE
          GOTO      OVERCOND IF OVER
          MOVE      LDDADMNO,LQDADMNO
          MOVE      LQDADMNO,LDADMNO
          MOVE      LDDURNO,LQDURNO
          MOVE      LQDURNO,LDURNO
          MOVE      LDDATE,LSDDATE
          RETURN
.
RKLGDSC2  MOVE      ZERO,OVRCD
          READKS    LEGDSCH2;LDDURNO,LDDADMNO,LDDATE,LDTIME:
                                  LDSTAT,LDDEST,LDDIAG,LDDIAG2,LDUSD1:
                                  LDUSD2,LDUSD3,LDUSD4,LDUSD5,LDFMBS:
                                  LPDSDMDC,LPDSDDRG,LPDSSIDX,LPDSVOGU,LPDSSREF:
                                  LDSPARE
          GOTO      OVERCOND IF OVER
          MOVE      LDDADMNO,LQDADMNO
          MOVE      LQDADMNO,LDADMNO
          MOVE      LDDURNO,LQDURNO
          MOVE      LQDURNO,LDURNO
          MOVE      LDDATE,LSDDATE
          RETURN
.
RPLGDSC2  MOVE      ZERO,OVRCD
          READKP    LEGDSCH2;LDDURNO,LDDADMNO,LDDATE,LDTIME:
                                  LDSTAT,LDDEST,LDDIAG,LDDIAG2,LDUSD1:
                                  LDUSD2,LDUSD3,LDUSD4,LDUSD5,LDFMBS:
                                  LPDSDMDC,LPDSDDRG,LPDSSIDX,LPDSVOGU,LPDSSREF:
                                  LDSPARE
          GOTO      OVERCOND IF OVER
          MOVE      LDDADMNO,LQDADMNO
          MOVE      LQDADMNO,LDADMNO
          MOVE      LDDURNO,LQDURNO
          MOVE      LQDURNO,LDURNO
          MOVE      LDDATE,LSDDATE
          RETURN
.
RSLGDSC3  RESET     KEY16
          READ      LEGDSCH3,KEY16;;
          RETURN
.
RKLGDSC3  MOVE      ZERO,OVRCD
          READKS    LEGDSCH3;LDDURNO,LDDADMNO,LDDATE,LDTIME:
                                  LDSTAT,LDDEST,LDDIAG,LDDIAG2,LDUSD1:
                                  LDUSD2,LDUSD3,LDUSD4,LDUSD5,LDFMBS:
                                  LPDSDMDC,LPDSDDRG,LPDSSIDX,LPDSVOGU,LPDSSREF:
                                  LDSPARE
          GOTO      OVERCOND IF OVER
          MOVE      LDDADMNO,LQDADMNO
          MOVE      LQDADMNO,LDADMNO
          MOVE      LDDURNO,LQDURNO
          MOVE      LQDURNO,LDURNO
          MOVE      LDDATE,LSDDATE
          RETURN
.
UPLGDSC3  MOVE      LDADMNO,LDDADMNO
          MOVE      LDURNO,LDDURNO
          UPDATE    LEGDSCH3;LDDURNO,LDDADMNO,LDDATE,LDTIME:
                                  LDSTAT,LDDEST,LDDIAG,LDDIAG2,LDUSD1:
                                  LDUSD2,LDUSD3,LDUSD4,LDUSD5,LDFMBS:
                                  LPDSDMDC,LPDSDDRG,LPDSSIDX,LPDSVOGU,LPDSSREF:
                                  LDSPARE
          RETURN
.
