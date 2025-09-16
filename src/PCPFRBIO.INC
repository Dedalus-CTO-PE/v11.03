.
. PCPFRBIO.INC
. ------------
. Filenames       : pcpfrbaf
. Description     : Patient Care Plans 'Frequency/Shift File'
. Variables       : OVRCD   FORM   1        0 = NOT OVER
.                                           1 = OVER
.                   KEY12   DIM    12       KEY FOR PCPFRBA1
.
. -----------------------------------------
. ------- I/O routines for PCPFRAA1 -------
. -----------------------------------------
.
RSPCFRB1  RESET     KEY12
          READ      PCPFRBA1,KEY12;;
          RETURN
.
RAPCFRB1  RESET     KEY12
          MOVE      ZERO,OVRCD
          READ      PCPFRBA1,KEY12;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPCFRB1  RESET     KEY12
          MOVE      ZERO,OVRCD
          READ      PCPFRBA1,KEY12;PCFBCODE,PCFBSHFT,PCFBNUMB,PCFBSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPCFRB1  MOVE      ZERO,OVRCD
          READKS    PCPFRBA1;PCFBCODE,PCFBSHFT,PCFBNUMB,PCFBSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPCFRB1  MOVE      ZERO,OVRCD
          READKP    PCPFRBA1;PCFBCODE,PCFBSHFT,PCFBNUMB,PCFBSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPCFRB1  UPDATE    PCPFRBA1;PCFBCODE,PCFBSHFT,PCFBNUMB,PCFBSPAR
          RETURN
.
WRPCFRB1  RESET     KEY12
          WRITE     PCPFRBA1,KEY12;PCFBCODE,PCFBSHFT,PCFBNUMB,PCFBSPAR
          RETURN
.
DEPCFRB1  RESET     KEY12
          DELETE    PCPFRBA1,KEY12
          RETURN
...............................................................................
