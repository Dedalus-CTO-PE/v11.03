.
. CLACODIO.INC
. ------------
. Filenames       : clacodaf
. Description     : Clinical Audits System 'Codes file'
. Variables       : OVRCD   FORM   1        0 = NOT OVER
.                                           1 = OVER
.                   KEY5    DIM    5        KEY FOR CLACODA1
.
. -----------------------------------------
. ------- I/O routines for CLACODA1 -------
. -----------------------------------------
.
RSCACOD1  RESET     KEY5
          READ      CLACODA1,KEY5;;
          RETURN
.
RACACOD1  RESET     KEY5
          MOVE      ZERO,OVRCD
          READ      CLACODA1,KEY5;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCACOD1  RESET     KEY5
          MOVE      ZERO,OVRCD
          READ      CLACODA1,KEY5;CACDCATG,CACDCODE,CACDDESC,CACDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCACOD1  MOVE      ZERO,OVRCD
          READKS    CLACODA1;CACDCATG,CACDCODE,CACDDESC,CACDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCACOD1  MOVE      ZERO,OVRCD
          READKP    CLACODA1;CACDCATG,CACDCODE,CACDDESC,CACDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCACOD1  UPDATE    CLACODA1;CACDCATG,CACDCODE,CACDDESC,CACDSPAR
          RETURN
.
WRCACOD1  RESET     KEY5
          WRITE     CLACODA1,KEY5;CACDCATG,CACDCODE,CACDDESC,CACDSPAR
          RETURN
.
DECACOD1  RESET     KEY5
          DELETE    CLACODA1,KEY5
          RETURN
..............................................................................
