.
. CCIDPTIO.INC
. ------------
. Filenames       : ccidptaf
. Description     : CCI Department Translation file
.
RACCDPT1  MOVE      ZERO,OVRCD
          RESET     KEY3
          READ      CCIDPTA1,KEY3;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSCCDPT1  RESET     KEY3
          READ      CCIDPTA1,KEY3;;
          RETURN
.
RDCCDPT1  MOVE      ZERO,OVRCD
          RESET     KEY3
          READ      CCIDPTA1,KEY3;CCDTDEPT,CCDTSERV,CCDTLONG,CCDTCSDP:
                                  DCCDTLSD,CCDTTRCS,CCDTSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DCCDTLSD,CCDTLSDH
          RETURN
.
RKCCDPT1  MOVE      ZERO,OVRCD
          READKS    CCIDPTA1;CCDTDEPT,CCDTSERV,CCDTLONG,CCDTCSDP:
                             DCCDTLSD,CCDTTRCS,CCDTSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DCCDTLSD,CCDTLSDH
          RETURN
.
WRCCDPT1  RESET     KEY3
          MOVE      CCDTLSDH,DCCDTLSD
          WRITE     CCIDPTA1,KEY3;CCDTDEPT,CCDTSERV,CCDTLONG,CCDTCSDP:
                                  DCCDTLSD,CCDTTRCS,CCDTSPAR
          RETURN
.
UPCCDPT1  MOVE      CCDTLSDH,DCCDTLSD
          UPDATE    CCIDPTA1;CCDTDEPT,CCDTSERV,CCDTLONG,CCDTCSDP:
                             DCCDTLSD,CCDTTRCS,CCDTSPAR
          RETURN
.
DECCDPT1  RESET     KEY3
          DELETE    CCIDPTA1,KEY3
          RETURN
...............................................................................
