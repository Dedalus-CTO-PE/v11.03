.
. CLACATIO.INC
. ------------
. Filenames       : clacataf
. Description     : Clinical Audits System 'Site Category file'
. Variables       : OVRCD   FORM   1        0 = NOT OVER
.                                           1 = OVER
.                   KEY8    DIM    8        KEY FOR CLACATA1
.
. -----------------------------------------
. ------- I/O routines for CLACATA1 -------
. -----------------------------------------
.
RSCACAT1  RESET     KEY8
          READ      CLACATA1,KEY8;;
          RETURN
.
RACACAT1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      CLACATA1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCACAT1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      CLACATA1,KEY8;CACTSITE,DCACTUNI,CACTCODE,CACTCHGE,CACTSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DCACTUNI,CACTUNIQ
          RETURN
.
RKCACAT1  MOVE      ZERO,OVRCD
          READKS    CLACATA1;CACTSITE,DCACTUNI,CACTCODE,CACTCHGE,CACTSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DCACTUNI,CACTUNIQ
          RETURN
.
RPCACAT1  MOVE      ZERO,OVRCD
          READKP    CLACATA1;CACTSITE,DCACTUNI,CACTCODE,CACTCHGE,CACTSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DCACTUNI,CACTUNIQ
          RETURN
.
UPCACAT1  MOVE      CACTUNIQ,DCACTUNI
          UPDATE    CLACATA1;CACTSITE,DCACTUNI,CACTCODE,CACTCHGE,CACTSPAR
          RETURN
.
WRCACAT1  RESET     KEY8
          MOVE      CACTUNIQ,DCACTUNI
          WRITE     CLACATA1,KEY8;CACTSITE,DCACTUNI,CACTCODE,CACTCHGE,CACTSPAR
          RETURN
.
DECACAT1  RESET     KEY8
          DELETE    CLACATA1,KEY8
          RETURN
...............................................................................
