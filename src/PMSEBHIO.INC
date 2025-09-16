.*****************************************************************************
.*        PMSEBHIO/INC                                                       *
.*****************************************************************************
.
.         First index
.
RSPMEBH1  RESET     KEY8
          READ      PMSEBHA1,KEY8;;
          RETURN
.
RAPMEBH1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      PMSEBHA1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEBH1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      PMSEBHA1,KEY8;PMEBBTHN,PMEBHFND,PMEBBHTL,PMEBTRIB:
                                  PMEBDTBC,PMEBTMBC,PMEBOPER,DPMEBEET:
                                  PMEBEFNM,PMEBLOCN,PMEBSNID,PMEBSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMEBEET,PMEBEETP
          RETURN
.
RKPMEBH1  MOVE      ZERO,OVRCD
          READKS    PMSEBHA1;PMEBBTHN,PMEBHFND,PMEBBHTL,PMEBTRIB:
                             PMEBDTBC,PMEBTMBC,PMEBOPER,DPMEBEET:
                             PMEBEFNM,PMEBLOCN,PMEBSNID,PMEBSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMEBEET,PMEBEETP
          RETURN
.
RPPMEBH1  MOVE      ZERO,OVRCD
          READKP    PMSEBHA1;PMEBBTHN,PMEBHFND,PMEBBHTL,PMEBTRIB:
                             PMEBDTBC,PMEBTMBC,PMEBOPER,DPMEBEET:
                             PMEBEFNM,PMEBLOCN,PMEBSNID,PMEBSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMEBEET,PMEBEETP
          RETURN
.
UPPMEBH1  MOVE      PMEBEETP,DPMEBEET
          UPDATE    PMSEBHA1;PMEBBTHN,PMEBHFND,PMEBBHTL,PMEBTRIB:
                             PMEBDTBC,PMEBTMBC,PMEBOPER,DPMEBEET:
                             PMEBEFNM,PMEBLOCN,PMEBSNID,PMEBSPAR
          RETURN
.
WRPMEBH1  MOVE      PMEBEETP,DPMEBEET
          RESET     KEY8
          WRITE     PMSEBHA1,KEY8;PMEBBTHN,PMEBHFND,PMEBBHTL,PMEBTRIB:
                                  PMEBDTBC,PMEBTMBC,PMEBOPER,DPMEBEET:
                                  PMEBEFNM,PMEBLOCN,PMEBSNID,PMEBSPAR
          RETURN
.
DEPMEBH1  RESET     KEY8
          DELETE    PMSEBHA1,KEY8
          RETURN
.
.         Second index
.
RSPMEBH2  RESET     KEY16
          READ      PMSEBHA2,KEY16;;
          RETURN
.
RAPMEBH2  RESET     KEY16
          MOVE      ZERO,OVRCD
          READ      PMSEBHA2,KEY16;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEBH2  RESET     KEY16
          MOVE      ZERO,OVRCD
          READ      PMSEBHA2,KEY16;PMEBBTHN,PMEBHFND,PMEBBHTL,PMEBTRIB:
                                  PMEBDTBC,PMEBTMBC,PMEBOPER,DPMEBEET:
                                  PMEBEFNM,PMEBLOCN,PMEBSNID,PMEBSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMEBEET,PMEBEETP
          RETURN
.
RKPMEBH2  MOVE      ZERO,OVRCD
          READKS    PMSEBHA2;PMEBBTHN,PMEBHFND,PMEBBHTL,PMEBTRIB:
                             PMEBDTBC,PMEBTMBC,PMEBOPER,DPMEBEET:
                             PMEBEFNM,PMEBLOCN,PMEBSNID,PMEBSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMEBEET,PMEBEETP
          RETURN
.
RPPMEBH2  MOVE      ZERO,OVRCD
          READKP    PMSEBHA2;PMEBBTHN,PMEBHFND,PMEBBHTL,PMEBTRIB:
                             PMEBDTBC,PMEBTMBC,PMEBOPER,DPMEBEET:
                             PMEBEFNM,PMEBLOCN,PMEBSNID,PMEBSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPMEBEET,PMEBEETP
          RETURN
+
